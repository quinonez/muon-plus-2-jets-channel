//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Sep 28 11:40:56 2010 by ROOT version 5.26/00
// from TChain susy/
//////////////////////////////////////////////////////////

#ifndef AnalysisBase_h
#define AnalysisBase_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <vector>

using namespace std;


class AnalysisBase {
 public :
  TTree          *fChain;   //!pointer to the analyzed TTree or TChain
  Int_t           fCurrent; //!current Tree number in a TChain

  // Declaration of leaf types
  UInt_t RunNumber;
  UInt_t lbn;

  Int_t           el_n;
  vector<float>   *el_E;
  vector<float>   *el_pt;
  vector<float>   *el_eta;
  vector<float>   *el_phi;
  vector<int> *el_author;
  vector<int> *el_medium;
  vector<float> *el_Etcone20;
  vector<float> *el_etas2;
  vector<float> *el_cl_eta;
  vector<float> *el_cl_E;
  vector<float> *el_cl_phi;
  vector<float> *el_cl_pt;
  vector<unsigned int> *el_isEM;
  vector<float> *el_reta;
  vector<float> *el_weta2;
  vector<float> *el_expectHitInBLayer;
  vector<int> *el_nBLHits;



  Int_t           tau_n;
  vector<float>   *tau_m;
  vector<float>   *tau_pt;
  vector<float>   *tau_eta;
  vector<float>   *tau_phi;

  Int_t           mu_staco_n;
  vector<float>   *mu_staco_E;
  vector<float>   *mu_staco_pt;
  vector<float>   *mu_staco_eta;
  vector<float>   *mu_staco_phi;
  vector<float>   *mu_staco_etcone20;
vector<float>   *mu_staco_ptcone20;


  vector<float>   *mu_staco_d0_exPV;
vector<float>   *mu_staco_cov_d0_exPV;

  vector<float>   *mu_staco_z0_exPV;
  vector<float>   *mu_staco_phi_exPV;
  vector<float>   *mu_staco_theta_exPV;
  vector<float>   *mu_staco_qoverp_exPV;
  vector<float>   *mu_staco_ms_d0;
  vector<float>   *mu_staco_ms_z0;
  vector<float>   *mu_staco_ms_phi;
  vector<float>   *mu_staco_ms_theta;
  vector<float>   *mu_staco_ms_qoverp;
   vector<float>   *mu_staco_id_d0;
   vector<float>   *mu_staco_id_z0;
   vector<float>   *mu_staco_id_phi;
   vector<float>   *mu_staco_id_theta;
   vector<float>   *mu_staco_id_qoverp;
/*
   vector<float>   *mu_staco_me_d0;
   vector<float>   *mu_staco_me_z0;
   vector<float>   *mu_staco_me_phi;
   vector<float>   *mu_staco_me_theta;
   vector<float>   *mu_staco_me_qoverp;
   vector<float>   *mu_staco_ie_d0;
   vector<float>   *mu_staco_ie_z0;
   vector<float>   *mu_staco_ie_phi;
   vector<float>   *mu_staco_ie_theta;
   vector<float>   *mu_staco_ie_qoverp;
*/

  vector<int> *mu_staco_isCombinedMuon;
  vector<int> *mu_staco_author;
  vector<float> *mu_staco_matchchi2;


  Float_t         MET_EMJES_RefFinal_CellOutEM_et;
  Float_t         MET_Topo_et;

