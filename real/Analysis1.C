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
  if(DEBUG) cout << "in EventsLoop()\n";
  isRealData = false;
  fChain -> SetBranchStatus("*",1);

  if ( fChain == 0 ) return;
  Long64_t nentries = fChain -> GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;

  TFile* f = TFile::Open("file.root","RECREATE");
  TTree* CF = new TTree("CF","CF");
  CF->Branch("mygrl",&mygrl,"mygrl/B");
  CF->Branch("isBadPV",&isBadPV,"isBadPV/B");
  CF->Branch("wasCrackElectron",&wasCrackElectron,"wasCrackElectron/B");
  CF->Branch("wasBadJet",&wasBadJet,"wasBadJet/B");
  CF->Branch("wasCosmicMuon",&wasCosmicMuon,"wasCosmicMuon/B");
  TTree* Nt = new TTree( "Nt", "Nt" );
  Nt->Branch("DeltaR_Wmu",&DeltaR_Wmu);
  Nt->Branch("DeltaPhi_Wmu",&DeltaPhi_Wmu);
  Nt->Branch("DeltaEta_Wmu",&DeltaEta_Wmu);
  Nt->Branch("m_Wmu",&m_Wmu);
  Nt->Branch("pt_Wmu",&pt_Wmu);
  Nt->Branch("DeltaR_jj",&DeltaR_jj);
  Nt->Branch("DeltaEta_jj",&DeltaEta_jj);
  Nt->Branch("DeltaPhi_jj",&DeltaPhi_jj);
  Nt->Branch("pt_jj",&pt_jj); 
  Nt->Branch("m_jj",&m_jj);
  Nt->Branch("MuEtCone20",&MuEtCone20);
  Nt->Branch("MuPt",&MuPt);
  Nt->Branch("MuPtms",&MuPtms);
  Nt->Branch("MuEta",&MuEta);
  Nt->Branch("MuPhi",&MuPhi);
  Nt->Branch("MuEnergy",&MuEnergy);
  Nt->Branch("Mud0_exPV",&Mud0_exPV);
  Nt->Branch("Mud0_exPVe",&Mud0_exPVe);
  Nt->Branch("Muz0_exPV",&Muz0_exPV);
  Nt->Branch("Mur0_exPV",&Mur0_exPV);
  Nt->Branch("MTs",&MTs);
  Nt->Branch("DeltaRMetJet",&DeltaRMetJet);
  Nt->Branch("DeltaPhiMetJet",&DeltaPhiMetJet);
  Nt->Branch("JetEnergy",&JetEnergy);
  Nt->Branch("JetPt",&JetPt);
  Nt->Branch("JetEta",&JetEta);
  Nt->Branch("JetPhi",&JetPhi);
  Nt->Branch("ElEnergy",&ElEnergy);
  Nt->Branch("ElPt",&ElPt);
  Nt->Branch("ElEta",&ElEta);
  Nt->Branch("ElPhi",&ElPhi);
  Nt->Branch("TaMass",&TaMass);
  Nt->Branch("TaPt",&TaPt);
  Nt->Branch("TaEta",&TaEta);
  Nt->Branch("TaPhi",&TaPhi);
  Nt -> Branch( "v_x", &v_x );
  Nt -> Branch( "v_y", &v_y );
  Nt -> Branch( "v_z", &v_z );
  Nt -> Branch( "v_r", &v_r );
  Nt -> Branch( "v_errx", &v_errx );
  Nt -> Branch( "v_erry", &v_erry );
  Nt -> Branch( "v_errz", &v_errz );
  Nt -> Branch( "v_covxy", &v_covxy );
  Nt -> Branch( "v_covyz", &v_covyz );
  Nt -> Branch( "v_covzx", &v_covzx );
  Nt -> Branch( "v_chi2", &v_chi2 );
  Nt -> Branch( "v_ndof", &v_ndof );
  Nt -> Branch( "v_type", &v_type );
  Nt -> Branch( "v_nTracks", &v_nTracks );
  Nt -> Branch( "v_n", &v_n, "v_n/I" );
  Nt->Branch( "MuN", &MuN, "MuN/I" );
  Nt->Branch( "ElN", &ElN, "ElN/I" );
  Nt->Branch( "ElNBeforeOR", &ElNBeforeOR, "ElNBeforeOR/I" );
  Nt->Branch( "TaN", &TaN, "TaN/I" );
  Nt->Branch( "MuNBeforeOR", &MuNBeforeOR, "MuNBeforeOR/I" );
  Nt->Branch( "JetN", &JetN, "JetN/I" );
  Nt->Branch( "JetNBeforeOR", &JetNBeforeOR, "JetNBeforeOR/I" );
  Nt->Branch( "em_muonjetjet", &em_muonjetjet, "em_muonjetjet/D" );
  Nt->Branch( "em_muonjetjetjet", &em_muonjetjetjet, "em_muonjetjetjet/D" );
  Nt->Branch( "ht_muonjetjet", &ht_muonjetjet, "ht_muonjetjet/D" );
  Nt->Branch( "ht_muonjetjetjet", &ht_muonjetjetjet, "ht_muonjetjetjet/D" );
  Nt->Branch( "met", &met, "met/D" );
  Nt->Branch("MET_EMJES_RefFinal_CellOutEM_phi",&MET_EMJES_RefFinal_CellOutEM_phi,"MET_EMJES_RefFinal_CellOutEM_phi/D");
  Nt->Branch("SimplifiedRefFinalx",&SimplifiedRefFinalx,"SimplifiedRefFinalx/D");
  Nt->Branch("SimplifiedRefFinaly",&SimplifiedRefFinaly,"SimplifiedRefFinaly/D");
  Nt->Branch( "ts", &ts, "ts/D" );
  Nt->Branch( "em", &em, "em/D" );
  Nt->Branch( "ht", &ht, "ht/D" );
  Nt->Branch( "deltaphimin", &deltaphimin, "deltaphimin/D");
  Nt->Branch( "asymmetry", &asymmetry, "asymmetry/D" );
  Nt->Branch( "EF_mu13", &EF_mu13, "EF_mu13/B" );
  Nt->Branch( "EF_mu13_tight", &EF_mu13_tight, "EF_mu13_tight/B" );
  Nt->Branch( "EF_mu10_MSonly", &EF_mu10_MSonly, "EF_mu10_MSonly/B" ); 
  Nt->Branch( "L1_MU6", &L1_MU6, "L1_MU6/B" );
  Nt->Branch( "L1_2J15", &L1_2J15, "L1_2J15/B" );
  Nt->Branch( "L1_TAU11", &L1_TAU11, "L1_TAU11/B" );


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

    // there is at least 1 reco PV with nTracks > 4
    for( unsigned int ivx = 0; ivx < vx_nTracks->size(); ivx++ ){
      if( vx_nTracks->at(ivx) <= 4 ){
        isBadPV=false;
        break;
      } else isBadPV = true;
    }

    wasCosmicMuon=false;
    for(int i=0; i<mu_staco_n; i++){
      if(!isMuon(i)) continue;
      if(fabs(mu_staco_z0_exPV->at(i)) >= 10){
        wasCosmicMuon=true;
        break;
      }
    }

    wasCrackElectron=false;
    for(Int_t i=0; i<el_n; i++){
      if(!isElectron(i)) continue;
      if (fabs(el_cl_eta->at(i)) > 1.37 && fabs(el_cl_eta->at(i)) < 1.52) {
        wasCrackElectron=true;
        break;
      }
    }

    CLEAR();
    myJetSmearing();
    JetInfo();
    if(!isRealData){
      myMuonSmearing(jentry);
    }
    // by cause of the muon smearing, MuonInfo have to be before of the calculation of the met.
    MuonInfo();
    ElectronInfo();
    TauonInfo();
    OverlapRemoval();
    // JET CLEANING
    wasBadJet = false;
    for(unsigned int i=0; i<JetNAfterOR; i++){
      // cleaning applied to jets with EMSJES* emscale_ pt>20 and any eta.
      if( JetPtAfterOR.at(i)> 20000. ){
	if( isBadLooseJet(i) ) {
	  wasBadJet = true;
	  break;
	}
      }
    }

    CF->Fill();
    if( !mygrl || isBadPV || wasCrackElectron || wasBadJet || wasCosmicMuon ){
      continue;
    } else {
      AllLeptons(); 
      VertexInfo();
      Asymmetry_DeltaPhiMin();
      met = MET();
      DeltaR_MET_Jet();
      MT();
      Wv = recoWContenedor();
      recoMuJetJet( Wv );
 
      ts = TransverseSphericity();
      ht = HT();
      em = EffectiveMass( ht );

      ht_muonjetjet = HT_muonjetjet();
      ht_muonjetjetjet = HT_muonjetjetjet();
      em_muonjetjet = EffectiveMass( ht_muonjetjet );
      em_muonjetjetjet = EffectiveMass( ht_muonjetjetjet );

      if ( DEBUG ) cout << jentry << endl;
      //FIXME

      if(DEBUG) cout << "Antes de Nt->Fill()\n";
      Nt->Fill();
      if(DEBUG) cout << "Despues de Nt->Fill()\n";

      if(DEBUG) cout << "leaving  EventsLoop\n";
    }
  }
  //********************************************************************************
  //********************* END OF THE EVENTS LOOP ***********************************
  //********************************************************************************
  if(DEBUG) cout << "despues de events loop\n";
  f->cd();
  CF->Write();
  Nt->Write();
  if(DEBUG) cout << "despues de Nt->Write()\n";
  f->Close();
  return;
}

