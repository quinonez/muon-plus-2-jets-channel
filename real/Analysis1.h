#ifndef Analysis1_h
#define Analysis1_h

#include "AnalysisBase.h"
#include "W_From_jj.h"

#include <new>
#include <vector>
#include <iostream>
#include <string>

#include <TLorentzVector.h>
#include <TH2.h>
#include <TTree.h>
#include <TString.h>

using namespace std;


class Analysis1 : public AnalysisBase
{
public:

  Analysis1( vector<string> );
  Analysis1( int Nfiles, TString** name );
  Analysis1( string );
  Analysis1( TTree* = 0 );
  virtual ~Analysis1();
  //void Selection();
  void setCuts( double = 1.2e6, double = 0.2, float = 40.e3, double = 2.5, double = 1.5 );
  void EventsLoop();

private:

 inline bool isBadLooseJet( Int_t  );

  bool wasBadJet;
  bool wasCrackElectron;

  bool DEBUG;
  bool isRealData;
  double EMCut;
  double TSCut;
  float METCut;
  double DeltaRjjCut;
  double DeltaRWmuCut;

  double EffectiveMass(double);

  double TransverseSphericity();
  double TransverseSphericityJetSmeared();

  double HT();
  double HTJetSmeared();

  double HT_muonjetjet();
  double HT_muonjetjetJetSmeared();

  double HT_electronjetjet();
  double HT_electronjetjetJetSmeared();

  void MuonInfo();
  void ElectronInfo();

  void JetInfo();
  inline double getSmearingCor(double);


  void VertexInfo();
  //void EventVeto();
  inline bool isJet( Int_t );
  inline bool isMuon( Int_t );
  inline bool isMuonForEtMiss( Int_t );
  inline bool isElectron( Int_t );

  bool isGoodPV;
  double MET();
  void v1v2();

  vector<W_From_jj> recoWContenedor();
  vector< W_From_jj > Wv;

  vector<W_From_jj> recoWContenedorJetSmeared();
  vector< W_From_jj > WvJetSmeared;


  void recoMuJetJet( vector< W_From_jj > );
  void recoMuJetJet_JetSmeared( vector< W_From_jj > );

  void recoElJetJet( vector< W_From_jj > );
  void recoElJetJet_JetSmeared( vector< W_From_jj > );

  bool mygrl;

  //W_From_jj myWBoson;

  //TTree* Nt;

  int MuN;
  int ElN;
  int JetN;
  int v_n;

  double muPt;
  double muEtCone20;
  double muEta;
  double muPhi;
  double muEnergy;
  double muPtms;

  double elPt;
  double elEtCone20;
  double elEta;
  double elPhi;
  double elEnergy;

  double jetPt;

  double dm_Wmu;
  double dpt_Wmu;
  double dEta_Wmu;
  double dPhi_Wmu;
  double dR_Wmu;
  double dm_Wel;
  double dpt_Wel;
  double dEta_Wel;
  double dPhi_Wel;
  double dR_Wel;

  vector<double> MuPt;
  vector<double> MuEtCone20;
  vector<double> MuEta;
  vector<double> MuPhi;
  vector<double> MuEnergy;
  vector<double> Mud0_exPV;
  vector<double> Mud0_exPVe;
  vector<double> Muz0_exPV;
  vector<double> Mur0_exPV;

  vector<double> ElPt;
  vector<double> ElEtCone20;
  vector<double> ElEta;
  vector<double> ElPhi;
  vector<double> ElEnergy;


  vector<double> JetPt;
  vector<double> JetEta;
  vector<double> JetPhi;
  vector<double> JetEnergy;
  vector<double> JetSmearedEnergy;
  vector<double> JetSmearedPt;
  vector<double> JetSmearedEta;
  vector<double> JetSmearedPhi;
  double jptGeV;
  double cor;
  double smeared_e;
  double smeared_pt;


  vector<double> DeltaR_jj;
  vector<double> DeltaPhi_jj;
  vector<double> DeltaEta_jj;
  vector<double> pt_jj;
  vector<double> m_jj;

  vector<double> DeltaR_jjJetSmeared;
  vector<double> DeltaPhi_jjJetSmeared;
  vector<double> DeltaEta_jjJetSmeared;
  vector<double> pt_jjJetSmeared;
  vector<double> m_jjJetSmeared;


  vector<double> DeltaR_Wmu;
  vector<double> DeltaPhi_Wmu;
  vector<double> DeltaEta_Wmu;
  vector<double> m_Wmu;
  vector<double> pt_Wmu;
  vector<double> DeltaR_Wel;
  vector<double> DeltaPhi_Wel;
  vector<double> DeltaEta_Wel;
  vector<double> m_Wel;
  vector<double> pt_Wel;

  vector<double> DeltaR_WmuJetSmeared;
  vector<double> DeltaPhi_WmuJetSmeared;
  vector<double> DeltaEta_WmuJetSmeared;
  vector<double> m_WmuJetSmeared;
  vector<double> pt_WmuJetSmeared;
  vector<double> DeltaR_WelJetSmeared;
  vector<double> DeltaPhi_WelJetSmeared;
  vector<double> DeltaEta_WelJetSmeared;
  vector<double> m_WelJetSmeared;
  vector<double> pt_WelJetSmeared;


  vector<double> v_x;
  vector<double> v_y;
  vector<double> v_z;
  vector<double> v_r;
  vector<double> v_errx;
  vector<double> v_erry;
  vector<double> v_errz;
  vector<double> v_covxy;
  vector<double> v_covyz;
  vector<double> v_covzx;
  vector<double> v_chi2;
  vector<int> v_ndof;
  vector<int> v_type;
  vector<int> v_nTracks;

  vector<double> dv1v2;


  double met;

  double ts;
  double tsJetSmeared;

  double em;
  double emJetSmeared;

  double ht;
  double htJetSmeared;

  double em_muonjetjet;
  double em_muonjetjetJetSmeared;

  double ht_muonjetjet;
  double ht_muonjetjetJetSmeared;

  double em_electronjetjet;
  double em_electronjetjetJetSmeared;

  double ht_electronjetjet;
  double ht_electronjetjetJetSmeared;

  double deltaphimin;
  double deltaphiminJetSmeared;

  double asymmetry;
  double asymmetryJetSmeared;


 // W_From_jj 


//  TTree *trigger;

//  TTree *global_truth;
//  TTree *Minv_truth;
//  TTree *muon_truth;
//  TTree *jet_truth;
  //TTree *W_truth;
  // 
  //TTree *global_reco;
  //TTree *Minv_reco;

//  double pT_muon, mu_etcone20;
//  meff,SphT;
//  double misEt;
//  double pT_jet;
/*
  TTree *muon_reco;
  TTree *jet_reco;

  TTree *matching_good_jets_and_muon;
  TTree *matching_allmuons;
  TTree *matching_alljets;
  TTree *matching_alljets_matching_allmuons;

  TTree *tau;
*/
};


#endif
