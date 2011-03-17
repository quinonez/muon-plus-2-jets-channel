#define Analysis1_cxx
#include "Analysis1.h"
#include "AnalysisBase.h"
#include "W_From_jj.h"
#include "GRL.h"
#include "egammaPIDdefs.h"
#include "checkOQ.h"
#include "robustIsEMDefs.h"
#include "SmearingClass.h"
#include "escalas.h"
#include "egammaSFclass.h"

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
#include <map>
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
  isRealData = true;
  fChain->SetBranchStatus("*",1);

  if ( fChain == 0 ) return;
  Long64_t nentries = fChain -> GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;

  TFile* f = TFile::Open("file.root","RECREATE");
  TTree* Nt = new TTree( "Nt", "Nt" );
  Nt->Branch("isGoodPV",&isGoodPV,"isGoodPV/B");
  Nt->Branch("wasCrackElectron",&wasCrackElectron,"wasCrackElectron/B");
  Nt->Branch("wasCrackElectronMET",&wasCrackElectronMET,"wasCrackElectronMET/B");
  Nt->Branch("wasCrack",&wasCrack,"wasCrack/B");
  Nt->Branch("wasBadJet",&wasBadJet,"wasBadJet/B");
  Nt->Branch("wasCosmicMuon",&wasCosmicMuon,"wasCosmicMuon/B");
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
  if(!isRealData) Nt->Branch("MERS",&MERS);
  Nt->Branch("MTs",&MTs);
  Nt->Branch("DeltaRMetJet",&DeltaRMetJet);
  Nt->Branch("DeltaPhiMetJet",&DeltaPhiMetJet);
  Nt->Branch("JetEnergy",&JetEnergy);
  Nt->Branch("JetPt",&JetPt);
  Nt->Branch("JetEta",&JetEta);
  Nt->Branch("JetPhi",&JetPhi);
  Nt->Branch("JetFlavorWeightSV0",&JetFlavorWeightSV0);
  if(!isRealData) Nt->Branch("JERS",&JERS);
  Nt->Branch("JetEMJES",&JetEMJES);
  Nt->Branch("ElEnergy",&ElEnergy);
  Nt->Branch("ElPt",&ElPt);
  Nt->Branch("ElEta",&ElEta);
  Nt->Branch("ElPhi",&ElPhi);
  Nt->Branch("myEventWeight",&myEventWeight,"myEventWeight/F");
  Nt -> Branch( "vx_nTracks", &vx_nTracks );
  Nt->Branch( "MuN", &MuN, "MuN/I" );
  Nt->Branch( "ElN", &ElN, "ElN/I" );
  Nt->Branch( "ElNBeforeOR", &ElNBeforeOR, "ElNBeforeOR/I" );
  Nt->Branch( "MuNBeforeOR", &MuNBeforeOR, "MuNBeforeOR/I" );
  Nt->Branch( "JetN", &JetN, "JetN/I" );
  Nt->Branch( "JetNBeforeOR", &JetNBeforeOR, "JetNBeforeOR/I" );
  Nt->Branch( "em_muonjetjet", &em_muonjetjet, "em_muonjetjet/D" );
  Nt->Branch( "em_muonjetjetjet", &em_muonjetjetjet, "em_muonjetjetjet/D" );
  Nt->Branch( "ht_muonjetjet", &ht_muonjetjet, "ht_muonjetjet/D" );
  Nt->Branch( "ht_muonjetjetjet", &ht_muonjetjetjet, "ht_muonjetjetjet/D" );
  Nt->Branch( "met", &met, "met/D" );
  Nt->Branch( "metx", &metx, "metx/D" );
  Nt->Branch( "mety", &mety, "mety/D" );
  Nt->Branch( "mysummupx", &mysummupx, "mysummupx/D" );
  Nt->Branch( "mysummupy", &mysummupy, "mysummupy/D" );
  Nt->Branch( "mysumelpx", &mysumelpx, "mysumelpx/D" );
  Nt->Branch( "mysumelpy", &mysumelpy, "mysumelpy/D" );
  Nt->Branch( "mysumjepx", &mysumjepx, "mysumjepx/D" );
  Nt->Branch( "mysumjepy", &mysumjepy, "mysumjepy/D" );

  Nt->Branch("NewMetPhi",&NewMetPhi,"NewMetPhi/D");
  Nt->Branch("MET_EMJES_RefFinal_CellOutEM_phi",&MET_EMJES_RefFinal_CellOutEM_phi,"MET_EMJES_RefFinal_CellOutEM_phi/F");
  Nt->Branch("MET_EMJES_Muon_Total_Staco_etx",&MET_EMJES_Muon_Total_Staco_etx,"MET_EMJES_Muon_Total_Staco_etx/F");
  Nt->Branch("MET_EMJES_Muon_Total_Staco_ety",&MET_EMJES_Muon_Total_Staco_ety,"MET_EMJES_Muon_Total_Staco_ety/F");
  Nt->Branch("MET_EMJES_RefFinal_CellOutEM_etx",&MET_EMJES_RefFinal_CellOutEM_etx,"MET_EMJES_RefFinal_CellOutEM_etx/F");
  Nt->Branch("MET_EMJES_RefFinal_CellOutEM_ety",&MET_EMJES_RefFinal_CellOutEM_ety,"MET_EMJES_RefFinal_CellOutEM_ety/F");

  Nt->Branch( "ts", &ts, "ts/D" );
  Nt->Branch( "deltaphimin", &deltaphimin, "deltaphimin/D");
  Nt->Branch( "asymmetry", &asymmetry, "asymmetry/D" );
  Nt->Branch( "EF_mu13", &EF_mu13, "EF_mu13/B" );
  Nt->Branch( "EF_mu13_tight", &EF_mu13_tight, "EF_mu13_tight/B" );
  Nt->Branch( "EF_mu10_MSonly", &EF_mu10_MSonly, "EF_mu10_MSonly/B" ); 
  Nt->Branch( "L1_MU6", &L1_MU6, "L1_MU6/B" );
  Nt->Branch( "L1_2J15", &L1_2J15, "L1_2J15/B" );
  Nt->Branch( "L1_TAU11", &L1_TAU11, "L1_TAU11/B" );
  Nt->Branch("wasCosmicMuon",&wasCosmicMuon,"wasCosmicMuon/B");
  Nt->Branch("MuTrigger",&MuTrigger,"MuTrigger/B");
  Nt->Branch("miEscala",&miEscala,"miEscala/D");
  Nt->Branch("mikFactor",&mikFactor,"mikFactor/D");
  Nt->Branch("RunNumber",&RunNumber,"RunNumber/I");
  Nt->Branch("EventNumber",&EventNumber,"EventNumber/I");
  Nt->Branch("lbn",&lbn,"lbn/I");
  Nt->Branch("wasjptlet30",&wasjptlet30,"wasjptlet30/B");




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

    if(mygrl==false) continue; //continue to the next for iteration.

    // there is at least 1 reco PV with nTracks > 4
    isGoodPV=false;
    for( unsigned int ivx = 0; ivx < vx_nTracks->size(); ivx++ ){
      if( vx_nTracks->at(ivx) > 4 ){
        isGoodPV=true;
        break;
      }
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

    wasCrackElectronMET=false;
    for(Int_t i=0; i<el_n; i++){
      if(!isElectronForEtMiss(i)) continue;
      if (fabs(el_cl_eta->at(i)) > 1.37 && fabs(el_cl_eta->at(i)) < 1.52) {
        wasCrackElectronMET=true;
        break;
      }
    }

    wasCrack=false;
    for(Int_t i=0; i<el_n; i++){
      if (fabs(el_cl_eta->at(i)) > 1.37 && fabs(el_cl_eta->at(i)) < 1.52) {
        wasCrack=true;
        break;
      }
    }

    CLEAR();
    if(!isRealData){
      myJetSmearing();
      myMuonSmearing(jentry);
    }
    JetInfo();
    // by cause of the muon smearing, MuonInfo have to be before of the calculation of the met.
    MuonInfo();
    ElectronInfo();
    OverlapRemoval();
    // JET CLEANING
    wasBadJet = false;
    for(unsigned int i=0; i<JetN; i++){
      // cleaning applied to jets with EMSJES* emscale_ pt>20 and any eta.
      if( JetPt.at(i)> 20000. ){
	if( isBadLooseJet(i) ) {
	  wasBadJet = true;
	  break;
	}
      }
    }

      
    if(isRealData){
      if(RunNumber>=152166 && RunNumber<=159224) MuTrigger = L1_MU6;
      if(RunNumber>=160387 && RunNumber<=162882) MuTrigger = EF_mu10_MSonly;
      if(RunNumber>=165591 && RunNumber<=166964) MuTrigger = EF_mu13;
      if(RunNumber>=167575 && RunNumber<=167844) MuTrigger = EF_mu13_tight;
    } else {
      MuTrigger = EF_mu10_MSonly;
    } 
    escalas oE;
    miEscala = oE.putscale(RunNumber,isRealData);
    mikFactor = oE.putkfactor(RunNumber,isRealData);

    met = MET();

    if(!isRealData) ElectronScaling();
    else myEventWeight = 1.0;

    wasjptlet30=false;
    for(unsigned int i=0; i<JetN; i++){
      if(JetPt.at(i)<=30.e3){
	wasjptlet30=true;
	break;
      }
    }

    Asymmetry_DeltaPhiMin();
    DeltaR_MET_Jet();
    MT();
    Wv = recoWContenedor();
    recoMuJetJet( Wv );
 
    ts = TransverseSphericity();

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
  //********************************************************************************
  //********************* END OF THE EVENTS LOOP ***********************************
  //********************************************************************************
  if(DEBUG) cout << "despues de events loop\n";
  f->cd();
  Nt->Write();
  if(DEBUG) cout << "despues de Nt->Write()\n";
  f->Close();
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

  for(int i=0; i < tau_n; i++){
    Tauon.SetPtEtaPhiM( tau_pt->at(i), tau_eta->at(i), tau_phi->at(i), tau_m->at(i) );
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




double Analysis1::EffectiveMass(double ht2)
{
  if(DEBUG) cout << "-in EffectiveMass\n";
  double em1 = met;
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
    if(!isRealData) MERSBeforeOR.push_back(MERSBeforeMuonInfo.at(iMu));
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
    ElClEtaBeforeOR.push_back(el_cl_eta->at(i));
  }
  ElNBeforeOR = ElPtBeforeOR.size();

}


void Analysis1::myJetSmearing()
{
  if(DEBUG) cout << "-in myJetSmearing()\n";
  double jptGeV;
  double cor;

  for(Int_t i=0; i<jet_AntiKt4H1Topo_n; i++){
    jptGeV = jet_AntiKt4H1Topo_EMJES->at(i) * jet_AntiKt4H1Topo_emscale_pt->at(i) / 1000;
    JERSBeforeJetInfo.push_back(cor);
    cor = getSmearingCor(jptGeV);

    jet_AntiKt4H1Topo_emscale_E->at(i) = cor * jet_AntiKt4H1Topo_emscale_E->at(i);
    jet_AntiKt4H1Topo_emscale_pt->at(i) = cor * jet_AntiKt4H1Topo_emscale_pt->at(i);  
  }
  //reverse sort of the JetPt
  if(jet_AntiKt4H1Topo_n>=2){
    for(int pass=0; pass<jet_AntiKt4H1Topo_n-1; pass++){
      for(int i=0; i<jet_AntiKt4H1Topo_n-1; i++){
        if(jet_AntiKt4H1Topo_emscale_pt->at(i)<jet_AntiKt4H1Topo_emscale_pt->at(i+1)){
          double keyJERSBeforeJetInfo = JERSBeforeJetInfo.at(i);
          JERSBeforeJetInfo.at(i) = JERSBeforeJetInfo.at(i+1);
          JERSBeforeJetInfo.at(i+1) = keyJERSBeforeJetInfo;

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

          double keyflavor_weight_SV0 = jet_AntiKt4H1Topo_flavor_weight_SV0->at(i);
          jet_AntiKt4H1Topo_flavor_weight_SV0->at(i) = jet_AntiKt4H1Topo_flavor_weight_SV0->at(i+1);
          jet_AntiKt4H1Topo_flavor_weight_SV0->at(i+1) = keyflavor_weight_SV0;


        }
      }
    }
  } 


}

void Analysis1::JetInfo()
{
  if(DEBUG) cout << "-in JetInfo()\n";
  for(Int_t i=0; i<jet_AntiKt4H1Topo_n; i++){
    if(!isJet(i)) continue;

    JetEMJESBeforeOR.push_back(jet_AntiKt4H1Topo_EMJES->at(i));
    JetEnergyBeforeOR.push_back( jet_AntiKt4H1Topo_emscale_E->at(i) * jet_AntiKt4H1Topo_EMJES->at(i) );
    JetEtaBeforeOR.push_back(  jet_AntiKt4H1Topo_emscale_eta->at(i) );
    JetPhiBeforeOR.push_back(  jet_AntiKt4H1Topo_emscale_phi->at(i) );
    JetPtBeforeOR.push_back( jet_AntiKt4H1Topo_emscale_pt->at(i) * jet_AntiKt4H1Topo_EMJES->at(i) );
    JetFlavorWeightSV0BeforeOR.push_back( jet_AntiKt4H1Topo_flavor_weight_SV0->at(i) );
    if(!isRealData) JERSBeforeOR.push_back(JERSBeforeJetInfo.at(i));
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
  double DeltaR_jet_el, DeltaR_jet_mu;

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
      JetPt.push_back( JetPtBeforeOR.at(i) );
      JetEta.push_back( JetEtaBeforeOR.at(i) );
      JetPhi.push_back( JetPhiBeforeOR.at(i) );
      JetEnergy.push_back( JetEnergyBeforeOR.at(i) );
      JetFlavorWeightSV0.push_back(JetFlavorWeightSV0BeforeOR.at(i));
      if(!isRealData) JERS.push_back(JERSBeforeOR.at(i));
      JetEMJES.push_back(JetEMJESBeforeOR.at(i));
    }
  }
  JetN = JetPt.size();

  if(DEBUG) cout << "before electronOR\n";
  for(unsigned int i=0; i<ElNBeforeOR; i++){
    electron.SetPtEtaPhiE(ElPtBeforeOR.at(i),ElEtaBeforeOR.at(i),ElPhiBeforeOR.at(i),ElEnergyBeforeOR.at(i));
    for(unsigned int j=0; j<JetN; j++){
      jet.SetPtEtaPhiE(JetPt.at(j),JetEta.at(j),JetPhi.at(j),JetEnergy.at(j));
      DeltaR_jet_el = jet.DeltaR(electron);
      if(DeltaR_jet_el>=0.2 && DeltaR_jet_el<0.4){
        eljetRemoval0204 = true;
        break; 
      }
    }
    if(!eljetRemoval0204){
      ElPt.push_back( ElPtBeforeOR.at(i) );
      ElEta.push_back( ElEtaBeforeOR.at(i) );
      ElPhi.push_back( ElPhiBeforeOR.at(i) );
      ElEnergy.push_back( ElEnergyBeforeOR.at(i) );
      ElClEta.push_back(ElClEtaBeforeOR.at(i)); 
    }
  }
  ElN = ElPt.size();

  if(DEBUG) cout << "before muonOR\n";
  if(DEBUG) cout << "MuNBeforeOR="<<MuNBeforeOR<<", JetN="<<JetN<<endl;
  for(unsigned int i=0; i<MuNBeforeOR; i++){
    muon.SetPtEtaPhiE(MuPtBeforeOR.at(i),MuEtaBeforeOR.at(i),MuPhiBeforeOR.at(i),MuEnergyBeforeOR.at(i));
    for(unsigned int j=0; j<JetN; j++){
      jet.SetPtEtaPhiE(JetPt.at(j),JetEta.at(j),JetPhi.at(j),JetEnergy.at(j));
      DeltaR_jet_mu = jet.DeltaR(muon);
      if(DeltaR_jet_mu<0.4){
        mujetRemoval04 = true;
        break; 
      }
    }
    if(!mujetRemoval04){
      MuPt.push_back( MuPtBeforeOR.at(i) );
      MuPtms.push_back( MuPtmsBeforeOR.at(i) );
      MuEta.push_back( MuEtaBeforeOR.at(i) );
      MuPhi.push_back( MuPhiBeforeOR.at(i) );
      MuEnergy.push_back( MuEnergyBeforeOR.at(i) );
      MuEtCone20.push_back( MuEtCone20BeforeOR.at(i)); 
      Mud0_exPV.push_back( Mud0_exPVBeforeOR.at(i) ); 
      Mud0_exPVe.push_back( Mud0_exPVeBeforeOR.at(i) ); 
      Muz0_exPV.push_back( Muz0_exPVBeforeOR.at(i) ); 
      Mur0_exPV.push_back( Mur0_exPVBeforeOR.at(i) ); 
      if(!isRealData) MERS.push_back(MERSBeforeOR.at(i));          
    }
  }
  MuN = MuPt.size();

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
    double deltaphi0 = JetPhi.at(0)-NewMetPhi;
    if( deltaphi0 > TMath::Pi() ) deltaphi0 -= 2 * TMath::Pi();
    if( deltaphi0 < -TMath::Pi() ) deltaphi0 += 2 * TMath::Pi();
    double deltaphi1 = JetPhi.at(1)-NewMetPhi;
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

  if(isRealData){
    if (egammaOQ::checkOQClusterElectron(RunNumber, el_cl_eta->at(iEl), el_cl_phi->at(iEl))==3) return false;
  } else{
    if (egammaOQ::checkOQClusterElectron(167521, el_cl_eta->at(iEl), el_cl_phi->at(iEl))==3) return false;
  }

  return true;
}