void Analysis1::AllLeptons()
{
  if(DEBUG) cout << "-in AllLeptons()\n";
  JetPt = JetPtAfterOR; 
  JetEta = JetEtaAfterOR; 
  JetPhi = JetPhiAfterOR; 
  JetEnergy = JetEnergyAfterOR; 
  JetN = JetNAfterOR;

  MuPt = MuPtAfterOR;
  MuPtms = MuPtmsAfterOR;
  MuEtCone20 = MuEtCone20AfterOR;
  MuEta=MuEtaAfterOR;
  MuPhi=MuPhiAfterOR;
  MuEnergy=MuEnergyAfterOR;
  Mud0_exPV=Mud0_exPVAfterOR;
  Mud0_exPVe=Mud0_exPVeAfterOR;
  Muz0_exPV=Muz0_exPVAfterOR;
  Mur0_exPV=Mur0_exPVAfterOR;
  MuN=MuNAfterOR;  

  ElPt=ElPtAfterOR;
  ElEtCone20=ElEtCone20AfterOR;
  ElEta=ElEtaAfterOR;
  ElPhi=ElPhiAfterOR;
  ElEnergy=ElEnergyAfterOR;
  ElN=ElNAfterOR;

  TaPt=TaPtAfterOR;
  TaEta=TaEtaAfterOR;
  TaPhi=TaPhiAfterOR;
  TaMass=TaMassAfterOR;
  TaN=TaNAfterOR;

  return;
}