  Int_t           jet_AntiKt4H1Topo_n;
  vector<float>   *jet_AntiKt4H1Topo_E;
  vector<float>   *jet_AntiKt4H1Topo_pt;
  vector<float>   *jet_AntiKt4H1Topo_eta;
  vector<float>   *jet_AntiKt4H1Topo_phi;
  vector<float>   *jet_AntiKt4H1Topo_n90;
  vector<float>   *jet_AntiKt4H1Topo_emfrac;
  vector<float>   *jet_AntiKt4H1Topo_hecf;
  vector<float>   *jet_AntiKt4H1Topo_LArQuality;
  vector<float>   *jet_AntiKt4H1Topo_Timing;
  vector<float> *jet_AntiKt4H1Topo_emscale_pt;
  vector<float> *jet_AntiKt4H1Topo_EMJES;
  vector<float>   *jet_AntiKt4H1Topo_tgap3f;
  vector<float>   *jet_AntiKt4H1Topo_BCH_CORR_CELL;
vector<double>  *jet_AntiKt4H1Topo_fracSamplingMax;


  Int_t           vx_n;
  vector<float>   *vx_x;
  vector<float>   *vx_y;
  vector<float>   *vx_z;
  vector<float>   *vx_errx;
  vector<float>   *vx_erry;
  vector<float>   *vx_errz;
  vector<float>   *vx_covxy;
  vector<float>   *vx_covyz;
  vector<float>   *vx_covzx;
  vector<float>   *vx_chi2;
  vector<int>     *vx_ndof;
  vector<int>     *vx_type;
  vector<int>     *vx_nTracks;
   
  Bool_t          EF_mu20;
  Bool_t          EF_mu15;
  Bool_t          EF_mu13;
  Bool_t          EF_mu10;
  Bool_t          EF_mu6;
  Bool_t          EF_mu10_MSonly;

  Bool_t          L2_mu20;
  Bool_t          L2_mu15;
  Bool_t          L2_mu13;
  Bool_t          L2_mu10;
  Bool_t          L2_mu6;
  Bool_t          L2_mu10_MSonly;

  Bool_t          L1_MU20;
  Bool_t          L1_MU15;
  Bool_t          L1_MU13;
  Bool_t          L1_MU10;
  Bool_t          L1_MU6;
  Bool_t          L1_MU10_MSonly;


  // List of branches
  TBranch *b_RunNumber;	//!
  TBranch *b_lbn;	//!
  TBranch *b_el_n;	//!
  TBranch *b_el_E;	//!
  TBranch *b_el_pt;	//!
  TBranch *b_el_eta;	//!
  TBranch *b_el_phi;	//!
  TBranch *b_el_author;    //!
  TBranch *b_el_medium;    //!
  TBranch *b_el_Etcone20;    //!
  TBranch *b_el_etas2;    //!
  TBranch *b_el_cl_eta;    //!
  TBranch *b_el_cl_E;    //!
  TBranch *b_el_cl_phi;    //!
  TBranch *b_el_cl_pt;    //!
  TBranch *b_el_isEM;    //!
  TBranch *b_el_reta;    //!
  TBranch *b_el_weta2;    //!
  TBranch *b_el_expectHitInBLayer;    //!
  TBranch *b_el_nBLHits;    //!

  TBranch   *b_tau_n;	//!
  TBranch   *b_tau_m;	//!
  TBranch   *b_tau_pt;	//!
  TBranch   *b_tau_eta;	//!
  TBranch   *b_tau_phi;	//!

