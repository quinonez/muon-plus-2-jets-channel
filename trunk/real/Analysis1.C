#define Analysis1_cxx
#include "Analysis1.h"
#include "AnalysisBase.h"
#include "W_From_jj.h"
#include "GRL.h"
#include "egammaPIDdefs.h"
#include "checkOQ.h"
#include "robustIsEMDefs.h"
#include "SmearingClass.h"

#include <TH2.h>
#include <TMath.h>
#include <TChain.h>
#include <TString.h>
#include <TTree.h>
#include <TFile.h>
#include <TLorentzVector.h>
#include <TRandom.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <TStyle.h>
#include <TNamed.h>
#include <TClass.h>

#include <vector>
#include <algorithm>
#include <iostream>
#include <new>
#include <cmath>
#include <string>
#include <fstream>


using namespace std;

void Analysis1::EventsLoop()
{
  isRealData = true;
  fChain -> SetBranchStatus("*",1);

  if ( fChain == 0 ) return;
  Long64_t nentries = fChain -> GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;

  TFile* f = new TFile("file.root","RECREATE");
  TTree* Nt = new TTree( "Nt", "Nt" );

  Nt -> Branch( "DeltaR_Wmu", &DeltaR_Wmu );
  Nt -> Branch( "DeltaPhi_Wmu", &DeltaPhi_Wmu );
  Nt -> Branch( "DeltaEta_Wmu", &DeltaEta_Wmu );
  Nt -> Branch( "m_Wmu", &m_Wmu );
  Nt -> Branch( "pt_Wmu", &pt_Wmu );

  Nt -> Branch( "DeltaR_jj", &DeltaR_jj );
  Nt -> Branch( "DeltaEta_jj", &DeltaEta_jj );
  Nt -> Branch( "DeltaPhi_jj", &DeltaPhi_jj );
  Nt -> Branch( "pt_jj", &pt_jj ); 
  Nt -> Branch( "m_jj", &m_jj );

  Nt -> Branch( "met", &met, "met/D" );

  Nt -> Branch( "ts", &ts, "ts/D" );

  Nt -> Branch( "em", &em, "em/D" );

  Nt -> Branch( "ht", &ht, "ht/D" );

  Nt -> Branch( "em_muonjetjet", &em_muonjetjet, "em_muonjetjet/D" );

  Nt -> Branch( "ht_muonjetjet", &ht_muonjetjet, "ht_muonjetjet/D" );

  Nt -> Branch( "MuN", &MuN, "MuN/I" );
  Nt -> Branch( "MuEtCone20", &MuEtCone20 );
  Nt -> Branch( "MuPt", &MuPt );
  Nt -> Branch( "MuPtms", &MuPtms );

  Nt -> Branch( "MuEta", &MuEta );
  Nt -> Branch( "MuPhi", &MuPhi );
  Nt -> Branch( "MuEnergy", &MuEnergy );
  Nt -> Branch( "Mud0_exPV", &Mud0_exPV );
  Nt -> Branch( "Mud0_exPVe", &Mud0_exPVe );
  Nt -> Branch( "Muz0_exPV", &Muz0_exPV );
  Nt -> Branch( "Mur0_exPV", &Mur0_exPV );

  Nt -> Branch( "JetN", &JetN, "JetN/I" );
  Nt -> Branch( "JetEnergy", &JetEnergy );
  Nt -> Branch( "JetPt", &JetPt );
  Nt -> Branch( "JetEta", &JetEta );
  Nt -> Branch( "JetPhi", &JetPhi );

  Nt -> Branch( "deltaphimin", &deltaphimin, "deltaphimin/D");

  Nt -> Branch( "asymmetry", &asymmetry, "asymmetry/D" );


  Nt -> Branch( "EF_mu13", &EF_mu13, "EF_mu13/B" );
  //Nt -> Branch( "EF_mu13_tight", &EF_mu13_tight, "EF_mu13_tight/B" );
  Nt -> Branch( "EF_mu10_MSonly", &EF_mu10_MSonly, "EF_mu10_MSonly/B" ); 
  Nt -> Branch( "L1_MU6", &L1_MU6, "L1_MU6/B" );
  Nt -> Branch( "L1_2J15", &L1_2J15, "L1_2J15/B" );
  Nt -> Branch( "L1_TAU11", &L1_TAU11, "L1_TAU11/B" );


  // trigger
  Nmenu = 3;
  trigname[0] = "L1_MU6";
  trigname[1] = "EF_mu13";
  trigname[2] = "EF_mu10_MSonly";
  //trigname[3] = "EF_mu13_tight";

  trigcut[0] = 6.e3;
  trigcut[1] = 13.e3;
  trigcut[2] = 10.e3;
  //trigcut[3] = 13.e3;


  for( unsigned int i = 0; i < Nmenu; i++ ){
    sall[i] = "all_" + trigname[i];
    striggered[i] = "triggered_" + trigname[i];
    sefficiency[i] = "efficiency_" + trigname[i];
  }
  for( unsigned int i = 0; i < Nmenu; i++ ){
    all[i] = new TH1D( sall[i].c_str(), sall[i].c_str(),120,0,200);
    triggered[i] = new TH1D( striggered[i].c_str(), striggered[i].c_str(), 120, 0, 200);
    efficiency[i] = new TH1D( sefficiency[i].c_str(), sefficiency[i].c_str(), 120, 0, 200);
  }

  gRandom->SetSeed(2);
  /** do muon scale correction as well, values are based on MCP Twikipage **/
  mcp_smear.UseScale(1); 

  //*****************************************************************
  //****************** START LOOP OF EVENTS *************************
  //*****************************************************************	
  for ( Long64_t jentry = 0; jentry < nentries; jentry++ ){
    Long64_t ientry = LoadTree( jentry );
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;

    if( isRealData ){
      GRL gqual;
      mygrl = gqual.TieneRunLumiBlock(RunNumber,lbn);
    } else mygrl = true; 

    if( mygrl == false ) continue; 

    // JET CLEANING
    wasBadJet = false;
    for(Int_t i=0; i<jet_AntiKt4H1Topo_n; i++){
         
      // cleaning applied to jets with EMSJES pt>20 and any eta.
      if( jet_AntiKt4H1Topo_emscale_pt->at(i)*jet_AntiKt4H1Topo_EMJES->at(i) > 20000. ){
        if( isBadLooseJet(i) ) {
          wasBadJet = true;
          break;
        }
      }
    }
    if(wasBadJet) continue;

    // there is at least 1 reco PV with nTracks > 4
    isGoodPV=false;
    for( unsigned int ivx = 0; ivx < vx_nTracks->size(); ivx++ ){
      if( vx_nTracks->at(ivx) > 4 ){
        isGoodPV=true;
        break;
      }
    }
    if(!isGoodPV) continue;


    // event veto
    //EventVeto();
    wasCrackElectron=false;
    for(Int_t i=0; i<el_n; i++){
      if (fabs(el_cl_eta->at(i)) > 1.37 && fabs(el_cl_eta->at(i)) < 1.52) {
        wasCrackElectron=true;
        break;
      }
    }
    if(wasCrackElectron) continue;


    CLEAR();

    // by cause of the muon smearing, MuonInfo have to be before of the calculation of the met.
    MuonInfo(jentry);
    met = MET();
    ElectronInfo();
    TauonInfo();
    JetInfo();


    Wv = recoWContenedor();
    recoMuJetJet( Wv );
 
    ts = TransverseSphericity();
    //
    ht = HT();
    em = EffectiveMass( ht );

    ht_muonjetjet = HT_muonjetjet();
    em_muonjetjet = EffectiveMass( ht_muonjetjet );

    if ( DEBUG ) cout << jentry << endl;
    //FIXME


    Nt->Fill();


    TRandom aleat;
    aleat.SetSeed(2);

    // this funtion must yields after MuonInfo() 
    if( MuN == 0 || MuN == 1 ) { 
      continue;
    }else {
      trigga[0] = L1_MU6; 
      trigga[1] = EF_mu13; 
      trigga[2] = EF_mu10_MSonly; 
      //trigga[3] = EF_mu13_tight;

      for( unsigned int k = 0; k < Nmenu; k++ ){
        if( trigga[k] && k != 2 ){
          probe[k] = aleat.Integer( MuN );
          // to me ntags is the number of tag's muons, but I only will need one tag!
          ntags[k] = 0;
          for(unsigned int iMu = 0; iMu < MuN; iMu++){
            if( iMu != probe[k] ){
              // if tag pass the selection
              if( MuPt.at(iMu) > trigcut[k] ){
                ntags[k]++;
              }
            }
          }

          if( ntags[k] >=1 && k != 2 ) {
            all[k]->Fill( ( MuPt.at(probe[k]) )/1.e3 );
            if( MuPt.at(probe[k]) > trigcut[k]  ){
              triggered[k]->Fill( (MuPt.at(probe[k]))/1.e3 );
            }
          }
        }

        if( trigga[k] && k == 2 ){
          probe[k] = aleat.Integer( MuN );
          // to me ntags[k] is the number of tag's muons, but I only will need one tag!
          ntags[k] = 0;
          for(unsigned int iMu = 0; iMu < MuN; iMu++){
            if( iMu != probe[k] ){
              // if tag pass the selection
              if( MuPtms.at(iMu) > trigcut[k] ){
                ntags[k]++;
              }
            }
          }

          if( ntags[k] >=1 && k == 2 ) {
            all[k]->Fill( ( MuPtms.at(probe[k]) )/1.e3 );
            if( MuPtms.at(probe[k]) > trigcut[k]  ){
              triggered[k]->Fill( (MuPtms.at(probe[k]))/1.e3 );
            }
          }

        }


      }
    } // end else


  }
  //********************************************************************************
  //********************* END OF THE EVENTS LOOP ***********************************
  //********************************************************************************
  f->cd();
  Nt->Write();

  for( unsigned int k = 0; k < Nmenu; k++ ){
    efficiency[k]->Sumw2();
    //all[k]->Sumw2();
    efficiency[k]->Divide(triggered[k],all[k],1,1,"b");
    all[k]->Write();
    triggered[k]->Write();
    efficiency[k]->Write();
  }

  f->Write();
  f->Close();
  return;
}