vector< W_From_jj > Analysis1::recoWContenedor()
{
  if(DEBUG) cout << "-in recoWContenedor\n"; 
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
  
	double dEta_jj = fabs( jet1eta - jet2eta );   
	DeltaEta_jj.push_back( dEta_jj );
	double dPhi_jj = jet1phi - jet2phi;
	if( dPhi_jj >  TMath::Pi() ) dPhi_jj -= 2*TMath::Pi();
	if( dPhi_jj < -TMath::Pi() ) dPhi_jj += 2*TMath::Pi();
	DeltaPhi_jj.push_back(fabs(dPhi_jj));

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
  if(DEBUG) cout << "-in recoMuJetJet\n";
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
      pt_Wmu.push_back( dpt_Wmu );

      dEta_Wmu = fabs( JJ.Eta() - Muon.Eta() );
      DeltaEta_Wmu.push_back( dEta_Wmu );
      dPhi_Wmu = JJ.Phi() - Muon.Phi();

      if( dPhi_Wmu >  TMath::Pi() ) dPhi_Wmu -= 2*TMath::Pi();
      if( dPhi_Wmu < -TMath::Pi() ) dPhi_Wmu += 2*TMath::Pi();

      DeltaPhi_Wmu.push_back( fabs(dPhi_Wmu) );

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
  if(DEBUG) cout << "-in TransverseSphericity()\n";
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
  if(DEBUG) cout << "-in HT\n";
  double ht1 = 0;
  vector<double> ptjets;
  ptjets.clear();
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
  if(DEBUG) cout << "-in EffectiveMass\n";
  double em1 = MET();
  return ht2 + em1;

}