  TBranch   *b_mu_staco_n;	//!
  TBranch   *b_mu_staco_E;	//!
  TBranch   *b_mu_staco_pt;	//!
  TBranch   *b_mu_staco_eta;	//!
  TBranch   *b_mu_staco_phi;	//!
  TBranch   *b_mu_staco_etcone20;	//!
TBranch        *b_mu_staco_ptcone20;   //!
  TBranch   *b_mu_staco_d0_exPV;	//!
TBranch        *b_mu_staco_cov_d0_exPV;   //!
  TBranch   *b_mu_staco_z0_exPV;	//!
   TBranch        *b_mu_staco_phi_exPV;   //!
   TBranch        *b_mu_staco_theta_exPV;   //!
   TBranch        *b_mu_staco_qoverp_exPV;   //!
   TBranch        *b_mu_staco_ms_d0;   //!
   TBranch        *b_mu_staco_ms_z0;   //!
   TBranch        *b_mu_staco_ms_phi;   //!
   TBranch        *b_mu_staco_ms_theta;   //!
   TBranch        *b_mu_staco_ms_qoverp;   //!
   TBranch        *b_mu_staco_id_d0;   //!
   TBranch        *b_mu_staco_id_z0;   //!
   TBranch        *b_mu_staco_id_phi;   //!
   TBranch        *b_mu_staco_id_theta;   //!
   TBranch        *b_mu_staco_id_qoverp;   //!
   TBranch        *b_mu_staco_me_d0;   //!
   TBranch        *b_mu_staco_me_z0;   //!
   TBranch        *b_mu_staco_me_phi;   //!
   TBranch        *b_mu_staco_me_theta;   //!
   TBranch        *b_mu_staco_me_qoverp;   //!
   TBranch        *b_mu_staco_ie_d0;   //!
   TBranch        *b_mu_staco_ie_z0;   //!
   TBranch        *b_mu_staco_ie_phi;   //!
   TBranch        *b_mu_staco_ie_theta;   //!
   TBranch        *b_mu_staco_ie_qoverp;   //!
  TBranch   *b_mu_staco_author;    //!
  TBranch   *b_mu_staco_isCombinedMuon;    //!
  TBranch   *b_mu_staco_matchchi2;    //!







  TBranch   *b_MET_EMJES_RefFinal_CellOutEM_et;	//!
  TBranch   *b_MET_Topo_et;	//!

  TBranch   *b_jet_AntiKt4H1Topo_n;	//!
  TBranch   *b_jet_AntiKt4H1Topo_E;	//!
  TBranch   *b_jet_AntiKt4H1Topo_pt;	//!
  TBranch   *b_jet_AntiKt4H1Topo_eta;	//!
  TBranch   *b_jet_AntiKt4H1Topo_phi;	//!
  TBranch   *b_jet_AntiKt4H1Topo_n90;	//!
  TBranch   *b_jet_AntiKt4H1Topo_emfrac;	//!
  TBranch   *b_jet_AntiKt4H1Topo_hecf;	//!
  TBranch   *b_jet_AntiKt4H1Topo_LArQuality;	//!
  TBranch   *b_jet_AntiKt4H1Topo_Timing;	//!
  TBranch        *b_jet_AntiKt4H1Topo_emscale_pt;   //!
  TBranch        *b_jet_AntiKt4H1Topo_EMJES;   //!
  TBranch        *b_jet_AntiKt4H1Topo_tgap3f;   //!
  TBranch        *b_jet_AntiKt4H1Topo_BCH_CORR_CELL;   //!
TBranch        *b_jet_AntiKt4H1Topo_fracSamplingMax;   //!


  TBranch        *b_vx_n;   //!
  TBranch        *b_vx_x;   //!
  TBranch        *b_vx_y;   //!
  TBranch        *b_vx_z;   //!
  TBranch        *b_vx_errx;   //!
  TBranch        *b_vx_erry;   //!
  TBranch        *b_vx_errz;   //!
  TBranch        *b_vx_covxy;   //!
  TBranch        *b_vx_covyz;   //!
  TBranch        *b_vx_covzx;   //!
  TBranch        *b_vx_chi2;   //!
  TBranch        *b_vx_ndof;   //!
  TBranch        *b_vx_type;   //!
  TBranch        *b_vx_nTracks;   //!



  TBranch          *b_EF_mu20;	//!
  TBranch          *b_EF_mu15;	//!
  TBranch          *b_EF_mu10;	//!
  TBranch          *b_EF_mu6;	//!
  TBranch          *b_L2_mu20;	//!
  TBranch          *b_L2_mu15;	//!
  TBranch          *b_L2_mu10;	//!
  TBranch          *b_L2_mu6;	//!
  TBranch          *b_L1_MU20;	//!
  TBranch          *b_L1_MU15;	//!
  TBranch          *b_L1_MU10;	//!
  TBranch          *b_L1_MU6;	//!
 


