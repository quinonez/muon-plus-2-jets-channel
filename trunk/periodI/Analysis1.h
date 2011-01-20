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

  Analysis1( vector<string> );
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

  bool DEBUG;
  bool isRealData;
  double EMCut;
  double TSCut;
  float METCut;
  double DeltaRjjCut;
  double DeltaRWmuCut;

  void CLEAR();

  double EffectiveMass(double);

  double TransverseSphericityJetSmeared();

  double HTJetSmeared();

  double HT_muonjetjetJetSmeared();

  void MuonInfo();
  void ElectronInfo();
  void TauonInfo();

  void JetInfo();
  inline double getSmearingCor(double);


  inline bool isJet( Int_t );
  inline bool isMuon( Int_t );
  inline bool isTauon( Int_t );

  inline bool isMuonForEtMiss( Int_t );
  inline bool isElectron( Int_t );

  bool isGoodPV;
  double MET();

  vector<W_From_jj> recoWContenedorJetSmeared();
  vector< W_From_jj > WvJetSmeared;

  void recoMuJetJet_JetSmeared( vector< W_From_jj > );

  bool mygrl;

  //W_From_jj myWBoson;

  //TTree* Nt;

  unsigned int MuN;
  unsigned int ElN;
  unsigned int TaN;
  unsigned int JetN;
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

  vector<double> ElPt;
  vector<double> ElEtCone20;
  vector<double> ElEta;
  vector<double> ElPhi;
  vector<double> ElEnergy;

  vector<double> TaPt;
  vector<double> TaEta;
  vector<double> TaPhi;
  vector<double> TaMass;

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


  vector<double> DeltaR_jjJetSmeared;
  vector<double> DeltaPhi_jjJetSmeared;
  vector<double> DeltaEta_jjJetSmeared;
  vector<double> pt_jjJetSmeared;
  vector<double> m_jjJetSmeared;


  vector<double> DeltaR_WmuJetSmeared;
  vector<double> DeltaPhi_WmuJetSmeared;
  vector<double> DeltaEta_WmuJetSmeared;
  vector<double> m_WmuJetSmeared;
  vector<double> pt_WmuJetSmeared;


  double met;

  double tsJetSmeared;

  double emJetSmeared;

  double htJetSmeared;

  double em_muonjetjetJetSmeared;
  double ht_muonjetjetJetSmeared;

  double deltaphiminJetSmeared;
  double asymmetryJetSmeared;


  TH1D *all[3]; 
  TH1D *triggered[3];        
  TH1D *efficiency[3];
  
  Bool_t trigga[3];
  string trigname[3];                         
  
  string sall[3]; 
  string striggered[3];
  string sefficiency[3];       

  double trigcut[3];
  
  //Color_t mycolors[3];                        
  unsigned int probe[3];
  unsigned int ntags[3];
  unsigned int Nmenu;
};


#endif