vector< W_From_jj > Analysis1::recoWContenedor()
{
  if(DEBUG) cout << "in recoWContenedo\n"; 
  vector< W_From_jj > vWBosons;
  double jet1pt, jet1eta, jet1phi, jet1e;
  double jet2pt, jet2eta, jet2phi, jet2e;
  TLorentzVector JetA, JetB, JetJet;

  vWBosons.clear();

  // I.1 reconstruct j-j
  if(JetN >= 2){
    for(unsigned int i = 0; i < JetN-1; i++){
      jet1pt = JetPt.at(i);
      jet1eta = JetEta.at(i);
      jet1phi = JetPhi.at(i);
      jet1e = JetEnergy.at(i);
      JetA.SetPtEtaPhiE( jet1pt, jet1eta, jet1phi, jet1e );

      for(unsigned int j = i+1; j < JetN; j++){
	jet2pt = JetPt.at(j);
	jet2eta = JetEta.at(j);
	jet2phi = JetPhi.at(j);
	jet2e = JetEnergy.at(j);

	JetB.SetPtEtaPhiE( jet2pt, jet2eta, jet2phi, jet2e );
	JetJet.SetPxPyPzE( JetA.Px() + JetB.Px(), JetA.Py() + JetB.Py(), JetA.Pz() + JetB.Pz(), JetA.E() + JetB.E()  );
	m_jj.push_back( sqrt( JetJet.M2() ) );
	pt_jj.push_back( JetJet.Pt() );      
  
	double dEta_jj = jet1eta - jet2eta;   
	DeltaEta_jj.push_back( dEta_jj );
	double dPhi_jj = jet1phi - jet2phi;
	if( dPhi_jj >  TMath::Pi() ) dPhi_jj -= 2*TMath::Pi();
	if( dPhi_jj < -TMath::Pi() ) dPhi_jj += 2*TMath::Pi();
	DeltaPhi_jj.push_back(dPhi_jj);

	double dR_jj = sqrt(  pow( dEta_jj, 2) + pow( dPhi_jj, 2) );
	DeltaR_jj.push_back( dR_jj );
      
	W_From_jj myWBoson( JetJet, dR_jj );
	vWBosons.push_back( myWBoson );	
      } //second for
    } //first for
  }
  return vWBosons;

}

