#ifndef Analysis1_h
#define Analysis1_h

#include "AnalysisBase.h"
#include "W_From_jj.h"
#include "SmearingClass.h"

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

  Analysis1( vector<string>* );
  Analysis1( int Nfiles, TString** name );
  Analysis1( string );
  Analysis1( TTree* = 0 );
  virtual ~Analysis1();
  //void Selection();
  void setCuts( double = 1.2e6, double = 0.2, float = 40.e3, double = 2.5, double = 1.5 );
  void EventsLoop();

private:

 SmearingClass mcp_smear;
 inline bool isBadLooseJet( Int_t  );

  bool wasBadJet;
  bool wasCrackElectron;
  bool wasCosmicMuon;

  bool DEBUG;
  bool isRealData;
  double EMCut;
  double TSCut;
  float METCut;
  double DeltaRjjCut;
  double DeltaRWmuCut;

  void CLEAR();

  double EffectiveMass(double);

  double TransverseSphericity();

  double HT();

  double HT_muonjetjet();
  double HT_muonjetjetjet();

  void myMuonSmearing(Long64_t);
  void MuonInfo();
  void ElectronInfo();
  void TauonInfo();

  void JetInfo();
  void myJetSmearing();
  inline double getSmearingCor(double);

  void OverlapRemoval();
  void AllLeptons();
  void VertexInfo();
  void Asymmetry_DeltaPhiMin();  

  inline bool isJet( Int_t );
  inline bool isMuon( Int_t );
  inline bool isTauon( Int_t );

  inline bool isMuonForEtMiss( Int_t );
  inline bool isElectron( Int_t );

  bool isBadPV;
  double MET();

  void MT();
  void DeltaR_MET_Jet();

  vector<W_From_jj> recoWContenedor();
  vector< W_From_jj > Wv;

  void recoMuJetJet( vector< W_From_jj > );

  bool mygrl;

  //W_From_jj myWBoson;

  //TTree* Nt;

  unsigned int MuN;
  unsigned int ElN;
  unsigned int TaN;
  unsigned int JetN;
  unsigned int TaNBeforeOR;
  unsigned int MuNBeforeOR;
  unsigned int ElNBeforeOR;
  unsigned int JetNBeforeOR;
  unsigned int TaNAfterOR;
  unsigned int MuNAfterOR;
  unsigned int ElNAfterOR;
  unsigned int JetNAfterOR;
  unsigned int v_n;

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

  double taPt;
  double taEtCone20;
  double taEta;
  double taPhi;
  double taMass;

  double jetPt;

  double dm_Wmu;
  double dpt_Wmu;
  double dEta_Wmu;
  double dPhi_Wmu;
  double dR_Wmu;

  vector<double> MuPt;
  vector<double> MuPtms;
  vector<double> MuEtCone20;
  vector<double> MuEta;
  vector<double> MuPhi;
  vector<double> MuEnergy;
  vector<double> Mud0_exPV;
  vector<double> Mud0_exPVe;
  vector<double> Muz0_exPV;
  vector<double> Mur0_exPV;

  vector<double> MuPtAfterOR;
  vector<double> MuPtmsAfterOR;
  vector<double> MuEtCone20AfterOR;
  vector<double> MuEtaAfterOR;
  vector<double> MuPhiAfterOR;
  vector<double> MuEnergyAfterOR;
  vector<double> Mud0_exPVAfterOR;
  vector<double> Mud0_exPVeAfterOR;
  vector<double> Muz0_exPVAfterOR;
  vector<double> Mur0_exPVAfterOR;

  vector<double> MTs;
  vector<double> DeltaRMetJet;  
  vector<double> DeltaPhiMetJet;  

  vector<double> MuPtBeforeOR;
  vector<double> MuPtmsBeforeOR;
  vector<double> MuEtCone20BeforeOR;
  vector<double> MuEtaBeforeOR;
  vector<double> MuPhiBeforeOR;
  vector<double> MuEnergyBeforeOR;
  vector<double> Mud0_exPVBeforeOR;
  vector<double> Mud0_exPVeBeforeOR;
  vector<double> Muz0_exPVBeforeOR;
  vector<double> Mur0_exPVBeforeOR;

  vector<double> ElPt;
  vector<double> ElEtCone20;
  vector<double> ElEta;
  vector<double> ElPhi;
  vector<double> ElEnergy;

  vector<double> ElPtBeforeOR;
  vector<double> ElEtCone20BeforeOR;
  vector<double> ElEtaBeforeOR;
  vector<double> ElPhiBeforeOR;
  vector<double> ElEnergyBeforeOR;

  vector<double> ElPtAfterOR;
  vector<double> ElEtCone20AfterOR;
  vector<double> ElEtaAfterOR;
  vector<double> ElPhiAfterOR;
  vector<double> ElEnergyAfterOR;

  vector<double> TaPt;
  vector<double> TaEta;
  vector<double> TaPhi;
  vector<double> TaMass;

  vector<double> TaPtBeforeOR;
  vector<double> TaEtaBeforeOR;
  vector<double> TaPhiBeforeOR;
  vector<double> TaMassBeforeOR;

  vector<double> TaPtAfterOR;
  vector<double> TaEtaAfterOR;
  vector<double> TaPhiAfterOR;
  vector<double> TaMassAfterOR;

  vector<double> JetPt;
  vector<double> JetEta;
  vector<double> JetPhi;
  vector<double> JetEnergy;
  vector<double> JetEmscalePt;
  vector<double> JetEMJES;

  vector<double> JetPtBeforeOR;
  vector<double> JetEtaBeforeOR;
  vector<double> JetPhiBeforeOR;
  vector<double> JetEnergyBeforeOR;
  vector<double> JetEmscalePtBeforeOR;
  vector<double> JetEMJESBeforeOR;

  vector<double> JetPtAfterOR;
  vector<double> JetEtaAfterOR;
  vector<double> JetPhiAfterOR;
  vector<double> JetEnergyAfterOR;
  vector<double> JetEmscalePtAfterOR;
  vector<double> JetEMJESAfterOR;

  vector<double> DeltaR_jj;
  vector<double> DeltaPhi_jj;
  vector<double> DeltaEta_jj;
  vector<double> pt_jj;
  vector<double> m_jj;


  vector<double> DeltaR_Wmu;
  vector<double> DeltaPhi_Wmu;
  vector<double> DeltaEta_Wmu;
  vector<double> m_Wmu;
  vector<double> pt_Wmu;

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


  double met;
  double SimplifiedRefFinalx;
  double SimplifiedRefFinaly;

  double ts;

  double em;

  double ht;

  double em_muonjetjet;
  double em_muonjetjetjet;
  double ht_muonjetjet;
  double ht_muonjetjetjet;

  double deltaphimin;
  double asymmetry;

};


#endif