  AnalysisBase(TTree *tree=0);
  virtual ~AnalysisBase();
  virtual Int_t    Cut(Long64_t entry);
  virtual Int_t    GetEntry(Long64_t entry);
  virtual Long64_t LoadTree(Long64_t entry);
  virtual void     Init(TTree *tree);
  virtual void     Loop();
  virtual Bool_t   Notify();
  virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef AnalysisBase_cxx
AnalysisBase::AnalysisBase(TTree *tree)
{
  // if parameter tree is not specified (or zero), connect the file
  // used to generate this class and read the Tree.
  if (tree == 0) {

#ifdef SINGLE_TREE
    // The following code should be used if you want this class to access
    // a single tree instead of a chain
    TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
    if (!f) {
      f = new TFile("Memory Directory");
      f->cd("Rint:/");
    }
    tree = (TTree*)gDirectory->Get("susy");

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
    TChain * chain = new TChain("susy","");
    chain->Add("/PUC_data2/SUSY/RealData/D3PDfromD2PD/PeriodF/II/user.andreas.SUSYD3PD.data10_7TeV.00162347.physics_Muons.merge.AOD.f287_m588.V2.1_D2PDSUSY_V1.000505.V2.D3PD._00001.root/susy");

    tree = chain;
#endif // SINGLE_TREE

  }
  Init(tree);
}

AnalysisBase::~AnalysisBase()
{
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}

Int_t AnalysisBase::GetEntry(Long64_t entry)
{
  // Read contents of entry.
  if (!fChain) return 0;
  return fChain->GetEntry(entry);
}
Long64_t AnalysisBase::LoadTree(Long64_t entry)
{
  // Set the environment to read one entry
  if (!fChain) return -5;
  Long64_t centry = fChain->LoadTree(entry);
  if (centry < 0) return centry;
  if (!fChain->InheritsFrom(TChain::Class()))  return centry;
  TChain *chain = (TChain*)fChain;
  if (chain->GetTreeNumber() != fCurrent) {
    fCurrent = chain->GetTreeNumber();
    Notify();
  }
  return centry;
}

void AnalysisBase::Init(TTree *tree)
{
  // The Init() function is called when the selector needs to initialize
  // a new tree or chain. Typically here the branch addresses and branch
  // pointers of the tree will be set.
  // It is normally not necessary to make changes to the generated
  // code, but the routine can be extended by the user if needed.
  // Init() will be called many times when running on PROOF
  // (once per file to be processed).

  // Set object pointer
  el_E=0;
  el_pt=0;
  el_eta=0;
  el_phi=0;  
  el_author=0;
  el_medium=0;
  el_Etcone20=0;
  el_etas2=0; 
  el_cl_eta=0;
  el_cl_E=0;
  el_cl_phi=0;
  el_cl_pt=0;
  el_isEM=0;
  el_reta=0;
  el_weta2=0;
  el_expectHitInBLayer=0;
  el_nBLHits=0;

  tau_m=0;
  tau_pt=0;
  tau_eta=0;
  tau_phi=0;
  mu_staco_E=0;
  mu_staco_pt=0;
  mu_staco_eta=0;
  mu_staco_phi=0;
  mu_staco_etcone20=0;
mu_staco_ptcone20 = 0;
  mu_staco_d0_exPV=0;
mu_staco_cov_d0_exPV = 0;
  mu_staco_z0_exPV=0;
   mu_staco_phi_exPV = 0;
   mu_staco_theta_exPV = 0;
   mu_staco_qoverp_exPV = 0;
   mu_staco_ms_d0 = 0;
   mu_staco_ms_z0 = 0;
   mu_staco_ms_phi = 0;
   mu_staco_ms_theta = 0;
   mu_staco_ms_qoverp = 0;
   mu_staco_id_d0 = 0;
   mu_staco_id_z0 = 0;
   mu_staco_id_phi = 0;
   mu_staco_id_theta = 0;
   mu_staco_id_qoverp = 0;
/*
   mu_staco_me_d0 = 0;
   mu_staco_me_z0 = 0;
   mu_staco_me_phi = 0;
   mu_staco_me_theta = 0;
   mu_staco_me_qoverp = 0;
   mu_staco_ie_d0 = 0;
   mu_staco_ie_z0 = 0;
   mu_staco_ie_phi = 0;
   mu_staco_ie_theta = 0;
   mu_staco_ie_qoverp = 0;
*/
  mu_staco_author=0;
  mu_staco_matchchi2=0;
  mu_staco_isCombinedMuon=0;

  jet_AntiKt4H1Topo_E=0;
  jet_AntiKt4H1Topo_pt=0;
  jet_AntiKt4H1Topo_eta=0;
  jet_AntiKt4H1Topo_phi=0;
  jet_AntiKt4H1Topo_n90=0;
  jet_AntiKt4H1Topo_emfrac=0;
  jet_AntiKt4H1Topo_hecf=0;
  jet_AntiKt4H1Topo_LArQuality=0;
  jet_AntiKt4H1Topo_Timing=0;
  jet_AntiKt4H1Topo_EMJES = 0;
  jet_AntiKt4H1Topo_emscale_pt = 0;
  jet_AntiKt4H1Topo_tgap3f = 0;
  jet_AntiKt4H1Topo_BCH_CORR_CELL = 0;
jet_AntiKt4H1Topo_fracSamplingMax = 0;

  vx_x = 0;
  vx_y = 0;
  vx_z = 0;
  vx_errx = 0;
  vx_erry = 0;
  vx_errz = 0;
  vx_covxy = 0;
  vx_covyz = 0;
  vx_covzx = 0;
  vx_chi2 = 0;
  vx_ndof = 0;
  vx_type = 0;
  vx_nTracks = 0;



  // Set branch addresses and branch pointers
  if (!tree) return;
  fChain = tree;
  fCurrent = -1;
  fChain->SetMakeClass(1);

  fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
  fChain->SetBranchAddress("lbn", &lbn, &b_lbn);
  fChain->SetBranchAddress("el_n", &el_n, &b_el_n);
  fChain->SetBranchAddress("el_E", &el_E, &b_el_E);
  fChain->SetBranchAddress("el_pt", &el_pt, &b_el_pt);
  fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
  fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
  fChain->SetBranchAddress("el_author", &el_author, &b_el_author);
  fChain->SetBranchAddress("el_medium", &el_medium, &b_el_medium);
  fChain->SetBranchAddress("el_Etcone20", &el_Etcone20, &b_el_Etcone20);
  fChain->SetBranchAddress("el_etas2", &el_etas2, &b_el_etas2);
  fChain->SetBranchAddress("el_cl_eta", &el_cl_eta, &b_el_cl_eta);
  fChain->SetBranchAddress("el_cl_E", &el_cl_E, &b_el_cl_E);
  fChain->SetBranchAddress("el_cl_phi", &el_cl_phi, &b_el_cl_phi);
  fChain->SetBranchAddress("el_cl_pt", &el_cl_pt, &b_el_cl_pt);
  fChain->SetBranchAddress("el_isEM", &el_isEM, &b_el_isEM);
  fChain->SetBranchAddress("el_reta", &el_reta, &b_el_reta);
  fChain->SetBranchAddress("el_weta2", &el_weta2, &b_el_weta2);
  fChain->SetBranchAddress("el_expectHitInBLayer", &el_expectHitInBLayer, &b_el_expectHitInBLayer);
  fChain->SetBranchAddress("el_nBLHits", &el_nBLHits, &b_el_nBLHits);

  fChain->SetBranchAddress("tau_n", &tau_n, &b_tau_n);
  fChain->SetBranchAddress("tau_m", &tau_m, &b_tau_m);
  fChain->SetBranchAddress("tau_pt", &tau_pt, &b_tau_pt);
  fChain->SetBranchAddress("tau_eta", &tau_eta, &b_tau_eta);
  fChain->SetBranchAddress("tau_phi", &tau_phi, &b_tau_phi);

  fChain->SetBranchAddress("mu_staco_n", &mu_staco_n, &b_mu_staco_n);
  fChain->SetBranchAddress("mu_staco_E", &mu_staco_E, &b_mu_staco_E);
  fChain->SetBranchAddress("mu_staco_pt", &mu_staco_pt, &b_mu_staco_pt);
  fChain->SetBranchAddress("mu_staco_eta", &mu_staco_eta, &b_mu_staco_eta);
  fChain->SetBranchAddress("mu_staco_phi", &mu_staco_phi, &b_mu_staco_phi);
  fChain->SetBranchAddress("mu_staco_etcone20", &mu_staco_etcone20, &b_mu_staco_etcone20);
fChain->SetBranchAddress("mu_staco_ptcone20", &mu_staco_ptcone20, &b_mu_staco_ptcone20);
  fChain->SetBranchAddress("mu_staco_d0_exPV", &mu_staco_d0_exPV, &b_mu_staco_d0_exPV);
fChain->SetBranchAddress("mu_staco_cov_d0_exPV", &mu_staco_cov_d0_exPV, &b_mu_staco_cov_d0_exPV);
  fChain->SetBranchAddress("mu_staco_z0_exPV", &mu_staco_z0_exPV, &b_mu_staco_z0_exPV);
   fChain->SetBranchAddress("mu_staco_phi_exPV", &mu_staco_phi_exPV, &b_mu_staco_phi_exPV);
   fChain->SetBranchAddress("mu_staco_theta_exPV", &mu_staco_theta_exPV, &b_mu_staco_theta_exPV);
   fChain->SetBranchAddress("mu_staco_qoverp_exPV", &mu_staco_qoverp_exPV, &b_mu_staco_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_ms_d0", &mu_staco_ms_d0, &b_mu_staco_ms_d0);
   fChain->SetBranchAddress("mu_staco_ms_z0", &mu_staco_ms_z0, &b_mu_staco_ms_z0);
   fChain->SetBranchAddress("mu_staco_ms_phi", &mu_staco_ms_phi, &b_mu_staco_ms_phi);
   fChain->SetBranchAddress("mu_staco_ms_theta", &mu_staco_ms_theta, &b_mu_staco_ms_theta);
   fChain->SetBranchAddress("mu_staco_ms_qoverp", &mu_staco_ms_qoverp, &b_mu_staco_ms_qoverp);
   fChain->SetBranchAddress("mu_staco_id_d0", &mu_staco_id_d0, &b_mu_staco_id_d0);
   fChain->SetBranchAddress("mu_staco_id_z0", &mu_staco_id_z0, &b_mu_staco_id_z0);
   fChain->SetBranchAddress("mu_staco_id_phi", &mu_staco_id_phi, &b_mu_staco_id_phi);
   fChain->SetBranchAddress("mu_staco_id_theta", &mu_staco_id_theta, &b_mu_staco_id_theta);
   fChain->SetBranchAddress("mu_staco_id_qoverp", &mu_staco_id_qoverp, &b_mu_staco_id_qoverp);
/*
   fChain->SetBranchAddress("mu_staco_me_d0", &mu_staco_me_d0, &b_mu_staco_me_d0);
   fChain->SetBranchAddress("mu_staco_me_z0", &mu_staco_me_z0, &b_mu_staco_me_z0);
   fChain->SetBranchAddress("mu_staco_me_phi", &mu_staco_me_phi, &b_mu_staco_me_phi);
   fChain->SetBranchAddress("mu_staco_me_theta", &mu_staco_me_theta, &b_mu_staco_me_theta);
   fChain->SetBranchAddress("mu_staco_me_qoverp", &mu_staco_me_qoverp, &b_mu_staco_me_qoverp);
   fChain->SetBranchAddress("mu_staco_ie_d0", &mu_staco_ie_d0, &b_mu_staco_ie_d0);
   fChain->SetBranchAddress("mu_staco_ie_z0", &mu_staco_ie_z0, &b_mu_staco_ie_z0);
   fChain->SetBranchAddress("mu_staco_ie_phi", &mu_staco_ie_phi, &b_mu_staco_ie_phi);
   fChain->SetBranchAddress("mu_staco_ie_theta", &mu_staco_ie_theta, &b_mu_staco_ie_theta);
   fChain->SetBranchAddress("mu_staco_ie_qoverp", &mu_staco_ie_qoverp, &b_mu_staco_ie_qoverp);
*/
  fChain->SetBranchAddress("mu_staco_author", &mu_staco_author, &b_mu_staco_author);
  fChain->SetBranchAddress("mu_staco_matchchi2", &mu_staco_matchchi2, &b_mu_staco_matchchi2);
  fChain->SetBranchAddress("mu_staco_isCombinedMuon", &mu_staco_isCombinedMuon, &b_mu_staco_isCombinedMuon);


  fChain->SetBranchAddress("MET_EMJES_RefFinal_CellOutEM_et", &MET_EMJES_RefFinal_CellOutEM_et, &b_MET_EMJES_RefFinal_CellOutEM_et);
  fChain->SetBranchAddress("MET_Topo_et", &MET_Topo_et, &b_MET_Topo_et);

  fChain->SetBranchAddress("jet_AntiKt4H1Topo_n", &jet_AntiKt4H1Topo_n, &b_jet_AntiKt4H1Topo_n);
  fChain->SetBranchAddress("jet_AntiKt4H1Topo_E", &jet_AntiKt4H1Topo_E, &b_jet_AntiKt4H1Topo_E);
  fChain->SetBranchAddress("jet_AntiKt4H1Topo_pt", &jet_AntiKt4H1Topo_pt, &b_jet_AntiKt4H1Topo_pt);
  fChain->SetBranchAddress("jet_AntiKt4H1Topo_eta", &jet_AntiKt4H1Topo_eta, &b_jet_AntiKt4H1Topo_eta);
  fChain->SetBranchAddress("jet_AntiKt4H1Topo_phi", &jet_AntiKt4H1Topo_phi, &b_jet_AntiKt4H1Topo_phi);
  fChain->SetBranchAddress("jet_AntiKt4H1Topo_n90", &jet_AntiKt4H1Topo_n90, &b_jet_AntiKt4H1Topo_n90);
  fChain->SetBranchAddress("jet_AntiKt4H1Topo_emfrac", &jet_AntiKt4H1Topo_emfrac, &b_jet_AntiKt4H1Topo_emfrac);
  fChain->SetBranchAddress("jet_AntiKt4H1Topo_hecf", &jet_AntiKt4H1Topo_hecf, &b_jet_AntiKt4H1Topo_hecf);
  fChain->SetBranchAddress("jet_AntiKt4H1Topo_LArQuality", &jet_AntiKt4H1Topo_LArQuality, &b_jet_AntiKt4H1Topo_LArQuality);
  fChain->SetBranchAddress("jet_AntiKt4H1Topo_Timing", &jet_AntiKt4H1Topo_Timing, &b_jet_AntiKt4H1Topo_Timing);
  fChain->SetBranchAddress("jet_AntiKt4H1Topo_emscale_pt", &jet_AntiKt4H1Topo_emscale_pt, &b_jet_AntiKt4H1Topo_emscale_pt);
  fChain->SetBranchAddress("jet_AntiKt4H1Topo_EMJES", &jet_AntiKt4H1Topo_EMJES, &b_jet_AntiKt4H1Topo_EMJES);
  fChain->SetBranchAddress("jet_AntiKt4H1Topo_tgap3f", &jet_AntiKt4H1Topo_tgap3f, &b_jet_AntiKt4H1Topo_tgap3f);
  fChain->SetBranchAddress("jet_AntiKt4H1Topo_BCH_CORR_CELL", &jet_AntiKt4H1Topo_BCH_CORR_CELL, &b_jet_AntiKt4H1Topo_BCH_CORR_CELL);
fChain->SetBranchAddress("jet_AntiKt4H1Topo_fracSamplingMax", &jet_AntiKt4H1Topo_fracSamplingMax, &b_jet_AntiKt4H1Topo_fracSamplingMax);



  fChain->SetBranchAddress("vx_n", &vx_n, &b_vx_n);
  fChain->SetBranchAddress("vx_x", &vx_x, &b_vx_x);
  fChain->SetBranchAddress("vx_y", &vx_y, &b_vx_y);
  fChain->SetBranchAddress("vx_z", &vx_z, &b_vx_z);
  fChain->SetBranchAddress("vx_errx", &vx_errx, &b_vx_errx);
  fChain->SetBranchAddress("vx_erry", &vx_erry, &b_vx_erry);
  fChain->SetBranchAddress("vx_errz", &vx_errz, &b_vx_errz);
  fChain->SetBranchAddress("vx_covxy", &vx_covxy, &b_vx_covxy);
  fChain->SetBranchAddress("vx_covyz", &vx_covyz, &b_vx_covyz);
  fChain->SetBranchAddress("vx_covzx", &vx_covzx, &b_vx_covzx);
  fChain->SetBranchAddress("vx_chi2", &vx_chi2, &b_vx_chi2);
  fChain->SetBranchAddress("vx_ndof", &vx_ndof, &b_vx_ndof);
  fChain->SetBranchAddress("vx_type", &vx_type, &b_vx_type);
  fChain->SetBranchAddress("vx_nTracks", &vx_nTracks, &b_vx_nTracks);



  fChain->SetBranchAddress("EF_mu20", &EF_mu20, &b_EF_mu20);
  fChain->SetBranchAddress("EF_mu15", &EF_mu15, &b_EF_mu15);
  fChain->SetBranchAddress("EF_mu10", &EF_mu10, &b_EF_mu10);
  fChain->SetBranchAddress("EF_mu6", &EF_mu6, &b_EF_mu6);
  fChain->SetBranchAddress("L2_mu20", &L2_mu20, &b_L2_mu20);
  fChain->SetBranchAddress("L2_mu15", &L2_mu15, &b_L2_mu15);
  fChain->SetBranchAddress("L2_mu10", &L2_mu10, &b_L2_mu10);
  fChain->SetBranchAddress("L2_mu6", &L2_mu6, &b_L2_mu6);
  fChain->SetBranchAddress("L1_MU20", &L1_MU20, &b_L1_MU20);
  fChain->SetBranchAddress("L1_MU15", &L1_MU15, &b_L1_MU15);
  fChain->SetBranchAddress("L1_MU10", &L1_MU10, &b_L1_MU10);
  fChain->SetBranchAddress("L1_MU6", &L1_MU6, &b_L1_MU6);
  

  Notify();
}

Bool_t AnalysisBase::Notify()
{
  // The Notify() function is called when a new file is opened. This
  // can be either for a new TTree in a TChain or when when a new TTree
  // is started when using PROOF. It is normally not necessary to make changes
  // to the generated code, but the routine can be extended by the
  // user if needed. The return value is currently not used.

  return kTRUE;
}

void AnalysisBase::Show(Long64_t entry)
{
  // Print contents of entry.
  // If entry is not specified, print current entry
  if (!fChain) return;
  fChain->Show(entry);
}
Int_t AnalysisBase::Cut(Long64_t entry)
{
  // This function may be called from Loop.
  // returns  1 if entry is accepted.
  // returns -1 otherwise.
  return 1;
}
#endif // #ifdef AnalysisBase_cxx