//---------------------------------------------------------
void Analysis1::recoMuJetJet( vector< W_From_jj > jj )
{
 if(DEBUG) cout << "in recoMuJetJet\n";
 //TLorentzVector JJ;
  TLorentzVector Muon;
  TLorentzVector MuonJetJet;

  vector<W_From_jj>::const_iterator iW;

  // reconstruct mu-W
  for(unsigned int i = 0; i < MuN; i++){
    muPt = MuPt.at(i);
    muEtCone20 = MuEtCone20.at(i);
    muEta = MuEta.at(i);
    muPhi = MuPhi.at(i);
    muEnergy = MuEnergy.at(i);

    Muon.SetPtEtaPhiE(  muPt, muEta, muPhi, muEnergy );

    for( iW = jj.begin(); iW != jj.end(); iW++ ){
      TLorentzVector JJ = iW -> GETP4();
      MuonJetJet.SetPxPyPzE( JJ.Px() + Muon.Px(), JJ.Py() + Muon.Py(), JJ.Pz() + Muon.Pz(), JJ.E() + Muon.E() );

      dm_Wmu = sqrt( MuonJetJet.M2() );
      m_Wmu.push_back( dm_Wmu );
      dpt_Wmu = MuonJetJet.Pt();
      pt_Wmu .push_back( dpt_Wmu );

      dEta_Wmu = JJ.Eta() - Muon.Eta();
      DeltaEta_Wmu.push_back( dEta_Wmu );
      dPhi_Wmu = JJ.Phi() - Muon.Phi();

      if( dPhi_Wmu >  TMath::Pi() ) dPhi_Wmu -= 2*TMath::Pi();
      if( dPhi_Wmu < -TMath::Pi() ) dPhi_Wmu += 2*TMath::Pi();

      DeltaPhi_Wmu.push_back( dPhi_Wmu );

      dR_Wmu = sqrt( pow( dEta_Wmu, 2) + pow( dPhi_Wmu, 2) );
      DeltaR_Wmu.push_back( dR_Wmu );

      //DeltaR_JJ = iW -> GETDELTAR_jj();
    } 
  }

  //return v;
  return;
}