double Analysis1::MET()
{
  if(DEBUG) cout << "-in MET()\n";
  //Remove the muon term from the MET:
  metx = MET_EMJES_RefFinal_CellOutEM_etx
    - MET_EMJES_Muon_Total_Staco_etx;
  mety = MET_EMJES_RefFinal_CellOutEM_ety
    - MET_EMJES_Muon_Total_Staco_ety;

  //Loop over the selected muons (before the 'overlap removal' and without any isolation (ptcone20) cut):
  mysummupx=0.0;
  mysummupy=0.0;
  for(int imu=0;imu<mu_staco_n;imu++){
    if(isMuonForEtMiss(imu)){  
      metx -= mu_staco_pt->at(imu)*cos(mu_staco_phi->at(imu));
      mety -= mu_staco_pt->at(imu)*sin(mu_staco_phi->at(imu));
      mysummupx+=mu_staco_pt->at(imu)*cos(mu_staco_phi->at(imu));
      mysummupy+=mu_staco_pt->at(imu)*sin(mu_staco_phi->at(imu));
    
    }
  }

  //double met=sqrt(pow(metx,2)+pow(mety,2));

  // Code to correct SimplifiedRefFinal for wrong electron/jet
  // overlap removal in default SimplifiedRefFinal calculation
  // Please be aware that not all code to identify good electrons
  // is included in this snippet.
  mysumelpx=0.0;
  mysumelpy=0.0;
  mysumjepx=0.0;
  mysumjepy=0.0;

  for( int e = 0; e < el_n; e++ ){
    TLorentzVector electron;
    electron.SetPtEtaPhiE(el_pt->at(e), el_eta->at(e), el_phi->at(e), el_E->at(e));

    if(isElectronForEtMiss(e) && el_medium->at(e) != 1) {
      for (unsigned int j = 0; j < JetN; j++){
	TLorentzVector jet;
	jet.SetPtEtaPhiE(jet_AntiKt4H1Topo_emscale_pt->at(j) * jet_AntiKt4H1Topo_EMJES->at(j), jet_AntiKt4H1Topo_emscale_eta->at(j), jet_AntiKt4H1Topo_emscale_phi->at(j), jet_AntiKt4H1Topo_emscale_E->at(j) * jet_AntiKt4H1Topo_EMJES->at(j));

	double DeltaR_ejet = electron.DeltaR(jet);
	if(DeltaR_ejet < 0.2) {
	  metx += jet.Px();
	  mety += jet.Py();
	  metx -= electron.Px();
	  mety -= electron.Py();
          mysumelpx+=jet.Px();
          mysumelpy+=jet.Py();
          mysumjepx+=electron.Px();
          mysumjepy+=electron.Py();

	}
      }
    }
  }

  double met1 = sqrt(pow(metx,2)+pow(mety,2));

  //calculate
  if(metx > 0){
     NewMetPhi = atan(mety/metx);
  } else if(metx<0 && mety>=0){
    NewMetPhi = atan(mety/metx) + TMath::Pi();
  } else if(metx<0 && mety<0){
    NewMetPhi = atan(mety/metx) - TMath::Pi();
  } else if(metx==0 && mety>0){
    NewMetPhi=  TMath::Pi()/2.0; 
  } else if(metx==0 && mety<0){
    NewMetPhi= -TMath::Pi()/2.0; 
  } else if(metx==0 && mety==0){
    NewMetPhi = 5*TMath::Pi();
  }

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
  MERS.clear();
  MERSBeforeMuonInfo.clear();
  MERSBeforeOR.clear();
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


  JetPt.clear();
  JetEnergy.clear();
  JetEta.clear();
  JetPhi.clear();
  JetPtBeforeOR.clear();
  JetEnergyBeforeOR.clear();
  JetEtaBeforeOR.clear();
  JetPhiBeforeOR.clear();
  JetFlavorWeightSV0.clear();
  JetFlavorWeightSV0BeforeOR.clear();
  JERS.clear();  
  JERSBeforeJetInfo.clear();
  JERSBeforeOR.clear();
  JetEMJESBeforeOR.clear();
  JetEMJES.clear();


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

    MERSBeforeMuonInfo.push_back(mypt/mu_staco_pt->at(iMu));
    mu_staco_pt->at(iMu) = mypt; // Overwrite muon pt for later use in analysis
    mu_staco_px->at(iMu) = mypt*cos(mu_staco_phi->at(iMu)); // Used to recompute MEx
    mu_staco_py->at(iMu) = mypt*sin(mu_staco_phi->at(iMu)); // Used to recompute MEy
  }
  //reverse sort of the Muon's components
  for(int pass=0; pass<mu_staco_n-1; pass++){
    for(int i=0; i<mu_staco_n-1; i++){
      if(mu_staco_pt->at(i)<mu_staco_pt->at(i+1)){

	double keyMERSBeforeMuonInfo = MERSBeforeMuonInfo.at(i);
	MERSBeforeMuonInfo.at(i) = MERSBeforeMuonInfo.at(i+1);
	MERSBeforeMuonInfo.at(i+1) = keyMERSBeforeMuonInfo;

         
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
    deltaPhi_met_mu = NewMetPhi - MuPhi.at(i);
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
    dphimetjet=NewMetPhi-JetPhi.at(i); 
    if( dphimetjet >  TMath::Pi() ) dphimetjet -= 2*TMath::Pi();
    if( dphimetjet < -TMath::Pi() ) dphimetjet += 2*TMath::Pi();
    DeltaPhiMetJet.push_back(fabs(dphimetjet));
    detametjet=JetEta.at(i); // eta(MET)=0
    drmetjet=sqrt(dphimetjet*dphimetjet + detametjet*detametjet); 
    DeltaRMetJet.push_back(drmetjet);
  }

}


bool Analysis1::isElectronForEtMiss(int iEl)
{
  if (el_pt->at(iEl) <= 10000. || fabs(el_cl_eta->at(iEl)) >= 2.47) return false;
  if (!(el_author->at(iEl) == 1 || el_author->at(iEl) == 3)) return false;
  robustIsEMDefs o3;
  if (!(o3.isRobustMedium(el_isEM->at(iEl),el_etas2->at(iEl),el_cl_E->at(iEl)/cosh(el_etas2->at(iEl)),el_reta->at(iEl),el_weta2->at(iEl)))) return false;
  
  return true;

}

void Analysis1::ElectronScaling()
{
  for(unsigned int i=0; i<ElN; i++){
    // RobustLoose (set=0), RobustMedium (set=1) and RobusterTight (set=2)
    egammaSFclass obj;
    myEventWeight *= obj.scaleFactor(ElClEta.at(i), 0, 0, 0).first;
    //myEventWeight *= egammaSFclass.scaleFactor(ElClEta.at(i), 0, 0, 0).first;
  }
}


