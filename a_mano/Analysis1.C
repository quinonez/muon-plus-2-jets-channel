#define Analysis1_cxx
#include "Analysis1.h"
#include "AnalysisBase.h"
#include "W_From_jj.h"
#include "GRL.h"
#include "egammaPIDdefs.h"
#include "checkOQ.h"
#include "robustIsEMDefs.h"

#include <TH2.h>
#include <TMath.h>
#include <TChain.h>
#include <TString.h>
#include <TTree.h>
#include <TFile.h>
#include <TLorentzVector.h>

#include <vector>
#include <algorithm>
#include <iostream>
#include <new>
#include <cmath>
#include <string>
#include <fstream>


using namespace std;

Analysis1::Analysis1( vector<string> FILELIST )
{
  // open input files
  TChain* ch = new TChain("susy","");

  for ( UInt_t iFile=0; iFile < FILELIST.size(); ++iFile){
    //cout << "open " << FILELIST[iFile].c_str() << endl;
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

void Analysis1::EventsLoop()
{
  isRealData = false;
  fChain -> SetBranchStatus("*",1);

  if ( fChain == 0 ) return;
  Long64_t nentries = fChain -> GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;

  TFile f("file.root","RECREATE");
  TTree* Nt = new TTree( "Nt", "Nt" );
  Nt -> Branch( "DeltaR_Wmu", &DeltaR_Wmu );
  Nt -> Branch( "DeltaPhi_Wmu", &DeltaPhi_Wmu );
  Nt -> Branch( "DeltaEta_Wmu", &DeltaEta_Wmu );
  Nt -> Branch( "em", &em, "em/D" );
  Nt -> Branch( "ts", &ts, "ts/D" );
  Nt -> Branch( "met", &met, "met/D" );
  Nt -> Branch( "m_Wmu", &m_Wmu );
  Nt -> Branch( "pt_Wmu", &pt_Wmu );
  Nt -> Branch( "O_mu20", &O_mu20, "O_mu20/B" );
  Nt -> Branch( "O_mu15", &O_mu15, "O_mu15/B" );
  Nt -> Branch( "O_mu10", &O_mu10, "O_mu10/B" );
  Nt -> Branch( "O_mu6", &O_mu6, "O_mu6/B" );
  Nt -> Branch( "MuN", &MuN, "MuN/I" );
  Nt -> Branch( "MuEtCone20", &MuEtCone20 );
  Nt -> Branch( "MuPt", &MuPt );
  Nt -> Branch( "MuEta", &MuEta );
  Nt -> Branch( "MuPhi", &MuPhi );
  Nt -> Branch( "MuEnergy", &MuEnergy );
  Nt -> Branch( "Mud0_exPV", &Mud0_exPV );
  Nt -> Branch( "Mud0_exPVe", &Mud0_exPVe );
  Nt -> Branch( "Muz0_exPV", &Muz0_exPV );
  Nt -> Branch( "Mur0_exPV", &Mur0_exPV );
  Nt -> Branch( "JetN", &JetN, "JetN/I" );
  Nt -> Branch( "JetPt", &JetPt );
  Nt -> Branch( "JetEta", &JetEta );
  Nt -> Branch( "JetPhi", &JetPhi );
  Nt -> Branch( "JetEnergy", &JetEnergy );
  Nt -> Branch( "DeltaR_jj", &DeltaR_jj );
  Nt -> Branch( "DeltaEta_jj", &DeltaEta_jj );
  Nt -> Branch( "DeltaPhi_jj", &DeltaPhi_jj );
  Nt -> Branch( "pt_jj", &pt_jj ); 
  Nt -> Branch( "m_jj", &m_jj );
  Nt -> Branch( "EF_mu20", &EF_mu20, "EF_mu20/B" );
  Nt -> Branch( "EF_mu15", &EF_mu15, "EF_mu15/B" );
  Nt -> Branch( "EF_mu13", &EF_mu13, "EF_mu13/B" );
  Nt -> Branch( "EF_mu10", &EF_mu10, "EF_mu10/B" ); 
  Nt -> Branch( "EF_mu6", &EF_mu6, "EF_mu6/B" );
  Nt -> Branch( "EF_mu10_MSonly", &EF_mu10_MSonly, "EF_mu10_MSonly/B" ); 
  Nt -> Branch( "L2_mu20", &L2_mu20, "L2_mu20/B" ); 
  Nt -> Branch( "L2_mu15", &L2_mu15, "L2_mu15/B" ); 
  Nt -> Branch( "L2_mu10", &L2_mu10, "L2_mu10/B" ); 
  Nt -> Branch( "L2_mu6", &L2_mu6, "L2_mu6/B" ); 
  Nt -> Branch( "L2_mu10_MSonly", &L2_mu10_MSonly, "L2_mu10_MSonly/B" ); 
  Nt -> Branch( "L1_MU20", &L1_MU20, "L1_MU20/B" );
  Nt -> Branch( "L1_MU15", &L1_MU15, "L1_MU15/B" );
  Nt -> Branch( "L1_MU10", &L1_MU10, "L1_MU10/B" );
  Nt -> Branch( "L1_MU6", &L1_MU6, "L1_MU6/B" );
  Nt -> Branch( "L1_MU10_MSonly", &L1_MU10_MSonly, "L1_MU10_MSonly/B" ); 
  Nt -> Branch( "O_mu20", &O_mu20, "O_mu20/B" );
  Nt -> Branch( "O_mu15", &O_mu15, "O_mu15/B" );
  Nt -> Branch( "O_mu10", &O_mu10, "O_mu10/B" );
  Nt -> Branch( "O_mu6", &O_mu6, "O_mu6/B" );
  Nt -> Branch( "O_2j20", &O_2j20, "O_2j20/B" );
  Nt -> Branch( "O_mui", &O_mui, "O_mui/B" );
  Nt -> Branch( "v_n", &v_n, "v_n/I" );
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

  Nt -> Branch( "dv1v2", &dv1v2 );

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

    //AOD to D2PD cuts
    Int_t n1jetet40=0;    
    Int_t n2jetet20=0;
    for(Int_t i=0; i<jet_AntiKt4H1Topo_n; i++){
      if(jet_AntiKt4H1Topo_emscale_pt->at(i)>40.e3 && fabs(jet_AntiKt4H1Topo_eta->at(i))<3.0) n1jetet40++;
      if(jet_AntiKt4H1Topo_emscale_pt->at(i)>20.e3 && fabs(jet_AntiKt4H1Topo_eta->at(i))<3.0) n2jetet20++;
    }
    if(n1jetet40==0) continue;
    if(n2jetet20<2) continue;

    if(MET_Topo_et<=20.e3) continue;
  
    Int_t n1elet10=0;
    for(Int_t i=0; i<el_n; i++){
      if(el_author->at(i)!=0){
        //if(el_loose->at(i)==1){
          if(fabs(el_etas2->at(i))<2.5){
            if(el_pt->at(i)>10.e3){
              n1elet10++;
            } 
          } 
        //}
      } 
    }  
    if(n1elet10==0) continue;

    Int_t n1muet6=0;
    for(Int_t i=0; i<mu_staco_n; i++){
      if( mu_staco_pt->at(i)>6.e3 && fabs(mu_staco_eta->at(i))<2.5) n1muet6++;
    }
    if(n1muet6==0) continue;


    // JET CLEANING
    wasBadJet = false;
    for(Int_t i=0; i<jet_AntiKt4H1Topo_n; i++){
         
      // cleaning applied to jets with EMSJES pt<20 and any eta.
      if( jet_AntiKt4H1Topo_emscale_pt->at(i)*jet_AntiKt4H1Topo_EMJES->at(i) <= 20000. ){
        if( isBadLooseJet(i) ) {
          wasBadJet = true;
          break;
        }
      }
    }
    if(wasBadJet) continue;

    // there is at least 1 reco PV with nTracks > 4
    isGoodPV=false;
    for( UInt_t ivx = 0; ivx < vx_nTracks->size(); ivx++ ){
      if( vx_nTracks->at(ivx) > 4 ){
        isGoodPV=true;
        break;
      }
    }
    if(!isGoodPV) continue;


    // event veto
    // 
    //EventVeto();
    wasCrackElectron=false;
    for(Int_t i=0; i<el_n; i++){
      if (fabs(el_cl_eta->at(i)) > 1.37 && fabs(el_cl_eta->at(i)) < 1.52) {
        wasCrackElectron=true;
        break;
      }
    }
    if(wasCrackElectron) continue;

    MuPt.clear();
    MuEtCone20.clear();
    MuEta.clear();
    MuPhi.clear();
    MuEnergy.clear();
    Mud0_exPV.clear();
    Mud0_exPVe.clear();
    Muz0_exPV.clear();
    Mur0_exPV.clear();
    JetPt.clear();
    JetEta.clear();
    JetPhi.clear();
    JetEnergy.clear();
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
    dv1v2.clear();



    vector< W_From_jj > Wv;
    vector< W_From_jj >::const_iterator iWv;

    if ( DEBUG ) cout << jentry << endl;
    //FIXME
    Wv.clear();
    
    ts = TransverseSphericity();
    met = MET_EMJES_RefFinal_CellOutEM_et;
    em = EffectiveMass();


    Offline();
    
    MuonInfo();
    JetInfo();
    VertexInfo();
    v1v2();
    Wv = recoWContenedor();
    NeutralinoIssues( Wv );
    Nt->Fill();
  }
  //********************************************************************************
  //********************* END OF THE EVENTS LOOP ***********************************
  //********************************************************************************
  Nt->Write();
  f.Write();
  f.Close();
  return;
}

vector< W_From_jj > Analysis1::recoWContenedor()
{
  vector< W_From_jj > vWBosons;
  double jet1pt, jet1eta, jet1phi, jet1e;
  double jet2pt, jet2eta, jet2phi, jet2e;
  TLorentzVector JetA, JetB, JetJet;
  //double WMassRadio2 = 5.e3;
  //const double W_mass = 80403;
  //double WDiff;

  vWBosons.clear();

  // I.1 reconstruct j-j
  for(Int_t i = 0; i < jet_AntiKt4H1Topo_n-1; i++){
    if(fabs(jet_AntiKt4H1Topo_eta->at(i))>=2.5) continue;
    jet1pt = jet_AntiKt4H1Topo_pt -> at(i);
    //if(jet1pt <= 20.e3) continue;
    jet1eta = jet_AntiKt4H1Topo_eta -> at(i);
    jet1phi = jet_AntiKt4H1Topo_phi -> at(i);
    jet1e = jet_AntiKt4H1Topo_E -> at(i);
    JetA.SetPtEtaPhiE( jet1pt, jet1eta, jet1phi, jet1e );

    for(Int_t j = i+1; j < jet_AntiKt4H1Topo_n; j++){
    if(fabs(jet_AntiKt4H1Topo_eta->at(j))>=2.5) continue;
      jet2pt = jet_AntiKt4H1Topo_pt -> at(j);
      //if( jet2pt <= 20.e3 ) continue;
      jet2eta = jet_AntiKt4H1Topo_eta -> at(j);
      jet2phi = jet_AntiKt4H1Topo_phi -> at(j);
      jet2e = jet_AntiKt4H1Topo_E -> at(j);

      JetB.SetPtEtaPhiE( jet2pt, jet2eta, jet2phi, jet2e );
      JetJet.SetPxPyPzE( JetA.Px() + JetB.Px(), JetA.Py() + JetB.Py(), JetA.Pz() + JetB.Pz(), JetA.E() + JetB.E()  );
      //WDiff = JetJet.M() - W_mass;
      //if( fabs(WDiff) < WMassRadio2 ){
      m_jj .push_back( JetJet.M() );
      pt_jj .push_back( JetJet.Pt() );      
  
      double dEta_jj = jet1eta - jet2eta;   
      DeltaEta_jj .push_back( dEta_jj );
      double dPhi_jj = jet1phi - jet2phi;
      if( dPhi_jj >  TMath::Pi() ) dPhi_jj -= 2*TMath::Pi();
      if( dPhi_jj < -TMath::Pi() ) dPhi_jj += 2*TMath::Pi();
      DeltaPhi_jj.push_back(dPhi_jj);

      double dR_jj = sqrt(  pow( dEta_jj, 2) + pow( dPhi_jj, 2) );
      DeltaR_jj .push_back( dR_jj );
      
      W_From_jj myWBoson( JetJet, dR_jj );
      vWBosons.push_back( myWBoson );	
      //}
    } //second for
  } //first for
  return vWBosons;

}
//---------------------------------------------------------
void Analysis1::NeutralinoIssues( vector< W_From_jj > jj )
{
  //TLorentzVector JJ;
  TLorentzVector Muon;
  TLorentzVector MuonJetJet;

  vector<W_From_jj>::const_iterator iW;

  // reconstruct mu-W
  for(Int_t i = 0; i < mu_staco_n; i++){
    if(!isMuon(i)) continue;
    muPt = mu_staco_pt -> at(i);
    muEtCone20 = mu_staco_etcone20 -> at(i);
    muEta = mu_staco_eta -> at(i);
    muPhi = mu_staco_phi -> at(i);
    muEnergy = mu_staco_E -> at(i);

    Muon.SetPtEtaPhiE(  muPt, muEta, muPhi, muEnergy );

    for( iW = jj.begin(); iW != jj.end(); iW++ ){
      TLorentzVector JJ = iW -> GETP4();
      MuonJetJet.SetPxPyPzE( JJ.Px() + Muon.Px(), JJ.Py() + Muon.Py(), JJ.Pz() + Muon.Pz(), JJ.E() + Muon.E() );

      dm_Wmu = MuonJetJet.M();
      m_Wmu.push_back( dm_Wmu );
      dpt_Wmu = MuonJetJet.Pt();
      pt_Wmu .push_back( dpt_Wmu );
      if(DEBUG) cout << "la masa del neutralino = " << dm_Wmu << endl;
      if(DEBUG) cout << "el pt del neutralino = " << dpt_Wmu << endl;

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
//-----------------------------------------------------
void Analysis1::Offline()
{

  nMu20PerEvent = 0;
  nMu13PerEvent = 0;
  nMu15PerEvent = 0;
  nMu10PerEvent = 0;
  nMu6PerEvent = 0;
  nMu10_MSonlyPerEvent = 0;



  nMuIso40PerEvent = 0;
  nMuNoIso40PerEvent = 0;
  n2j20PerEvent = 0;


  //muons
  if( mu_staco_n < 1 ){
    O_mu20 = false;
    O_mu13 = false;
    O_mu15 = false;
    O_mu10 = false;
    O_mu6 = false;
    O_mu10_MSonly = false; 

    O_mui = false; 
  }
  else {
      
    for(Int_t i = 0; i < mu_staco_n; i++){
      if(!isMuon(i)) continue;
    
      muPt = mu_staco_pt->at(i);
      muEtCone20 = mu_staco_etcone20->at(i);
      muPtms = fabs( mu_staco_ms_theta->at(i) / mu_staco_ms_qoverp->at(i)   );
     
      if( muPt > 20.e3 ){
	nMu20PerEvent++;
      }

      if( muPt > 13.e3 ){
	nMu13PerEvent++;
      }


      if( muPt > 15.e3 ){
	nMu15PerEvent++;
      }

      if( muPt > 10.e3 ){
	nMu10PerEvent++;
      }

      if( muPt > 6.e3 ){
	nMu6PerEvent++;
      }

      if( muPtms > 10.e3 ){
	nMu10_MSonlyPerEvent++;
      }
    

      if( muEtCone20 < 40.e3 ){
	nMuIso40PerEvent++;
      }
      else
	nMuNoIso40PerEvent++;

    } // end for 

    if( nMu20PerEvent > 0 ) {
      O_mu20 = true;
      //nmu20Events++;
    }
    else 
      O_mu20 = false; 

    if( nMu15PerEvent > 0 ) {
      O_mu15 = true;
      //nmu15Events++;
    }
    else 
      O_mu15 = false; 

    if( nMu13PerEvent > 0 ) {
      O_mu13 = true;
      //nmu13Events++;
    }
    else 
      O_mu13 = false; 

	
    if( nMu10PerEvent > 0 ) {
      O_mu10 = true;
      //nmu10Events++;
    }
    else 
      O_mu10 = false;
    
    if( nMu6PerEvent > 0 ) {
      O_mu6 = true;
      //nmu6Events++;
    }
    else 
      O_mu6 = false;

    if( nMuIso40PerEvent > 0 ) {
      O_mui = true;
      //nmuiso40Events++;
    }
    else {
      O_mui = false;
      //nmunoiso40Events++;
    }

    if( nMu10_MSonlyPerEvent > 0 ) {
      O_mu10_MSonly = true;
      //nmu10_MSonlyEvents++;
    }
    else 
      O_mu10_MSonly = false;


  } //end else

    // jets
  if( jet_AntiKt4H1Topo_n < 2) {
    O_2j20 = false;    
  }
  else {
    for( Int_t i = 0; i < jet_AntiKt4H1Topo_n; i++ ){
      jetPt = jet_AntiKt4H1Topo_pt->at(i);
      if( jetPt > 20000 )
	n2j20PerEvent++;
    }
 
    if( n2j20PerEvent >= 2 ) {
      O_2j20 = true;
      //nol2j20Events++;
    }
    else
      O_2j20= false;

  }

}


double Analysis1::TransverseSphericity()
{
  double T; // Trace
  double D; // Determinant
  double Qx_Qx = 0.0;
  double Qx_Qy = 0.0; 
  double Qy_Qy = 0.0;
  TLorentzVector Electron;
  TLorentzVector Muon;
  TLorentzVector Tauon;
  TLorentzVector Jet;

  for(Int_t i=0; i < el_n; i++ ){
    if(!isElectron(i)) continue;
    Electron.SetPtEtaPhiE( el_pt->at(i), el_eta->at(i), el_phi->at(i), el_E->at(i) );
    Qx_Qx += pow( Electron.Px(), 2);
    Qy_Qy += pow( Electron.Py(), 2);
    Qx_Qy += Electron.Px() * Electron.Py();
  }

  for(Int_t i=0; i < mu_staco_n; i++){
    if(!isMuon(i)) continue;
    Muon.SetPtEtaPhiE( mu_staco_pt->at(i), mu_staco_eta->at(i), mu_staco_phi->at(i), mu_staco_E->at(i) );
    Qx_Qx += pow( Muon.Px(), 2);
    Qy_Qy += pow( Muon.Py(), 2);
    Qx_Qy += Muon.Px() * Muon.Py();
  }

  for(Int_t i=0; i < tau_n; i++){
    Tauon.SetPtEtaPhiM( tau_pt->at(i), tau_eta->at(i), tau_phi->at(i), tau_m->at(i) );
    Qx_Qx += pow( Tauon.Px(), 2);
    Qy_Qy += pow( Tauon.Py(), 2);
    Qx_Qy += Tauon.Px() * Tauon.Py();
  }

  for(Int_t i=0; i < jet_AntiKt4H1Topo_n; i++){
    if( fabs( jet_AntiKt4H1Topo_eta->at(i) ) >= 2.5 ) continue;
    Jet.SetPtEtaPhiE( jet_AntiKt4H1Topo_pt->at(i), jet_AntiKt4H1Topo_eta->at(i), jet_AntiKt4H1Topo_phi->at(i), jet_AntiKt4H1Topo_E->at(i) );
    Qx_Qx += pow( Jet.Px(), 2);
    Qy_Qy += pow( Jet.Py(), 2);
    Qx_Qy += Jet.Px() * Jet.Py();
  }

  T = Qx_Qx + Qy_Qy;
  if( T <= 0.00000001 ) return 0.0;
  D = Qx_Qx * Qy_Qy - pow( Qx_Qy, 2);
  double s = 1.0 - sqrt( T*T - 4*D ) / T;
  return s;
}

double Analysis1::EffectiveMass()
{
  double em1 = MET_EMJES_RefFinal_CellOutEM_et;
  vector<double> ptjets;
  vector<double>::const_iterator it; 

  /*
    for( Int_t i=0; i < el_n; i++ )
    em1 += el_pt->at(i); 
  */

  for(Int_t i=0; i < mu_staco_n; i++){
    if(!isMuon(i)) continue;
    em1 += mu_staco_pt->at(i);
  }
  /*
    for(Int_t i=0; i < tau_n; i++)
    em1 += tau_pt->at(i);
  */

  ptjets.clear();
  for(Int_t i=0; i < jet_AntiKt4H1Topo_n; i++){
    if( fabs( jet_AntiKt4H1Topo_eta->at(i) ) >= 2.5 ) continue;
    ptjets.push_back( jet_AntiKt4H1Topo_pt->at(i) );
  }
  reverse( ptjets.begin(), ptjets.end() ); 
  if( ptjets.size() >= 2 ) {
    em1 += ptjets.at(0);
    em1 += ptjets.at(1);
  }
  
  if( ptjets.size() == 1 ) em1 += ptjets.at(0);  

  return em1;
}


void Analysis1::MuonInfo()
{
  for(Int_t i=0; i<mu_staco_n; i++){
    if(!isMuon(i)) continue;
    MuPt .push_back( mu_staco_pt -> at(i) );
    MuEta .push_back( mu_staco_eta -> at(i) );
    MuPhi .push_back( mu_staco_phi -> at(i) );
    MuEnergy .push_back( mu_staco_E -> at(i) );
    MuEtCone20 .push_back( mu_staco_etcone20 -> at(i) );
    Mud0_exPV .push_back( fabs( mu_staco_d0_exPV -> at(i) ) );
    if( mu_staco_cov_d0_exPV->at(i)>0.0 ){
      Mud0_exPVe .push_back( fabs( mu_staco_d0_exPV -> at(i) )/ sqrt( mu_staco_cov_d0_exPV -> at(i) ) );
    } else {
      Mud0_exPVe .push_back( -1.0 );
    }

    Muz0_exPV .push_back( fabs( mu_staco_z0_exPV -> at(i) ) );
    double r0 = sqrt( pow(mu_staco_d0_exPV->at(i),2)
		      +pow(mu_staco_z0_exPV->at(i),2));
    Mur0_exPV.push_back(r0); 
  }
  MuN = MuPt.size();
}

void Analysis1::JetInfo()
{
  for(Int_t i=0; i<jet_AntiKt4H1Topo_n; i++){
    if(fabs(jet_AntiKt4H1Topo_eta->at(i))>=2.5) continue;
    JetPt .push_back(  jet_AntiKt4H1Topo_pt -> at(i) );
    JetEta .push_back(  jet_AntiKt4H1Topo_eta -> at(i) );
    JetPhi .push_back(  jet_AntiKt4H1Topo_phi -> at(i) );
    JetEnergy .push_back(  jet_AntiKt4H1Topo_E -> at(i) );
  }
  JetN = JetPt.size();

}

void Analysis1::VertexInfo()
{
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


bool Analysis1::isMuon( Int_t iMu )
{
  if (mu_staco_pt->at(iMu) <= 10000. || fabs(mu_staco_eta->at(iMu)) >= 2.4) return false;
  if (!(mu_staco_isCombinedMuon->at(iMu))) return false;
  if (mu_staco_author->at(iMu) == 2) return false;
  if (mu_staco_etcone20->at(iMu) >= 10000.) return false;
  if (mu_staco_matchchi2->at(iMu) > 100. ||
      mu_staco_matchchi2->at(iMu) < 0.) return false;   

  if(mu_staco_ptcone20->at(iMu) >= 1.8e3) return false;

  //if ( ifabs(mu_staco_z0_exPV->at(iMu)) >= 10.0 ) return false; // Cosmic cleanup cut
  if( fabs(mu_staco_z0_exPV->at(iMu)) >= 10.0 || mu_staco_cov_d0_exPV->at(iMu) > 0.0 && fabs(mu_staco_d0_exPV->at(iMu)/sqrt(mu_staco_cov_d0_exPV->at(iMu))) >= 5.0 ) return false;

  if ( fabs( 1 - ( mu_staco_id_qoverp->at(iMu)/mu_staco_ms_qoverp->at(iMu) ) * 
	     ( sin( mu_staco_ms_theta->at(iMu) ) / sin( mu_staco_id_theta->at(iMu) ) ) ) >= 0.5 ) return false; 
  // above is fabs(pTID-pTMS)/pTID < 0.5 cut --- pt for ms and id not in D3PD, have to use qoverp

  return true;
}

bool Analysis1::isElectron(Int_t iEl)
{
  if (el_pt->at(iEl) <= 10000. || fabs(el_cl_eta->at(iEl)) >= 2.47) return false;
  if (!(el_author->at(iEl) == 1 || el_author->at(iEl) == 3)) return false;
  robustIsEMDefs o2;
  if (!(o2.isRobustMedium(el_isEM->at(iEl),el_etas2->at(iEl),el_cl_E->at(iEl)/cosh(el_etas2->at(iEl)),el_reta->at(iEl),el_weta2->at(iEl)))) return false;
  if (el_expectHitInBLayer->at(iEl) && el_nBLHits->at(iEl) == 0) return false;
  if (el_Etcone20->at(iEl)/el_pt->at(iEl) >= 0.15) return false; // Do not apply this cut for the electrons used in crack veto
  if(isRealData){
    if (egammaOQ::checkOQClusterElectron(RunNumber, el_cl_eta->at(iEl), el_cl_phi->at(iEl))==3) return false;
  } else{
    if (egammaOQ::checkOQClusterElectron(166142, el_cl_eta->at(iEl), el_cl_phi->at(iEl))==3) return false;
  }
  return true;
}

/*
double Analysis1::MET()
{
  double allptmuons = 0;
  for(Int_t i=0; i<mu_staco_n; i++){
    //if( !isMuon(i) ) continue;
    allptmuons += mu_staco_pt->at(i);
  } 
 
  return MET_Goodness_MET_Topo_sumet - allptmuons;
}
*/

void Analysis1::v1v2(){
  double d; 

  for(Int_t i=0; i<mu_staco_n; i++){
    if(!isMuon(i)) continue;
    for(Int_t j=0; j<vx_n; j++){
      d = sqrt( pow(vx_x->at(j)-mu_staco_d0_exPV->at(i) * cos(mu_staco_phi_exPV->at(i)),2) +
                pow( vx_y->at(j) -  mu_staco_d0_exPV->at(i) * sin(mu_staco_phi_exPV->at(i)) ,2) +
                pow(vx_z->at(j) - mu_staco_z0_exPV->at(i), 2)
              );

      dv1v2.push_back(d);

    }
  }

}


  bool Analysis1::isBadLooseJet(Int_t iJet)
  {
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