double Analysis1::TransverseSphericity()
{
  if(DEBUG) cout << "in TransverseSphericity\n";
  double T; // Trace
  double D; // Determinant
  double Qx_Qx = 0.0;
  double Qx_Qy = 0.0; 
  double Qy_Qy = 0.0;
  TLorentzVector Electron;
  TLorentzVector Muon;
  TLorentzVector Tauon;
  TLorentzVector Jet;

  for(unsigned int i=0; i < ElN; i++ ){
    Electron.SetPtEtaPhiE( ElPt.at(i), ElEta.at(i), ElPhi.at(i), ElEnergy.at(i) );
    Qx_Qx += pow( Electron.Px(), 2);
    Qy_Qy += pow( Electron.Py(), 2);
    Qx_Qy += Electron.Px() * Electron.Py();
  }

  for(unsigned int i=0; i < MuN; i++){
    Muon.SetPtEtaPhiE( MuPt.at(i), MuEta.at(i), MuPhi.at(i), MuEnergy.at(i) );
    Qx_Qx += pow( Muon.Px(), 2);
    Qy_Qy += pow( Muon.Py(), 2);
    Qx_Qy += Muon.Px() * Muon.Py();
  }

  for(unsigned int i=0; i < TaN; i++){
    Tauon.SetPtEtaPhiM( TaPt.at(i), TaEta.at(i), TaPhi.at(i), TaMass.at(i) );
    Qx_Qx += pow( Tauon.Px(), 2);
    Qy_Qy += pow( Tauon.Py(), 2);
    Qx_Qy += Tauon.Px() * Tauon.Py();
  }

  for(unsigned int i=0; i < JetN; i++){
    Jet.SetPtEtaPhiE( JetPt.at(i), JetEta.at(i), JetPhi.at(i), JetEnergy.at(i) );
    Qx_Qx += pow( Jet.Px(), 2);
    Qy_Qy += pow( Jet.Py(), 2);
    Qx_Qy += Jet.Px() * Jet.Py();
  }

  T = Qx_Qx + Qy_Qy;
  if( T <= 0.00000001 ) return 0.0;
  D = Qx_Qx * Qy_Qy - pow( Qx_Qy, 2 );
  double s = 1.0 - sqrt( T*T - 4*D ) / T;
  return s;
}



double Analysis1::HT()
{
  if(DEBUG) cout << "in HT\n";
  double ht1 = 0;
  vector<double> ptjets;
  vector<double>::const_iterator it; 

  
  for( unsigned int i=0; i < ElN; i++ ){
    ht1 += ElPt.at(i); 
  }

  for(unsigned int i=0; i < MuN; i++){
    ht1 += MuPt.at(i);
  }
  
  for(unsigned int i=0; i < TaN; i++){
    ht1 += TaPt.at(i);
  }

  ptjets.clear();
  for(unsigned int i=0; i < JetN; i++){
    ptjets.push_back( JetPt.at(i) );
  }
  sort(ptjets.begin(), ptjets.end());
  reverse( ptjets.begin(), ptjets.end() ); 
  if( ptjets.size() >= 2 ) {
    ht1 += ptjets.at(0);
    ht1 += ptjets.at(1);
  }
  
  if( ptjets.size() == 1 ) ht1 += ptjets.at(0);  

  return ht1;
}


double Analysis1::EffectiveMass(double ht2)
{
  if(DEBUG) cout << "in EffectiveMass\n";
  double em1 = MET();
  return ht2 + em1;

}

double Analysis1::HT_muonjetjet()
{
  if(DEBUG) cout << "in HT_muonjetjet\n";
  double ht1 = 0;
  vector<double> ptjets;
  vector<double>::const_iterator it; 

  for(unsigned int i=0; i < MuN; i++){
    ht1 += MuPt.at(i);
  }

  ptjets.clear();
  for(unsigned int i=0; i < JetN; i++){
    ptjets.push_back( JetPt.at(i) );
  }
  sort(ptjets.begin(), ptjets.end());
  reverse( ptjets.begin(), ptjets.end() ); 
  if( ptjets.size() >= 2 ) {
    ht1 += ptjets.at(0);
    ht1 += ptjets.at(1);
  }
  
  if( ptjets.size() == 1 ) ht1 += ptjets.at(0);  

  return ht1;
}