double Analysis1::HT_muonjetjet()
{
  if(DEBUG) cout << "-in HT_muonjetjet()\n";
  double ht1 = 0;
  vector<double> ptjets;
  ptjets.clear();
  vector<double>::const_iterator it; 

  for(unsigned int i=0; i < MuN; i++){
    ht1 += MuPt.at(i);
  }

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

double Analysis1::HT_muonjetjetjet()
{
  if(DEBUG) cout << "-in HT_muonjetjetjet()\n";
  double ht1 = 0;
  vector<double> ptjets;
  ptjets.clear();
  vector<double>::const_iterator it; 

  for(unsigned int i=0; i < MuN; i++){
    ht1 += MuPt.at(i);
  }

  for(unsigned int i=0; i < JetN; i++){
    ptjets.push_back( JetPt.at(i) );
  }
  sort(ptjets.begin(), ptjets.end());
  reverse( ptjets.begin(), ptjets.end() ); 
  if( ptjets.size() >= 3 ) {
    ht1 += ptjets.at(0);
    ht1 += ptjets.at(1);
    ht1 += ptjets.at(2);
  }

  if( ptjets.size() == 2 ){
    ht1 += ptjets.at(0);
    ht1 += ptjets.at(1);
  }  
  if( ptjets.size() == 1 ) ht1 += ptjets.at(0);  

  return ht1;
}

void Analysis1::MuonInfo()
{
  if(DEBUG) cout << "-in MuonInfo\n";
  for(Int_t iMu = 0; iMu < mu_staco_n; iMu++){
    if(!isMuon(iMu)) continue;

    MuPtBeforeOR.push_back( mu_staco_pt -> at(iMu) );
    double muptms = fabs( sin( mu_staco_ms_theta->at(iMu) )  / mu_staco_ms_qoverp->at(iMu) );
    MuPtmsBeforeOR.push_back( muptms );

    MuEtaBeforeOR.push_back( mu_staco_eta -> at(iMu) );
    MuPhiBeforeOR.push_back( mu_staco_phi -> at(iMu) );
    MuEnergyBeforeOR.push_back( mu_staco_E -> at(iMu) );
    MuEtCone20BeforeOR.push_back( mu_staco_etcone20 -> at(iMu) );
    Mud0_exPVBeforeOR.push_back( fabs( mu_staco_d0_exPV -> at(iMu) ) );
    if( mu_staco_cov_d0_exPV->at(iMu)>0.0 ){
      Mud0_exPVeBeforeOR.push_back( fabs( mu_staco_d0_exPV -> at(iMu) )/ sqrt( mu_staco_cov_d0_exPV -> at(iMu) ) );
    } else {
      Mud0_exPVeBeforeOR.push_back( -1.0 );
    }

    Muz0_exPVBeforeOR.push_back( fabs( mu_staco_z0_exPV -> at(iMu) ) );
    double r0 = sqrt( pow(mu_staco_d0_exPV->at(iMu),2)
		      +pow(mu_staco_z0_exPV->at(iMu),2));
    Mur0_exPVBeforeOR.push_back(r0); 
  }
  MuNBeforeOR = MuPtBeforeOR.size();

}

void Analysis1::ElectronInfo()
{
  if(DEBUG) cout << "-in ElectronInfo()\n";
  for(Int_t i=0; i<el_n; i++){
    if(!isElectron(i)) continue;

    ElPtBeforeOR.push_back( el_pt -> at(i) );

    ElEtaBeforeOR.push_back( el_eta -> at(i) );
    ElPhiBeforeOR.push_back( el_phi -> at(i) );
    ElEnergyBeforeOR.push_back( el_E -> at(i) );
    ElEtCone20BeforeOR.push_back( el_Etcone20 -> at(i) );
  }
  ElNBeforeOR = ElPtBeforeOR.size();
  sort(ElPtBeforeOR.begin(), ElPtBeforeOR.end());
  reverse( ElPtBeforeOR.begin(), ElPtBeforeOR.end() );

}

void Analysis1::TauonInfo()
{
  if(DEBUG) cout << "-in TauonInfo\n";
  for(Int_t i=0; i<tau_n; i++){
    if(!isTauon(i)) continue;
    TaPtBeforeOR.push_back( tau_pt -> at(i) );
    TaEtaBeforeOR.push_back( tau_eta -> at(i) );
    TaPhiBeforeOR.push_back( tau_phi -> at(i) );
    TaMassBeforeOR.push_back( tau_m -> at(i) );

  }
  TaNBeforeOR = TaPtBeforeOR.size();
  sort(TaPtBeforeOR.begin(), TaPtBeforeOR.end());
  reverse( TaPtBeforeOR.begin(), TaPtBeforeOR.end() );

}

void Analysis1::myJetSmearing()
{
  if(DEBUG) cout << "-in myJetSmearing()\n";
  double jptGeV;
  double cor;

  for(Int_t i=0; i<jet_AntiKt4H1Topo_n; i++){
    jptGeV = jet_AntiKt4H1Topo_EMJES->at(i) * jet_AntiKt4H1Topo_emscale_pt->at(i) / 1000;
    cor = getSmearingCor(jptGeV);

    jet_AntiKt4H1Topo_emscale_E->at(i) = cor * jet_AntiKt4H1Topo_emscale_E->at(i);
    jet_AntiKt4H1Topo_emscale_pt->at(i) = cor * jet_AntiKt4H1Topo_emscale_pt->at(i);  
  }
  //reverse sort of the JetPt
  if(jet_AntiKt4H1Topo_n>=2){
    for(int pass=0; pass<jet_AntiKt4H1Topo_n-1; pass++){
      for(int i=0; i<jet_AntiKt4H1Topo_n-1; i++){
        if(jet_AntiKt4H1Topo_emscale_pt->at(i)<jet_AntiKt4H1Topo_emscale_pt->at(i+1)){

	  double keyemscale_pt = jet_AntiKt4H1Topo_emscale_pt->at(i);
	  jet_AntiKt4H1Topo_emscale_pt->at(i) = jet_AntiKt4H1Topo_emscale_pt->at(i+1);
	  jet_AntiKt4H1Topo_emscale_pt->at(i+1) = keyemscale_pt;

	  double keyemscale_eta = jet_AntiKt4H1Topo_emscale_eta->at(i);
	  jet_AntiKt4H1Topo_emscale_eta->at(i) = jet_AntiKt4H1Topo_emscale_eta->at(i+1);
	  jet_AntiKt4H1Topo_emscale_eta->at(i+1) = keyemscale_eta;

	  double keyemscale_phi = jet_AntiKt4H1Topo_emscale_phi->at(i);
	  jet_AntiKt4H1Topo_emscale_phi->at(i) = jet_AntiKt4H1Topo_emscale_phi->at(i+1);
	  jet_AntiKt4H1Topo_emscale_phi->at(i+1) = keyemscale_phi;

	  double keyemscale_E = jet_AntiKt4H1Topo_emscale_E->at(i);
	  jet_AntiKt4H1Topo_emscale_E->at(i) = jet_AntiKt4H1Topo_emscale_E->at(i+1);
	  jet_AntiKt4H1Topo_emscale_E->at(i+1) = keyemscale_E;

	  double keyEMJES = jet_AntiKt4H1Topo_EMJES->at(i);
	  jet_AntiKt4H1Topo_EMJES->at(i) = jet_AntiKt4H1Topo_EMJES->at(i+1);
	  jet_AntiKt4H1Topo_EMJES->at(i+1) = keyEMJES;

	  double keyemfrac = jet_AntiKt4H1Topo_emfrac->at(i);
	  jet_AntiKt4H1Topo_emfrac->at(i) = jet_AntiKt4H1Topo_emfrac->at(i+1);
	  jet_AntiKt4H1Topo_emfrac->at(i+1) = keyemfrac;

	  double keyLArQuality = jet_AntiKt4H1Topo_LArQuality->at(i);
	  jet_AntiKt4H1Topo_LArQuality->at(i) = jet_AntiKt4H1Topo_LArQuality->at(i+1);
	  jet_AntiKt4H1Topo_LArQuality->at(i+1) = keyLArQuality;

	  double keyhecf = jet_AntiKt4H1Topo_hecf->at(i);
	  jet_AntiKt4H1Topo_hecf->at(i) = jet_AntiKt4H1Topo_hecf->at(i+1);
	  jet_AntiKt4H1Topo_hecf->at(i+1) = keyhecf;

	  double keyn90 = jet_AntiKt4H1Topo_n90->at(i);
	  jet_AntiKt4H1Topo_n90->at(i) = jet_AntiKt4H1Topo_n90->at(i+1);
	  jet_AntiKt4H1Topo_n90->at(i+1) = keyn90;

	  double keyTiming = jet_AntiKt4H1Topo_Timing->at(i);
	  jet_AntiKt4H1Topo_Timing->at(i) = jet_AntiKt4H1Topo_Timing->at(i+1);
	  jet_AntiKt4H1Topo_Timing->at(i+1) = keyTiming;

	  double keyfracSamplingMax = jet_AntiKt4H1Topo_fracSamplingMax->at(i);
	  jet_AntiKt4H1Topo_fracSamplingMax->at(i) = jet_AntiKt4H1Topo_fracSamplingMax->at(i+1);
	  jet_AntiKt4H1Topo_fracSamplingMax->at(i+1) = keyfracSamplingMax;

        }
      }
    }
  } 

  //sort( JetPt.begin(), JetPt.end() );
  //reverse( JetPt.begin(), JetPt.end() );

}

void Analysis1::JetInfo()
{
  if(DEBUG) cout << "-in JetInfo()\n";
  for(Int_t i=0; i<jet_AntiKt4H1Topo_n; i++){
    if(!isJet(i)) continue;


    JetEnergyBeforeOR.push_back( jet_AntiKt4H1Topo_emscale_E->at(i) * jet_AntiKt4H1Topo_EMJES->at(i) );
    JetEtaBeforeOR.push_back(  jet_AntiKt4H1Topo_emscale_eta->at(i) );
    JetPhiBeforeOR.push_back(  jet_AntiKt4H1Topo_emscale_phi->at(i) );
    JetPtBeforeOR.push_back( jet_AntiKt4H1Topo_emscale_pt->at(i) * jet_AntiKt4H1Topo_EMJES->at(i) );

  }
  JetNBeforeOR = JetPtBeforeOR.size();



  if(DEBUG) cout << "-leaving JetInfo()\n";

}


void Analysis1::OverlapRemoval()
{
  if(DEBUG) cout << "-in OverlapRemoval()\n";
  TLorentzVector JetBeforeOR;
  TLorentzVector electron;
  TLorentzVector muon;
  TLorentzVector tauon;
  TLorentzVector jet;
  bool eljetRemoval02=false;
  bool eljetRemoval0204=false;
  bool mujetRemoval04=false;
  bool tajetRemoval04=false;
  double DeltaR_jet_el, DeltaR_jet_mu, DeltaR_jet_ta;

  if(DEBUG) cout << "before JetOR\n";
  for(unsigned int i=0; i<JetNBeforeOR; i++){
    JetBeforeOR.SetPtEtaPhiE(JetPtBeforeOR.at(i),JetEtaBeforeOR.at(i),JetPhiBeforeOR.at(i),JetEnergyBeforeOR.at(i));
    for(unsigned int j=0; j<ElNBeforeOR; j++){
      electron.SetPtEtaPhiE(ElPtBeforeOR.at(j),ElEtaBeforeOR.at(j),ElPhiBeforeOR.at(j),ElEnergyBeforeOR.at(j));
      DeltaR_jet_el = electron.DeltaR(JetBeforeOR);
      if(DeltaR_jet_el<0.2){
        eljetRemoval02 = true;
        break;
      }
    }

    if(!eljetRemoval02){
      JetPtAfterOR.push_back( JetPtBeforeOR.at(i) );
      JetEtaAfterOR.push_back( JetEtaBeforeOR.at(i) );
      JetPhiAfterOR.push_back( JetPhiBeforeOR.at(i) );
      JetEnergyAfterOR.push_back( JetEnergyBeforeOR.at(i) );
    }
  }
  JetNAfterOR = JetPtAfterOR.size();

  if(DEBUG) cout << "before electronOR\n";
  for(unsigned int i=0; i<ElNBeforeOR; i++){
    electron.SetPtEtaPhiE(ElPtBeforeOR.at(i),ElEtaBeforeOR.at(i),ElPhiBeforeOR.at(i),ElEnergyBeforeOR.at(i));
    for(unsigned int j=0; j<JetNAfterOR; j++){
      jet.SetPtEtaPhiE(JetPtAfterOR.at(j),JetEtaAfterOR.at(j),JetPhiAfterOR.at(j),JetEnergyAfterOR.at(j));
      DeltaR_jet_el = jet.DeltaR(electron);
      if(DeltaR_jet_el>=0.2 && DeltaR_jet_el<0.4){
        eljetRemoval0204 = true;
        break; 
      }
    }
    if(!eljetRemoval0204){
      ElPtAfterOR.push_back( ElPtBeforeOR.at(i) );
      ElEtaAfterOR.push_back( ElEtaBeforeOR.at(i) );
      ElPhiAfterOR.push_back( ElPhiBeforeOR.at(i) );
      ElEnergyAfterOR.push_back( ElEnergyBeforeOR.at(i) );
      
    }
  }
  ElNAfterOR = ElPtAfterOR.size();

  if(DEBUG) cout << "before muonOR\n";
  if(DEBUG) cout << "MuNBeforeOR="<<MuNBeforeOR<<", JetNAfterOR="<<JetNAfterOR<<endl;
  for(unsigned int i=0; i<MuNBeforeOR; i++){
    muon.SetPtEtaPhiE(MuPtBeforeOR.at(i),MuEtaBeforeOR.at(i),MuPhiBeforeOR.at(i),MuEnergyBeforeOR.at(i));
    for(unsigned int j=0; j<JetNAfterOR; j++){
      jet.SetPtEtaPhiE(JetPtAfterOR.at(j),JetEtaAfterOR.at(j),JetPhiAfterOR.at(j),JetEnergyAfterOR.at(j));
      DeltaR_jet_mu = jet.DeltaR(muon);
      if(DeltaR_jet_mu<0.4){
        mujetRemoval04 = true;
        break; 
      }
    }
    if(!mujetRemoval04){
      MuPtAfterOR.push_back( MuPtBeforeOR.at(i) );
      MuPtmsAfterOR.push_back( MuPtmsBeforeOR.at(i) );
      MuEtaAfterOR.push_back( MuEtaBeforeOR.at(i) );
      MuPhiAfterOR.push_back( MuPhiBeforeOR.at(i) );
      MuEnergyAfterOR.push_back( MuEnergyBeforeOR.at(i) );
      MuEtCone20AfterOR.push_back( MuEtCone20BeforeOR.at(i)); 
      Mud0_exPVAfterOR.push_back( Mud0_exPVBeforeOR.at(i) ); 
      Mud0_exPVeAfterOR.push_back( Mud0_exPVeBeforeOR.at(i) ); 
      Muz0_exPVAfterOR.push_back( Muz0_exPVBeforeOR.at(i) ); 
      Mur0_exPVAfterOR.push_back( Mur0_exPVBeforeOR.at(i) ); 
          
    }
  }
  MuNAfterOR = MuPtAfterOR.size();


  if(DEBUG) cout << "before tauonOR,\tTaNBeforeOR="<<TaNBeforeOR<<endl;
  
  for(unsigned int i=0; i<TaNBeforeOR; i++){
    tauon.SetPtEtaPhiE(TaPtBeforeOR.at(i),TaEtaBeforeOR.at(i),TaPhiBeforeOR.at(i),TaMassBeforeOR.at(i));
    for(unsigned int j=0; j<JetNAfterOR; j++){
      jet.SetPtEtaPhiE(JetPtAfterOR.at(j),JetEtaAfterOR.at(j),JetPhiAfterOR.at(j),JetEnergyAfterOR.at(j));
      DeltaR_jet_ta = jet.DeltaR(tauon);
      if(DeltaR_jet_ta<0.4){
        tajetRemoval04 = true;
        break; 
      }
    }
    if(!tajetRemoval04){
      TaPtAfterOR.push_back( TaPtBeforeOR.at(i) );
      TaEtaAfterOR.push_back( TaEtaBeforeOR.at(i) );
      TaPhiAfterOR.push_back( TaPhiBeforeOR.at(i) );
      TaMassAfterOR.push_back( TaMassBeforeOR.at(i) );
    }
  }
  TaNAfterOR = TaPtAfterOR.size();
  if(DEBUG) cout << "leaving OverlapRemoval()\n";
}

void Analysis1::Asymmetry_DeltaPhiMin()
{
  if(DEBUG) cout << "-in Asymmetry_DeltaPhiMin()\n";
  if( JetN >= 2  ){
    // asymmetry 
    double deltaphiME_jj = JetPhi.at(0)-JetPhi.at(1);
    if( deltaphiME_jj > TMath::Pi() ) deltaphiME_jj -= 2 * TMath::Pi();
    if( deltaphiME_jj < -TMath::Pi() ) deltaphiME_jj += 2 * TMath::Pi();
    if( fabs(deltaphiME_jj) > TMath::Pi()/2.0 ) {
      asymmetry = ( JetPt.at(0) - JetPt.at(1) )/( JetPt.at(0) + JetPt.at(1) );
    }
    // deltaphimin 
    double deltaphi0 = JetPhi.at(0)-MET_EMJES_RefFinal_CellOutEM_phi;
    if( deltaphi0 > TMath::Pi() ) deltaphi0 -= 2 * TMath::Pi();
    if( deltaphi0 < -TMath::Pi() ) deltaphi0 += 2 * TMath::Pi();
    double deltaphi1 = JetPhi.at(1)-MET_EMJES_RefFinal_CellOutEM_phi;
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
  if(DEBUG) cout << "--in getSmearingCor\n";
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
  if(DEBUG) cout << "--in isJet("<<iJet<<")\n";
  if(DEBUG) cout << jet_AntiKt4H1Topo_emscale_pt->size() << "\t" << jet_AntiKt4H1Topo_pt->size() << "\t" << jet_AntiKt4H1Topo_n << endl;
  if (jet_AntiKt4H1Topo_emscale_pt->at(iJet)*jet_AntiKt4H1Topo_EMJES->at(iJet) <= 20000. || 
      fabs(jet_AntiKt4H1Topo_emscale_eta->at(iJet)) > 2.5) return false;

  return true;
}


bool Analysis1::isMuon( Int_t iMu )
{
  if(DEBUG) cout << "--in isMuon\n";
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
  float mypt = mu_staco_pt->at(iMu);
  if (mypt <= 20000. || fabs(mu_staco_eta->at(iMu)) >= 2.4) return false;
  //if(fabs(mu_staco_z0_exPV->at(iMu)) >= 10) return false;
  if (mu_staco_ptcone20->at(iMu) >= 1800.) return false; // do not apply this cut for muons entering MET

  return true;
}

bool Analysis1::isMuonForEtMiss( Int_t iMu )
{
  if(DEBUG) cout << "--in isMuonForEtMiss\n";
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
  float mypt = mu_staco_pt->at(iMu);
  if (mypt <= 20000. || fabs(mu_staco_eta->at(iMu)) >= 2.4) return false;
  if(fabs(mu_staco_z0_exPV->at(iMu)) >= 10) return false;

  return true;
}

bool Analysis1::isElectron(Int_t iEl)
{
  if(DEBUG) cout << "--in isElectron\n";
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
  if(DEBUG) cout << "--in isTauon\n";

  if( tau_pt->at(iTa)<30.e3 ) return false;

  return true;
}


double Analysis1::MET()
{
  if(DEBUG) cout << "-in MET()\n";
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

  SimplifiedRefFinalx = metx;
  SimplifiedRefFinaly = mety;

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

  double met1 = sqrt(pow(SimplifiedRefFinalx,2)+pow(SimplifiedRefFinaly,2));
  return met1;

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

  if( jet_AntiKt4H1Topo_fracSamplingMax->at(iJet) > 0.99 && fabs(jet_AntiKt4H1Topo_emscale_eta->at(iJet))<2.0 ) return true;

  return false;
}

Analysis1::Analysis1( vector<string> FILELIST )
{
  // open input files
  TChain* ch = new TChain("susy","");

  for ( unsigned int iFile=0; iFile < FILELIST.size(); ++iFile){
    ch -> Add( (FILELIST.at(iFile)).c_str() );
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
  DEBUG = false;
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
  if(DEBUG) cout << "in CLEAR\n";
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
  MuPtBeforeOR.clear();
  MuPtmsBeforeOR.clear();
  MuEtCone20BeforeOR.clear();
  MuEtaBeforeOR.clear();
  MuPhiBeforeOR.clear();
  MuEnergyBeforeOR.clear();
  Mud0_exPVBeforeOR.clear();
  Mud0_exPVeBeforeOR.clear();
  Muz0_exPVBeforeOR.clear();
  Mur0_exPVBeforeOR.clear();
  MuPtAfterOR.clear();
  MuPtmsAfterOR.clear();
  MuEtCone20AfterOR.clear();
  MuEtaAfterOR.clear();
  MuPhiAfterOR.clear();
  MuEnergyAfterOR.clear();
  Mud0_exPVAfterOR.clear();
  Mud0_exPVeAfterOR.clear();
  Muz0_exPVAfterOR.clear();
  Mur0_exPVAfterOR.clear();

  MTs.clear();
  DeltaRMetJet.clear();
  DeltaPhiMetJet.clear();

  ElPt.clear();
  ElEtCone20.clear();
  ElEta.clear();
  ElPhi.clear();
  ElEnergy.clear();
  ElPtBeforeOR.clear();
  ElEtCone20BeforeOR.clear();
  ElEtaBeforeOR.clear();
  ElPhiBeforeOR.clear();
  ElEnergyBeforeOR.clear();
  ElPtAfterOR.clear();
  ElEtCone20AfterOR.clear();
  ElEtaAfterOR.clear();
  ElPhiAfterOR.clear();
  ElEnergyAfterOR.clear();

  TaPt.clear();
  TaEta.clear();
  TaPhi.clear();
  TaMass.clear();
  TaPtBeforeOR.clear();
  TaEtaBeforeOR.clear();
  TaPhiBeforeOR.clear();
  TaMassBeforeOR.clear();
  TaPtAfterOR.clear();
  TaEtaAfterOR.clear();
  TaPhiAfterOR.clear();
  TaMassAfterOR.clear();

  JetPt.clear();
  JetEnergy.clear();
  JetEta.clear();
  JetPhi.clear();
  JetPtBeforeOR.clear();
  JetEnergyBeforeOR.clear();
  JetEtaBeforeOR.clear();
  JetPhiBeforeOR.clear();
  JetPtAfterOR.clear();
  JetEnergyAfterOR.clear();
  JetEtaAfterOR.clear();
  JetPhiAfterOR.clear();

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

  v_x.clear();
  v_y.clear();
  v_z.clear();
  v_r.clear();
  v_errx.clear();
  v_erry.clear();
  v_errz.clear();
  v_covxy.clear();
  v_covyz.clear();
  v_covzx.clear();
  v_chi2.clear();
  v_ndof.clear();
  v_type.clear();
  v_nTracks.clear();

 
  Wv.clear();

}

void Analysis1::myMuonSmearing(Long64_t EventNumber){
  if(DEBUG) cout << "myMuonSmearing\n";
  for(int iMu=0; iMu<mu_staco_n; iMu++){
    float mypt = mu_staco_pt->at(iMu);

    /** Use the MC event number to set seed so that the random numbers are reproducible by
	different analyzers **/
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
  //reverse sort of the Muon's components
  for(int pass=0; pass<mu_staco_n-1; pass++){
    for(int i=0; i<mu_staco_n-1; i++){
      if(mu_staco_pt->at(i)<mu_staco_pt->at(i+1)){

	double keyeta = mu_staco_eta->at(i);
	mu_staco_eta->at(i) = mu_staco_eta->at(i+1);
	mu_staco_eta->at(i+1) = keyeta;

	double keyphi = mu_staco_phi->at(i);
	mu_staco_phi->at(i) = mu_staco_phi->at(i+1);
	mu_staco_phi->at(i+1) = keyphi;

	double keyE = mu_staco_E->at(i);
	mu_staco_E->at(i) = mu_staco_E->at(i+1);
	mu_staco_E->at(i+1) = keyE;

	double keypt = mu_staco_pt->at(i);
	mu_staco_pt->at(i) = mu_staco_pt->at(i+1);
	mu_staco_pt->at(i+1) = keypt;

	double keyetcone20 = mu_staco_etcone20->at(i);
	mu_staco_etcone20->at(i) = mu_staco_etcone20->at(i+1);
	mu_staco_etcone20->at(i+1) = keyetcone20;

	double keyms_theta = mu_staco_ms_theta->at(i);
	mu_staco_ms_theta->at(i) = mu_staco_ms_theta->at(i+1);
	mu_staco_ms_theta->at(i+1) = keyms_theta;

	double keyms_qoverp = mu_staco_ms_qoverp->at(i);
	mu_staco_ms_qoverp->at(i) = mu_staco_ms_qoverp->at(i+1);
	mu_staco_ms_qoverp->at(i+1) = keyms_qoverp;

	double keyme_qoverp = mu_staco_me_qoverp->at(i);
	mu_staco_me_qoverp->at(i) = mu_staco_me_qoverp->at(i+1);
	mu_staco_me_qoverp->at(i+1) = keyme_qoverp;

	double keyme_qoverp_exPV = mu_staco_me_qoverp_exPV->at(i);
	mu_staco_me_qoverp_exPV->at(i) = mu_staco_me_qoverp_exPV->at(i+1);
	mu_staco_me_qoverp_exPV->at(i+1) = keyme_qoverp_exPV;

	double keyme_theta_exPV = mu_staco_me_theta_exPV->at(i);
	mu_staco_me_theta_exPV->at(i) = mu_staco_me_theta_exPV->at(i+1);
	mu_staco_me_theta_exPV->at(i+1) = keyme_theta_exPV;

	double keyid_theta_exPV = mu_staco_id_theta_exPV->at(i);
	mu_staco_id_theta_exPV->at(i) = mu_staco_id_theta_exPV->at(i+1);
	mu_staco_id_theta_exPV->at(i+1) = keyid_theta_exPV;

	double keyid_qoverp_exPV = mu_staco_id_qoverp_exPV->at(i);
	mu_staco_id_qoverp_exPV->at(i) = mu_staco_id_qoverp_exPV->at(i+1);
	mu_staco_id_qoverp_exPV->at(i+1) = keyid_qoverp_exPV;

	double keyid_theta = mu_staco_id_theta->at(i);
	mu_staco_id_theta->at(i) = mu_staco_id_theta->at(i+1);
	mu_staco_id_theta->at(i+1) = keyid_theta;

	double keyd0_exPV = mu_staco_d0_exPV->at(i);
	mu_staco_d0_exPV->at(i) = mu_staco_d0_exPV->at(i+1);
	mu_staco_d0_exPV->at(i+1) = keyd0_exPV;

	double keyz0_exPV = mu_staco_z0_exPV->at(i);
	mu_staco_z0_exPV->at(i) = mu_staco_z0_exPV->at(i+1);
	mu_staco_z0_exPV->at(i+1) = keyz0_exPV;

	double keycov_d0_exPV = mu_staco_cov_d0_exPV->at(i);
	mu_staco_cov_d0_exPV->at(i) = mu_staco_cov_d0_exPV->at(i+1);
	mu_staco_cov_d0_exPV->at(i+1) = keycov_d0_exPV;

	double keyptcone20 = mu_staco_ptcone20->at(i);
	mu_staco_ptcone20->at(i) = mu_staco_ptcone20->at(i+1);
	mu_staco_ptcone20->at(i+1) = keyptcone20;

	double keymatchchi2 = mu_staco_matchchi2->at(i);
	mu_staco_matchchi2->at(i) = mu_staco_matchchi2->at(i+1);
	mu_staco_matchchi2->at(i+1) = keymatchchi2;

	int keyisCombined = mu_staco_isCombinedMuon->at(i);
	mu_staco_isCombinedMuon->at(i) = mu_staco_isCombinedMuon->at(i+1);
	mu_staco_isCombinedMuon->at(i+1) = keyisCombined;

	int keyisLowPtReconstructed = mu_staco_isLowPtReconstructedMuon->at(i);
	mu_staco_isLowPtReconstructedMuon->at(i) = mu_staco_isLowPtReconstructedMuon->at(i+1);
	mu_staco_isLowPtReconstructedMuon->at(i+1) = keyisLowPtReconstructed;

	int keynPixHits = mu_staco_nPixHits->at(i);
	mu_staco_nPixHits->at(i) = mu_staco_nPixHits->at(i+1);
	mu_staco_nPixHits->at(i+1) = keynPixHits;

	int keynSCTHits = mu_staco_nSCTHits->at(i);
	mu_staco_nSCTHits->at(i) = mu_staco_nSCTHits->at(i+1);
	mu_staco_nSCTHits->at(i+1) = keynSCTHits;

	int keynTRTOutliers = mu_staco_nTRTOutliers->at(i);
	mu_staco_nTRTOutliers->at(i) = mu_staco_nTRTOutliers->at(i+1);
	mu_staco_nTRTOutliers->at(i+1) = keynTRTOutliers;

	int keynTRTHits = mu_staco_nTRTHits->at(i);
	mu_staco_nTRTHits->at(i) = mu_staco_nTRTHits->at(i+1);
	mu_staco_nTRTHits->at(i+1) = keynTRTHits;

      }
    }
  }

}

void Analysis1::MT()
{
  if(DEBUG) cout << "-in MT()\n";
  double oneMT;
  double deltaPhi_met_mu;
  for(unsigned int i=0; i<MuN; i++){
    deltaPhi_met_mu = MET_EMJES_RefFinal_CellOutEM_phi - MuPhi.at(i);
    if( deltaPhi_met_mu >  TMath::Pi() ) deltaPhi_met_mu -= 2*TMath::Pi();
    if( deltaPhi_met_mu < -TMath::Pi() ) deltaPhi_met_mu += 2*TMath::Pi();
   
    oneMT = sqrt( 2*MuPt.at(i)*met*( 1-cos( deltaPhi_met_mu ) ) );
    MTs.push_back(oneMT);
  }

}

void Analysis1::DeltaR_MET_Jet()
{
  if(DEBUG) cout << "-in DeltaR_MET_jet()\n";
  double drmetjet;
  double dphimetjet;
  double detametjet;
  for(unsigned int i=0; i<JetN; i++){
    dphimetjet=MET_EMJES_RefFinal_CellOutEM_phi-JetPhi.at(i); 
    if( dphimetjet >  TMath::Pi() ) dphimetjet -= 2*TMath::Pi();
    if( dphimetjet < -TMath::Pi() ) dphimetjet += 2*TMath::Pi();
    DeltaPhiMetJet.push_back(fabs(dphimetjet));
    detametjet=JetEta.at(i); // eta(MET)=0
    drmetjet=sqrt(dphimetjet*dphimetjet + detametjet*detametjet); 
    DeltaRMetJet.push_back(drmetjet);
  }

}

void Analysis1::VertexInfo()
{
  if(DEBUG) cout << "-in VertexInfo()\n";
  v_n = vx_n;
  for(Int_t i=0; i<vx_n; i++){
    v_x.push_back( vx_x->at(i) );
    v_y.push_back( vx_y->at(i) );
    v_z.push_back( vx_z->at(i) );
    double r = sqrt(  pow( vx_x->at(i), 2 ) 
                      + pow( vx_y->at(i), 2 )
                      + pow( vx_z->at(i), 2) );
    v_r.push_back( r );
    v_errx.push_back( vx_errx->at(i) );
    v_erry.push_back( vx_erry->at(i) );
    v_errz.push_back( vx_errz->at(i) );
    v_covxy.push_back( vx_covxy->at(i) );
    v_covyz.push_back( vx_covyz->at(i) );
    v_covzx.push_back( vx_covzx->at(i) );
    v_chi2.push_back( vx_chi2->at(i) );
    v_ndof.push_back( vx_ndof->at(i) );
    v_type.push_back( vx_type->at(i) );
    v_nTracks.push_back( vx_nTracks->at(i) );
 
  }
}