void Analysis1::MuonInfo(Long64_t EventNumber)
{
  if(DEBUG) cout << "in MuonInfo\n";
  for(Int_t iMu = 0; iMu < mu_staco_n; iMu++){
    if(!isMuon(iMu)) continue;
    float mypt = mu_staco_pt->at(iMu);
    if (!isRealData) { // Do this on MC only ! Variable kIsData need to be updated in your code
      //Use the MC event number to set seed so that the random numbers are reproducible by
      //different analyzers 
      float ptcb = mu_staco_pt->at(iMu);
      float ptid = (mu_staco_id_qoverp_exPV->at(iMu) != 0.) ? fabs(sin(mu_staco_id_theta_exPV->at(iMu))/mu_staco_id_qoverp_exPV->at(iMu)) : 0.;
      float ptms = (mu_staco_me_qoverp_exPV->at(iMu) != 0.) ? fabs(sin(mu_staco_me_theta_exPV->at(iMu))/mu_staco_me_qoverp_exPV->at(iMu)) : 0.;
      mcp_smear.SetSeed(EventNumber, iMu);
      mcp_smear.Event(ptms,ptid,ptcb,mu_staco_eta->at(iMu)); 
      if (mu_staco_isCombinedMuon->at(iMu))
        mypt = mcp_smear.pTCB();
      else
        mypt = mcp_smear.pTID();
      mu_staco_pt->at(iMu) = mypt; // Overwrite muon pt for later use in analysis
      mu_staco_px->at(iMu) = mypt*cos(mu_staco_phi->at(iMu)); // Used to recompute MEx
      mu_staco_py->at(iMu) = mypt*sin(mu_staco_phi->at(iMu)); // Used to recompute MEy
    }

    MuPt .push_back( mu_staco_pt -> at(iMu) );
    double muptms = fabs( sin( mu_staco_ms_theta->at(iMu) )  / mu_staco_ms_qoverp->at(iMu) );
    MuPtms.push_back( muptms );

    MuEta .push_back( mu_staco_eta -> at(iMu) );
    MuPhi .push_back( mu_staco_phi -> at(iMu) );
    MuEnergy .push_back( mu_staco_E -> at(iMu) );
    MuEtCone20 .push_back( mu_staco_etcone20 -> at(iMu) );
    Mud0_exPV .push_back( fabs( mu_staco_d0_exPV -> at(iMu) ) );
    if( mu_staco_cov_d0_exPV->at(iMu)>0.0 ){
      Mud0_exPVe .push_back( fabs( mu_staco_d0_exPV -> at(iMu) )/ sqrt( mu_staco_cov_d0_exPV -> at(iMu) ) );
    } else {
      Mud0_exPVe .push_back( -1.0 );
    }

    Muz0_exPV .push_back( fabs( mu_staco_z0_exPV -> at(iMu) ) );
    double r0 = sqrt( pow(mu_staco_d0_exPV->at(iMu),2)
		      +pow(mu_staco_z0_exPV->at(iMu),2));
    Mur0_exPV.push_back(r0); 
  }
  MuN = MuPt.size();
  sort(MuPt.begin(), MuPt.end());
  reverse( MuPt.begin(), MuPt.end() );

}

void Analysis1::ElectronInfo()
{
  if(DEBUG) cout << "in ElectronInfo";
  for(Int_t i=0; i<el_n; i++){
    if(!isElectron(i)) continue;

    ElPt .push_back( el_pt -> at(i) );

    ElEta .push_back( el_eta -> at(i) );
    ElPhi .push_back( el_phi -> at(i) );
    ElEnergy .push_back( el_E -> at(i) );
    ElEtCone20 .push_back( el_Etcone20 -> at(i) );
  }
  ElN = ElPt.size();
  sort(ElPt.begin(), ElPt.end());
  reverse( ElPt.begin(), ElPt.end() );

}

void Analysis1::TauonInfo()
{
  if(DEBUG) cout << "in TauonInfo\n";
  for(Int_t i=0; i<tau_n; i++){
    if(!isTauon(i)) continue;
    TaPt.push_back( tau_pt -> at(i) );

    TaEta.push_back( tau_eta -> at(i) );
    TaPhi.push_back( tau_phi -> at(i) );
    TaMass.push_back( tau_m -> at(i) );

  }
  TaN = TaPt.size();
  sort(TaPt.begin(), TaPt.end());
  reverse( TaPt.begin(), TaPt.end() );

}

void Analysis1::JetInfo()
{
  if(DEBUG) cout << "in JetInfo\n";
  for(Int_t i=0; i<jet_AntiKt4H1Topo_n; i++){
    if(!isJet(i)) continue;

    jptGeV = (jet_AntiKt4H1Topo_pt -> at(i))/1000;
    cor = getSmearingCor(jptGeV);
    smeared_e = cor * jet_AntiKt4H1Topo_E->at(i);
    smeared_pt = cor * jet_AntiKt4H1Topo_pt->at(i);  

    JetEnergy.push_back( smeared_e );
    JetPt.push_back( smeared_pt );
    JetEta .push_back(  jet_AntiKt4H1Topo_eta -> at(i) );
    JetPhi .push_back(  jet_AntiKt4H1Topo_phi -> at(i) );

  }

  //reverse sort of the JetPt
  for(unsigned int j=1; j<JetPt.size(); j++){
    double keyPt = JetPt.at(j);
    double keyEnergy = JetEnergy.at(j);
    double keyPhi = JetPhi.at(j);
    double keyEta = JetEta.at(j);
    int i = j - 1;
    while( i >= 0 && JetPt.at(i) < keyPt ){
      JetPt.at(i+1) = JetPt.at(i);
      JetEnergy.at(i+1) = JetEnergy.at(i);
      JetPhi.at(i+1) = JetPhi.at(i);
      JetEta.at(i+1) = JetEta.at(i);
      i--;
    }
    JetPt.at(i+1) = keyPt;
    JetEnergy.at(i+1) = keyEnergy;
    JetPhi.at(i+1) = keyPhi;
    JetEta.at(i+1) = keyEta;
  }
 
  JetN = JetPt.size();

  //sort( JetPt.begin(), JetPt.end() );
  //reverse( JetPt.begin(), JetPt.end() );

  if( JetN >= 2  ){
    // asymmetry 
    double deltaphiME_jj = JetPhi.at(0)-JetPhi.at(1);
    if( deltaphiME_jj > TMath::Pi() ) deltaphiME_jj -= 2 * TMath::Pi();
    if( deltaphiME_jj < -TMath::Pi() ) deltaphiME_jj += 2 * TMath::Pi();
    if( fabs(deltaphiME_jj) > TMath::Pi()/2.0 ) {
      asymmetry = ( JetPt.at(0) - JetPt.at(1) )/( JetPt.at(0) + JetPt.at(1) );
    }
    // deltaphimin 
    double deltaphi0 = JetPhi[0]-MET_EMJES_RefFinal_CellOutEM_phi;
    if( deltaphi0 > TMath::Pi() ) deltaphi0 -= 2 * TMath::Pi();
    if( deltaphi0 < -TMath::Pi() ) deltaphi0 += 2 * TMath::Pi();
    double deltaphi1 = JetPhi[1]-MET_EMJES_RefFinal_CellOutEM_phi;
    if( deltaphi1 > TMath::Pi() ) deltaphi1 -= 2 * TMath::Pi();
    if( deltaphi1 < -TMath::Pi() ) deltaphi1 += 2 * TMath::Pi();
    deltaphi0 = fabs( deltaphi0 );
    deltaphi1 = fabs( deltaphi1 );
    if( deltaphi0 < deltaphi1 ) deltaphimin = deltaphi0;
    else deltaphimin = deltaphi1;

  }else{
    asymmetry = -999;
    deltaphimin = -999;
  }

}


double Analysis1::getSmearingCor( double pt)
{
  if(DEBUG) cout << "in getSmearingCor\n";
  static double N= 4.6;
  static double S=0.846; 
  static double C=0.064;

  if(pt<=0) return -999;      
  double sigma_mc = sqrt(N*N/pt/pt + S*S/pt + C*C);
  //sqrt(1.14*1.14 - 1.*1. )=0.55
  double delta_sigma=0.55*sigma_mc;      
  return 1+ gRandom->Gaus(0,delta_sigma);

}


bool Analysis1::isJet(Int_t iJet)
{
  if(DEBUG) cout << "in isJet\n";
  if (jet_AntiKt4H1Topo_emscale_pt->at(iJet)*jet_AntiKt4H1Topo_EMJES->at(iJet) <= 20000. || 
      fabs(jet_AntiKt4H1Topo_emscale_eta->at(iJet)) > 2.5) return false;

  return true;
}


bool Analysis1::isMuon( Int_t iMu )
{
  if(DEBUG) cout << "in isMuon\n";
  if (!(mu_staco_isCombinedMuon->at(iMu) || mu_staco_isLowPtReconstructedMuon->at(iMu))) return false;
  if (mu_staco_nPixHits->at(iMu) < 1 || mu_staco_nSCTHits->at(iMu) < 6) return false;
  int nTRTOutliers = mu_staco_nTRTOutliers->at(iMu);
  int nTRTTotal = nTRTOutliers + mu_staco_nTRTHits->at(iMu);
  float trackEta = -log(tan(mu_staco_id_theta->at(iMu)/2));
  if (fabs(trackEta) < 1.9 && nTRTTotal <= 5) return false;
  if (nTRTTotal > 5 && nTRTOutliers >= 0.9*nTRTTotal) return false;
  if (mu_staco_isCombinedMuon->at(iMu) && mu_staco_matchchi2->at(iMu) >= 150.) return false;
  // below is (pMSextrapol-pID)/pID > -0.4 cut --- p for me and id not in D3PD, have to use qoverp
  if (mu_staco_isCombinedMuon->at(iMu) && mu_staco_me_qoverp_exPV->at(iMu) != 0. && sin(mu_staco_id_theta_exPV->at(iMu)) != 0. && (fabs(sin(mu_staco_me_theta_exPV->at(iMu))/mu_staco_me_qoverp_exPV->at(iMu)) < 50000.) && (mu_staco_id_qoverp_exPV->at(iMu)/mu_staco_me_qoverp_exPV->at(iMu) - 1. <= -0.4)) return false;
  if (mu_staco_pt->at(iMu) <= 20000. || fabs(mu_staco_eta->at(iMu)) >= 2.4) return false;
  if (mu_staco_ptcone20->at(iMu) >= 1800.) return false; // do not apply this cut for muons entering MET
  if(fabs(mu_staco_z0_exPV->at(iMu)) >= 10) return false;

  return true;
}

bool Analysis1::isMuonForEtMiss( Int_t iMu )
{
  if(DEBUG) cout << "in isMuonForEtMiss\n";
  if (!(mu_staco_isCombinedMuon->at(iMu) || mu_staco_isLowPtReconstructedMuon->at(iMu))) return false;
  if (mu_staco_nPixHits->at(iMu) < 1 || mu_staco_nSCTHits->at(iMu) < 6) return false;
  int nTRTOutliers = mu_staco_nTRTOutliers->at(iMu);
  int nTRTTotal = nTRTOutliers + mu_staco_nTRTHits->at(iMu);
  float trackEta = -log(tan(mu_staco_id_theta->at(iMu)/2));
  if (fabs(trackEta) < 1.9 && nTRTTotal <= 5) return false;
  if (nTRTTotal > 5 && nTRTOutliers >= 0.9*nTRTTotal) return false;
  if (mu_staco_isCombinedMuon->at(iMu) && mu_staco_matchchi2->at(iMu) >= 150.) return false;
  // below is (pMSextrapol-pID)/pID > -0.4 cut --- p for me and id not in D3PD, have to use qoverp
  if (mu_staco_isCombinedMuon->at(iMu) && mu_staco_me_qoverp_exPV->at(iMu) != 0. && sin(mu_staco_id_theta_exPV->at(iMu)) != 0. && (fabs(sin(mu_staco_me_theta_exPV->at(iMu))/mu_staco_me_qoverp_exPV->at(iMu)) < 50000.) && (mu_staco_id_qoverp_exPV->at(iMu)/mu_staco_me_qoverp_exPV->at(iMu) - 1. <= -0.4)) return false;
  if (mu_staco_pt->at(iMu) <= 20000. || fabs(mu_staco_eta->at(iMu)) >= 2.4) return false;
  if(fabs(mu_staco_z0_exPV->at(iMu)) >= 10) return false;

  return true;
}

bool Analysis1::isElectron(Int_t iEl)
{
  if(DEBUG) cout << "in isElectron\n";
  if (el_pt->at(iEl) <= 20000. || fabs(el_cl_eta->at(iEl)) >= 2.47) return false;
  if (!(el_author->at(iEl) == 1 || el_author->at(iEl) == 3)) return false;
  // object to correct the weta2 and reta
  robustIsEMDefs o2;
  if (!(o2.isRobustMedium(el_isEM->at(iEl),el_etas2->at(iEl),el_cl_E->at(iEl)/cosh(el_etas2->at(iEl)),el_reta->at(iEl),el_weta2->at(iEl)))) return false;

  if (el_expectHitInBLayer->at(iEl) && el_nBLHits->at(iEl) == 0) return false;
  if (el_Etcone20->at(iEl)/el_pt->at(iEl) >= 0.15) return false; // Do not apply this cut for the electrons used in crack veto
 
  
  if(isRealData){
    if (egammaOQ::checkOQClusterElectron(RunNumber, el_cl_eta->at(iEl), el_cl_phi->at(iEl))==3) return false;
  } else{
    if (egammaOQ::checkOQClusterElectron(167521, el_cl_eta->at(iEl), el_cl_phi->at(iEl))==3) return false;
  }

  return true;
}

bool Analysis1::isTauon(Int_t iTa)
{
  if(DEBUG) cout << "in isTauon\n";

  return true;
}


double Analysis1::MET()
{
  if(DEBUG) cout << "in MET\n";
  //Remove the muon term from the MET:
  double metx = MET_EMJES_RefFinal_CellOutEM_etx
    - MET_EMJES_Muon_Total_Staco_etx;
  double mety = MET_EMJES_RefFinal_CellOutEM_ety
    - MET_EMJES_Muon_Total_Staco_ety;

  //Loop over the selected muons (before the 'overlap removal' and without any isolation (ptcone20) cut):
  for(int imu=0;imu<mu_staco_n;imu++){
    if(isMuonForEtMiss(imu)){  
      metx -= mu_staco_px->at(imu);
      mety -= mu_staco_py->at(imu);
    }
  }

  //double met=sqrt(pow(metx,2)+pow(mety,2));

  // Code to correct SimplifiedRefFinal for wrong electron/jet
  // overlap removal in default SimplifiedRefFinal calculation
  // Please be aware that not all code to identify good electrons
  // is included in this snippet.

  double SimplifiedRefFinalx = metx;
  double SimplifiedRefFinaly = mety;

  for( int e = 0; e < el_n; e++ ){

    TLorentzVector electron;
    electron.SetPtEtaPhiE(el_pt->at(e), el_eta->at(e), el_phi->at(e), el_E->at(e));


    robustIsEMDefs o3; 
    bool isrobustmedium = o3.isRobustMedium(el_isEM->at(e), el_etas2->at(e), el_cl_E->at(e)/cosh(el_etas2->at(e)),
					    el_reta->at(e), el_weta2->at(e));   

    if(isrobustmedium && el_medium->at(e) != 1) {
      for (int j = 0; j < jet_AntiKt4H1Topo_n; j++){
	TLorentzVector jet;
	jet.SetPtEtaPhiE(jet_AntiKt4H1Topo_emscale_pt->at(j)*jet_AntiKt4H1Topo_EMJES->at(j),
			 jet_AntiKt4H1Topo_emscale_eta->at(j),
			 jet_AntiKt4H1Topo_emscale_phi->at(j),
			 jet_AntiKt4H1Topo_emscale_E->at(j)*jet_AntiKt4H1Topo_EMJES->at(j));

	double DeltaR_ejet = electron.DeltaR(jet);
	if(DeltaR_ejet < 0.2) {
	  SimplifiedRefFinalx += jet.Px();
	  SimplifiedRefFinaly += jet.Py();
	  SimplifiedRefFinalx -= electron.Px();
	  SimplifiedRefFinaly -= electron.Py();
	}
      }
    }
  }

  double met = sqrt(pow(SimplifiedRefFinalx,2)+pow(SimplifiedRefFinaly,2));
  return met;

}


bool Analysis1::isBadLooseJet(Int_t iJet)
{
  if(DEBUG) cout << "in isBadLooseJet\n";
  if (jet_AntiKt4H1Topo_emfrac->at(iJet) > 0.95 && 
      fabs(jet_AntiKt4H1Topo_LArQuality->at(iJet)) > 0.8) return true;

  if (jet_AntiKt4H1Topo_hecf->at(iJet) > 0.8 && jet_AntiKt4H1Topo_n90->at(iJet) <= 5) return true;

  if (jet_AntiKt4H1Topo_emfrac->at(iJet) > 0.5 && 
      fabs(jet_AntiKt4H1Topo_LArQuality->at(iJet)) > 0.5) return true;
   
  if (fabs(jet_AntiKt4H1Topo_Timing->at(iJet)) > 25.) return true;

  if( jet_AntiKt4H1Topo_emfrac->at(iJet) < 0.05) return true;

  if( jet_AntiKt4H1Topo_fracSamplingMax->at(iJet) > 0.99 && fabs(jet_AntiKt4H1Topo_eta->at(iJet))<2.0 ) return true;

  return false;
}

Analysis1::Analysis1( vector<string> FILELIST )
{
  // open input files
  TChain* ch = new TChain("susy","");

  for ( unsigned int iFile=0; iFile < FILELIST.size(); ++iFile){
    ch -> Add( FILELIST[iFile].c_str() );
  }
   
  Init(ch);

  setCuts();
  DEBUG=false;
}




Analysis1::Analysis1( Int_t Nfiles, TString** name)
{ 

  TChain* ch = new TChain("susy");
  for(Int_t i=0; i<Nfiles; i++){
    ch -> Add( *name[i] );
  } 
  Init(ch);

  setCuts();
  DEBUG = false;
}

Analysis1::Analysis1( string inputFile )
{
  TChain* ch = new TChain("susy");
  string fileName;
  ifstream ffin( inputFile.data() );
  while( ffin ){
    getline( ffin , fileName );
    if( fileName.length() > 0 ) ch -> AddFile( fileName.data() );
  }
  Init(ch);
  setCuts();
  DEBUG = false;
}


Analysis1::Analysis1( TTree* tree)
  : AnalysisBase( tree )
{ 
  setCuts();
  DEBUG = true;
}

Analysis1::~Analysis1()
{
  cout << "SYMPHONY OF DESTRUCTION\n";
}

void Analysis1::setCuts(double emcut, double tscut, float metcut, double deltarjjcut, double deltarwmucut )
{
  EMCut = emcut;
  TSCut = tscut;
  METCut = metcut;
  DeltaRjjCut = deltarjjcut;
  DeltaRWmuCut = deltarwmucut;
}


void Analysis1::CLEAR()
{
  if(DEBUG) cout << "in CLEAR";
    MuPt.clear();
    MuPtms.clear();
    MuEtCone20.clear();
    MuEta.clear();
    MuPhi.clear();
    MuEnergy.clear();
    Mud0_exPV.clear();
    Mud0_exPVe.clear();
    Muz0_exPV.clear();
    Mur0_exPV.clear();
    ElPt.clear();
    ElEtCone20.clear();
    ElEta.clear();
    ElPhi.clear();
    ElEnergy.clear();
    TaPt.clear();
    TaEta.clear();
    TaPhi.clear();
    TaMass.clear();

    JetPt.clear();
    JetEnergy.clear();
    JetEta.clear();
    JetPhi.clear();

    DeltaR_jj.clear();
    DeltaPhi_jj.clear();
    DeltaEta_jj.clear();
    pt_jj.clear();
    m_jj.clear();

    DeltaR_Wmu.clear();
    DeltaPhi_Wmu.clear();
    DeltaEta_Wmu.clear();
    m_Wmu.clear();
    pt_Wmu.clear();

 
    Wv.clear();

}
