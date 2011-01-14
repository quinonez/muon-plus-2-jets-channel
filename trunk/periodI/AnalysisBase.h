//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Nov 25 20:04:36 2010 by ROOT version 5.26/00e
// from TChain susy/
//////////////////////////////////////////////////////////

#ifndef AnalysisBase_h
#define AnalysisBase_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <vector>
#include <string>

using std::vector;
using std::string;

class AnalysisBase {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Bool_t	EF_mu10_MSonly; //MC and periodE-F
   Bool_t	L1_MU6; //periodA-D
   Bool_t	EF_mu13;//periodG-H
   Bool_t	L1_2J15;
   Bool_t	L1_TAU11;

   Bool_t	EF_mu13_tight;

   UInt_t          RunNumber;
   UInt_t          EventNumber;
   UInt_t          timestamp;
   UInt_t          timestamp_ns;
   UInt_t          lbn;
   UInt_t          bcid;
   UInt_t          detmask0;
   UInt_t          detmask1;
   UInt_t          pixelFlags;
   UInt_t          sctFlags;
   UInt_t          trtFlags;
   UInt_t          larFlags;
   UInt_t          tileFlags;
   UInt_t          muonFlags;
   UInt_t          fwdFlags;
   UInt_t          coreFlags;
   UInt_t          pixelError;
   UInt_t          sctError;
   UInt_t          trtError;
   UInt_t          larError;
   UInt_t          tileError;
   UInt_t          muonError;
   UInt_t          fwdError;
   UInt_t          coreError;
   Int_t           el_n;
   vector<float>   *el_E;
   vector<float>   *el_Et;
   vector<float>   *el_pt;
   vector<float>   *el_m;
   vector<float>   *el_eta;
   vector<float>   *el_phi;
   vector<float>   *el_px;
   vector<float>   *el_py;
   vector<float>   *el_pz;
   vector<float>   *el_charge;
   vector<int>     *el_author;
   vector<unsigned int> *el_isEM;
   vector<int>     *el_convFlag;
   vector<int>     *el_isConv;
   vector<int>     *el_nConv;
   vector<int>     *el_nSingleTrackConv;
   vector<int>     *el_nDoubleTrackConv;
   vector<int>     *el_loose;
   vector<int>     *el_medium;
   vector<int>     *el_mediumIso;
   vector<int>     *el_tight;
   vector<int>     *el_tightIso;
   vector<float>   *el_Ethad;
   vector<float>   *el_Ethad1;
   vector<float>   *el_f1;
   vector<float>   *el_f1core;
   vector<float>   *el_Emins1;
   vector<float>   *el_fside;
   vector<float>   *el_Emax2;
   vector<float>   *el_ws3;
   vector<float>   *el_wstot;
   vector<float>   *el_emaxs1;
   vector<float>   *el_deltaEs;
   vector<float>   *el_E233;
   vector<float>   *el_E237;
   vector<float>   *el_E277;
   vector<float>   *el_weta2;
   vector<float>   *el_f3;
   vector<float>   *el_f3core;
   vector<float>   *el_rphiallcalo;
   vector<float>   *el_Etcone45;
   vector<float>   *el_Etcone20;
   vector<float>   *el_Etcone30;
   vector<float>   *el_Etcone40;
   vector<float>   *el_ptcone30;
   vector<float>   *el_convanglematch;
   vector<float>   *el_convtrackmatch;
   vector<int>     *el_hasconv;
   vector<float>   *el_convvtxx;
   vector<float>   *el_convvtxy;
   vector<float>   *el_convvtxz;
   vector<float>   *el_Rconv;
   vector<float>   *el_zconv;
   vector<float>   *el_convvtxchi2;
   vector<float>   *el_pt1conv;
   vector<int>     *el_convtrk1nBLHits;
   vector<int>     *el_convtrk1nPixHits;
   vector<int>     *el_convtrk1nSCTHits;
   vector<int>     *el_convtrk1nTRTHits;
   vector<float>   *el_pt2conv;
   vector<int>     *el_convtrk2nBLHits;
   vector<int>     *el_convtrk2nPixHits;
   vector<int>     *el_convtrk2nSCTHits;
   vector<int>     *el_convtrk2nTRTHits;
   vector<float>   *el_ptconv;
   vector<float>   *el_pzconv;
   vector<float>   *el_pos7;
   vector<float>   *el_etacorrmag;
   vector<float>   *el_deltaeta1;
   vector<float>   *el_deltaeta2;
   vector<float>   *el_deltaphi2;
   vector<float>   *el_deltaphiRescaled;
   vector<float>   *el_expectHitInBLayer;
   vector<float>   *el_reta;
   vector<float>   *el_rphi;
   vector<float>   *el_EtringnoisedR03sig2;
   vector<float>   *el_EtringnoisedR03sig3;
   vector<float>   *el_EtringnoisedR03sig4;
   vector<double>  *el_isolationlikelihoodjets;
   vector<double>  *el_isolationlikelihoodhqelectrons;
   vector<double>  *el_electronweight;
   vector<double>  *el_electronbgweight;
   vector<double>  *el_softeweight;
   vector<double>  *el_softebgweight;
   vector<double>  *el_neuralnet;
   vector<double>  *el_Hmatrix;
   vector<double>  *el_Hmatrix5;
   vector<double>  *el_adaboost;
   vector<double>  *el_softeneuralnet;
   vector<float>   *el_zvertex;
   vector<float>   *el_errz;
   vector<float>   *el_etap;
   vector<float>   *el_depth;
   vector<int>     *el_refittedTrack_n;
   vector<vector<int> > *el_refittedTrack_author;
   vector<vector<float> > *el_refittedTrack_chi2;
   vector<vector<float> > *el_refittedTrack_qoverp;
   vector<vector<float> > *el_refittedTrack_d0;
   vector<vector<float> > *el_refittedTrack_z0;
   vector<vector<float> > *el_refittedTrack_theta;
   vector<vector<float> > *el_refittedTrack_phi;
   vector<vector<float> > *el_refittedTrack_LMqoverp;
   vector<vector<int> > *el_refittedTrack_hasBrem;
   vector<vector<float> > *el_refittedTrack_bremRadius;
   vector<vector<float> > *el_refittedTrack_bremZ;
   vector<vector<float> > *el_refittedTrack_bremRadiusErr;
   vector<vector<float> > *el_refittedTrack_bremZErr;
   vector<float>   *el_Es0;
   vector<float>   *el_etas0;
   vector<float>   *el_phis0;
   vector<float>   *el_Es1;
   vector<float>   *el_etas1;
   vector<float>   *el_phis1;
   vector<float>   *el_Es2;
   vector<float>   *el_etas2;
   vector<float>   *el_phis2;
   vector<float>   *el_Es3;
   vector<float>   *el_etas3;
   vector<float>   *el_phis3;
   vector<float>   *el_E_PreSamplerB;
   vector<float>   *el_E_EMB1;
   vector<float>   *el_E_EMB2;
   vector<float>   *el_E_EMB3;
   vector<float>   *el_E_PreSamplerE;
   vector<float>   *el_E_EME1;
   vector<float>   *el_E_EME2;
   vector<float>   *el_E_EME3;
   vector<float>   *el_E_HEC0;
   vector<float>   *el_E_HEC1;
   vector<float>   *el_E_HEC2;
   vector<float>   *el_E_HEC3;
   vector<float>   *el_E_TileBar0;
   vector<float>   *el_E_TileBar1;
   vector<float>   *el_E_TileBar2;
   vector<float>   *el_E_TileGap1;
   vector<float>   *el_E_TileGap2;
   vector<float>   *el_E_TileGap3;
   vector<float>   *el_E_TileExt0;
   vector<float>   *el_E_TileExt1;
   vector<float>   *el_E_TileExt2;
   vector<float>   *el_E_FCAL0;
   vector<float>   *el_E_FCAL1;
   vector<float>   *el_E_FCAL2;
   vector<float>   *el_cl_E;
   vector<float>   *el_cl_pt;
   vector<float>   *el_cl_eta;
   vector<float>   *el_cl_phi;
   vector<float>   *el_firstEdens;
   vector<float>   *el_cellmaxfrac;
   vector<float>   *el_longitudinal;
   vector<float>   *el_secondlambda;
   vector<float>   *el_lateral;
   vector<float>   *el_secondR;
   vector<float>   *el_centerlambda;
   vector<float>   *el_rawcl_Es0;
   vector<float>   *el_rawcl_etas0;
   vector<float>   *el_rawcl_phis0;
   vector<float>   *el_rawcl_Es1;
   vector<float>   *el_rawcl_etas1;
   vector<float>   *el_rawcl_phis1;
   vector<float>   *el_rawcl_Es2;
   vector<float>   *el_rawcl_etas2;
   vector<float>   *el_rawcl_phis2;
   vector<float>   *el_rawcl_Es3;
   vector<float>   *el_rawcl_etas3;
   vector<float>   *el_rawcl_phis3;
   vector<float>   *el_rawcl_E;
   vector<float>   *el_rawcl_pt;
   vector<float>   *el_rawcl_eta;
   vector<float>   *el_rawcl_phi;
   vector<float>   *el_trackd0;
   vector<float>   *el_trackz0;
   vector<float>   *el_trackphi;
   vector<float>   *el_tracktheta;
   vector<float>   *el_trackqoverp;
   vector<float>   *el_trackpt;
   vector<float>   *el_tracketa;
   vector<float>   *el_trackfitchi2;
   vector<int>     *el_trackfitndof;
   vector<int>     *el_nBLHits;
   vector<int>     *el_nPixHits;
   vector<int>     *el_nSCTHits;
   vector<int>     *el_nTRTHits;
   vector<int>     *el_nPixHoles;
   vector<int>     *el_nSCTHoles;
   vector<int>     *el_nBLSharedHits;
   vector<int>     *el_nPixSharedHits;
   vector<int>     *el_nSCTSharedHits;
   vector<int>     *el_nTRTHighTHits;
   vector<int>     *el_nTRTOutliers;
   vector<int>     *el_nTRTHighTOutliers;
   vector<int>     *el_nSiHits;
   vector<float>   *el_TRTHighTHitsRatio;
   vector<float>   *el_pixeldEdx;
   vector<float>   *el_eProbabilityComb;
   vector<float>   *el_eProbabilityHT;
   vector<float>   *el_eProbabilityToT;
   vector<float>   *el_eProbabilityBrem;
   vector<float>   *el_vertx;
   vector<float>   *el_verty;
   vector<float>   *el_vertz;
   vector<int>     *el_hastrack;
   vector<float>   *el_deltaEmax2;
   vector<float>   *el_calibHitsShowerDepth;
   vector<float>   *el_trackd0beam;
   vector<float>   *el_tracksigd0beam;
   vector<float>   *el_trackd0pv;
   vector<float>   *el_tracksigd0pv;
   vector<float>   *el_trackz0pv;
   vector<float>   *el_tracksigz0pv;
   vector<float>   *el_trackd0pvunbiased;
   vector<float>   *el_tracksigd0pvunbiased;
   vector<float>   *el_trackz0pvunbiased;
   vector<float>   *el_tracksigz0pvunbiased;
   vector<unsigned int> *el_isIso;
   vector<float>   *el_mvaptcone20;
   vector<float>   *el_mvaptcone30;
   vector<float>   *el_mvaptcone40;
   vector<float>   *el_jet_dr;
   vector<float>   *el_jet_E;
   vector<float>   *el_jet_pt;
   vector<float>   *el_jet_m;
   vector<float>   *el_jet_eta;
   vector<float>   *el_jet_phi;
   vector<int>     *el_jet_matched;
   vector<float>   *el_Etcone40_pt_corrected;
   vector<float>   *el_Etcone40_ED_corrected;
   vector<float>   *el_Etcone40_corrected;
   vector<float>   *el_EF_dr;
   vector<int>     *el_EF_index;
   vector<float>   *el_L2_dr;
   vector<int>     *el_L2_index;
   vector<float>   *el_L1_dr;
   vector<int>     *el_L1_index;
   Int_t           ph_n;
   vector<float>   *ph_E;
   vector<float>   *ph_Et;
   vector<float>   *ph_pt;
   vector<float>   *ph_m;
   vector<float>   *ph_eta;
   vector<float>   *ph_phi;
   vector<float>   *ph_px;
   vector<float>   *ph_py;
   vector<float>   *ph_pz;
   vector<int>     *ph_author;
   vector<int>     *ph_isRecovered;
   vector<unsigned int> *ph_isEM;
   vector<int>     *ph_convFlag;
   vector<int>     *ph_isConv;
   vector<int>     *ph_nConv;
   vector<int>     *ph_nSingleTrackConv;
   vector<int>     *ph_nDoubleTrackConv;
   vector<int>     *ph_loose;
   vector<int>     *ph_tight;
   vector<int>     *ph_tightIso;
   vector<float>   *ph_Ethad;
   vector<float>   *ph_Ethad1;
   vector<float>   *ph_E033;
   vector<float>   *ph_f1;
   vector<float>   *ph_f1core;
   vector<float>   *ph_Emins1;
   vector<float>   *ph_fside;
   vector<float>   *ph_Emax2;
   vector<float>   *ph_ws3;
   vector<float>   *ph_wstot;
   vector<float>   *ph_E132;
   vector<float>   *ph_E1152;
   vector<float>   *ph_emaxs1;
   vector<float>   *ph_deltaEs;
   vector<float>   *ph_E233;
   vector<float>   *ph_E237;
   vector<float>   *ph_E277;
   vector<float>   *ph_weta2;
   vector<float>   *ph_f3;
   vector<float>   *ph_f3core;
   vector<float>   *ph_rphiallcalo;
   vector<float>   *ph_Etcone45;
   vector<float>   *ph_Etcone20;
   vector<float>   *ph_Etcone30;
   vector<float>   *ph_Etcone40;
   vector<float>   *ph_ptcone30;
   vector<float>   *ph_convanglematch;
   vector<float>   *ph_convtrackmatch;
   vector<int>     *ph_hasconv;
   vector<float>   *ph_convvtxx;
   vector<float>   *ph_convvtxy;
   vector<float>   *ph_convvtxz;
   vector<float>   *ph_Rconv;
   vector<float>   *ph_zconv;
   vector<float>   *ph_convvtxchi2;
   vector<float>   *ph_pt1conv;
   vector<int>     *ph_convtrk1nBLHits;
   vector<int>     *ph_convtrk1nPixHits;
   vector<int>     *ph_convtrk1nSCTHits;
   vector<int>     *ph_convtrk1nTRTHits;
   vector<float>   *ph_pt2conv;
   vector<int>     *ph_convtrk2nBLHits;
   vector<int>     *ph_convtrk2nPixHits;
   vector<int>     *ph_convtrk2nSCTHits;
   vector<int>     *ph_convtrk2nTRTHits;
   vector<float>   *ph_ptconv;
   vector<float>   *ph_pzconv;
   vector<float>   *ph_reta;
   vector<float>   *ph_rphi;
   vector<float>   *ph_EtringnoisedR03sig2;
   vector<float>   *ph_EtringnoisedR03sig3;
   vector<float>   *ph_EtringnoisedR03sig4;
   vector<double>  *ph_isolationlikelihoodjets;
   vector<double>  *ph_isolationlikelihoodhqelectrons;
   vector<double>  *ph_loglikelihood;
   vector<double>  *ph_photonweight;
   vector<double>  *ph_photonbgweight;
   vector<double>  *ph_neuralnet;
   vector<double>  *ph_Hmatrix;
   vector<double>  *ph_Hmatrix5;
   vector<double>  *ph_adaboost;
   vector<float>   *ph_zvertex;
   vector<float>   *ph_errz;
   vector<float>   *ph_etap;
   vector<float>   *ph_depth;
   vector<float>   *ph_cl_E;
   vector<float>   *ph_cl_pt;
   vector<float>   *ph_cl_eta;
   vector<float>   *ph_cl_phi;
   vector<float>   *ph_Es0;
   vector<float>   *ph_etas0;
   vector<float>   *ph_phis0;
   vector<float>   *ph_Es1;
   vector<float>   *ph_etas1;
   vector<float>   *ph_phis1;
   vector<float>   *ph_Es2;
   vector<float>   *ph_etas2;
   vector<float>   *ph_phis2;
   vector<float>   *ph_Es3;
   vector<float>   *ph_etas3;
   vector<float>   *ph_phis3;
   vector<float>   *ph_rawcl_Es0;
   vector<float>   *ph_rawcl_etas0;
   vector<float>   *ph_rawcl_phis0;
   vector<float>   *ph_rawcl_Es1;
   vector<float>   *ph_rawcl_etas1;
   vector<float>   *ph_rawcl_phis1;
   vector<float>   *ph_rawcl_Es2;
   vector<float>   *ph_rawcl_etas2;
   vector<float>   *ph_rawcl_phis2;
   vector<float>   *ph_rawcl_Es3;
   vector<float>   *ph_rawcl_etas3;
   vector<float>   *ph_rawcl_phis3;
   vector<float>   *ph_rawcl_E;
   vector<float>   *ph_rawcl_pt;
   vector<float>   *ph_rawcl_eta;
   vector<float>   *ph_rawcl_phi;
   vector<float>   *ph_deltaEmax2;
   vector<float>   *ph_calibHitsShowerDepth;
   vector<unsigned int> *ph_isIso;
   vector<float>   *ph_mvaptcone20;
   vector<float>   *ph_mvaptcone30;
   vector<float>   *ph_mvaptcone40;
   vector<float>   *ph_topoEtcone20;
   vector<float>   *ph_topoEtcone40;
   vector<float>   *ph_topoEtcone60;
   vector<float>   *ph_jet_dr;
   vector<float>   *ph_jet_E;
   vector<float>   *ph_jet_pt;
   vector<float>   *ph_jet_m;
   vector<float>   *ph_jet_eta;
   vector<float>   *ph_jet_phi;
   vector<int>     *ph_jet_matched;
   vector<float>   *ph_convIP;
   vector<float>   *ph_convIPRev;
   vector<float>   *ph_ptIsolationCone;
   vector<float>   *ph_ptIsolationConePhAngle;
   vector<float>   *ph_Etcone40_pt_corrected;
   vector<float>   *ph_Etcone40_ED_corrected;
   vector<float>   *ph_Etcone40_corrected;
   vector<float>   *ph_topodr;
   vector<float>   *ph_topopt;
   vector<float>   *ph_topoeta;
   vector<float>   *ph_topophi;
   vector<int>     *ph_topomatched;
   vector<float>   *ph_topoEMdr;
   vector<float>   *ph_topoEMpt;
   vector<float>   *ph_topoEMeta;
   vector<float>   *ph_topoEMphi;
   vector<int>     *ph_topoEMmatched;
   vector<float>   *ph_EF_dr;
   vector<int>     *ph_EF_index;
   vector<float>   *ph_L2_dr;
   vector<int>     *ph_L2_index;
   vector<float>   *ph_L1_dr;
   vector<int>     *ph_L1_index;
   Int_t           mu_staco_n;
   vector<float>   *mu_staco_E;
   vector<float>   *mu_staco_pt;
   vector<float>   *mu_staco_m;
   vector<float>   *mu_staco_eta;
   vector<float>   *mu_staco_phi;
   vector<float>   *mu_staco_px;
   vector<float>   *mu_staco_py;
   vector<float>   *mu_staco_pz;
   vector<float>   *mu_staco_charge;
   vector<unsigned short> *mu_staco_allauthor;
   vector<int>     *mu_staco_author;
   vector<float>   *mu_staco_matchchi2;
   vector<int>     *mu_staco_matchndof;
   vector<float>   *mu_staco_etcone20;
   vector<float>   *mu_staco_etcone30;
   vector<float>   *mu_staco_etcone40;
   vector<float>   *mu_staco_nucone20;
   vector<float>   *mu_staco_nucone30;
   vector<float>   *mu_staco_nucone40;
   vector<float>   *mu_staco_ptcone20;
   vector<float>   *mu_staco_ptcone30;
   vector<float>   *mu_staco_ptcone40;
   vector<float>   *mu_staco_energyLossPar;
   vector<float>   *mu_staco_energyLossErr;
   vector<float>   *mu_staco_etCore;
   vector<float>   *mu_staco_energyLossType;
   vector<int>     *mu_staco_bestMatch;
   vector<int>     *mu_staco_isStandAloneMuon;
   vector<int>     *mu_staco_isCombinedMuon;
   vector<int>     *mu_staco_isLowPtReconstructedMuon;
   vector<int>     *mu_staco_loose;
   vector<int>     *mu_staco_medium;
   vector<int>     *mu_staco_tight;
   vector<float>   *mu_staco_d0_exPV;
   vector<float>   *mu_staco_z0_exPV;
   vector<float>   *mu_staco_phi_exPV;
   vector<float>   *mu_staco_theta_exPV;
   vector<float>   *mu_staco_qoverp_exPV;
   vector<float>   *mu_staco_cb_d0_exPV;
   vector<float>   *mu_staco_cb_z0_exPV;
   vector<float>   *mu_staco_cb_phi_exPV;
   vector<float>   *mu_staco_cb_theta_exPV;
   vector<float>   *mu_staco_cb_qoverp_exPV;
   vector<float>   *mu_staco_id_d0_exPV;
   vector<float>   *mu_staco_id_z0_exPV;
   vector<float>   *mu_staco_id_phi_exPV;
   vector<float>   *mu_staco_id_theta_exPV;
   vector<float>   *mu_staco_id_qoverp_exPV;
   vector<float>   *mu_staco_me_d0_exPV;
   vector<float>   *mu_staco_me_z0_exPV;
   vector<float>   *mu_staco_me_phi_exPV;
   vector<float>   *mu_staco_me_theta_exPV;
   vector<float>   *mu_staco_me_qoverp_exPV;
   vector<float>   *mu_staco_ie_d0_exPV;
   vector<float>   *mu_staco_ie_z0_exPV;
   vector<float>   *mu_staco_ie_phi_exPV;
   vector<float>   *mu_staco_ie_theta_exPV;
   vector<float>   *mu_staco_ie_qoverp_exPV;
   vector<float>   *mu_staco_cov_d0_exPV;
   vector<float>   *mu_staco_cov_z0_exPV;
   vector<float>   *mu_staco_cov_phi_exPV;
   vector<float>   *mu_staco_cov_theta_exPV;
   vector<float>   *mu_staco_cov_qoverp_exPV;
   vector<float>   *mu_staco_cov_d0_z0_exPV;
   vector<float>   *mu_staco_cov_d0_phi_exPV;
   vector<float>   *mu_staco_cov_d0_theta_exPV;
   vector<float>   *mu_staco_cov_d0_qoverp_exPV;
   vector<float>   *mu_staco_cov_z0_phi_exPV;
   vector<float>   *mu_staco_cov_z0_theta_exPV;
   vector<float>   *mu_staco_cov_z0_qoverp_exPV;
   vector<float>   *mu_staco_cov_phi_theta_exPV;
   vector<float>   *mu_staco_cov_phi_qoverp_exPV;
   vector<float>   *mu_staco_cov_theta_qoverp_exPV;
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
   vector<int>     *mu_staco_nBLHits;
   vector<int>     *mu_staco_nPixHits;
   vector<int>     *mu_staco_nSCTHits;
   vector<int>     *mu_staco_nTRTHits;
   vector<int>     *mu_staco_nTRTHighTHits;
   vector<int>     *mu_staco_nBLSharedHits;
   vector<int>     *mu_staco_nPixSharedHits;
   vector<int>     *mu_staco_nPixHoles;
   vector<int>     *mu_staco_nSCTSharedHits;
   vector<int>     *mu_staco_nSCTHoles;
   vector<int>     *mu_staco_nTRTOutliers;
   vector<int>     *mu_staco_nTRTHighTOutliers;
   vector<int>     *mu_staco_nMDTHits;
   vector<int>     *mu_staco_nMDTHoles;
   vector<int>     *mu_staco_nCSCEtaHits;
   vector<int>     *mu_staco_nCSCEtaHoles;
   vector<int>     *mu_staco_nCSCPhiHits;
   vector<int>     *mu_staco_nCSCPhiHoles;
   vector<int>     *mu_staco_nRPCEtaHits;
   vector<int>     *mu_staco_nRPCEtaHoles;
   vector<int>     *mu_staco_nRPCPhiHits;
   vector<int>     *mu_staco_nRPCPhiHoles;
   vector<int>     *mu_staco_nTGCEtaHits;
   vector<int>     *mu_staco_nTGCEtaHoles;
   vector<int>     *mu_staco_nTGCPhiHits;
   vector<int>     *mu_staco_nTGCPhiHoles;
   vector<int>     *mu_staco_nGangedPixels;
   vector<int>     *mu_staco_nOutliersOnTrack;
   vector<int>     *mu_staco_nMDTBIHits;
   vector<int>     *mu_staco_nMDTBMHits;
   vector<int>     *mu_staco_nMDTBOHits;
   vector<int>     *mu_staco_nMDTBEEHits;
   vector<int>     *mu_staco_nMDTBIS78Hits;
   vector<int>     *mu_staco_nMDTEIHits;
   vector<int>     *mu_staco_nMDTEMHits;
   vector<int>     *mu_staco_nMDTEOHits;
   vector<int>     *mu_staco_nMDTEEHits;
   vector<int>     *mu_staco_nRPCLayer1EtaHits;
   vector<int>     *mu_staco_nRPCLayer2EtaHits;
   vector<int>     *mu_staco_nRPCLayer3EtaHits;
   vector<int>     *mu_staco_nRPCLayer1PhiHits;
   vector<int>     *mu_staco_nRPCLayer2PhiHits;
   vector<int>     *mu_staco_nRPCLayer3PhiHits;
   vector<int>     *mu_staco_nTGCLayer1EtaHits;
   vector<int>     *mu_staco_nTGCLayer2EtaHits;
   vector<int>     *mu_staco_nTGCLayer3EtaHits;
   vector<int>     *mu_staco_nTGCLayer4EtaHits;
   vector<int>     *mu_staco_nTGCLayer1PhiHits;
   vector<int>     *mu_staco_nTGCLayer2PhiHits;
   vector<int>     *mu_staco_nTGCLayer3PhiHits;
   vector<int>     *mu_staco_nTGCLayer4PhiHits;
   vector<int>     *mu_staco_barrelSectors;
   vector<int>     *mu_staco_endcapSectors;
   vector<float>   *mu_staco_trackd0;
   vector<float>   *mu_staco_trackz0;
   vector<float>   *mu_staco_trackphi;
   vector<float>   *mu_staco_tracktheta;
   vector<float>   *mu_staco_trackqoverp;
   vector<float>   *mu_staco_trackcov_d0;
   vector<float>   *mu_staco_trackcov_z0;
   vector<float>   *mu_staco_trackcov_phi;
   vector<float>   *mu_staco_trackcov_theta;
   vector<float>   *mu_staco_trackcov_qoverp;
   vector<float>   *mu_staco_trackcov_d0_z0;
   vector<float>   *mu_staco_trackcov_d0_phi;
   vector<float>   *mu_staco_trackcov_d0_theta;
   vector<float>   *mu_staco_trackcov_d0_qoverp;
   vector<float>   *mu_staco_trackcov_z0_phi;
   vector<float>   *mu_staco_trackcov_z0_theta;
   vector<float>   *mu_staco_trackcov_z0_qoverp;
   vector<float>   *mu_staco_trackcov_phi_theta;
   vector<float>   *mu_staco_trackcov_phi_qoverp;
   vector<float>   *mu_staco_trackcov_theta_qoverp;
   vector<float>   *mu_staco_trackfitchi2;
   vector<int>     *mu_staco_trackfitndof;
   vector<int>     *mu_staco_hastrack;
   vector<float>   *mu_staco_EF_dr;
   vector<float>   *mu_staco_EF_cb_eta;
   vector<float>   *mu_staco_EF_cb_phi;
   vector<float>   *mu_staco_EF_cb_pt;
   vector<float>   *mu_staco_EF_ms_eta;
   vector<float>   *mu_staco_EF_ms_phi;
   vector<float>   *mu_staco_EF_ms_pt;
   vector<float>   *mu_staco_EF_me_eta;
   vector<float>   *mu_staco_EF_me_phi;
   vector<float>   *mu_staco_EF_me_pt;
   vector<int>     *mu_staco_EF_matched;
   vector<float>   *mu_staco_L2CB_dr;
   vector<float>   *mu_staco_L2CB_pt;
   vector<float>   *mu_staco_L2CB_eta;
   vector<float>   *mu_staco_L2CB_phi;
   vector<float>   *mu_staco_L2CB_id_pt;
   vector<float>   *mu_staco_L2CB_ms_pt;
   vector<int>     *mu_staco_L2CB_nPixHits;
   vector<int>     *mu_staco_L2CB_nSCTHits;
   vector<int>     *mu_staco_L2CB_nTRTHits;
   vector<int>     *mu_staco_L2CB_nTRTHighTHits;
   vector<int>     *mu_staco_L2CB_matched;
   vector<float>   *mu_staco_L1_dr;
   vector<float>   *mu_staco_L1_pt;
   vector<float>   *mu_staco_L1_eta;
   vector<float>   *mu_staco_L1_phi;
   vector<short>   *mu_staco_L1_thrNumber;
   vector<short>   *mu_staco_L1_RoINumber;
   vector<short>   *mu_staco_L1_sectorAddress;
   vector<int>     *mu_staco_L1_firstCandidate;
   vector<int>     *mu_staco_L1_moreCandInRoI;
   vector<int>     *mu_staco_L1_moreCandInSector;
   vector<short>   *mu_staco_L1_source;
   vector<short>   *mu_staco_L1_hemisphere;
   vector<int>     *mu_staco_L1_matched;
   Int_t           mu_calo_n;
   vector<float>   *mu_calo_E;
   vector<float>   *mu_calo_pt;
   vector<float>   *mu_calo_m;
   vector<float>   *mu_calo_eta;
   vector<float>   *mu_calo_phi;
   vector<float>   *mu_calo_px;
   vector<float>   *mu_calo_py;
   vector<float>   *mu_calo_pz;
   vector<float>   *mu_calo_charge;
   vector<unsigned short> *mu_calo_allauthor;
   vector<int>     *mu_calo_author;
   vector<float>   *mu_calo_matchchi2;
   vector<int>     *mu_calo_matchndof;
   vector<float>   *mu_calo_etcone20;
   vector<float>   *mu_calo_etcone30;
   vector<float>   *mu_calo_etcone40;
   vector<float>   *mu_calo_nucone20;
   vector<float>   *mu_calo_nucone30;
   vector<float>   *mu_calo_nucone40;
   vector<float>   *mu_calo_ptcone20;
   vector<float>   *mu_calo_ptcone30;
   vector<float>   *mu_calo_ptcone40;
   vector<float>   *mu_calo_energyLossPar;
   vector<float>   *mu_calo_energyLossErr;
   vector<float>   *mu_calo_etCore;
   vector<float>   *mu_calo_energyLossType;
   vector<int>     *mu_calo_bestMatch;
   vector<int>     *mu_calo_isStandAloneMuon;
   vector<int>     *mu_calo_isCombinedMuon;
   vector<int>     *mu_calo_isLowPtReconstructedMuon;
   vector<int>     *mu_calo_loose;
   vector<int>     *mu_calo_medium;
   vector<int>     *mu_calo_tight;
   vector<float>   *mu_calo_d0_exPV;
   vector<float>   *mu_calo_z0_exPV;
   vector<float>   *mu_calo_phi_exPV;
   vector<float>   *mu_calo_theta_exPV;
   vector<float>   *mu_calo_qoverp_exPV;
   vector<float>   *mu_calo_cb_d0_exPV;
   vector<float>   *mu_calo_cb_z0_exPV;
   vector<float>   *mu_calo_cb_phi_exPV;
   vector<float>   *mu_calo_cb_theta_exPV;
   vector<float>   *mu_calo_cb_qoverp_exPV;
   vector<float>   *mu_calo_id_d0_exPV;
   vector<float>   *mu_calo_id_z0_exPV;
   vector<float>   *mu_calo_id_phi_exPV;
   vector<float>   *mu_calo_id_theta_exPV;
   vector<float>   *mu_calo_id_qoverp_exPV;
   vector<float>   *mu_calo_me_d0_exPV;
   vector<float>   *mu_calo_me_z0_exPV;
   vector<float>   *mu_calo_me_phi_exPV;
   vector<float>   *mu_calo_me_theta_exPV;
   vector<float>   *mu_calo_me_qoverp_exPV;
   vector<float>   *mu_calo_ie_d0_exPV;
   vector<float>   *mu_calo_ie_z0_exPV;
   vector<float>   *mu_calo_ie_phi_exPV;
   vector<float>   *mu_calo_ie_theta_exPV;
   vector<float>   *mu_calo_ie_qoverp_exPV;
   vector<float>   *mu_calo_cov_d0_exPV;
   vector<float>   *mu_calo_cov_z0_exPV;
   vector<float>   *mu_calo_cov_phi_exPV;
   vector<float>   *mu_calo_cov_theta_exPV;
   vector<float>   *mu_calo_cov_qoverp_exPV;
   vector<float>   *mu_calo_cov_d0_z0_exPV;
   vector<float>   *mu_calo_cov_d0_phi_exPV;
   vector<float>   *mu_calo_cov_d0_theta_exPV;
   vector<float>   *mu_calo_cov_d0_qoverp_exPV;
   vector<float>   *mu_calo_cov_z0_phi_exPV;
   vector<float>   *mu_calo_cov_z0_theta_exPV;
   vector<float>   *mu_calo_cov_z0_qoverp_exPV;
   vector<float>   *mu_calo_cov_phi_theta_exPV;
   vector<float>   *mu_calo_cov_phi_qoverp_exPV;
   vector<float>   *mu_calo_cov_theta_qoverp_exPV;
   vector<float>   *mu_calo_ms_d0;
   vector<float>   *mu_calo_ms_z0;
   vector<float>   *mu_calo_ms_phi;
   vector<float>   *mu_calo_ms_theta;
   vector<float>   *mu_calo_ms_qoverp;
   vector<float>   *mu_calo_id_d0;
   vector<float>   *mu_calo_id_z0;
   vector<float>   *mu_calo_id_phi;
   vector<float>   *mu_calo_id_theta;
   vector<float>   *mu_calo_id_qoverp;
   vector<float>   *mu_calo_me_d0;
   vector<float>   *mu_calo_me_z0;
   vector<float>   *mu_calo_me_phi;
   vector<float>   *mu_calo_me_theta;
   vector<float>   *mu_calo_me_qoverp;
   vector<float>   *mu_calo_ie_d0;
   vector<float>   *mu_calo_ie_z0;
   vector<float>   *mu_calo_ie_phi;
   vector<float>   *mu_calo_ie_theta;
   vector<float>   *mu_calo_ie_qoverp;
   vector<int>     *mu_calo_nBLHits;
   vector<int>     *mu_calo_nPixHits;
   vector<int>     *mu_calo_nSCTHits;
   vector<int>     *mu_calo_nTRTHits;
   vector<int>     *mu_calo_nTRTHighTHits;
   vector<int>     *mu_calo_nBLSharedHits;
   vector<int>     *mu_calo_nPixSharedHits;
   vector<int>     *mu_calo_nPixHoles;
   vector<int>     *mu_calo_nSCTSharedHits;
   vector<int>     *mu_calo_nSCTHoles;
   vector<int>     *mu_calo_nTRTOutliers;
   vector<int>     *mu_calo_nTRTHighTOutliers;
   vector<int>     *mu_calo_nMDTHits;
   vector<int>     *mu_calo_nMDTHoles;
   vector<int>     *mu_calo_nCSCEtaHits;
   vector<int>     *mu_calo_nCSCEtaHoles;
   vector<int>     *mu_calo_nCSCPhiHits;
   vector<int>     *mu_calo_nCSCPhiHoles;
   vector<int>     *mu_calo_nRPCEtaHits;
   vector<int>     *mu_calo_nRPCEtaHoles;
   vector<int>     *mu_calo_nRPCPhiHits;
   vector<int>     *mu_calo_nRPCPhiHoles;
   vector<int>     *mu_calo_nTGCEtaHits;
   vector<int>     *mu_calo_nTGCEtaHoles;
   vector<int>     *mu_calo_nTGCPhiHits;
   vector<int>     *mu_calo_nTGCPhiHoles;
   vector<int>     *mu_calo_nGangedPixels;
   vector<int>     *mu_calo_nOutliersOnTrack;
   vector<int>     *mu_calo_nMDTBIHits;
   vector<int>     *mu_calo_nMDTBMHits;
   vector<int>     *mu_calo_nMDTBOHits;
   vector<int>     *mu_calo_nMDTBEEHits;
   vector<int>     *mu_calo_nMDTBIS78Hits;
   vector<int>     *mu_calo_nMDTEIHits;
   vector<int>     *mu_calo_nMDTEMHits;
   vector<int>     *mu_calo_nMDTEOHits;
   vector<int>     *mu_calo_nMDTEEHits;
   vector<int>     *mu_calo_nRPCLayer1EtaHits;
   vector<int>     *mu_calo_nRPCLayer2EtaHits;
   vector<int>     *mu_calo_nRPCLayer3EtaHits;
   vector<int>     *mu_calo_nRPCLayer1PhiHits;
   vector<int>     *mu_calo_nRPCLayer2PhiHits;
   vector<int>     *mu_calo_nRPCLayer3PhiHits;
   vector<int>     *mu_calo_nTGCLayer1EtaHits;
   vector<int>     *mu_calo_nTGCLayer2EtaHits;
   vector<int>     *mu_calo_nTGCLayer3EtaHits;
   vector<int>     *mu_calo_nTGCLayer4EtaHits;
   vector<int>     *mu_calo_nTGCLayer1PhiHits;
   vector<int>     *mu_calo_nTGCLayer2PhiHits;
   vector<int>     *mu_calo_nTGCLayer3PhiHits;
   vector<int>     *mu_calo_nTGCLayer4PhiHits;
   vector<int>     *mu_calo_barrelSectors;
   vector<int>     *mu_calo_endcapSectors;
   vector<float>   *mu_calo_trackd0;
   vector<float>   *mu_calo_trackz0;
   vector<float>   *mu_calo_trackphi;
   vector<float>   *mu_calo_tracktheta;
   vector<float>   *mu_calo_trackqoverp;
   vector<float>   *mu_calo_trackcov_d0;
   vector<float>   *mu_calo_trackcov_z0;
   vector<float>   *mu_calo_trackcov_phi;
   vector<float>   *mu_calo_trackcov_theta;
   vector<float>   *mu_calo_trackcov_qoverp;
   vector<float>   *mu_calo_trackcov_d0_z0;
   vector<float>   *mu_calo_trackcov_d0_phi;
   vector<float>   *mu_calo_trackcov_d0_theta;
   vector<float>   *mu_calo_trackcov_d0_qoverp;
   vector<float>   *mu_calo_trackcov_z0_phi;
   vector<float>   *mu_calo_trackcov_z0_theta;
   vector<float>   *mu_calo_trackcov_z0_qoverp;
   vector<float>   *mu_calo_trackcov_phi_theta;
   vector<float>   *mu_calo_trackcov_phi_qoverp;
   vector<float>   *mu_calo_trackcov_theta_qoverp;
   vector<float>   *mu_calo_trackfitchi2;
   vector<int>     *mu_calo_trackfitndof;
   vector<int>     *mu_calo_hastrack;
   vector<float>   *mu_calo_EF_dr;
   vector<float>   *mu_calo_EF_cb_eta;
   vector<float>   *mu_calo_EF_cb_phi;
   vector<float>   *mu_calo_EF_cb_pt;
   vector<float>   *mu_calo_EF_ms_eta;
   vector<float>   *mu_calo_EF_ms_phi;
   vector<float>   *mu_calo_EF_ms_pt;
   vector<float>   *mu_calo_EF_me_eta;
   vector<float>   *mu_calo_EF_me_phi;
   vector<float>   *mu_calo_EF_me_pt;
   vector<int>     *mu_calo_EF_matched;
   vector<float>   *mu_calo_L2CB_dr;
   vector<float>   *mu_calo_L2CB_pt;
   vector<float>   *mu_calo_L2CB_eta;
   vector<float>   *mu_calo_L2CB_phi;
   vector<float>   *mu_calo_L2CB_id_pt;
   vector<float>   *mu_calo_L2CB_ms_pt;
   vector<int>     *mu_calo_L2CB_nPixHits;
   vector<int>     *mu_calo_L2CB_nSCTHits;
   vector<int>     *mu_calo_L2CB_nTRTHits;
   vector<int>     *mu_calo_L2CB_nTRTHighTHits;
   vector<int>     *mu_calo_L2CB_matched;
   vector<float>   *mu_calo_L1_dr;
   vector<float>   *mu_calo_L1_pt;
   vector<float>   *mu_calo_L1_eta;
   vector<float>   *mu_calo_L1_phi;
   vector<short>   *mu_calo_L1_thrNumber;
   vector<short>   *mu_calo_L1_RoINumber;
   vector<short>   *mu_calo_L1_sectorAddress;
   vector<int>     *mu_calo_L1_firstCandidate;
   vector<int>     *mu_calo_L1_moreCandInRoI;
   vector<int>     *mu_calo_L1_moreCandInSector;
   vector<short>   *mu_calo_L1_source;
   vector<short>   *mu_calo_L1_hemisphere;
   vector<int>     *mu_calo_L1_matched;
   Int_t           tau_n;
   vector<float>   *tau_Et;
   vector<float>   *tau_pt;
   vector<float>   *tau_m;
   vector<float>   *tau_eta;
   vector<float>   *tau_phi;
   vector<float>   *tau_charge;
   vector<float>   *tau_BDTEleScore;
   vector<float>   *tau_BDTJetScore;
   vector<float>   *tau_discCut;
   vector<float>   *tau_discCutTMVA;
   vector<float>   *tau_discLL;
   vector<float>   *tau_discNN;
   vector<float>   *tau_efficLL;
   vector<float>   *tau_efficNN;
   vector<float>   *tau_likelihood;
   vector<float>   *tau_tauJetNeuralNetwork;
   vector<float>   *tau_tauENeuralNetwork;
   vector<float>   *tau_tauElTauLikelihood;
   vector<int>     *tau_electronVetoLoose;
   vector<int>     *tau_electronVetoMedium;
   vector<int>     *tau_electronVetoTight;
   vector<int>     *tau_muonVeto;
   vector<int>     *tau_tauCutLoose;
   vector<int>     *tau_tauCutMedium;
   vector<int>     *tau_tauCutTight;
   vector<int>     *tau_tauCutSafeLoose;
   vector<int>     *tau_tauCutSafeMedium;
   vector<int>     *tau_tauCutSafeTight;
   vector<int>     *tau_tauCutSafeCaloLoose;
   vector<int>     *tau_tauCutSafeCaloMedium;
   vector<int>     *tau_tauCutSafeCaloTight;
   vector<int>     *tau_tauLlhLoose;
   vector<int>     *tau_tauLlhMedium;
   vector<int>     *tau_tauLlhTight;
   vector<int>     *tau_author;
   vector<int>     *tau_ROIword;
   vector<int>     *tau_nProng;
   vector<int>     *tau_numTrack;
   vector<float>   *tau_etOverPtLeadTrk;
   vector<float>   *tau_ipZ0SinThetaSigLeadTrk;
   vector<float>   *tau_leadTrkPt;
   vector<int>     *tau_nLooseTrk;
   vector<int>     *tau_nLooseConvTrk;
   vector<int>     *tau_nProngLoose;
   vector<float>   *tau_ipSigLeadTrk;
   vector<float>   *tau_ipSigLeadLooseTrk;
   vector<float>   *tau_etOverPtLeadLooseTrk;
   vector<float>   *tau_leadLooseTrkPt;
   vector<float>   *tau_chrgLooseTrk;
   vector<float>   *tau_massTrkSys;
   vector<float>   *tau_trkWidth2;
   vector<float>   *tau_trFlightPathSig;
   vector<float>   *tau_etEflow;
   vector<float>   *tau_mEflow;
   vector<int>     *tau_nPi0;
   vector<float>   *tau_ele_E237E277;
   vector<float>   *tau_ele_PresamplerFraction;
   vector<float>   *tau_ele_ECALFirstFraction;
   vector<float>   *tau_seedCalo_EMRadius;
   vector<float>   *tau_seedCalo_hadRadius;
   vector<float>   *tau_seedCalo_etEMAtEMScale;
   vector<float>   *tau_seedCalo_etHadAtEMScale;
   vector<float>   *tau_seedCalo_isolFrac;
   vector<float>   *tau_seedCalo_centFrac;
   vector<float>   *tau_seedCalo_stripWidth2;
   vector<int>     *tau_seedCalo_nStrip;
   vector<float>   *tau_seedCalo_etEMCalib;
   vector<float>   *tau_seedCalo_etHadCalib;
   vector<float>   *tau_seedCalo_eta;
   vector<float>   *tau_seedCalo_phi;
   vector<float>   *tau_seedCalo_nIsolLooseTrk;
   vector<float>   *tau_seedCalo_trkAvgDist;
   vector<float>   *tau_seedCalo_trkRmsDist;
   vector<float>   *tau_seedTrk_EMRadius;
   vector<float>   *tau_seedTrk_isolFrac;
   vector<float>   *tau_seedTrk_etChrgHadOverSumTrkPt;
   vector<float>   *tau_seedTrk_isolFracWide;
   vector<float>   *tau_seedTrk_etHadAtEMScale;
   vector<float>   *tau_seedTrk_etEMAtEMScale;
   vector<float>   *tau_seedTrk_etEMCL;
   vector<float>   *tau_seedTrk_etChrgEM;
   vector<float>   *tau_seedTrk_etNeuEM;
   vector<float>   *tau_seedTrk_etResNeuEM;
   vector<float>   *tau_seedTrk_hadLeakEt;
   vector<float>   *tau_seedTrk_sumEMCellEtOverLeadTrkPt;
   vector<float>   *tau_seedTrk_secMaxStripEt;
   vector<float>   *tau_seedTrk_stripWidth2;
   vector<int>     *tau_seedTrk_nStrip;
   vector<float>   *tau_seedTrk_etChrgHad;
   vector<int>     *tau_seedTrk_nOtherCoreTrk;
   vector<int>     *tau_seedTrk_nIsolTrk;
   vector<float>   *tau_seedTrk_etIsolEM;
   vector<float>   *tau_seedTrk_etIsolHad;
   vector<float>   *tau_calcVars_sumTrkPt;
   vector<int>     *tau_calcVars_numTopoClusters;
   vector<float>   *tau_calcVars_numEffTopoClusters;
   vector<float>   *tau_calcVars_topoInvMass;
   vector<float>   *tau_calcVars_effTopoInvMass;
   vector<float>   *tau_calcVars_topoMeanDeltaR;
   vector<float>   *tau_calcVars_effTopoMeanDeltaR;
   vector<float>   *tau_calcVars_etHadSumPtTracks;
   vector<float>   *tau_calcVars_etEMSumPtTracks;
   vector<float>   *tau_calcVars_etHad_EMScale_Pt3Trks;
   vector<float>   *tau_calcVars_etEM_EMScale_Pt3Trks;
   vector<float>   *tau_calcVars_mass;
   vector<float>   *tau_calcVars_ipSigLeadLooseTrk;
   vector<float>   *tau_calcVars_drMax;
   vector<float>   *tau_calcVars_drMin;
   vector<float>   *tau_calcVars_emFracCalib;
   vector<float>   *tau_calcVars_TRTHTOverLT_LeadTrk;
   vector<vector<float> > *tau_cluster_E;
   vector<vector<float> > *tau_cluster_eta;
   vector<vector<float> > *tau_cluster_phi;
   vector<unsigned int> *tau_cluster_n;
   vector<vector<float> > *tau_Pi0Cluster_pt;
   vector<vector<float> > *tau_Pi0Cluster_eta;
   vector<vector<float> > *tau_Pi0Cluster_phi;
   vector<float>   *tau_secvtx_x;
   vector<float>   *tau_secvtx_y;
   vector<float>   *tau_secvtx_z;
   vector<float>   *tau_secvtx_chiSquared;
   vector<float>   *tau_secvtx_numberDoF;
   vector<float>   *tau_jet_Et;
   vector<float>   *tau_jet_pt;
   vector<float>   *tau_jet_m;
   vector<float>   *tau_jet_eta;
   vector<float>   *tau_jet_phi;
   vector<float>   *tau_jet_WIDTH;
   vector<float>   *tau_jet_n90;
   vector<float>   *tau_jet_n90constituents;
   vector<float>   *tau_jet_fracSamplingMax;
   vector<float>   *tau_jet_SamplingMax;
   vector<float>   *tau_jet_BCH_CORR_CELL;
   vector<float>   *tau_jet_BCH_CORR_JET;
   vector<float>   *tau_jet_BCH_CORR_JET_FORCELL;
   vector<float>   *tau_jet_ENG_BAD_CELLS;
   vector<float>   *tau_jet_N_BAD_CELLS;
   vector<float>   *tau_jet_N_BAD_CELLS_CORR;
   vector<float>   *tau_jet_BAD_CELLS_CORR_E;
   vector<float>   *tau_jet_hecf;
   vector<float>   *tau_jet_tgap3f;
   vector<int>     *tau_jet_isGood;
   vector<float>   *tau_jet_emfrac;
   vector<float>   *tau_jet_GCWJES;
   vector<float>   *tau_jet_EMJES;
   vector<float>   *tau_jet_emscale_E;
   vector<float>   *tau_jet_emscale_pt;
   vector<float>   *tau_jet_emscale_m;
   vector<float>   *tau_jet_emscale_eta;
   vector<float>   *tau_jet_emscale_phi;
   vector<float>   *tau_jet_jvtxf;
   vector<float>   *tau_jet_jvtx_x;
   vector<float>   *tau_jet_jvtx_y;
   vector<float>   *tau_jet_jvtx_z;
   vector<double>  *tau_jet_flavor_weight;
   vector<double>  *tau_jet_flavor_weight_TrackCounting2D;
   vector<double>  *tau_jet_flavor_weight_JetProb;
   vector<double>  *tau_jet_flavor_weight_IP1D;
   vector<double>  *tau_jet_flavor_weight_IP2D;
   vector<double>  *tau_jet_flavor_weight_IP3D;
   vector<double>  *tau_jet_flavor_weight_SV0;
   vector<double>  *tau_jet_flavor_weight_SV1;
   vector<double>  *tau_jet_flavor_weight_SV2;
   vector<double>  *tau_jet_flavor_weight_JetFitterTag;
   vector<double>  *tau_jet_flavor_weight_JetFitterCOMB;
   vector<double>  *tau_jet_flavor_weight_JetFitterTagNN;
   vector<double>  *tau_jet_flavor_weight_JetFitterCOMBNN;
   vector<double>  *tau_jet_flavor_weight_SoftMuonTag;
   vector<double>  *tau_jet_flavor_weight_SoftElectronTag;
   vector<float>   *tau_jet_e_PreSamplerB;
   vector<float>   *tau_jet_e_EMB1;
   vector<float>   *tau_jet_e_EMB2;
   vector<float>   *tau_jet_e_EMB3;
   vector<float>   *tau_jet_e_PreSamplerE;
   vector<float>   *tau_jet_e_EME1;
   vector<float>   *tau_jet_e_EME2;
   vector<float>   *tau_jet_e_EME3;
   vector<float>   *tau_jet_e_HEC0;
   vector<float>   *tau_jet_e_HEC1;
   vector<float>   *tau_jet_e_HEC2;
   vector<float>   *tau_jet_e_HEC3;
   vector<float>   *tau_jet_e_TileBar0;
   vector<float>   *tau_jet_e_TileBar1;
   vector<float>   *tau_jet_e_TileBar2;
   vector<float>   *tau_jet_e_TileGap1;
   vector<float>   *tau_jet_e_TileGap2;
   vector<float>   *tau_jet_e_TileGap3;
   vector<float>   *tau_jet_e_TileExt0;
   vector<float>   *tau_jet_e_TileExt1;
   vector<float>   *tau_jet_e_TileExt2;
   vector<float>   *tau_jet_e_FCAL0;
   vector<float>   *tau_jet_e_FCAL1;
   vector<float>   *tau_jet_e_FCAL2;
   vector<vector<float> > *tau_jet_shapeBins;
   vector<int>     *tau_track_n;
   vector<vector<float> > *tau_track_d0;
   vector<vector<float> > *tau_track_z0;
   vector<vector<float> > *tau_track_phi;
   vector<vector<float> > *tau_track_theta;
   vector<vector<float> > *tau_track_qoverp;
   vector<vector<float> > *tau_track_pt;
   vector<vector<float> > *tau_track_eta;
   vector<vector<float> > *tau_track_atPV_d0;
   vector<vector<float> > *tau_track_atPV_z0;
   vector<vector<float> > *tau_track_atPV_phi;
   vector<vector<float> > *tau_track_atPV_theta;
   vector<vector<float> > *tau_track_atPV_qoverp;
   vector<vector<float> > *tau_track_atPV_pt;
   vector<vector<float> > *tau_track_atPV_eta;
   vector<vector<int> > *tau_track_nBLHits;
   vector<vector<int> > *tau_track_nPixHits;
   vector<vector<int> > *tau_track_nSCTHits;
   vector<vector<int> > *tau_track_nTRTHits;
   vector<vector<int> > *tau_track_nPixHoles;
   vector<vector<int> > *tau_track_nSCTHoles;
   vector<vector<int> > *tau_track_nBLSharedHits;
   vector<vector<int> > *tau_track_nPixSharedHits;
   vector<vector<int> > *tau_track_nSCTSharedHits;
   vector<vector<int> > *tau_track_nTRTHighTHits;
   vector<vector<int> > *tau_track_nTRTOutliers;
   vector<vector<int> > *tau_track_nTRTHighTOutliers;
   vector<vector<int> > *tau_track_nHits;
   vector<vector<float> > *tau_track_pixeldEdx;
   vector<float>   *tau_EF_dr;
   vector<float>   *tau_EF_E;
   vector<float>   *tau_EF_Et;
   vector<float>   *tau_EF_pt;
   vector<float>   *tau_EF_eta;
   vector<float>   *tau_EF_phi;
   vector<int>     *tau_EF_matched;
   vector<float>   *tau_L2_dr;
   vector<float>   *tau_L2_E;
   vector<float>   *tau_L2_Et;
   vector<float>   *tau_L2_pt;
   vector<float>   *tau_L2_eta;
   vector<float>   *tau_L2_phi;
   vector<int>     *tau_L2_matched;
   vector<float>   *tau_L1_dr;
   vector<float>   *tau_L1_Et;
   vector<float>   *tau_L1_pt;
   vector<float>   *tau_L1_eta;
   vector<float>   *tau_L1_phi;
   vector<int>     *tau_L1_matched;
   Float_t         MET_RefFinal_etx;
   Float_t         MET_RefFinal_ety;
   Float_t         MET_RefFinal_sumet;
   Float_t         MET_RefFinal_et;
   Float_t         MET_RefFinal_phi;
   Float_t         MET_Cryo_etx;
   Float_t         MET_Cryo_ety;
   Float_t         MET_Cryo_sumet;
   Float_t         MET_Cryo_et;
   Float_t         MET_Cryo_phi;
   Float_t         MET_RefEle_etx;
   Float_t         MET_RefEle_ety;
   Float_t         MET_RefEle_sumet;
   Float_t         MET_RefEle_et;
   Float_t         MET_RefEle_phi;
   Float_t         MET_RefJet_etx;
   Float_t         MET_RefJet_ety;
   Float_t         MET_RefJet_sumet;
   Float_t         MET_RefJet_et;
   Float_t         MET_RefJet_phi;
   Float_t         MET_SoftJets_etx;
   Float_t         MET_SoftJets_ety;
   Float_t         MET_SoftJets_sumet;
   Float_t         MET_SoftJets_et;
   Float_t         MET_SoftJets_phi;
   Float_t         MET_RefMuon_etx;
   Float_t         MET_RefMuon_ety;
   Float_t         MET_RefMuon_sumet;
   Float_t         MET_RefMuon_et;
   Float_t         MET_RefMuon_phi;
   Float_t         MET_RefMuon_Staco_etx;
   Float_t         MET_RefMuon_Staco_ety;
   Float_t         MET_RefMuon_Staco_sumet;
   Float_t         MET_RefMuon_Staco_et;
   Float_t         MET_RefMuon_Staco_phi;
   Float_t         MET_RefMuon_Muid_etx;
   Float_t         MET_RefMuon_Muid_ety;
   Float_t         MET_RefMuon_Muid_sumet;
   Float_t         MET_RefMuon_Muid_et;
   Float_t         MET_RefMuon_Muid_phi;
   Float_t         MET_RefGamma_etx;
   Float_t         MET_RefGamma_ety;
   Float_t         MET_RefGamma_sumet;
   Float_t         MET_RefGamma_et;
   Float_t         MET_RefGamma_phi;
   Float_t         MET_RefTau_etx;
   Float_t         MET_RefTau_ety;
   Float_t         MET_RefTau_sumet;
   Float_t         MET_RefTau_et;
   Float_t         MET_RefTau_phi;
   Float_t         MET_CellOut_etx;
   Float_t         MET_CellOut_ety;
   Float_t         MET_CellOut_sumet;
   Float_t         MET_CellOut_et;
   Float_t         MET_CellOut_phi;
   Float_t         MET_Track_etx;
   Float_t         MET_Track_ety;
   Float_t         MET_Track_sumet;
   Float_t         MET_Track_et;
   Float_t         MET_Track_phi;
   Float_t         MET_Muon_Isol_Staco_etx;
   Float_t         MET_Muon_Isol_Staco_ety;
   Float_t         MET_Muon_Isol_Staco_sumet;
   Float_t         MET_Muon_Isol_Staco_et;
   Float_t         MET_Muon_Isol_Staco_phi;
   Float_t         MET_Muon_NonIsol_Staco_etx;
   Float_t         MET_Muon_NonIsol_Staco_ety;
   Float_t         MET_Muon_NonIsol_Staco_sumet;
   Float_t         MET_Muon_NonIsol_Staco_et;
   Float_t         MET_Muon_NonIsol_Staco_phi;
   Float_t         MET_Muon_Total_Staco_etx;
   Float_t         MET_Muon_Total_Staco_ety;
   Float_t         MET_Muon_Total_Staco_sumet;
   Float_t         MET_Muon_Total_Staco_et;
   Float_t         MET_Muon_Total_Staco_phi;
   Float_t         MET_Muon_Isol_Muid_etx;
   Float_t         MET_Muon_Isol_Muid_ety;
   Float_t         MET_Muon_Isol_Muid_sumet;
   Float_t         MET_Muon_Isol_Muid_et;
   Float_t         MET_Muon_Isol_Muid_phi;
   Float_t         MET_Muon_NonIsol_Muid_etx;
   Float_t         MET_Muon_NonIsol_Muid_ety;
   Float_t         MET_Muon_NonIsol_Muid_sumet;
   Float_t         MET_Muon_NonIsol_Muid_et;
   Float_t         MET_Muon_NonIsol_Muid_phi;
   Float_t         MET_Muon_Total_Muid_etx;
   Float_t         MET_Muon_Total_Muid_ety;
   Float_t         MET_Muon_Total_Muid_sumet;
   Float_t         MET_Muon_Total_Muid_et;
   Float_t         MET_Muon_Total_Muid_phi;
   Float_t         MET_MuonBoy_etx;
   Float_t         MET_MuonBoy_ety;
   Float_t         MET_MuonBoy_sumet;
   Float_t         MET_MuonBoy_et;
   Float_t         MET_MuonBoy_phi;
   Float_t         MET_RefMuon_Track_etx;
   Float_t         MET_RefMuon_Track_ety;
   Float_t         MET_RefMuon_Track_sumet;
   Float_t         MET_RefMuon_Track_et;
   Float_t         MET_RefMuon_Track_phi;
   Float_t         MET_RefMuon_Track_Staco_etx;
   Float_t         MET_RefMuon_Track_Staco_ety;
   Float_t         MET_RefMuon_Track_Staco_sumet;
   Float_t         MET_RefMuon_Track_Staco_et;
   Float_t         MET_RefMuon_Track_Staco_phi;
   Float_t         MET_RefMuon_Track_Muid_etx;
   Float_t         MET_RefMuon_Track_Muid_ety;
   Float_t         MET_RefMuon_Track_Muid_sumet;
   Float_t         MET_RefMuon_Track_Muid_et;
   Float_t         MET_RefMuon_Track_Muid_phi;
   Float_t         MET_CryoCone_etx;
   Float_t         MET_CryoCone_ety;
   Float_t         MET_CryoCone_sumet;
   Float_t         MET_CryoCone_et;
   Float_t         MET_CryoCone_phi;
   Float_t         MET_Final_etx;
   Float_t         MET_Final_ety;
   Float_t         MET_Final_sumet;
   Float_t         MET_Final_et;
   Float_t         MET_Final_phi;
   Float_t         MET_MuonBoy_Spectro_etx;
   Float_t         MET_MuonBoy_Spectro_ety;
   Float_t         MET_MuonBoy_Spectro_sumet;
   Float_t         MET_MuonBoy_Spectro_et;
   Float_t         MET_MuonBoy_Spectro_phi;
   Float_t         MET_MuonBoy_Track_etx;
   Float_t         MET_MuonBoy_Track_ety;
   Float_t         MET_MuonBoy_Track_sumet;
   Float_t         MET_MuonBoy_Track_et;
   Float_t         MET_MuonBoy_Track_phi;
   Float_t         MET_MuonMuid_etx;
   Float_t         MET_MuonMuid_ety;
   Float_t         MET_MuonMuid_sumet;
   Float_t         MET_MuonMuid_et;
   Float_t         MET_MuonMuid_phi;
   Float_t         MET_Muid_etx;
   Float_t         MET_Muid_ety;
   Float_t         MET_Muid_sumet;
   Float_t         MET_Muid_et;
   Float_t         MET_Muid_phi;
   Float_t         MET_Muid_Spectro_etx;
   Float_t         MET_Muid_Spectro_ety;
   Float_t         MET_Muid_Spectro_sumet;
   Float_t         MET_Muid_Spectro_et;
   Float_t         MET_Muid_Spectro_phi;
   Float_t         MET_Muid_Track_etx;
   Float_t         MET_Muid_Track_ety;
   Float_t         MET_Muid_Track_sumet;
   Float_t         MET_Muid_Track_et;
   Float_t         MET_Muid_Track_phi;
   Float_t         MET_Muon_etx;
   Float_t         MET_Muon_ety;
   Float_t         MET_Muon_sumet;
   Float_t         MET_Muon_et;
   Float_t         MET_Muon_phi;
   Float_t         MET_TopoObj_etx;
   Float_t         MET_TopoObj_ety;
   Float_t         MET_TopoObj_sumet;
   Float_t         MET_TopoObj_et;
   Float_t         MET_TopoObj_phi;
   Float_t         MET_LocHadTopoObj_etx;
   Float_t         MET_LocHadTopoObj_ety;
   Float_t         MET_LocHadTopoObj_sumet;
   Float_t         MET_LocHadTopoObj_et;
   Float_t         MET_LocHadTopoObj_phi;
   Float_t         MET_Topo_etx;
   Float_t         MET_Topo_ety;
   Float_t         MET_Topo_sumet;
   Float_t         MET_Topo_et;
   Float_t         MET_Topo_phi;
   Float_t         MET_Topo_SUMET_EMFrac;
   Float_t         MET_Topo_etx_PEMB;
   Float_t         MET_Topo_ety_PEMB;
   Float_t         MET_Topo_sumet_PEMB;
   Float_t         MET_Topo_phi_PEMB;
   Float_t         MET_Topo_etx_EMB;
   Float_t         MET_Topo_ety_EMB;
   Float_t         MET_Topo_sumet_EMB;
   Float_t         MET_Topo_phi_EMB;
   Float_t         MET_Topo_etx_PEMEC;
   Float_t         MET_Topo_ety_PEMEC;
   Float_t         MET_Topo_sumet_PEMEC;
   Float_t         MET_Topo_phi_PEMEC;
   Float_t         MET_Topo_etx_EME;
   Float_t         MET_Topo_ety_EME;
   Float_t         MET_Topo_sumet_EME;
   Float_t         MET_Topo_phi_EME;
   Float_t         MET_Topo_etx_TILE;
   Float_t         MET_Topo_ety_TILE;
   Float_t         MET_Topo_sumet_TILE;
   Float_t         MET_Topo_phi_TILE;
   Float_t         MET_Topo_etx_HEC;
   Float_t         MET_Topo_ety_HEC;
   Float_t         MET_Topo_sumet_HEC;
   Float_t         MET_Topo_phi_HEC;
   Float_t         MET_Topo_etx_FCAL;
   Float_t         MET_Topo_ety_FCAL;
   Float_t         MET_Topo_sumet_FCAL;
   Float_t         MET_Topo_phi_FCAL;
   Float_t         MET_Topo_nCell_PEMB;
   Float_t         MET_Topo_nCell_EMB;
   Float_t         MET_Topo_nCell_PEMEC;
   Float_t         MET_Topo_nCell_EME;
   Float_t         MET_Topo_nCell_TILE;
   Float_t         MET_Topo_nCell_HEC;
   Float_t         MET_Topo_nCell_FCAL;
   Float_t         MET_Topo_etx_CentralReg;
   Float_t         MET_Topo_ety_CentralReg;
   Float_t         MET_Topo_sumet_CentralReg;
   Float_t         MET_Topo_phi_CentralReg;
   Float_t         MET_Topo_etx_EndcapRegion;
   Float_t         MET_Topo_ety_EndcapRegion;
   Float_t         MET_Topo_sumet_EndcapRegion;
   Float_t         MET_Topo_phi_EndcapRegion;
   Float_t         MET_Topo_etx_ForwardReg;
   Float_t         MET_Topo_ety_ForwardReg;
   Float_t         MET_Topo_sumet_ForwardReg;
   Float_t         MET_Topo_phi_ForwardReg;
   Float_t         MET_Base_etx;
   Float_t         MET_Base_ety;
   Float_t         MET_Base_sumet;
   Float_t         MET_Base_et;
   Float_t         MET_Base_phi;
   Float_t         MET_Base_SUMET_EMFrac;
   Float_t         MET_Base_etx_PEMB;
   Float_t         MET_Base_ety_PEMB;
   Float_t         MET_Base_sumet_PEMB;
   Float_t         MET_Base_phi_PEMB;
   Float_t         MET_Base_etx_EMB;
   Float_t         MET_Base_ety_EMB;
   Float_t         MET_Base_sumet_EMB;
   Float_t         MET_Base_phi_EMB;
   Float_t         MET_Base_etx_PEMEC;
   Float_t         MET_Base_ety_PEMEC;
   Float_t         MET_Base_sumet_PEMEC;
   Float_t         MET_Base_phi_PEMEC;
   Float_t         MET_Base_etx_EME;
   Float_t         MET_Base_ety_EME;
   Float_t         MET_Base_sumet_EME;
   Float_t         MET_Base_phi_EME;
   Float_t         MET_Base_etx_TILE;
   Float_t         MET_Base_ety_TILE;
   Float_t         MET_Base_sumet_TILE;
   Float_t         MET_Base_phi_TILE;
   Float_t         MET_Base_etx_HEC;
   Float_t         MET_Base_ety_HEC;
   Float_t         MET_Base_sumet_HEC;
   Float_t         MET_Base_phi_HEC;
   Float_t         MET_Base_etx_FCAL;
   Float_t         MET_Base_ety_FCAL;
   Float_t         MET_Base_sumet_FCAL;
   Float_t         MET_Base_phi_FCAL;
   Float_t         MET_Base_nCell_PEMB;
   Float_t         MET_Base_nCell_EMB;
   Float_t         MET_Base_nCell_PEMEC;
   Float_t         MET_Base_nCell_EME;
   Float_t         MET_Base_nCell_TILE;
   Float_t         MET_Base_nCell_HEC;
   Float_t         MET_Base_nCell_FCAL;
   Float_t         MET_Base_etx_CentralReg;
   Float_t         MET_Base_ety_CentralReg;
   Float_t         MET_Base_sumet_CentralReg;
   Float_t         MET_Base_phi_CentralReg;
   Float_t         MET_Base_etx_EndcapRegion;
   Float_t         MET_Base_ety_EndcapRegion;
   Float_t         MET_Base_sumet_EndcapRegion;
   Float_t         MET_Base_phi_EndcapRegion;
   Float_t         MET_Base_etx_ForwardReg;
   Float_t         MET_Base_ety_ForwardReg;
   Float_t         MET_Base_sumet_ForwardReg;
   Float_t         MET_Base_phi_ForwardReg;
   Float_t         MET_Base0_etx;
   Float_t         MET_Base0_ety;
   Float_t         MET_Base0_sumet;
   Float_t         MET_Base0_et;
   Float_t         MET_Base0_phi;
   Float_t         MET_Base0_SUMET_EMFrac;
   Float_t         MET_Base0_etx_PEMB;
   Float_t         MET_Base0_ety_PEMB;
   Float_t         MET_Base0_sumet_PEMB;
   Float_t         MET_Base0_phi_PEMB;
   Float_t         MET_Base0_etx_EMB;
   Float_t         MET_Base0_ety_EMB;
   Float_t         MET_Base0_sumet_EMB;
   Float_t         MET_Base0_phi_EMB;
   Float_t         MET_Base0_etx_PEMEC;
   Float_t         MET_Base0_ety_PEMEC;
   Float_t         MET_Base0_sumet_PEMEC;
   Float_t         MET_Base0_phi_PEMEC;
   Float_t         MET_Base0_etx_EME;
   Float_t         MET_Base0_ety_EME;
   Float_t         MET_Base0_sumet_EME;
   Float_t         MET_Base0_phi_EME;
   Float_t         MET_Base0_etx_TILE;
   Float_t         MET_Base0_ety_TILE;
   Float_t         MET_Base0_sumet_TILE;
   Float_t         MET_Base0_phi_TILE;
   Float_t         MET_Base0_etx_HEC;
   Float_t         MET_Base0_ety_HEC;
   Float_t         MET_Base0_sumet_HEC;
   Float_t         MET_Base0_phi_HEC;
   Float_t         MET_Base0_etx_FCAL;
   Float_t         MET_Base0_ety_FCAL;
   Float_t         MET_Base0_sumet_FCAL;
   Float_t         MET_Base0_phi_FCAL;
   Float_t         MET_Base0_nCell_PEMB;
   Float_t         MET_Base0_nCell_EMB;
   Float_t         MET_Base0_nCell_PEMEC;
   Float_t         MET_Base0_nCell_EME;
   Float_t         MET_Base0_nCell_TILE;
   Float_t         MET_Base0_nCell_HEC;
   Float_t         MET_Base0_nCell_FCAL;
   Float_t         MET_Base0_etx_CentralReg;
   Float_t         MET_Base0_ety_CentralReg;
   Float_t         MET_Base0_sumet_CentralReg;
   Float_t         MET_Base0_phi_CentralReg;
   Float_t         MET_Base0_etx_EndcapRegion;
   Float_t         MET_Base0_ety_EndcapRegion;
   Float_t         MET_Base0_sumet_EndcapRegion;
   Float_t         MET_Base0_phi_EndcapRegion;
   Float_t         MET_Base0_etx_ForwardReg;
   Float_t         MET_Base0_ety_ForwardReg;
   Float_t         MET_Base0_sumet_ForwardReg;
   Float_t         MET_Base0_phi_ForwardReg;
   Float_t         MET_CorrTopo_etx;
   Float_t         MET_CorrTopo_ety;
   Float_t         MET_CorrTopo_sumet;
   Float_t         MET_CorrTopo_et;
   Float_t         MET_CorrTopo_phi;
   Float_t         MET_CorrTopo_SUMET_EMFrac;
   Float_t         MET_CorrTopo_etx_PEMB;
   Float_t         MET_CorrTopo_ety_PEMB;
   Float_t         MET_CorrTopo_sumet_PEMB;
   Float_t         MET_CorrTopo_phi_PEMB;
   Float_t         MET_CorrTopo_etx_EMB;
   Float_t         MET_CorrTopo_ety_EMB;
   Float_t         MET_CorrTopo_sumet_EMB;
   Float_t         MET_CorrTopo_phi_EMB;
   Float_t         MET_CorrTopo_etx_PEMEC;
   Float_t         MET_CorrTopo_ety_PEMEC;
   Float_t         MET_CorrTopo_sumet_PEMEC;
   Float_t         MET_CorrTopo_phi_PEMEC;
   Float_t         MET_CorrTopo_etx_EME;
   Float_t         MET_CorrTopo_ety_EME;
   Float_t         MET_CorrTopo_sumet_EME;
   Float_t         MET_CorrTopo_phi_EME;
   Float_t         MET_CorrTopo_etx_TILE;
   Float_t         MET_CorrTopo_ety_TILE;
   Float_t         MET_CorrTopo_sumet_TILE;
   Float_t         MET_CorrTopo_phi_TILE;
   Float_t         MET_CorrTopo_etx_HEC;
   Float_t         MET_CorrTopo_ety_HEC;
   Float_t         MET_CorrTopo_sumet_HEC;
   Float_t         MET_CorrTopo_phi_HEC;
   Float_t         MET_CorrTopo_etx_FCAL;
   Float_t         MET_CorrTopo_ety_FCAL;
   Float_t         MET_CorrTopo_sumet_FCAL;
   Float_t         MET_CorrTopo_phi_FCAL;
   Float_t         MET_CorrTopo_nCell_PEMB;
   Float_t         MET_CorrTopo_nCell_EMB;
   Float_t         MET_CorrTopo_nCell_PEMEC;
   Float_t         MET_CorrTopo_nCell_EME;
   Float_t         MET_CorrTopo_nCell_TILE;
   Float_t         MET_CorrTopo_nCell_HEC;
   Float_t         MET_CorrTopo_nCell_FCAL;
   Float_t         MET_CorrTopo_etx_CentralReg;
   Float_t         MET_CorrTopo_ety_CentralReg;
   Float_t         MET_CorrTopo_sumet_CentralReg;
   Float_t         MET_CorrTopo_phi_CentralReg;
   Float_t         MET_CorrTopo_etx_EndcapRegion;
   Float_t         MET_CorrTopo_ety_EndcapRegion;
   Float_t         MET_CorrTopo_sumet_EndcapRegion;
   Float_t         MET_CorrTopo_phi_EndcapRegion;
   Float_t         MET_CorrTopo_etx_ForwardReg;
   Float_t         MET_CorrTopo_ety_ForwardReg;
   Float_t         MET_CorrTopo_sumet_ForwardReg;
   Float_t         MET_CorrTopo_phi_ForwardReg;
   Float_t         MET_LocHadTopo_etx;
   Float_t         MET_LocHadTopo_ety;
   Float_t         MET_LocHadTopo_sumet;
   Float_t         MET_LocHadTopo_et;
   Float_t         MET_LocHadTopo_phi;
   Float_t         MET_LocHadTopo_SUMET_EMFrac;
   Float_t         MET_LocHadTopo_etx_PEMB;
   Float_t         MET_LocHadTopo_ety_PEMB;
   Float_t         MET_LocHadTopo_sumet_PEMB;
   Float_t         MET_LocHadTopo_phi_PEMB;
   Float_t         MET_LocHadTopo_etx_EMB;
   Float_t         MET_LocHadTopo_ety_EMB;
   Float_t         MET_LocHadTopo_sumet_EMB;
   Float_t         MET_LocHadTopo_phi_EMB;
   Float_t         MET_LocHadTopo_etx_PEMEC;
   Float_t         MET_LocHadTopo_ety_PEMEC;
   Float_t         MET_LocHadTopo_sumet_PEMEC;
   Float_t         MET_LocHadTopo_phi_PEMEC;
   Float_t         MET_LocHadTopo_etx_EME;
   Float_t         MET_LocHadTopo_ety_EME;
   Float_t         MET_LocHadTopo_sumet_EME;
   Float_t         MET_LocHadTopo_phi_EME;
   Float_t         MET_LocHadTopo_etx_TILE;
   Float_t         MET_LocHadTopo_ety_TILE;
   Float_t         MET_LocHadTopo_sumet_TILE;
   Float_t         MET_LocHadTopo_phi_TILE;
   Float_t         MET_LocHadTopo_etx_HEC;
   Float_t         MET_LocHadTopo_ety_HEC;
   Float_t         MET_LocHadTopo_sumet_HEC;
   Float_t         MET_LocHadTopo_phi_HEC;
   Float_t         MET_LocHadTopo_etx_FCAL;
   Float_t         MET_LocHadTopo_ety_FCAL;
   Float_t         MET_LocHadTopo_sumet_FCAL;
   Float_t         MET_LocHadTopo_phi_FCAL;
   Float_t         MET_LocHadTopo_nCell_PEMB;
   Float_t         MET_LocHadTopo_nCell_EMB;
   Float_t         MET_LocHadTopo_nCell_PEMEC;
   Float_t         MET_LocHadTopo_nCell_EME;
   Float_t         MET_LocHadTopo_nCell_TILE;
   Float_t         MET_LocHadTopo_nCell_HEC;
   Float_t         MET_LocHadTopo_nCell_FCAL;
   Float_t         MET_LocHadTopo_etx_CentralReg;
   Float_t         MET_LocHadTopo_ety_CentralReg;
   Float_t         MET_LocHadTopo_sumet_CentralReg;
   Float_t         MET_LocHadTopo_phi_CentralReg;
   Float_t         MET_LocHadTopo_etx_EndcapRegion;
   Float_t         MET_LocHadTopo_ety_EndcapRegion;
   Float_t         MET_LocHadTopo_sumet_EndcapRegion;
   Float_t         MET_LocHadTopo_phi_EndcapRegion;
   Float_t         MET_LocHadTopo_etx_ForwardReg;
   Float_t         MET_LocHadTopo_ety_ForwardReg;
   Float_t         MET_LocHadTopo_sumet_ForwardReg;
   Float_t         MET_LocHadTopo_phi_ForwardReg;
   Float_t         MET_Calib_etx;
   Float_t         MET_Calib_ety;
   Float_t         MET_Calib_sumet;
   Float_t         MET_Calib_et;
   Float_t         MET_Calib_phi;
   Float_t         MET_Calib_SUMET_EMFrac;
   Float_t         MET_Calib_etx_PEMB;
   Float_t         MET_Calib_ety_PEMB;
   Float_t         MET_Calib_sumet_PEMB;
   Float_t         MET_Calib_phi_PEMB;
   Float_t         MET_Calib_etx_EMB;
   Float_t         MET_Calib_ety_EMB;
   Float_t         MET_Calib_sumet_EMB;
   Float_t         MET_Calib_phi_EMB;
   Float_t         MET_Calib_etx_PEMEC;
   Float_t         MET_Calib_ety_PEMEC;
   Float_t         MET_Calib_sumet_PEMEC;
   Float_t         MET_Calib_phi_PEMEC;
   Float_t         MET_Calib_etx_EME;
   Float_t         MET_Calib_ety_EME;
   Float_t         MET_Calib_sumet_EME;
   Float_t         MET_Calib_phi_EME;
   Float_t         MET_Calib_etx_TILE;
   Float_t         MET_Calib_ety_TILE;
   Float_t         MET_Calib_sumet_TILE;
   Float_t         MET_Calib_phi_TILE;
   Float_t         MET_Calib_etx_HEC;
   Float_t         MET_Calib_ety_HEC;
   Float_t         MET_Calib_sumet_HEC;
   Float_t         MET_Calib_phi_HEC;
   Float_t         MET_Calib_etx_FCAL;
   Float_t         MET_Calib_ety_FCAL;
   Float_t         MET_Calib_sumet_FCAL;
   Float_t         MET_Calib_phi_FCAL;
   Float_t         MET_Calib_nCell_PEMB;
   Float_t         MET_Calib_nCell_EMB;
   Float_t         MET_Calib_nCell_PEMEC;
   Float_t         MET_Calib_nCell_EME;
   Float_t         MET_Calib_nCell_TILE;
   Float_t         MET_Calib_nCell_HEC;
   Float_t         MET_Calib_nCell_FCAL;
   Float_t         MET_Calib_etx_CentralReg;
   Float_t         MET_Calib_ety_CentralReg;
   Float_t         MET_Calib_sumet_CentralReg;
   Float_t         MET_Calib_phi_CentralReg;
   Float_t         MET_Calib_etx_EndcapRegion;
   Float_t         MET_Calib_ety_EndcapRegion;
   Float_t         MET_Calib_sumet_EndcapRegion;
   Float_t         MET_Calib_phi_EndcapRegion;
   Float_t         MET_Calib_etx_ForwardReg;
   Float_t         MET_Calib_ety_ForwardReg;
   Float_t         MET_Calib_sumet_ForwardReg;
   Float_t         MET_Calib_phi_ForwardReg;
   Int_t           el_MET_n;
   vector<float>   *el_MET_wpx;
   vector<float>   *el_MET_wpy;
   vector<float>   *el_MET_wet;
   vector<unsigned short> *el_MET_statusWord;
   Int_t           ph_MET_n;
   vector<float>   *ph_MET_wpx;
   vector<float>   *ph_MET_wpy;
   vector<float>   *ph_MET_wet;
   vector<unsigned short> *ph_MET_statusWord;
   Int_t           mu_staco_MET_n;
   vector<float>   *mu_staco_MET_wpx;
   vector<float>   *mu_staco_MET_wpy;
   vector<float>   *mu_staco_MET_wet;
   vector<unsigned short> *mu_staco_MET_statusWord;
   Int_t           tau_MET_n;
   vector<float>   *tau_MET_wpx;
   vector<float>   *tau_MET_wpy;
   vector<float>   *tau_MET_wet;
   vector<unsigned short> *tau_MET_statusWord;
   Int_t           jet_AntiKt4H1Topo_MET_n;
   vector<float>   *jet_AntiKt4H1Topo_MET_wpx;
   vector<float>   *jet_AntiKt4H1Topo_MET_wpy;
   vector<float>   *jet_AntiKt4H1Topo_MET_wet;
   vector<unsigned short> *jet_AntiKt4H1Topo_MET_statusWord;
   Int_t           cl_MET_n;
   vector<float>   *cl_MET_wpx;
   vector<float>   *cl_MET_wpy;
   vector<float>   *cl_MET_wet;
   vector<unsigned short> *cl_MET_statusWord;
   Int_t           cl_n;
   vector<float>   *cl_E;
   vector<float>   *cl_pt;
   vector<float>   *cl_m;
   vector<float>   *cl_eta;
   vector<float>   *cl_phi;
   Float_t         MET_EMJES_RefGamma_etx;
   Float_t         MET_EMJES_RefGamma_ety;
   Float_t         MET_EMJES_RefGamma_sumet;
   Float_t         MET_EMJES_RefGamma_et;
   Float_t         MET_EMJES_RefGamma_phi;
   Float_t         MET_EMJES_RefEle_etx;
   Float_t         MET_EMJES_RefEle_ety;
   Float_t         MET_EMJES_RefEle_sumet;
   Float_t         MET_EMJES_RefEle_et;
   Float_t         MET_EMJES_RefEle_phi;
   Float_t         MET_EMJES_RefTau_etx;
   Float_t         MET_EMJES_RefTau_ety;
   Float_t         MET_EMJES_RefTau_sumet;
   Float_t         MET_EMJES_RefTau_et;
   Float_t         MET_EMJES_RefTau_phi;
   Float_t         MET_EMJES_RefJet_etx;
   Float_t         MET_EMJES_RefJet_ety;
   Float_t         MET_EMJES_RefJet_sumet;
   Float_t         MET_EMJES_RefJet_et;
   Float_t         MET_EMJES_RefJet_phi;
   Float_t         MET_EMJES_RefMuon_Staco_etx;
   Float_t         MET_EMJES_RefMuon_Staco_ety;
   Float_t         MET_EMJES_RefMuon_Staco_sumet;
   Float_t         MET_EMJES_RefMuon_Staco_et;
   Float_t         MET_EMJES_RefMuon_Staco_phi;
   Float_t         MET_EMJES_RefMuon_Track_Staco_etx;
   Float_t         MET_EMJES_RefMuon_Track_Staco_ety;
   Float_t         MET_EMJES_RefMuon_Track_Staco_sumet;
   Float_t         MET_EMJES_RefMuon_Track_Staco_et;
   Float_t         MET_EMJES_RefMuon_Track_Staco_phi;
   Float_t         MET_EMJES_Muon_Isol_Staco_etx;
   Float_t         MET_EMJES_Muon_Isol_Staco_ety;
   Float_t         MET_EMJES_Muon_Isol_Staco_sumet;
   Float_t         MET_EMJES_Muon_Isol_Staco_et;
   Float_t         MET_EMJES_Muon_Isol_Staco_phi;
   Float_t         MET_EMJES_Muon_NonIsol_Staco_etx;
   Float_t         MET_EMJES_Muon_NonIsol_Staco_ety;
   Float_t         MET_EMJES_Muon_NonIsol_Staco_sumet;
   Float_t         MET_EMJES_Muon_NonIsol_Staco_et;
   Float_t         MET_EMJES_Muon_NonIsol_Staco_phi;
   Float_t         MET_EMJES_Muon_Total_Staco_etx;
   Float_t         MET_EMJES_Muon_Total_Staco_ety;
   Float_t         MET_EMJES_Muon_Total_Staco_sumet;
   Float_t         MET_EMJES_Muon_Total_Staco_et;
   Float_t         MET_EMJES_Muon_Total_Staco_phi;
   Float_t         MET_EMJES_CellOutLocHad_etx;
   Float_t         MET_EMJES_CellOutLocHad_ety;
   Float_t         MET_EMJES_CellOutLocHad_sumet;
   Float_t         MET_EMJES_CellOutLocHad_et;
   Float_t         MET_EMJES_CellOutLocHad_phi;
   Float_t         MET_EMJES_RefFinal_CellOutLocHad_etx;
   Float_t         MET_EMJES_RefFinal_CellOutLocHad_ety;
   Float_t         MET_EMJES_RefFinal_CellOutLocHad_sumet;
   Float_t         MET_EMJES_RefFinal_CellOutLocHad_et;
   Float_t         MET_EMJES_RefFinal_CellOutLocHad_phi;
   Float_t         MET_EMJES_RefFinal_CellOutEM_etx;
   Float_t         MET_EMJES_RefFinal_CellOutEM_ety;
   Float_t         MET_EMJES_RefFinal_CellOutEM_sumet;
   Float_t         MET_EMJES_RefFinal_CellOutEM_et;
   Float_t         MET_EMJES_RefFinal_CellOutEM_phi;
   Float_t         MET_EMJES_CellOutEM_etx;
   Float_t         MET_EMJES_CellOutEM_ety;
   Float_t         MET_EMJES_CellOutEM_sumet;
   Float_t         MET_EMJES_CellOutEM_et;
   Float_t         MET_EMJES_CellOutEM_phi;
   Int_t           el_MET_EMJES_n;
   vector<float>   *el_MET_EMJES_wpx;
   vector<float>   *el_MET_EMJES_wpy;
   vector<float>   *el_MET_EMJES_wet;
   vector<unsigned short> *el_MET_EMJES_statusWord;
   Int_t           ph_MET_EMJES_n;
   vector<float>   *ph_MET_EMJES_wpx;
   vector<float>   *ph_MET_EMJES_wpy;
   vector<float>   *ph_MET_EMJES_wet;
   vector<unsigned short> *ph_MET_EMJES_statusWord;
   Int_t           mu_staco_MET_EMJES_n;
   vector<float>   *mu_staco_MET_EMJES_wpx;
   vector<float>   *mu_staco_MET_EMJES_wpy;
   vector<float>   *mu_staco_MET_EMJES_wet;
   vector<unsigned short> *mu_staco_MET_EMJES_statusWord;
   Int_t           tau_MET_EMJES_n;
   vector<float>   *tau_MET_EMJES_wpx;
   vector<float>   *tau_MET_EMJES_wpy;
   vector<float>   *tau_MET_EMJES_wet;
   vector<unsigned short> *tau_MET_EMJES_statusWord;
   Int_t           jet_AntiKt4TopoEM_MET_EMJES_n;
   vector<float>   *jet_AntiKt4TopoEM_MET_EMJES_wpx;
   vector<float>   *jet_AntiKt4TopoEM_MET_EMJES_wpy;
   vector<float>   *jet_AntiKt4TopoEM_MET_EMJES_wet;
   vector<unsigned short> *jet_AntiKt4TopoEM_MET_EMJES_statusWord;
   Int_t           cl_MET_LocHad_n;
   vector<float>   *cl_MET_LocHad_wpx;
   vector<float>   *cl_MET_LocHad_wpy;
   vector<float>   *cl_MET_LocHad_wet;
   vector<unsigned short> *cl_MET_LocHad_statusWord;
   Int_t           cl_MET_EM_20GeVJets_n;
   vector<float>   *cl_MET_EM_20GeVJets_wpx;
   vector<float>   *cl_MET_EM_20GeVJets_wpy;
   vector<float>   *cl_MET_EM_20GeVJets_wet;
   vector<unsigned short> *cl_MET_EM_20GeVJets_statusWord;
   Int_t           cl_MET_EM_30GeVJets_n;
   vector<float>   *cl_MET_EM_30GeVJets_wpx;
   vector<float>   *cl_MET_EM_30GeVJets_wpy;
   vector<float>   *cl_MET_EM_30GeVJets_wet;
   vector<unsigned short> *cl_MET_EM_30GeVJets_statusWord;
   Float_t         MET_Simplified30_RefJet_etx;
   Float_t         MET_Simplified30_RefJet_ety;
   Float_t         MET_Simplified30_RefJet_sumet;
   Float_t         MET_Simplified30_RefJet_et;
   Float_t         MET_Simplified30_RefJet_phi;
   Float_t         MET_Simplified30_RefFinal_etx;
   Float_t         MET_Simplified30_RefFinal_ety;
   Float_t         MET_Simplified30_RefFinal_sumet;
   Float_t         MET_Simplified30_RefFinal_et;
   Float_t         MET_Simplified30_RefFinal_phi;
   Float_t         MET_Simplified30_CellOut_etx;
   Float_t         MET_Simplified30_CellOut_ety;
   Float_t         MET_Simplified30_CellOut_sumet;
   Float_t         MET_Simplified30_CellOut_et;
   Float_t         MET_Simplified30_CellOut_phi;
   Float_t         MET_Simplified30_RefEle_etx;
   Float_t         MET_Simplified30_RefEle_ety;
   Float_t         MET_Simplified30_RefEle_sumet;
   Float_t         MET_Simplified30_RefEle_et;
   Float_t         MET_Simplified30_RefEle_phi;
   Float_t         MET_Simplified30_Muon_Total_Staco_etx;
   Float_t         MET_Simplified30_Muon_Total_Staco_ety;
   Float_t         MET_Simplified30_Muon_Total_Staco_sumet;
   Float_t         MET_Simplified30_Muon_Total_Staco_et;
   Float_t         MET_Simplified30_Muon_Total_Staco_phi;
   Float_t         MET_Simplified20_RefFinal_etx;
   Float_t         MET_Simplified20_RefFinal_ety;
   Float_t         MET_Simplified20_RefFinal_sumet;
   Float_t         MET_Simplified20_RefFinal_et;
   Float_t         MET_Simplified20_RefFinal_phi;
   Float_t         MET_Simplified20_CellOut_etx;
   Float_t         MET_Simplified20_CellOut_ety;
   Float_t         MET_Simplified20_CellOut_sumet;
   Float_t         MET_Simplified20_CellOut_et;
   Float_t         MET_Simplified20_CellOut_phi;
   Float_t         MET_Simplified20_RefJet_etx;
   Float_t         MET_Simplified20_RefJet_ety;
   Float_t         MET_Simplified20_RefJet_sumet;
   Float_t         MET_Simplified20_RefJet_et;
   Float_t         MET_Simplified20_RefJet_phi;
   Float_t         MET_Simplified20_RefEle_etx;
   Float_t         MET_Simplified20_RefEle_ety;
   Float_t         MET_Simplified20_RefEle_sumet;
   Float_t         MET_Simplified20_RefEle_et;
   Float_t         MET_Simplified20_RefEle_phi;
   Float_t         MET_Simplified20_Muon_Total_Staco_etx;
   Float_t         MET_Simplified20_Muon_Total_Staco_ety;
   Float_t         MET_Simplified20_Muon_Total_Staco_sumet;
   Float_t         MET_Simplified20_Muon_Total_Staco_et;
   Float_t         MET_Simplified20_Muon_Total_Staco_phi;
   Int_t           jet_AntiKt4H1Tower_n;
   vector<float>   *jet_AntiKt4H1Tower_E;
   vector<float>   *jet_AntiKt4H1Tower_pt;
   vector<float>   *jet_AntiKt4H1Tower_m;
   vector<float>   *jet_AntiKt4H1Tower_eta;
   vector<float>   *jet_AntiKt4H1Tower_phi;
   vector<float>   *jet_AntiKt4H1Tower_EtaPhys;
   vector<float>   *jet_AntiKt4H1Tower_PhiPhys;
   vector<float>   *jet_AntiKt4H1Tower_MPhys;
   vector<float>   *jet_AntiKt4H1Tower_WIDTH;
   vector<float>   *jet_AntiKt4H1Tower_n90;
   vector<float>   *jet_AntiKt4H1Tower_Timing;
   vector<float>   *jet_AntiKt4H1Tower_LArQuality;
   vector<float>   *jet_AntiKt4H1Tower_nTrk;
   vector<float>   *jet_AntiKt4H1Tower_sumPtTrk;
   vector<float>   *jet_AntiKt4H1Tower_OriginIndex;
   vector<float>   *jet_AntiKt4H1Tower_HECQuality;
   vector<float>   *jet_AntiKt4H1Tower_NegativeE;
   vector<float>   *jet_AntiKt4H1Tower_BCH_CORR_CELL;
   vector<float>   *jet_AntiKt4H1Tower_BCH_CORR_DOTX;
   vector<float>   *jet_AntiKt4H1Tower_BCH_CORR_JET;
   vector<float>   *jet_AntiKt4H1Tower_BCH_CORR_JET_FORCELL;
   vector<float>   *jet_AntiKt4H1Tower_ENG_BAD_CELLS;
   vector<float>   *jet_AntiKt4H1Tower_N_BAD_CELLS;
   vector<float>   *jet_AntiKt4H1Tower_N_BAD_CELLS_CORR;
   vector<float>   *jet_AntiKt4H1Tower_BAD_CELLS_CORR_E;
   vector<int>     *jet_AntiKt4H1Tower_SamplingMax;
   vector<double>  *jet_AntiKt4H1Tower_fracSamplingMax;
   vector<float>   *jet_AntiKt4H1Tower_hecf;
   vector<float>   *jet_AntiKt4H1Tower_tgap3f;
   vector<int>     *jet_AntiKt4H1Tower_isGood;
   vector<float>   *jet_AntiKt4H1Tower_emfrac;
   vector<float>   *jet_AntiKt4H1Tower_GCWJES;
   vector<float>   *jet_AntiKt4H1Tower_EMJES;
   vector<float>   *jet_AntiKt4H1Tower_CB;
   vector<float>   *jet_AntiKt4H1Tower_emscale_E;
   vector<float>   *jet_AntiKt4H1Tower_emscale_pt;
   vector<float>   *jet_AntiKt4H1Tower_emscale_m;
   vector<float>   *jet_AntiKt4H1Tower_emscale_eta;
   vector<float>   *jet_AntiKt4H1Tower_emscale_phi;
   vector<float>   *jet_AntiKt4H1Tower_jvtxf;
   vector<float>   *jet_AntiKt4H1Tower_jvtx_x;
   vector<float>   *jet_AntiKt4H1Tower_jvtx_y;
   vector<float>   *jet_AntiKt4H1Tower_jvtx_z;
   vector<float>   *jet_AntiKt4H1Tower_e_PreSamplerB;
   vector<float>   *jet_AntiKt4H1Tower_e_EMB1;
   vector<float>   *jet_AntiKt4H1Tower_e_EMB2;
   vector<float>   *jet_AntiKt4H1Tower_e_EMB3;
   vector<float>   *jet_AntiKt4H1Tower_e_PreSamplerE;
   vector<float>   *jet_AntiKt4H1Tower_e_EME1;
   vector<float>   *jet_AntiKt4H1Tower_e_EME2;
   vector<float>   *jet_AntiKt4H1Tower_e_EME3;
   vector<float>   *jet_AntiKt4H1Tower_e_HEC0;
   vector<float>   *jet_AntiKt4H1Tower_e_HEC1;
   vector<float>   *jet_AntiKt4H1Tower_e_HEC2;
   vector<float>   *jet_AntiKt4H1Tower_e_HEC3;
   vector<float>   *jet_AntiKt4H1Tower_e_TileBar0;
   vector<float>   *jet_AntiKt4H1Tower_e_TileBar1;
   vector<float>   *jet_AntiKt4H1Tower_e_TileBar2;
   vector<float>   *jet_AntiKt4H1Tower_e_TileGap1;
   vector<float>   *jet_AntiKt4H1Tower_e_TileGap2;
   vector<float>   *jet_AntiKt4H1Tower_e_TileGap3;
   vector<float>   *jet_AntiKt4H1Tower_e_TileExt0;
   vector<float>   *jet_AntiKt4H1Tower_e_TileExt1;
   vector<float>   *jet_AntiKt4H1Tower_e_TileExt2;
   vector<float>   *jet_AntiKt4H1Tower_e_FCAL0;
   vector<float>   *jet_AntiKt4H1Tower_e_FCAL1;
   vector<float>   *jet_AntiKt4H1Tower_e_FCAL2;
   vector<int>     *jet_AntiKt4H1Tower_Nconst;
   vector<vector<float> > *jet_AntiKt4H1Tower_ptconst_emscale;
   vector<vector<float> > *jet_AntiKt4H1Tower_econst_emscale;
   vector<vector<float> > *jet_AntiKt4H1Tower_etaconst_emscale;
   vector<vector<float> > *jet_AntiKt4H1Tower_phiconst_emscale;
   vector<vector<float> > *jet_AntiKt4H1Tower_weightconst_emscale;
   vector<float>   *jet_AntiKt4H1Tower_constscale_E;
   vector<float>   *jet_AntiKt4H1Tower_constscale_pt;
   vector<float>   *jet_AntiKt4H1Tower_constscale_m;
   vector<float>   *jet_AntiKt4H1Tower_constscale_eta;
   vector<float>   *jet_AntiKt4H1Tower_constscale_phi;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_ip2d_pu;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_ip2d_pb;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_ip2d_ntrk;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_ip3d_pu;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_ip3d_pb;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_ip3d_ntrk;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_sv1_pu;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_sv1_pb;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_sv2_pu;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_sv2_pb;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_svp_mass;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_svp_n2t;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_svp_svok;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_svp_ntrk;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_svp_ntrkv;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_svp_ntrkj;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_svp_efrc;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_sv0p_mass;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_sv0p_n2t;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_sv0p_svok;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_sv0p_ntrk;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_sv0p_ntrkv;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_sv0p_ntrkj;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_sv0p_efrc;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_jfit_pu;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_jfit_pb;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_jfit_nvtxnt;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_jfit_nvtx1t;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_jfit_ntrk;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_jfit_efrc;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_jfit_mass;
   vector<double>  *jet_AntiKt4H1Tower_flavor_component_jfit_sig3d;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_TrackCounting2D;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_JetProb;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_IP1D;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_IP2D;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_IP3D;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_SV0;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_SV1;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_SV2;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_JetFitterTag;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_JetFitterCOMB;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_JetFitterTagNN;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_JetFitterCOMBNN;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_SoftMuonTag;
   vector<double>  *jet_AntiKt4H1Tower_flavor_weight_SoftElectronTag;
   vector<float>   *jet_AntiKt4H1Tower_el_dr;
   vector<int>     *jet_AntiKt4H1Tower_el_matched;
   vector<float>   *jet_AntiKt4H1Tower_mu_dr;
   vector<int>     *jet_AntiKt4H1Tower_mu_matched;
   Int_t           jet_AntiKt4H1Topo_n;
   vector<float>   *jet_AntiKt4H1Topo_E;
   vector<float>   *jet_AntiKt4H1Topo_pt;
   vector<float>   *jet_AntiKt4H1Topo_m;
   vector<float>   *jet_AntiKt4H1Topo_eta;
   vector<float>   *jet_AntiKt4H1Topo_phi;
   vector<float>   *jet_AntiKt4H1Topo_EtaPhys;
   vector<float>   *jet_AntiKt4H1Topo_PhiPhys;
   vector<float>   *jet_AntiKt4H1Topo_MPhys;
   vector<float>   *jet_AntiKt4H1Topo_WIDTH;
   vector<float>   *jet_AntiKt4H1Topo_n90;
   vector<float>   *jet_AntiKt4H1Topo_Timing;
   vector<float>   *jet_AntiKt4H1Topo_LArQuality;
   vector<float>   *jet_AntiKt4H1Topo_nTrk;
   vector<float>   *jet_AntiKt4H1Topo_sumPtTrk;
   vector<float>   *jet_AntiKt4H1Topo_OriginIndex;
   vector<float>   *jet_AntiKt4H1Topo_HECQuality;
   vector<float>   *jet_AntiKt4H1Topo_NegativeE;
   vector<float>   *jet_AntiKt4H1Topo_BCH_CORR_CELL;
   vector<float>   *jet_AntiKt4H1Topo_BCH_CORR_DOTX;
   vector<float>   *jet_AntiKt4H1Topo_BCH_CORR_JET;
   vector<float>   *jet_AntiKt4H1Topo_BCH_CORR_JET_FORCELL;
   vector<float>   *jet_AntiKt4H1Topo_ENG_BAD_CELLS;
   vector<float>   *jet_AntiKt4H1Topo_N_BAD_CELLS;
   vector<float>   *jet_AntiKt4H1Topo_N_BAD_CELLS_CORR;
   vector<float>   *jet_AntiKt4H1Topo_BAD_CELLS_CORR_E;
   vector<int>     *jet_AntiKt4H1Topo_SamplingMax;
   vector<double>  *jet_AntiKt4H1Topo_fracSamplingMax;
   vector<float>   *jet_AntiKt4H1Topo_hecf;
   vector<float>   *jet_AntiKt4H1Topo_tgap3f;
   vector<int>     *jet_AntiKt4H1Topo_isGood;
   vector<float>   *jet_AntiKt4H1Topo_emfrac;
   vector<float>   *jet_AntiKt4H1Topo_GCWJES;
   vector<float>   *jet_AntiKt4H1Topo_EMJES;
   vector<float>   *jet_AntiKt4H1Topo_CB;
   vector<float>   *jet_AntiKt4H1Topo_emscale_E;
   vector<float>   *jet_AntiKt4H1Topo_emscale_pt;
   vector<float>   *jet_AntiKt4H1Topo_emscale_m;
   vector<float>   *jet_AntiKt4H1Topo_emscale_eta;
   vector<float>   *jet_AntiKt4H1Topo_emscale_phi;
   vector<float>   *jet_AntiKt4H1Topo_jvtxf;
   vector<float>   *jet_AntiKt4H1Topo_jvtx_x;
   vector<float>   *jet_AntiKt4H1Topo_jvtx_y;
   vector<float>   *jet_AntiKt4H1Topo_jvtx_z;
   vector<float>   *jet_AntiKt4H1Topo_e_PreSamplerB;
   vector<float>   *jet_AntiKt4H1Topo_e_EMB1;
   vector<float>   *jet_AntiKt4H1Topo_e_EMB2;
   vector<float>   *jet_AntiKt4H1Topo_e_EMB3;
   vector<float>   *jet_AntiKt4H1Topo_e_PreSamplerE;
   vector<float>   *jet_AntiKt4H1Topo_e_EME1;
   vector<float>   *jet_AntiKt4H1Topo_e_EME2;
   vector<float>   *jet_AntiKt4H1Topo_e_EME3;
   vector<float>   *jet_AntiKt4H1Topo_e_HEC0;
   vector<float>   *jet_AntiKt4H1Topo_e_HEC1;
   vector<float>   *jet_AntiKt4H1Topo_e_HEC2;
   vector<float>   *jet_AntiKt4H1Topo_e_HEC3;
   vector<float>   *jet_AntiKt4H1Topo_e_TileBar0;
   vector<float>   *jet_AntiKt4H1Topo_e_TileBar1;
   vector<float>   *jet_AntiKt4H1Topo_e_TileBar2;
   vector<float>   *jet_AntiKt4H1Topo_e_TileGap1;
   vector<float>   *jet_AntiKt4H1Topo_e_TileGap2;
   vector<float>   *jet_AntiKt4H1Topo_e_TileGap3;
   vector<float>   *jet_AntiKt4H1Topo_e_TileExt0;
   vector<float>   *jet_AntiKt4H1Topo_e_TileExt1;
   vector<float>   *jet_AntiKt4H1Topo_e_TileExt2;
   vector<float>   *jet_AntiKt4H1Topo_e_FCAL0;
   vector<float>   *jet_AntiKt4H1Topo_e_FCAL1;
   vector<float>   *jet_AntiKt4H1Topo_e_FCAL2;
   vector<int>     *jet_AntiKt4H1Topo_Nconst;
   vector<vector<float> > *jet_AntiKt4H1Topo_ptconst_emscale;
   vector<vector<float> > *jet_AntiKt4H1Topo_econst_emscale;
   vector<vector<float> > *jet_AntiKt4H1Topo_etaconst_emscale;
   vector<vector<float> > *jet_AntiKt4H1Topo_phiconst_emscale;
   vector<vector<float> > *jet_AntiKt4H1Topo_weightconst_emscale;
   vector<float>   *jet_AntiKt4H1Topo_constscale_E;
   vector<float>   *jet_AntiKt4H1Topo_constscale_pt;
   vector<float>   *jet_AntiKt4H1Topo_constscale_m;
   vector<float>   *jet_AntiKt4H1Topo_constscale_eta;
   vector<float>   *jet_AntiKt4H1Topo_constscale_phi;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_ip2d_pu;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_ip2d_pb;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_ip2d_ntrk;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_ip3d_pu;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_ip3d_pb;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_ip3d_ntrk;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_sv1_pu;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_sv1_pb;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_sv2_pu;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_sv2_pb;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_svp_mass;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_svp_n2t;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_svp_svok;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_svp_ntrk;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_svp_ntrkv;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_svp_ntrkj;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_svp_efrc;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_sv0p_mass;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_sv0p_n2t;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_sv0p_svok;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_sv0p_ntrk;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_sv0p_ntrkv;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_sv0p_ntrkj;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_sv0p_efrc;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_jfit_pu;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_jfit_pb;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_jfit_nvtxnt;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_jfit_nvtx1t;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_jfit_ntrk;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_jfit_efrc;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_jfit_mass;
   vector<double>  *jet_AntiKt4H1Topo_flavor_component_jfit_sig3d;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_TrackCounting2D;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_JetProb;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_IP1D;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_IP2D;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_IP3D;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_SV0;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_SV1;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_SV2;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_JetFitterTag;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_JetFitterCOMB;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_JetFitterTagNN;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_JetFitterCOMBNN;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_SoftMuonTag;
   vector<double>  *jet_AntiKt4H1Topo_flavor_weight_SoftElectronTag;
   vector<float>   *jet_AntiKt4H1Topo_el_dr;
   vector<int>     *jet_AntiKt4H1Topo_el_matched;
   vector<float>   *jet_AntiKt4H1Topo_mu_dr;
   vector<int>     *jet_AntiKt4H1Topo_mu_matched;
   Int_t           jet_AntiKt4TopoEMJES_n;
   vector<float>   *jet_AntiKt4TopoEMJES_E;
   vector<float>   *jet_AntiKt4TopoEMJES_pt;
   vector<float>   *jet_AntiKt4TopoEMJES_m;
   vector<float>   *jet_AntiKt4TopoEMJES_eta;
   vector<float>   *jet_AntiKt4TopoEMJES_phi;
   vector<float>   *jet_AntiKt4TopoEMJES_EtaPhys;
   vector<float>   *jet_AntiKt4TopoEMJES_PhiPhys;
   vector<float>   *jet_AntiKt4TopoEMJES_MPhys;
   vector<float>   *jet_AntiKt4TopoEMJES_WIDTH;
   vector<float>   *jet_AntiKt4TopoEMJES_n90;
   vector<float>   *jet_AntiKt4TopoEMJES_Timing;
   vector<float>   *jet_AntiKt4TopoEMJES_LArQuality;
   vector<float>   *jet_AntiKt4TopoEMJES_nTrk;
   vector<float>   *jet_AntiKt4TopoEMJES_sumPtTrk;
   vector<float>   *jet_AntiKt4TopoEMJES_OriginIndex;
   vector<float>   *jet_AntiKt4TopoEMJES_HECQuality;
   vector<float>   *jet_AntiKt4TopoEMJES_NegativeE;
   vector<float>   *jet_AntiKt4TopoEMJES_BCH_CORR_CELL;
   vector<float>   *jet_AntiKt4TopoEMJES_BCH_CORR_DOTX;
   vector<float>   *jet_AntiKt4TopoEMJES_BCH_CORR_JET;
   vector<float>   *jet_AntiKt4TopoEMJES_BCH_CORR_JET_FORCELL;
   vector<float>   *jet_AntiKt4TopoEMJES_ENG_BAD_CELLS;
   vector<float>   *jet_AntiKt4TopoEMJES_N_BAD_CELLS;
   vector<float>   *jet_AntiKt4TopoEMJES_N_BAD_CELLS_CORR;
   vector<float>   *jet_AntiKt4TopoEMJES_BAD_CELLS_CORR_E;
   vector<int>     *jet_AntiKt4TopoEMJES_SamplingMax;
   vector<double>  *jet_AntiKt4TopoEMJES_fracSamplingMax;
   vector<float>   *jet_AntiKt4TopoEMJES_hecf;
   vector<float>   *jet_AntiKt4TopoEMJES_tgap3f;
   vector<int>     *jet_AntiKt4TopoEMJES_isGood;
   vector<float>   *jet_AntiKt4TopoEMJES_emfrac;
   vector<float>   *jet_AntiKt4TopoEMJES_GCWJES;
   vector<float>   *jet_AntiKt4TopoEMJES_EMJES;
   vector<float>   *jet_AntiKt4TopoEMJES_CB;
   vector<float>   *jet_AntiKt4TopoEMJES_emscale_E;
   vector<float>   *jet_AntiKt4TopoEMJES_emscale_pt;
   vector<float>   *jet_AntiKt4TopoEMJES_emscale_m;
   vector<float>   *jet_AntiKt4TopoEMJES_emscale_eta;
   vector<float>   *jet_AntiKt4TopoEMJES_emscale_phi;
   vector<float>   *jet_AntiKt4TopoEMJES_jvtxf;
   vector<float>   *jet_AntiKt4TopoEMJES_jvtx_x;
   vector<float>   *jet_AntiKt4TopoEMJES_jvtx_y;
   vector<float>   *jet_AntiKt4TopoEMJES_jvtx_z;
   vector<float>   *jet_AntiKt4TopoEMJES_e_PreSamplerB;
   vector<float>   *jet_AntiKt4TopoEMJES_e_EMB1;
   vector<float>   *jet_AntiKt4TopoEMJES_e_EMB2;
   vector<float>   *jet_AntiKt4TopoEMJES_e_EMB3;
   vector<float>   *jet_AntiKt4TopoEMJES_e_PreSamplerE;
   vector<float>   *jet_AntiKt4TopoEMJES_e_EME1;
   vector<float>   *jet_AntiKt4TopoEMJES_e_EME2;
   vector<float>   *jet_AntiKt4TopoEMJES_e_EME3;
   vector<float>   *jet_AntiKt4TopoEMJES_e_HEC0;
   vector<float>   *jet_AntiKt4TopoEMJES_e_HEC1;
   vector<float>   *jet_AntiKt4TopoEMJES_e_HEC2;
   vector<float>   *jet_AntiKt4TopoEMJES_e_HEC3;
   vector<float>   *jet_AntiKt4TopoEMJES_e_TileBar0;
   vector<float>   *jet_AntiKt4TopoEMJES_e_TileBar1;
   vector<float>   *jet_AntiKt4TopoEMJES_e_TileBar2;
   vector<float>   *jet_AntiKt4TopoEMJES_e_TileGap1;
   vector<float>   *jet_AntiKt4TopoEMJES_e_TileGap2;
   vector<float>   *jet_AntiKt4TopoEMJES_e_TileGap3;
   vector<float>   *jet_AntiKt4TopoEMJES_e_TileExt0;
   vector<float>   *jet_AntiKt4TopoEMJES_e_TileExt1;
   vector<float>   *jet_AntiKt4TopoEMJES_e_TileExt2;
   vector<float>   *jet_AntiKt4TopoEMJES_e_FCAL0;
   vector<float>   *jet_AntiKt4TopoEMJES_e_FCAL1;
   vector<float>   *jet_AntiKt4TopoEMJES_e_FCAL2;
   vector<int>     *jet_AntiKt4TopoEMJES_Nconst;
   vector<vector<float> > *jet_AntiKt4TopoEMJES_ptconst_emscale;
   vector<vector<float> > *jet_AntiKt4TopoEMJES_econst_emscale;
   vector<vector<float> > *jet_AntiKt4TopoEMJES_etaconst_emscale;
   vector<vector<float> > *jet_AntiKt4TopoEMJES_phiconst_emscale;
   vector<vector<float> > *jet_AntiKt4TopoEMJES_weightconst_emscale;
   vector<float>   *jet_AntiKt4TopoEMJES_constscale_E;
   vector<float>   *jet_AntiKt4TopoEMJES_constscale_pt;
   vector<float>   *jet_AntiKt4TopoEMJES_constscale_m;
   vector<float>   *jet_AntiKt4TopoEMJES_constscale_eta;
   vector<float>   *jet_AntiKt4TopoEMJES_constscale_phi;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_ip2d_pu;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_ip2d_pb;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_ip2d_ntrk;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_ip3d_pu;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_ip3d_pb;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_ip3d_ntrk;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_sv1_pu;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_sv1_pb;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_sv2_pu;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_sv2_pb;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_svp_mass;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_svp_n2t;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_svp_svok;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_svp_ntrk;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_svp_ntrkv;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_svp_ntrkj;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_svp_efrc;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_sv0p_mass;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_sv0p_n2t;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_sv0p_svok;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrk;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrkv;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrkj;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_sv0p_efrc;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_jfit_pu;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_jfit_pb;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_jfit_nvtxnt;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_jfit_nvtx1t;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_jfit_ntrk;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_jfit_efrc;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_jfit_mass;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_component_jfit_sig3d;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_TrackCounting2D;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_JetProb;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_IP1D;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_IP2D;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_IP3D;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_SV0;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_SV1;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_SV2;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_JetFitterTag;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_JetFitterCOMB;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_JetFitterTagNN;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_JetFitterCOMBNN;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_SoftMuonTag;
   vector<double>  *jet_AntiKt4TopoEMJES_flavor_weight_SoftElectronTag;
   vector<float>   *jet_AntiKt4TopoEMJES_el_dr;
   vector<int>     *jet_AntiKt4TopoEMJES_el_matched;
   vector<float>   *jet_AntiKt4TopoEMJES_mu_dr;
   vector<int>     *jet_AntiKt4TopoEMJES_mu_matched;
   Float_t         mbtime_timeDiff;
   Float_t         mbtime_timeA;
   Float_t         mbtime_timeC;
   Int_t           mbtime_countA;
   Int_t           mbtime_countC;
   Bool_t          collcand_passMBTSTime;
   Bool_t          collcand_passCaloTime;
   Bool_t          collcand_passTrigger;
   Bool_t          collcand_pass;
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
   vector<string>  *SkimDecision_name;
   vector<int>     *SkimDecision_accepted;
   Float_t         ti_staco_topo_MET_etx;
   Float_t         ti_staco_topo_MET_ety;
   Float_t         ti_staco_topo_MET_sumet;
   Float_t         ti_staco_topo_MET_et;
   Float_t         ti_staco_topo_MET_phi;
   Int_t           ti_staco_topo_Jet_n;
   vector<int>     *ti_staco_topo_Jet_use;
   vector<int>     *ti_staco_topo_Jet_index;
   vector<int>     *ti_staco_topo_Jet_overlap_jetn;
   vector<vector<int> > *ti_staco_topo_Jet_overlap_jetindex;
   vector<int>     *ti_staco_topo_Jet_overlap_mun;
   vector<vector<int> > *ti_staco_topo_Jet_overlap_muindex;
   vector<int>     *ti_staco_topo_Jet_overlap_taun;
   vector<vector<int> > *ti_staco_topo_Jet_overlap_tauindex;
   Int_t           ti_staco_topo_Mu_n;
   vector<int>     *ti_staco_topo_Mu_use;
   vector<int>     *ti_staco_topo_Mu_index;
   vector<int>     *ti_staco_topo_Mu_overlap_jetn;
   vector<vector<int> > *ti_staco_topo_Mu_overlap_jetindex;
   vector<int>     *ti_staco_topo_Mu_overlap_mun;
   vector<vector<int> > *ti_staco_topo_Mu_overlap_muindex;
   vector<int>     *ti_staco_topo_Mu_overlap_taun;
   vector<vector<int> > *ti_staco_topo_Mu_overlap_tauindex;
   Int_t           ti_staco_topo_El_n;
   vector<int>     *ti_staco_topo_El_use;
   vector<int>     *ti_staco_topo_El_index;
   vector<int>     *ti_staco_topo_El_overlap_jetn;
   vector<vector<int> > *ti_staco_topo_El_overlap_jetindex;
   vector<int>     *ti_staco_topo_El_overlap_mun;
   vector<vector<int> > *ti_staco_topo_El_overlap_muindex;
   vector<int>     *ti_staco_topo_El_overlap_taun;
   vector<vector<int> > *ti_staco_topo_El_overlap_tauindex;
   Float_t         ti_staco_tower_MET_etx;
   Float_t         ti_staco_tower_MET_ety;
   Float_t         ti_staco_tower_MET_sumet;
   Float_t         ti_staco_tower_MET_et;
   Float_t         ti_staco_tower_MET_phi;
   Int_t           ti_staco_tower_Jet_n;
   vector<int>     *ti_staco_tower_Jet_use;
   vector<int>     *ti_staco_tower_Jet_index;
   vector<int>     *ti_staco_tower_Jet_overlap_jetn;
   vector<vector<int> > *ti_staco_tower_Jet_overlap_jetindex;
   vector<int>     *ti_staco_tower_Jet_overlap_mun;
   vector<vector<int> > *ti_staco_tower_Jet_overlap_muindex;
   vector<int>     *ti_staco_tower_Jet_overlap_taun;
   vector<vector<int> > *ti_staco_tower_Jet_overlap_tauindex;
   Int_t           ti_staco_tower_Mu_n;
   vector<int>     *ti_staco_tower_Mu_use;
   vector<int>     *ti_staco_tower_Mu_index;
   vector<int>     *ti_staco_tower_Mu_overlap_jetn;
   vector<vector<int> > *ti_staco_tower_Mu_overlap_jetindex;
   vector<int>     *ti_staco_tower_Mu_overlap_mun;
   vector<vector<int> > *ti_staco_tower_Mu_overlap_muindex;
   vector<int>     *ti_staco_tower_Mu_overlap_taun;
   vector<vector<int> > *ti_staco_tower_Mu_overlap_tauindex;
   Int_t           ti_staco_tower_El_n;
   vector<int>     *ti_staco_tower_El_use;
   vector<int>     *ti_staco_tower_El_index;
   vector<int>     *ti_staco_tower_El_overlap_jetn;
   vector<vector<int> > *ti_staco_tower_El_overlap_jetindex;
   vector<int>     *ti_staco_tower_El_overlap_mun;
   vector<vector<int> > *ti_staco_tower_El_overlap_muindex;
   vector<int>     *ti_staco_tower_El_overlap_taun;
   vector<vector<int> > *ti_staco_tower_El_overlap_tauindex;
   Int_t           MET_Goodness_CalClusForwBackw_pass;
   Int_t           MET_Goodness_CalClusUpDown_pass;
   Int_t           MET_Goodness_Calo_countA;
   Int_t           MET_Goodness_Calo_countC;
   Int_t           MET_Goodness_Calo_pass;
   Int_t           MET_Goodness_IsCollisionCandidate;
   Int_t           MET_Goodness_MBTS_countA;
   Int_t           MET_Goodness_MBTS_countC;
   Int_t           MET_Goodness_MBTS_pass;
   Int_t           MET_Goodness_MuonSp0Hits;
   Int_t           MET_Goodness_MuonSp1Hits;
   Int_t           MET_Goodness_MuonSpTotHits;
   Int_t           MET_Goodness_N_Jets;
   Int_t           MET_Goodness_OkayLB;
   Double_t        MET_Goodness_CalClusForwBackw_timeDiff;
   Double_t        MET_Goodness_CalClusUpDown_timeDiff;
   Double_t        MET_Goodness_CalClus_InTimeFraction;
   Double_t        MET_Goodness_CalClus_OutTimeEnergy;
   Double_t        MET_Goodness_CalClus_eventTime;
   Double_t        MET_Goodness_CalClus_ootEnergy10;
   Double_t        MET_Goodness_CalClus_ootEnergy15;
   Double_t        MET_Goodness_CalClus_ootEnergy20;
   Double_t        MET_Goodness_CalClus_ootEnergy25;
   Double_t        MET_Goodness_CalClus_ootFraction10;
   Double_t        MET_Goodness_CalClus_ootFraction15;
   Double_t        MET_Goodness_CalClus_ootFraction20;
   Double_t        MET_Goodness_CalClus_ootFraction25;
   Double_t        MET_Goodness_CalClus_timeA;
   Double_t        MET_Goodness_CalClus_timeC;
   Double_t        MET_Goodness_Calo_timeA;
   Double_t        MET_Goodness_Calo_timeC;
   Double_t        MET_Goodness_Calo_timeDiff;
   Double_t        MET_Goodness_DeltaTrackTopo;
   Double_t        MET_Goodness_EtoverRootSigmaEt;
   Double_t        MET_Goodness_EventEMFraction;
   Double_t        MET_Goodness_LArNoisyROSummary;
   Double_t        MET_Goodness_MBTS_timeA;
   Double_t        MET_Goodness_MBTS_timeC;
   Double_t        MET_Goodness_MBTS_timeDiff;
   Double_t        MET_Goodness_MuonSp0Eta;
   Double_t        MET_Goodness_MuonSp0Phi;
   Double_t        MET_Goodness_MuonSp1Eta;
   Double_t        MET_Goodness_MuonSp1Phi;
   Double_t        MET_Goodness_MuonTRTTiming;
   vector<double>  *MET_Goodness_BCH_CORR_CELL_Jet;
   vector<double>  *MET_Goodness_BCH_CORR_JET;
   vector<double>  *MET_Goodness_BCH_CORR_JET_FORCELL_Jet;
   vector<double>  *MET_Goodness_ChargeFraction_Jet;
   vector<double>  *MET_Goodness_DeltaEt_JetAlgs_Jet;
   vector<double>  *MET_Goodness_DeltaEta_JetAlgs_Jet;
   vector<double>  *MET_Goodness_DeltaPhi_JetAlgs_Jet;
   vector<double>  *MET_Goodness_DeltaPhi_MET_Jet;
   vector<double>  *MET_Goodness_ECal_Jet;
   vector<double>  *MET_Goodness_EMFraction_Jet;
   vector<double>  *MET_Goodness_E_BadCellsCorr_Jet;
   vector<double>  *MET_Goodness_E_BadCells_Jet;
   vector<double>  *MET_Goodness_Eta_Jet;
   vector<double>  *MET_Goodness_HECf_Jet;
   vector<double>  *MET_Goodness_LArQuality_Jet;
   vector<double>  *MET_Goodness_Phi_Jet;
   vector<double>  *MET_Goodness_PtCal_Jet;
   vector<double>  *MET_Goodness_QualityFrac_Jet;
   vector<double>  *MET_Goodness_SamplingFracCryo_Jet;
   vector<double>  *MET_Goodness_SamplingFracEM_Jet;
   vector<double>  *MET_Goodness_SamplingFracFCAL_Jet;
   vector<double>  *MET_Goodness_SamplingFracGap_Jet;
   vector<double>  *MET_Goodness_SamplingFracHEC3_Jet;
   vector<double>  *MET_Goodness_SamplingFracHEC_Jet;
   vector<double>  *MET_Goodness_SamplingFracMax_Jet;
   vector<double>  *MET_Goodness_SamplingFracPS_Jet;
   vector<double>  *MET_Goodness_SamplingFracTile10_Jet;
   vector<double>  *MET_Goodness_SamplingFracTile2_Jet;
   vector<double>  *MET_Goodness_SamplingFracTile_Jet;
   vector<double>  *MET_Goodness_TileQuality_Jet;
   vector<double>  *MET_Goodness_Timing_Jet;
   vector<double>  *MET_Goodness_ootE25_Jet;
   vector<double>  *MET_Goodness_ootE50_Jet;
   vector<double>  *MET_Goodness_ootE75_Jet;
   vector<double>  *MET_Goodness_tileGap3F_Jet;
   vector<int>     *MET_Goodness_N90Cells_Jet;
   vector<int>     *MET_Goodness_N90Constituents_Jet;
   vector<int>     *MET_Goodness_NConstituents_Jet;
   vector<int>     *MET_Goodness_N_BadCellsCorr_Jet;
   vector<int>     *MET_Goodness_N_BadCells_Jet;
   vector<int>     *MET_Goodness_NumTracks_Jet;
   vector<int>     *MET_Goodness_SamplingMaxID_Jet;
   vector<int>     *MET_Goodness_isBad_Jet;
   vector<int>     *MET_Goodness_isGood_Jet;
   vector<int>     *MET_Goodness_isUgly_Jet;
   Bool_t          MET_Goodness_All;
   Bool_t          MET_Goodness_JetCleaning;
   Long64_t        MET_Goodness_BitMask;

   // List of branches
   TBranch	*b_EF_mu10_MSonly; //!
   TBranch	*b_L1_MU6; //!
   TBranch	*b_EF_mu13; //!
   TBranch	*b_EF_mu13_tight; //!

   TBranch	*b_L1_2J15; //!
   TBranch	*b_L1_TAU11; //!

   TBranch        *b_RunNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_timestamp;   //!
   TBranch        *b_timestamp_ns;   //!
   TBranch        *b_lbn;   //!
   TBranch        *b_bcid;   //!
   TBranch        *b_detmask0;   //!
   TBranch        *b_detmask1;   //!
   TBranch        *b_pixelFlags;   //!
   TBranch        *b_sctFlags;   //!
   TBranch        *b_trtFlags;   //!
   TBranch        *b_larFlags;   //!
   TBranch        *b_tileFlags;   //!
   TBranch        *b_muonFlags;   //!
   TBranch        *b_fwdFlags;   //!
   TBranch        *b_coreFlags;   //!
   TBranch        *b_pixelError;   //!
   TBranch        *b_sctError;   //!
   TBranch        *b_trtError;   //!
   TBranch        *b_larError;   //!
   TBranch        *b_tileError;   //!
   TBranch        *b_muonError;   //!
   TBranch        *b_fwdError;   //!
   TBranch        *b_coreError;   //!
   TBranch        *b_el_n;   //!
   TBranch        *b_el_E;   //!
   TBranch        *b_el_Et;   //!
   TBranch        *b_el_pt;   //!
   TBranch        *b_el_m;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_el_px;   //!
   TBranch        *b_el_py;   //!
   TBranch        *b_el_pz;   //!
   TBranch        *b_el_charge;   //!
   TBranch        *b_el_author;   //!
   TBranch        *b_el_isEM;   //!
   TBranch        *b_el_convFlag;   //!
   TBranch        *b_el_isConv;   //!
   TBranch        *b_el_nConv;   //!
   TBranch        *b_el_nSingleTrackConv;   //!
   TBranch        *b_el_nDoubleTrackConv;   //!
   TBranch        *b_el_loose;   //!
   TBranch        *b_el_medium;   //!
   TBranch        *b_el_mediumIso;   //!
   TBranch        *b_el_tight;   //!
   TBranch        *b_el_tightIso;   //!
   TBranch        *b_el_Ethad;   //!
   TBranch        *b_el_Ethad1;   //!
   TBranch        *b_el_f1;   //!
   TBranch        *b_el_f1core;   //!
   TBranch        *b_el_Emins1;   //!
   TBranch        *b_el_fside;   //!
   TBranch        *b_el_Emax2;   //!
   TBranch        *b_el_ws3;   //!
   TBranch        *b_el_wstot;   //!
   TBranch        *b_el_emaxs1;   //!
   TBranch        *b_el_deltaEs;   //!
   TBranch        *b_el_E233;   //!
   TBranch        *b_el_E237;   //!
   TBranch        *b_el_E277;   //!
   TBranch        *b_el_weta2;   //!
   TBranch        *b_el_f3;   //!
   TBranch        *b_el_f3core;   //!
   TBranch        *b_el_rphiallcalo;   //!
   TBranch        *b_el_Etcone45;   //!
   TBranch        *b_el_Etcone20;   //!
   TBranch        *b_el_Etcone30;   //!
   TBranch        *b_el_Etcone40;   //!
   TBranch        *b_el_ptcone30;   //!
   TBranch        *b_el_convanglematch;   //!
   TBranch        *b_el_convtrackmatch;   //!
   TBranch        *b_el_hasconv;   //!
   TBranch        *b_el_convvtxx;   //!
   TBranch        *b_el_convvtxy;   //!
   TBranch        *b_el_convvtxz;   //!
   TBranch        *b_el_Rconv;   //!
   TBranch        *b_el_zconv;   //!
   TBranch        *b_el_convvtxchi2;   //!
   TBranch        *b_el_pt1conv;   //!
   TBranch        *b_el_convtrk1nBLHits;   //!
   TBranch        *b_el_convtrk1nPixHits;   //!
   TBranch        *b_el_convtrk1nSCTHits;   //!
   TBranch        *b_el_convtrk1nTRTHits;   //!
   TBranch        *b_el_pt2conv;   //!
   TBranch        *b_el_convtrk2nBLHits;   //!
   TBranch        *b_el_convtrk2nPixHits;   //!
   TBranch        *b_el_convtrk2nSCTHits;   //!
   TBranch        *b_el_convtrk2nTRTHits;   //!
   TBranch        *b_el_ptconv;   //!
   TBranch        *b_el_pzconv;   //!
   TBranch        *b_el_pos7;   //!
   TBranch        *b_el_etacorrmag;   //!
   TBranch        *b_el_deltaeta1;   //!
   TBranch        *b_el_deltaeta2;   //!
   TBranch        *b_el_deltaphi2;   //!
   TBranch        *b_el_deltaphiRescaled;   //!
   TBranch        *b_el_expectHitInBLayer;   //!
   TBranch        *b_el_reta;   //!
   TBranch        *b_el_rphi;   //!
   TBranch        *b_el_EtringnoisedR03sig2;   //!
   TBranch        *b_el_EtringnoisedR03sig3;   //!
   TBranch        *b_el_EtringnoisedR03sig4;   //!
   TBranch        *b_el_isolationlikelihoodjets;   //!
   TBranch        *b_el_isolationlikelihoodhqelectrons;   //!
   TBranch        *b_el_electronweight;   //!
   TBranch        *b_el_electronbgweight;   //!
   TBranch        *b_el_softeweight;   //!
   TBranch        *b_el_softebgweight;   //!
   TBranch        *b_el_neuralnet;   //!
   TBranch        *b_el_Hmatrix;   //!
   TBranch        *b_el_Hmatrix5;   //!
   TBranch        *b_el_adaboost;   //!
   TBranch        *b_el_softeneuralnet;   //!
   TBranch        *b_el_zvertex;   //!
   TBranch        *b_el_errz;   //!
   TBranch        *b_el_etap;   //!
   TBranch        *b_el_depth;   //!
   TBranch        *b_el_refittedTrack_n;   //!
   TBranch        *b_el_refittedTrack_author;   //!
   TBranch        *b_el_refittedTrack_chi2;   //!
   TBranch        *b_el_refittedTrack_qoverp;   //!
   TBranch        *b_el_refittedTrack_d0;   //!
   TBranch        *b_el_refittedTrack_z0;   //!
   TBranch        *b_el_refittedTrack_theta;   //!
   TBranch        *b_el_refittedTrack_phi;   //!
   TBranch        *b_el_refittedTrack_LMqoverp;   //!
   TBranch        *b_el_refittedTrack_hasBrem;   //!
   TBranch        *b_el_refittedTrack_bremRadius;   //!
   TBranch        *b_el_refittedTrack_bremZ;   //!
   TBranch        *b_el_refittedTrack_bremRadiusErr;   //!
   TBranch        *b_el_refittedTrack_bremZErr;   //!
   TBranch        *b_el_Es0;   //!
   TBranch        *b_el_etas0;   //!
   TBranch        *b_el_phis0;   //!
   TBranch        *b_el_Es1;   //!
   TBranch        *b_el_etas1;   //!
   TBranch        *b_el_phis1;   //!
   TBranch        *b_el_Es2;   //!
   TBranch        *b_el_etas2;   //!
   TBranch        *b_el_phis2;   //!
   TBranch        *b_el_Es3;   //!
   TBranch        *b_el_etas3;   //!
   TBranch        *b_el_phis3;   //!
   TBranch        *b_el_E_PreSamplerB;   //!
   TBranch        *b_el_E_EMB1;   //!
   TBranch        *b_el_E_EMB2;   //!
   TBranch        *b_el_E_EMB3;   //!
   TBranch        *b_el_E_PreSamplerE;   //!
   TBranch        *b_el_E_EME1;   //!
   TBranch        *b_el_E_EME2;   //!
   TBranch        *b_el_E_EME3;   //!
   TBranch        *b_el_E_HEC0;   //!
   TBranch        *b_el_E_HEC1;   //!
   TBranch        *b_el_E_HEC2;   //!
   TBranch        *b_el_E_HEC3;   //!
   TBranch        *b_el_E_TileBar0;   //!
   TBranch        *b_el_E_TileBar1;   //!
   TBranch        *b_el_E_TileBar2;   //!
   TBranch        *b_el_E_TileGap1;   //!
   TBranch        *b_el_E_TileGap2;   //!
   TBranch        *b_el_E_TileGap3;   //!
   TBranch        *b_el_E_TileExt0;   //!
   TBranch        *b_el_E_TileExt1;   //!
   TBranch        *b_el_E_TileExt2;   //!
   TBranch        *b_el_E_FCAL0;   //!
   TBranch        *b_el_E_FCAL1;   //!
   TBranch        *b_el_E_FCAL2;   //!
   TBranch        *b_el_cl_E;   //!
   TBranch        *b_el_cl_pt;   //!
   TBranch        *b_el_cl_eta;   //!
   TBranch        *b_el_cl_phi;   //!
   TBranch        *b_el_firstEdens;   //!
   TBranch        *b_el_cellmaxfrac;   //!
   TBranch        *b_el_longitudinal;   //!
   TBranch        *b_el_secondlambda;   //!
   TBranch        *b_el_lateral;   //!
   TBranch        *b_el_secondR;   //!
   TBranch        *b_el_centerlambda;   //!
   TBranch        *b_el_rawcl_Es0;   //!
   TBranch        *b_el_rawcl_etas0;   //!
   TBranch        *b_el_rawcl_phis0;   //!
   TBranch        *b_el_rawcl_Es1;   //!
   TBranch        *b_el_rawcl_etas1;   //!
   TBranch        *b_el_rawcl_phis1;   //!
   TBranch        *b_el_rawcl_Es2;   //!
   TBranch        *b_el_rawcl_etas2;   //!
   TBranch        *b_el_rawcl_phis2;   //!
   TBranch        *b_el_rawcl_Es3;   //!
   TBranch        *b_el_rawcl_etas3;   //!
   TBranch        *b_el_rawcl_phis3;   //!
   TBranch        *b_el_rawcl_E;   //!
   TBranch        *b_el_rawcl_pt;   //!
   TBranch        *b_el_rawcl_eta;   //!
   TBranch        *b_el_rawcl_phi;   //!
   TBranch        *b_el_trackd0;   //!
   TBranch        *b_el_trackz0;   //!
   TBranch        *b_el_trackphi;   //!
   TBranch        *b_el_tracktheta;   //!
   TBranch        *b_el_trackqoverp;   //!
   TBranch        *b_el_trackpt;   //!
   TBranch        *b_el_tracketa;   //!
   TBranch        *b_el_trackfitchi2;   //!
   TBranch        *b_el_trackfitndof;   //!
   TBranch        *b_el_nBLHits;   //!
   TBranch        *b_el_nPixHits;   //!
   TBranch        *b_el_nSCTHits;   //!
   TBranch        *b_el_nTRTHits;   //!
   TBranch        *b_el_nPixHoles;   //!
   TBranch        *b_el_nSCTHoles;   //!
   TBranch        *b_el_nBLSharedHits;   //!
   TBranch        *b_el_nPixSharedHits;   //!
   TBranch        *b_el_nSCTSharedHits;   //!
   TBranch        *b_el_nTRTHighTHits;   //!
   TBranch        *b_el_nTRTOutliers;   //!
   TBranch        *b_el_nTRTHighTOutliers;   //!
   TBranch        *b_el_nSiHits;   //!
   TBranch        *b_el_TRTHighTHitsRatio;   //!
   TBranch        *b_el_pixeldEdx;   //!
   TBranch        *b_el_eProbabilityComb;   //!
   TBranch        *b_el_eProbabilityHT;   //!
   TBranch        *b_el_eProbabilityToT;   //!
   TBranch        *b_el_eProbabilityBrem;   //!
   TBranch        *b_el_vertx;   //!
   TBranch        *b_el_verty;   //!
   TBranch        *b_el_vertz;   //!
   TBranch        *b_el_hastrack;   //!
   TBranch        *b_el_deltaEmax2;   //!
   TBranch        *b_el_calibHitsShowerDepth;   //!
   TBranch        *b_el_trackd0beam;   //!
   TBranch        *b_el_tracksigd0beam;   //!
   TBranch        *b_el_trackd0pv;   //!
   TBranch        *b_el_tracksigd0pv;   //!
   TBranch        *b_el_trackz0pv;   //!
   TBranch        *b_el_tracksigz0pv;   //!
   TBranch        *b_el_trackd0pvunbiased;   //!
   TBranch        *b_el_tracksigd0pvunbiased;   //!
   TBranch        *b_el_trackz0pvunbiased;   //!
   TBranch        *b_el_tracksigz0pvunbiased;   //!
   TBranch        *b_el_isIso;   //!
   TBranch        *b_el_mvaptcone20;   //!
   TBranch        *b_el_mvaptcone30;   //!
   TBranch        *b_el_mvaptcone40;   //!
   TBranch        *b_el_jet_dr;   //!
   TBranch        *b_el_jet_E;   //!
   TBranch        *b_el_jet_pt;   //!
   TBranch        *b_el_jet_m;   //!
   TBranch        *b_el_jet_eta;   //!
   TBranch        *b_el_jet_phi;   //!
   TBranch        *b_el_jet_matched;   //!
   TBranch        *b_el_Etcone40_pt_corrected;   //!
   TBranch        *b_el_Etcone40_ED_corrected;   //!
   TBranch        *b_el_Etcone40_corrected;   //!
   TBranch        *b_el_EF_dr;   //!
   TBranch        *b_el_EF_index;   //!
   TBranch        *b_el_L2_dr;   //!
   TBranch        *b_el_L2_index;   //!
   TBranch        *b_el_L1_dr;   //!
   TBranch        *b_el_L1_index;   //!
   TBranch        *b_ph_n;   //!
   TBranch        *b_ph_E;   //!
   TBranch        *b_ph_Et;   //!
   TBranch        *b_ph_pt;   //!
   TBranch        *b_ph_m;   //!
   TBranch        *b_ph_eta;   //!
   TBranch        *b_ph_phi;   //!
   TBranch        *b_ph_px;   //!
   TBranch        *b_ph_py;   //!
   TBranch        *b_ph_pz;   //!
   TBranch        *b_ph_author;   //!
   TBranch        *b_ph_isRecovered;   //!
   TBranch        *b_ph_isEM;   //!
   TBranch        *b_ph_convFlag;   //!
   TBranch        *b_ph_isConv;   //!
   TBranch        *b_ph_nConv;   //!
   TBranch        *b_ph_nSingleTrackConv;   //!
   TBranch        *b_ph_nDoubleTrackConv;   //!
   TBranch        *b_ph_loose;   //!
   TBranch        *b_ph_tight;   //!
   TBranch        *b_ph_tightIso;   //!
   TBranch        *b_ph_Ethad;   //!
   TBranch        *b_ph_Ethad1;   //!
   TBranch        *b_ph_E033;   //!
   TBranch        *b_ph_f1;   //!
   TBranch        *b_ph_f1core;   //!
   TBranch        *b_ph_Emins1;   //!
   TBranch        *b_ph_fside;   //!
   TBranch        *b_ph_Emax2;   //!
   TBranch        *b_ph_ws3;   //!
   TBranch        *b_ph_wstot;   //!
   TBranch        *b_ph_E132;   //!
   TBranch        *b_ph_E1152;   //!
   TBranch        *b_ph_emaxs1;   //!
   TBranch        *b_ph_deltaEs;   //!
   TBranch        *b_ph_E233;   //!
   TBranch        *b_ph_E237;   //!
   TBranch        *b_ph_E277;   //!
   TBranch        *b_ph_weta2;   //!
   TBranch        *b_ph_f3;   //!
   TBranch        *b_ph_f3core;   //!
   TBranch        *b_ph_rphiallcalo;   //!
   TBranch        *b_ph_Etcone45;   //!
   TBranch        *b_ph_Etcone20;   //!
   TBranch        *b_ph_Etcone30;   //!
   TBranch        *b_ph_Etcone40;   //!
   TBranch        *b_ph_ptcone30;   //!
   TBranch        *b_ph_convanglematch;   //!
   TBranch        *b_ph_convtrackmatch;   //!
   TBranch        *b_ph_hasconv;   //!
   TBranch        *b_ph_convvtxx;   //!
   TBranch        *b_ph_convvtxy;   //!
   TBranch        *b_ph_convvtxz;   //!
   TBranch        *b_ph_Rconv;   //!
   TBranch        *b_ph_zconv;   //!
   TBranch        *b_ph_convvtxchi2;   //!
   TBranch        *b_ph_pt1conv;   //!
   TBranch        *b_ph_convtrk1nBLHits;   //!
   TBranch        *b_ph_convtrk1nPixHits;   //!
   TBranch        *b_ph_convtrk1nSCTHits;   //!
   TBranch        *b_ph_convtrk1nTRTHits;   //!
   TBranch        *b_ph_pt2conv;   //!
   TBranch        *b_ph_convtrk2nBLHits;   //!
   TBranch        *b_ph_convtrk2nPixHits;   //!
   TBranch        *b_ph_convtrk2nSCTHits;   //!
   TBranch        *b_ph_convtrk2nTRTHits;   //!
   TBranch        *b_ph_ptconv;   //!
   TBranch        *b_ph_pzconv;   //!
   TBranch        *b_ph_reta;   //!
   TBranch        *b_ph_rphi;   //!
   TBranch        *b_ph_EtringnoisedR03sig2;   //!
   TBranch        *b_ph_EtringnoisedR03sig3;   //!
   TBranch        *b_ph_EtringnoisedR03sig4;   //!
   TBranch        *b_ph_isolationlikelihoodjets;   //!
   TBranch        *b_ph_isolationlikelihoodhqelectrons;   //!
   TBranch        *b_ph_loglikelihood;   //!
   TBranch        *b_ph_photonweight;   //!
   TBranch        *b_ph_photonbgweight;   //!
   TBranch        *b_ph_neuralnet;   //!
   TBranch        *b_ph_Hmatrix;   //!
   TBranch        *b_ph_Hmatrix5;   //!
   TBranch        *b_ph_adaboost;   //!
   TBranch        *b_ph_zvertex;   //!
   TBranch        *b_ph_errz;   //!
   TBranch        *b_ph_etap;   //!
   TBranch        *b_ph_depth;   //!
   TBranch        *b_ph_cl_E;   //!
   TBranch        *b_ph_cl_pt;   //!
   TBranch        *b_ph_cl_eta;   //!
   TBranch        *b_ph_cl_phi;   //!
   TBranch        *b_ph_Es0;   //!
   TBranch        *b_ph_etas0;   //!
   TBranch        *b_ph_phis0;   //!
   TBranch        *b_ph_Es1;   //!
   TBranch        *b_ph_etas1;   //!
   TBranch        *b_ph_phis1;   //!
   TBranch        *b_ph_Es2;   //!
   TBranch        *b_ph_etas2;   //!
   TBranch        *b_ph_phis2;   //!
   TBranch        *b_ph_Es3;   //!
   TBranch        *b_ph_etas3;   //!
   TBranch        *b_ph_phis3;   //!
   TBranch        *b_ph_rawcl_Es0;   //!
   TBranch        *b_ph_rawcl_etas0;   //!
   TBranch        *b_ph_rawcl_phis0;   //!
   TBranch        *b_ph_rawcl_Es1;   //!
   TBranch        *b_ph_rawcl_etas1;   //!
   TBranch        *b_ph_rawcl_phis1;   //!
   TBranch        *b_ph_rawcl_Es2;   //!
   TBranch        *b_ph_rawcl_etas2;   //!
   TBranch        *b_ph_rawcl_phis2;   //!
   TBranch        *b_ph_rawcl_Es3;   //!
   TBranch        *b_ph_rawcl_etas3;   //!
   TBranch        *b_ph_rawcl_phis3;   //!
   TBranch        *b_ph_rawcl_E;   //!
   TBranch        *b_ph_rawcl_pt;   //!
   TBranch        *b_ph_rawcl_eta;   //!
   TBranch        *b_ph_rawcl_phi;   //!
   TBranch        *b_ph_deltaEmax2;   //!
   TBranch        *b_ph_calibHitsShowerDepth;   //!
   TBranch        *b_ph_isIso;   //!
   TBranch        *b_ph_mvaptcone20;   //!
   TBranch        *b_ph_mvaptcone30;   //!
   TBranch        *b_ph_mvaptcone40;   //!
   TBranch        *b_ph_topoEtcone20;   //!
   TBranch        *b_ph_topoEtcone40;   //!
   TBranch        *b_ph_topoEtcone60;   //!
   TBranch        *b_ph_jet_dr;   //!
   TBranch        *b_ph_jet_E;   //!
   TBranch        *b_ph_jet_pt;   //!
   TBranch        *b_ph_jet_m;   //!
   TBranch        *b_ph_jet_eta;   //!
   TBranch        *b_ph_jet_phi;   //!
   TBranch        *b_ph_jet_matched;   //!
   TBranch        *b_ph_convIP;   //!
   TBranch        *b_ph_convIPRev;   //!
   TBranch        *b_ph_ptIsolationCone;   //!
   TBranch        *b_ph_ptIsolationConePhAngle;   //!
   TBranch        *b_ph_Etcone40_pt_corrected;   //!
   TBranch        *b_ph_Etcone40_ED_corrected;   //!
   TBranch        *b_ph_Etcone40_corrected;   //!
   TBranch        *b_ph_topodr;   //!
   TBranch        *b_ph_topopt;   //!
   TBranch        *b_ph_topoeta;   //!
   TBranch        *b_ph_topophi;   //!
   TBranch        *b_ph_topomatched;   //!
   TBranch        *b_ph_topoEMdr;   //!
   TBranch        *b_ph_topoEMpt;   //!
   TBranch        *b_ph_topoEMeta;   //!
   TBranch        *b_ph_topoEMphi;   //!
   TBranch        *b_ph_topoEMmatched;   //!
   TBranch        *b_ph_EF_dr;   //!
   TBranch        *b_ph_EF_index;   //!
   TBranch        *b_ph_L2_dr;   //!
   TBranch        *b_ph_L2_index;   //!
   TBranch        *b_ph_L1_dr;   //!
   TBranch        *b_ph_L1_index;   //!
   TBranch        *b_mu_staco_n;   //!
   TBranch        *b_mu_staco_E;   //!
   TBranch        *b_mu_staco_pt;   //!
   TBranch        *b_mu_staco_m;   //!
   TBranch        *b_mu_staco_eta;   //!
   TBranch        *b_mu_staco_phi;   //!
   TBranch        *b_mu_staco_px;   //!
   TBranch        *b_mu_staco_py;   //!
   TBranch        *b_mu_staco_pz;   //!
   TBranch        *b_mu_staco_charge;   //!
   TBranch        *b_mu_staco_allauthor;   //!
   TBranch        *b_mu_staco_author;   //!
   TBranch        *b_mu_staco_matchchi2;   //!
   TBranch        *b_mu_staco_matchndof;   //!
   TBranch        *b_mu_staco_etcone20;   //!
   TBranch        *b_mu_staco_etcone30;   //!
   TBranch        *b_mu_staco_etcone40;   //!
   TBranch        *b_mu_staco_nucone20;   //!
   TBranch        *b_mu_staco_nucone30;   //!
   TBranch        *b_mu_staco_nucone40;   //!
   TBranch        *b_mu_staco_ptcone20;   //!
   TBranch        *b_mu_staco_ptcone30;   //!
   TBranch        *b_mu_staco_ptcone40;   //!
   TBranch        *b_mu_staco_energyLossPar;   //!
   TBranch        *b_mu_staco_energyLossErr;   //!
   TBranch        *b_mu_staco_etCore;   //!
   TBranch        *b_mu_staco_energyLossType;   //!
   TBranch        *b_mu_staco_bestMatch;   //!
   TBranch        *b_mu_staco_isStandAloneMuon;   //!
   TBranch        *b_mu_staco_isCombinedMuon;   //!
   TBranch        *b_mu_staco_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_staco_loose;   //!
   TBranch        *b_mu_staco_medium;   //!
   TBranch        *b_mu_staco_tight;   //!
   TBranch        *b_mu_staco_d0_exPV;   //!
   TBranch        *b_mu_staco_z0_exPV;   //!
   TBranch        *b_mu_staco_phi_exPV;   //!
   TBranch        *b_mu_staco_theta_exPV;   //!
   TBranch        *b_mu_staco_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cb_d0_exPV;   //!
   TBranch        *b_mu_staco_cb_z0_exPV;   //!
   TBranch        *b_mu_staco_cb_phi_exPV;   //!
   TBranch        *b_mu_staco_cb_theta_exPV;   //!
   TBranch        *b_mu_staco_cb_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_d0_exPV;   //!
   TBranch        *b_mu_staco_id_z0_exPV;   //!
   TBranch        *b_mu_staco_id_phi_exPV;   //!
   TBranch        *b_mu_staco_id_theta_exPV;   //!
   TBranch        *b_mu_staco_id_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_d0_exPV;   //!
   TBranch        *b_mu_staco_me_z0_exPV;   //!
   TBranch        *b_mu_staco_me_phi_exPV;   //!
   TBranch        *b_mu_staco_me_theta_exPV;   //!
   TBranch        *b_mu_staco_me_qoverp_exPV;   //!
   TBranch        *b_mu_staco_ie_d0_exPV;   //!
   TBranch        *b_mu_staco_ie_z0_exPV;   //!
   TBranch        *b_mu_staco_ie_phi_exPV;   //!
   TBranch        *b_mu_staco_ie_theta_exPV;   //!
   TBranch        *b_mu_staco_ie_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_theta_qoverp_exPV;   //!
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
   TBranch        *b_mu_staco_nBLHits;   //!
   TBranch        *b_mu_staco_nPixHits;   //!
   TBranch        *b_mu_staco_nSCTHits;   //!
   TBranch        *b_mu_staco_nTRTHits;   //!
   TBranch        *b_mu_staco_nTRTHighTHits;   //!
   TBranch        *b_mu_staco_nBLSharedHits;   //!
   TBranch        *b_mu_staco_nPixSharedHits;   //!
   TBranch        *b_mu_staco_nPixHoles;   //!
   TBranch        *b_mu_staco_nSCTSharedHits;   //!
   TBranch        *b_mu_staco_nSCTHoles;   //!
   TBranch        *b_mu_staco_nTRTOutliers;   //!
   TBranch        *b_mu_staco_nTRTHighTOutliers;   //!
   TBranch        *b_mu_staco_nMDTHits;   //!
   TBranch        *b_mu_staco_nMDTHoles;   //!
   TBranch        *b_mu_staco_nCSCEtaHits;   //!
   TBranch        *b_mu_staco_nCSCEtaHoles;   //!
   TBranch        *b_mu_staco_nCSCPhiHits;   //!
   TBranch        *b_mu_staco_nCSCPhiHoles;   //!
   TBranch        *b_mu_staco_nRPCEtaHits;   //!
   TBranch        *b_mu_staco_nRPCEtaHoles;   //!
   TBranch        *b_mu_staco_nRPCPhiHits;   //!
   TBranch        *b_mu_staco_nRPCPhiHoles;   //!
   TBranch        *b_mu_staco_nTGCEtaHits;   //!
   TBranch        *b_mu_staco_nTGCEtaHoles;   //!
   TBranch        *b_mu_staco_nTGCPhiHits;   //!
   TBranch        *b_mu_staco_nTGCPhiHoles;   //!
   TBranch        *b_mu_staco_nGangedPixels;   //!
   TBranch        *b_mu_staco_nOutliersOnTrack;   //!
   TBranch        *b_mu_staco_nMDTBIHits;   //!
   TBranch        *b_mu_staco_nMDTBMHits;   //!
   TBranch        *b_mu_staco_nMDTBOHits;   //!
   TBranch        *b_mu_staco_nMDTBEEHits;   //!
   TBranch        *b_mu_staco_nMDTBIS78Hits;   //!
   TBranch        *b_mu_staco_nMDTEIHits;   //!
   TBranch        *b_mu_staco_nMDTEMHits;   //!
   TBranch        *b_mu_staco_nMDTEOHits;   //!
   TBranch        *b_mu_staco_nMDTEEHits;   //!
   TBranch        *b_mu_staco_nRPCLayer1EtaHits;   //!
   TBranch        *b_mu_staco_nRPCLayer2EtaHits;   //!
   TBranch        *b_mu_staco_nRPCLayer3EtaHits;   //!
   TBranch        *b_mu_staco_nRPCLayer1PhiHits;   //!
   TBranch        *b_mu_staco_nRPCLayer2PhiHits;   //!
   TBranch        *b_mu_staco_nRPCLayer3PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer1EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer2EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer3EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer4EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer1PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer2PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer3PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer4PhiHits;   //!
   TBranch        *b_mu_staco_barrelSectors;   //!
   TBranch        *b_mu_staco_endcapSectors;   //!
   TBranch        *b_mu_staco_trackd0;   //!
   TBranch        *b_mu_staco_trackz0;   //!
   TBranch        *b_mu_staco_trackphi;   //!
   TBranch        *b_mu_staco_tracktheta;   //!
   TBranch        *b_mu_staco_trackqoverp;   //!
   TBranch        *b_mu_staco_trackcov_d0;   //!
   TBranch        *b_mu_staco_trackcov_z0;   //!
   TBranch        *b_mu_staco_trackcov_phi;   //!
   TBranch        *b_mu_staco_trackcov_theta;   //!
   TBranch        *b_mu_staco_trackcov_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_d0_z0;   //!
   TBranch        *b_mu_staco_trackcov_d0_phi;   //!
   TBranch        *b_mu_staco_trackcov_d0_theta;   //!
   TBranch        *b_mu_staco_trackcov_d0_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_z0_phi;   //!
   TBranch        *b_mu_staco_trackcov_z0_theta;   //!
   TBranch        *b_mu_staco_trackcov_z0_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_phi_theta;   //!
   TBranch        *b_mu_staco_trackcov_phi_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_theta_qoverp;   //!
   TBranch        *b_mu_staco_trackfitchi2;   //!
   TBranch        *b_mu_staco_trackfitndof;   //!
   TBranch        *b_mu_staco_hastrack;   //!
   TBranch        *b_mu_staco_EF_dr;   //!
   TBranch        *b_mu_staco_EF_cb_eta;   //!
   TBranch        *b_mu_staco_EF_cb_phi;   //!
   TBranch        *b_mu_staco_EF_cb_pt;   //!
   TBranch        *b_mu_staco_EF_ms_eta;   //!
   TBranch        *b_mu_staco_EF_ms_phi;   //!
   TBranch        *b_mu_staco_EF_ms_pt;   //!
   TBranch        *b_mu_staco_EF_me_eta;   //!
   TBranch        *b_mu_staco_EF_me_phi;   //!
   TBranch        *b_mu_staco_EF_me_pt;   //!
   TBranch        *b_mu_staco_EF_matched;   //!
   TBranch        *b_mu_staco_L2CB_dr;   //!
   TBranch        *b_mu_staco_L2CB_pt;   //!
   TBranch        *b_mu_staco_L2CB_eta;   //!
   TBranch        *b_mu_staco_L2CB_phi;   //!
   TBranch        *b_mu_staco_L2CB_id_pt;   //!
   TBranch        *b_mu_staco_L2CB_ms_pt;   //!
   TBranch        *b_mu_staco_L2CB_nPixHits;   //!
   TBranch        *b_mu_staco_L2CB_nSCTHits;   //!
   TBranch        *b_mu_staco_L2CB_nTRTHits;   //!
   TBranch        *b_mu_staco_L2CB_nTRTHighTHits;   //!
   TBranch        *b_mu_staco_L2CB_matched;   //!
   TBranch        *b_mu_staco_L1_dr;   //!
   TBranch        *b_mu_staco_L1_pt;   //!
   TBranch        *b_mu_staco_L1_eta;   //!
   TBranch        *b_mu_staco_L1_phi;   //!
   TBranch        *b_mu_staco_L1_thrNumber;   //!
   TBranch        *b_mu_staco_L1_RoINumber;   //!
   TBranch        *b_mu_staco_L1_sectorAddress;   //!
   TBranch        *b_mu_staco_L1_firstCandidate;   //!
   TBranch        *b_mu_staco_L1_moreCandInRoI;   //!
   TBranch        *b_mu_staco_L1_moreCandInSector;   //!
   TBranch        *b_mu_staco_L1_source;   //!
   TBranch        *b_mu_staco_L1_hemisphere;   //!
   TBranch        *b_mu_staco_L1_matched;   //!
   TBranch        *b_mu_calo_n;   //!
   TBranch        *b_mu_calo_E;   //!
   TBranch        *b_mu_calo_pt;   //!
   TBranch        *b_mu_calo_m;   //!
   TBranch        *b_mu_calo_eta;   //!
   TBranch        *b_mu_calo_phi;   //!
   TBranch        *b_mu_calo_px;   //!
   TBranch        *b_mu_calo_py;   //!
   TBranch        *b_mu_calo_pz;   //!
   TBranch        *b_mu_calo_charge;   //!
   TBranch        *b_mu_calo_allauthor;   //!
   TBranch        *b_mu_calo_author;   //!
   TBranch        *b_mu_calo_matchchi2;   //!
   TBranch        *b_mu_calo_matchndof;   //!
   TBranch        *b_mu_calo_etcone20;   //!
   TBranch        *b_mu_calo_etcone30;   //!
   TBranch        *b_mu_calo_etcone40;   //!
   TBranch        *b_mu_calo_nucone20;   //!
   TBranch        *b_mu_calo_nucone30;   //!
   TBranch        *b_mu_calo_nucone40;   //!
   TBranch        *b_mu_calo_ptcone20;   //!
   TBranch        *b_mu_calo_ptcone30;   //!
   TBranch        *b_mu_calo_ptcone40;   //!
   TBranch        *b_mu_calo_energyLossPar;   //!
   TBranch        *b_mu_calo_energyLossErr;   //!
   TBranch        *b_mu_calo_etCore;   //!
   TBranch        *b_mu_calo_energyLossType;   //!
   TBranch        *b_mu_calo_bestMatch;   //!
   TBranch        *b_mu_calo_isStandAloneMuon;   //!
   TBranch        *b_mu_calo_isCombinedMuon;   //!
   TBranch        *b_mu_calo_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_calo_loose;   //!
   TBranch        *b_mu_calo_medium;   //!
   TBranch        *b_mu_calo_tight;   //!
   TBranch        *b_mu_calo_d0_exPV;   //!
   TBranch        *b_mu_calo_z0_exPV;   //!
   TBranch        *b_mu_calo_phi_exPV;   //!
   TBranch        *b_mu_calo_theta_exPV;   //!
   TBranch        *b_mu_calo_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cb_d0_exPV;   //!
   TBranch        *b_mu_calo_cb_z0_exPV;   //!
   TBranch        *b_mu_calo_cb_phi_exPV;   //!
   TBranch        *b_mu_calo_cb_theta_exPV;   //!
   TBranch        *b_mu_calo_cb_qoverp_exPV;   //!
   TBranch        *b_mu_calo_id_d0_exPV;   //!
   TBranch        *b_mu_calo_id_z0_exPV;   //!
   TBranch        *b_mu_calo_id_phi_exPV;   //!
   TBranch        *b_mu_calo_id_theta_exPV;   //!
   TBranch        *b_mu_calo_id_qoverp_exPV;   //!
   TBranch        *b_mu_calo_me_d0_exPV;   //!
   TBranch        *b_mu_calo_me_z0_exPV;   //!
   TBranch        *b_mu_calo_me_phi_exPV;   //!
   TBranch        *b_mu_calo_me_theta_exPV;   //!
   TBranch        *b_mu_calo_me_qoverp_exPV;   //!
   TBranch        *b_mu_calo_ie_d0_exPV;   //!
   TBranch        *b_mu_calo_ie_z0_exPV;   //!
   TBranch        *b_mu_calo_ie_phi_exPV;   //!
   TBranch        *b_mu_calo_ie_theta_exPV;   //!
   TBranch        *b_mu_calo_ie_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cov_d0_exPV;   //!
   TBranch        *b_mu_calo_cov_z0_exPV;   //!
   TBranch        *b_mu_calo_cov_phi_exPV;   //!
   TBranch        *b_mu_calo_cov_theta_exPV;   //!
   TBranch        *b_mu_calo_cov_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_calo_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_calo_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_calo_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_calo_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_calo_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_calo_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_calo_ms_d0;   //!
   TBranch        *b_mu_calo_ms_z0;   //!
   TBranch        *b_mu_calo_ms_phi;   //!
   TBranch        *b_mu_calo_ms_theta;   //!
   TBranch        *b_mu_calo_ms_qoverp;   //!
   TBranch        *b_mu_calo_id_d0;   //!
   TBranch        *b_mu_calo_id_z0;   //!
   TBranch        *b_mu_calo_id_phi;   //!
   TBranch        *b_mu_calo_id_theta;   //!
   TBranch        *b_mu_calo_id_qoverp;   //!
   TBranch        *b_mu_calo_me_d0;   //!
   TBranch        *b_mu_calo_me_z0;   //!
   TBranch        *b_mu_calo_me_phi;   //!
   TBranch        *b_mu_calo_me_theta;   //!
   TBranch        *b_mu_calo_me_qoverp;   //!
   TBranch        *b_mu_calo_ie_d0;   //!
   TBranch        *b_mu_calo_ie_z0;   //!
   TBranch        *b_mu_calo_ie_phi;   //!
   TBranch        *b_mu_calo_ie_theta;   //!
   TBranch        *b_mu_calo_ie_qoverp;   //!
   TBranch        *b_mu_calo_nBLHits;   //!
   TBranch        *b_mu_calo_nPixHits;   //!
   TBranch        *b_mu_calo_nSCTHits;   //!
   TBranch        *b_mu_calo_nTRTHits;   //!
   TBranch        *b_mu_calo_nTRTHighTHits;   //!
   TBranch        *b_mu_calo_nBLSharedHits;   //!
   TBranch        *b_mu_calo_nPixSharedHits;   //!
   TBranch        *b_mu_calo_nPixHoles;   //!
   TBranch        *b_mu_calo_nSCTSharedHits;   //!
   TBranch        *b_mu_calo_nSCTHoles;   //!
   TBranch        *b_mu_calo_nTRTOutliers;   //!
   TBranch        *b_mu_calo_nTRTHighTOutliers;   //!
   TBranch        *b_mu_calo_nMDTHits;   //!
   TBranch        *b_mu_calo_nMDTHoles;   //!
   TBranch        *b_mu_calo_nCSCEtaHits;   //!
   TBranch        *b_mu_calo_nCSCEtaHoles;   //!
   TBranch        *b_mu_calo_nCSCPhiHits;   //!
   TBranch        *b_mu_calo_nCSCPhiHoles;   //!
   TBranch        *b_mu_calo_nRPCEtaHits;   //!
   TBranch        *b_mu_calo_nRPCEtaHoles;   //!
   TBranch        *b_mu_calo_nRPCPhiHits;   //!
   TBranch        *b_mu_calo_nRPCPhiHoles;   //!
   TBranch        *b_mu_calo_nTGCEtaHits;   //!
   TBranch        *b_mu_calo_nTGCEtaHoles;   //!
   TBranch        *b_mu_calo_nTGCPhiHits;   //!
   TBranch        *b_mu_calo_nTGCPhiHoles;   //!
   TBranch        *b_mu_calo_nGangedPixels;   //!
   TBranch        *b_mu_calo_nOutliersOnTrack;   //!
   TBranch        *b_mu_calo_nMDTBIHits;   //!
   TBranch        *b_mu_calo_nMDTBMHits;   //!
   TBranch        *b_mu_calo_nMDTBOHits;   //!
   TBranch        *b_mu_calo_nMDTBEEHits;   //!
   TBranch        *b_mu_calo_nMDTBIS78Hits;   //!
   TBranch        *b_mu_calo_nMDTEIHits;   //!
   TBranch        *b_mu_calo_nMDTEMHits;   //!
   TBranch        *b_mu_calo_nMDTEOHits;   //!
   TBranch        *b_mu_calo_nMDTEEHits;   //!
   TBranch        *b_mu_calo_nRPCLayer1EtaHits;   //!
   TBranch        *b_mu_calo_nRPCLayer2EtaHits;   //!
   TBranch        *b_mu_calo_nRPCLayer3EtaHits;   //!
   TBranch        *b_mu_calo_nRPCLayer1PhiHits;   //!
   TBranch        *b_mu_calo_nRPCLayer2PhiHits;   //!
   TBranch        *b_mu_calo_nRPCLayer3PhiHits;   //!
   TBranch        *b_mu_calo_nTGCLayer1EtaHits;   //!
   TBranch        *b_mu_calo_nTGCLayer2EtaHits;   //!
   TBranch        *b_mu_calo_nTGCLayer3EtaHits;   //!
   TBranch        *b_mu_calo_nTGCLayer4EtaHits;   //!
   TBranch        *b_mu_calo_nTGCLayer1PhiHits;   //!
   TBranch        *b_mu_calo_nTGCLayer2PhiHits;   //!
   TBranch        *b_mu_calo_nTGCLayer3PhiHits;   //!
   TBranch        *b_mu_calo_nTGCLayer4PhiHits;   //!
   TBranch        *b_mu_calo_barrelSectors;   //!
   TBranch        *b_mu_calo_endcapSectors;   //!
   TBranch        *b_mu_calo_trackd0;   //!
   TBranch        *b_mu_calo_trackz0;   //!
   TBranch        *b_mu_calo_trackphi;   //!
   TBranch        *b_mu_calo_tracktheta;   //!
   TBranch        *b_mu_calo_trackqoverp;   //!
   TBranch        *b_mu_calo_trackcov_d0;   //!
   TBranch        *b_mu_calo_trackcov_z0;   //!
   TBranch        *b_mu_calo_trackcov_phi;   //!
   TBranch        *b_mu_calo_trackcov_theta;   //!
   TBranch        *b_mu_calo_trackcov_qoverp;   //!
   TBranch        *b_mu_calo_trackcov_d0_z0;   //!
   TBranch        *b_mu_calo_trackcov_d0_phi;   //!
   TBranch        *b_mu_calo_trackcov_d0_theta;   //!
   TBranch        *b_mu_calo_trackcov_d0_qoverp;   //!
   TBranch        *b_mu_calo_trackcov_z0_phi;   //!
   TBranch        *b_mu_calo_trackcov_z0_theta;   //!
   TBranch        *b_mu_calo_trackcov_z0_qoverp;   //!
   TBranch        *b_mu_calo_trackcov_phi_theta;   //!
   TBranch        *b_mu_calo_trackcov_phi_qoverp;   //!
   TBranch        *b_mu_calo_trackcov_theta_qoverp;   //!
   TBranch        *b_mu_calo_trackfitchi2;   //!
   TBranch        *b_mu_calo_trackfitndof;   //!
   TBranch        *b_mu_calo_hastrack;   //!
   TBranch        *b_mu_calo_EF_dr;   //!
   TBranch        *b_mu_calo_EF_cb_eta;   //!
   TBranch        *b_mu_calo_EF_cb_phi;   //!
   TBranch        *b_mu_calo_EF_cb_pt;   //!
   TBranch        *b_mu_calo_EF_ms_eta;   //!
   TBranch        *b_mu_calo_EF_ms_phi;   //!
   TBranch        *b_mu_calo_EF_ms_pt;   //!
   TBranch        *b_mu_calo_EF_me_eta;   //!
   TBranch        *b_mu_calo_EF_me_phi;   //!
   TBranch        *b_mu_calo_EF_me_pt;   //!
   TBranch        *b_mu_calo_EF_matched;   //!
   TBranch        *b_mu_calo_L2CB_dr;   //!
   TBranch        *b_mu_calo_L2CB_pt;   //!
   TBranch        *b_mu_calo_L2CB_eta;   //!
   TBranch        *b_mu_calo_L2CB_phi;   //!
   TBranch        *b_mu_calo_L2CB_id_pt;   //!
   TBranch        *b_mu_calo_L2CB_ms_pt;   //!
   TBranch        *b_mu_calo_L2CB_nPixHits;   //!
   TBranch        *b_mu_calo_L2CB_nSCTHits;   //!
   TBranch        *b_mu_calo_L2CB_nTRTHits;   //!
   TBranch        *b_mu_calo_L2CB_nTRTHighTHits;   //!
   TBranch        *b_mu_calo_L2CB_matched;   //!
   TBranch        *b_mu_calo_L1_dr;   //!
   TBranch        *b_mu_calo_L1_pt;   //!
   TBranch        *b_mu_calo_L1_eta;   //!
   TBranch        *b_mu_calo_L1_phi;   //!
   TBranch        *b_mu_calo_L1_thrNumber;   //!
   TBranch        *b_mu_calo_L1_RoINumber;   //!
   TBranch        *b_mu_calo_L1_sectorAddress;   //!
   TBranch        *b_mu_calo_L1_firstCandidate;   //!
   TBranch        *b_mu_calo_L1_moreCandInRoI;   //!
   TBranch        *b_mu_calo_L1_moreCandInSector;   //!
   TBranch        *b_mu_calo_L1_source;   //!
   TBranch        *b_mu_calo_L1_hemisphere;   //!
   TBranch        *b_mu_calo_L1_matched;   //!
   TBranch        *b_tau_n;   //!
   TBranch        *b_tau_Et;   //!
   TBranch        *b_tau_pt;   //!
   TBranch        *b_tau_m;   //!
   TBranch        *b_tau_eta;   //!
   TBranch        *b_tau_phi;   //!
   TBranch        *b_tau_charge;   //!
   TBranch        *b_tau_BDTEleScore;   //!
   TBranch        *b_tau_BDTJetScore;   //!
   TBranch        *b_tau_discCut;   //!
   TBranch        *b_tau_discCutTMVA;   //!
   TBranch        *b_tau_discLL;   //!
   TBranch        *b_tau_discNN;   //!
   TBranch        *b_tau_efficLL;   //!
   TBranch        *b_tau_efficNN;   //!
   TBranch        *b_tau_likelihood;   //!
   TBranch        *b_tau_tauJetNeuralNetwork;   //!
   TBranch        *b_tau_tauENeuralNetwork;   //!
   TBranch        *b_tau_tauElTauLikelihood;   //!
   TBranch        *b_tau_electronVetoLoose;   //!
   TBranch        *b_tau_electronVetoMedium;   //!
   TBranch        *b_tau_electronVetoTight;   //!
   TBranch        *b_tau_muonVeto;   //!
   TBranch        *b_tau_tauCutLoose;   //!
   TBranch        *b_tau_tauCutMedium;   //!
   TBranch        *b_tau_tauCutTight;   //!
   TBranch        *b_tau_tauCutSafeLoose;   //!
   TBranch        *b_tau_tauCutSafeMedium;   //!
   TBranch        *b_tau_tauCutSafeTight;   //!
   TBranch        *b_tau_tauCutSafeCaloLoose;   //!
   TBranch        *b_tau_tauCutSafeCaloMedium;   //!
   TBranch        *b_tau_tauCutSafeCaloTight;   //!
   TBranch        *b_tau_tauLlhLoose;   //!
   TBranch        *b_tau_tauLlhMedium;   //!
   TBranch        *b_tau_tauLlhTight;   //!
   TBranch        *b_tau_author;   //!
   TBranch        *b_tau_ROIword;   //!
   TBranch        *b_tau_nProng;   //!
   TBranch        *b_tau_numTrack;   //!
   TBranch        *b_tau_etOverPtLeadTrk;   //!
   TBranch        *b_tau_ipZ0SinThetaSigLeadTrk;   //!
   TBranch        *b_tau_leadTrkPt;   //!
   TBranch        *b_tau_nLooseTrk;   //!
   TBranch        *b_tau_nLooseConvTrk;   //!
   TBranch        *b_tau_nProngLoose;   //!
   TBranch        *b_tau_ipSigLeadTrk;   //!
   TBranch        *b_tau_ipSigLeadLooseTrk;   //!
   TBranch        *b_tau_etOverPtLeadLooseTrk;   //!
   TBranch        *b_tau_leadLooseTrkPt;   //!
   TBranch        *b_tau_chrgLooseTrk;   //!
   TBranch        *b_tau_massTrkSys;   //!
   TBranch        *b_tau_trkWidth2;   //!
   TBranch        *b_tau_trFlightPathSig;   //!
   TBranch        *b_tau_etEflow;   //!
   TBranch        *b_tau_mEflow;   //!
   TBranch        *b_tau_nPi0;   //!
   TBranch        *b_tau_ele_E237E277;   //!
   TBranch        *b_tau_ele_PresamplerFraction;   //!
   TBranch        *b_tau_ele_ECALFirstFraction;   //!
   TBranch        *b_tau_seedCalo_EMRadius;   //!
   TBranch        *b_tau_seedCalo_hadRadius;   //!
   TBranch        *b_tau_seedCalo_etEMAtEMScale;   //!
   TBranch        *b_tau_seedCalo_etHadAtEMScale;   //!
   TBranch        *b_tau_seedCalo_isolFrac;   //!
   TBranch        *b_tau_seedCalo_centFrac;   //!
   TBranch        *b_tau_seedCalo_stripWidth2;   //!
   TBranch        *b_tau_seedCalo_nStrip;   //!
   TBranch        *b_tau_seedCalo_etEMCalib;   //!
   TBranch        *b_tau_seedCalo_etHadCalib;   //!
   TBranch        *b_tau_seedCalo_eta;   //!
   TBranch        *b_tau_seedCalo_phi;   //!
   TBranch        *b_tau_seedCalo_nIsolLooseTrk;   //!
   TBranch        *b_tau_seedCalo_trkAvgDist;   //!
   TBranch        *b_tau_seedCalo_trkRmsDist;   //!
   TBranch        *b_tau_seedTrk_EMRadius;   //!
   TBranch        *b_tau_seedTrk_isolFrac;   //!
   TBranch        *b_tau_seedTrk_etChrgHadOverSumTrkPt;   //!
   TBranch        *b_tau_seedTrk_isolFracWide;   //!
   TBranch        *b_tau_seedTrk_etHadAtEMScale;   //!
   TBranch        *b_tau_seedTrk_etEMAtEMScale;   //!
   TBranch        *b_tau_seedTrk_etEMCL;   //!
   TBranch        *b_tau_seedTrk_etChrgEM;   //!
   TBranch        *b_tau_seedTrk_etNeuEM;   //!
   TBranch        *b_tau_seedTrk_etResNeuEM;   //!
   TBranch        *b_tau_seedTrk_hadLeakEt;   //!
   TBranch        *b_tau_seedTrk_sumEMCellEtOverLeadTrkPt;   //!
   TBranch        *b_tau_seedTrk_secMaxStripEt;   //!
   TBranch        *b_tau_seedTrk_stripWidth2;   //!
   TBranch        *b_tau_seedTrk_nStrip;   //!
   TBranch        *b_tau_seedTrk_etChrgHad;   //!
   TBranch        *b_tau_seedTrk_nOtherCoreTrk;   //!
   TBranch        *b_tau_seedTrk_nIsolTrk;   //!
   TBranch        *b_tau_seedTrk_etIsolEM;   //!
   TBranch        *b_tau_seedTrk_etIsolHad;   //!
   TBranch        *b_tau_calcVars_sumTrkPt;   //!
   TBranch        *b_tau_calcVars_numTopoClusters;   //!
   TBranch        *b_tau_calcVars_numEffTopoClusters;   //!
   TBranch        *b_tau_calcVars_topoInvMass;   //!
   TBranch        *b_tau_calcVars_effTopoInvMass;   //!
   TBranch        *b_tau_calcVars_topoMeanDeltaR;   //!
   TBranch        *b_tau_calcVars_effTopoMeanDeltaR;   //!
   TBranch        *b_tau_calcVars_etHadSumPtTracks;   //!
   TBranch        *b_tau_calcVars_etEMSumPtTracks;   //!
   TBranch        *b_tau_calcVars_etHad_EMScale_Pt3Trks;   //!
   TBranch        *b_tau_calcVars_etEM_EMScale_Pt3Trks;   //!
   TBranch        *b_tau_calcVars_mass;   //!
   TBranch        *b_tau_calcVars_ipSigLeadLooseTrk;   //!
   TBranch        *b_tau_calcVars_drMax;   //!
   TBranch        *b_tau_calcVars_drMin;   //!
   TBranch        *b_tau_calcVars_emFracCalib;   //!
   TBranch        *b_tau_calcVars_TRTHTOverLT_LeadTrk;   //!
   TBranch        *b_tau_cluster_E;   //!
   TBranch        *b_tau_cluster_eta;   //!
   TBranch        *b_tau_cluster_phi;   //!
   TBranch        *b_tau_cluster_n;   //!
   TBranch        *b_tau_Pi0Cluster_pt;   //!
   TBranch        *b_tau_Pi0Cluster_eta;   //!
   TBranch        *b_tau_Pi0Cluster_phi;   //!
   TBranch        *b_tau_secvtx_x;   //!
   TBranch        *b_tau_secvtx_y;   //!
   TBranch        *b_tau_secvtx_z;   //!
   TBranch        *b_tau_secvtx_chiSquared;   //!
   TBranch        *b_tau_secvtx_numberDoF;   //!
   TBranch        *b_tau_jet_Et;   //!
   TBranch        *b_tau_jet_pt;   //!
   TBranch        *b_tau_jet_m;   //!
   TBranch        *b_tau_jet_eta;   //!
   TBranch        *b_tau_jet_phi;   //!
   TBranch        *b_tau_jet_WIDTH;   //!
   TBranch        *b_tau_jet_n90;   //!
   TBranch        *b_tau_jet_n90constituents;   //!
   TBranch        *b_tau_jet_fracSamplingMax;   //!
   TBranch        *b_tau_jet_SamplingMax;   //!
   TBranch        *b_tau_jet_BCH_CORR_CELL;   //!
   TBranch        *b_tau_jet_BCH_CORR_JET;   //!
   TBranch        *b_tau_jet_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_tau_jet_ENG_BAD_CELLS;   //!
   TBranch        *b_tau_jet_N_BAD_CELLS;   //!
   TBranch        *b_tau_jet_N_BAD_CELLS_CORR;   //!
   TBranch        *b_tau_jet_BAD_CELLS_CORR_E;   //!
   TBranch        *b_tau_jet_hecf;   //!
   TBranch        *b_tau_jet_tgap3f;   //!
   TBranch        *b_tau_jet_isGood;   //!
   TBranch        *b_tau_jet_emfrac;   //!
   TBranch        *b_tau_jet_GCWJES;   //!
   TBranch        *b_tau_jet_EMJES;   //!
   TBranch        *b_tau_jet_emscale_E;   //!
   TBranch        *b_tau_jet_emscale_pt;   //!
   TBranch        *b_tau_jet_emscale_m;   //!
   TBranch        *b_tau_jet_emscale_eta;   //!
   TBranch        *b_tau_jet_emscale_phi;   //!
   TBranch        *b_tau_jet_jvtxf;   //!
   TBranch        *b_tau_jet_jvtx_x;   //!
   TBranch        *b_tau_jet_jvtx_y;   //!
   TBranch        *b_tau_jet_jvtx_z;   //!
   TBranch        *b_tau_jet_flavor_weight;   //!
   TBranch        *b_tau_jet_flavor_weight_TrackCounting2D;   //!
   TBranch        *b_tau_jet_flavor_weight_JetProb;   //!
   TBranch        *b_tau_jet_flavor_weight_IP1D;   //!
   TBranch        *b_tau_jet_flavor_weight_IP2D;   //!
   TBranch        *b_tau_jet_flavor_weight_IP3D;   //!
   TBranch        *b_tau_jet_flavor_weight_SV0;   //!
   TBranch        *b_tau_jet_flavor_weight_SV1;   //!
   TBranch        *b_tau_jet_flavor_weight_SV2;   //!
   TBranch        *b_tau_jet_flavor_weight_JetFitterTag;   //!
   TBranch        *b_tau_jet_flavor_weight_JetFitterCOMB;   //!
   TBranch        *b_tau_jet_flavor_weight_JetFitterTagNN;   //!
   TBranch        *b_tau_jet_flavor_weight_JetFitterCOMBNN;   //!
   TBranch        *b_tau_jet_flavor_weight_SoftMuonTag;   //!
   TBranch        *b_tau_jet_flavor_weight_SoftElectronTag;   //!
   TBranch        *b_tau_jet_e_PreSamplerB;   //!
   TBranch        *b_tau_jet_e_EMB1;   //!
   TBranch        *b_tau_jet_e_EMB2;   //!
   TBranch        *b_tau_jet_e_EMB3;   //!
   TBranch        *b_tau_jet_e_PreSamplerE;   //!
   TBranch        *b_tau_jet_e_EME1;   //!
   TBranch        *b_tau_jet_e_EME2;   //!
   TBranch        *b_tau_jet_e_EME3;   //!
   TBranch        *b_tau_jet_e_HEC0;   //!
   TBranch        *b_tau_jet_e_HEC1;   //!
   TBranch        *b_tau_jet_e_HEC2;   //!
   TBranch        *b_tau_jet_e_HEC3;   //!
   TBranch        *b_tau_jet_e_TileBar0;   //!
   TBranch        *b_tau_jet_e_TileBar1;   //!
   TBranch        *b_tau_jet_e_TileBar2;   //!
   TBranch        *b_tau_jet_e_TileGap1;   //!
   TBranch        *b_tau_jet_e_TileGap2;   //!
   TBranch        *b_tau_jet_e_TileGap3;   //!
   TBranch        *b_tau_jet_e_TileExt0;   //!
   TBranch        *b_tau_jet_e_TileExt1;   //!
   TBranch        *b_tau_jet_e_TileExt2;   //!
   TBranch        *b_tau_jet_e_FCAL0;   //!
   TBranch        *b_tau_jet_e_FCAL1;   //!
   TBranch        *b_tau_jet_e_FCAL2;   //!
   TBranch        *b_tau_jet_shapeBins;   //!
   TBranch        *b_tau_track_n;   //!
   TBranch        *b_tau_track_d0;   //!
   TBranch        *b_tau_track_z0;   //!
   TBranch        *b_tau_track_phi;   //!
   TBranch        *b_tau_track_theta;   //!
   TBranch        *b_tau_track_qoverp;   //!
   TBranch        *b_tau_track_pt;   //!
   TBranch        *b_tau_track_eta;   //!
   TBranch        *b_tau_track_atPV_d0;   //!
   TBranch        *b_tau_track_atPV_z0;   //!
   TBranch        *b_tau_track_atPV_phi;   //!
   TBranch        *b_tau_track_atPV_theta;   //!
   TBranch        *b_tau_track_atPV_qoverp;   //!
   TBranch        *b_tau_track_atPV_pt;   //!
   TBranch        *b_tau_track_atPV_eta;   //!
   TBranch        *b_tau_track_nBLHits;   //!
   TBranch        *b_tau_track_nPixHits;   //!
   TBranch        *b_tau_track_nSCTHits;   //!
   TBranch        *b_tau_track_nTRTHits;   //!
   TBranch        *b_tau_track_nPixHoles;   //!
   TBranch        *b_tau_track_nSCTHoles;   //!
   TBranch        *b_tau_track_nBLSharedHits;   //!
   TBranch        *b_tau_track_nPixSharedHits;   //!
   TBranch        *b_tau_track_nSCTSharedHits;   //!
   TBranch        *b_tau_track_nTRTHighTHits;   //!
   TBranch        *b_tau_track_nTRTOutliers;   //!
   TBranch        *b_tau_track_nTRTHighTOutliers;   //!
   TBranch        *b_tau_track_nHits;   //!
   TBranch        *b_tau_track_pixeldEdx;   //!
   TBranch        *b_tau_EF_dr;   //!
   TBranch        *b_tau_EF_E;   //!
   TBranch        *b_tau_EF_Et;   //!
   TBranch        *b_tau_EF_pt;   //!
   TBranch        *b_tau_EF_eta;   //!
   TBranch        *b_tau_EF_phi;   //!
   TBranch        *b_tau_EF_matched;   //!
   TBranch        *b_tau_L2_dr;   //!
   TBranch        *b_tau_L2_E;   //!
   TBranch        *b_tau_L2_Et;   //!
   TBranch        *b_tau_L2_pt;   //!
   TBranch        *b_tau_L2_eta;   //!
   TBranch        *b_tau_L2_phi;   //!
   TBranch        *b_tau_L2_matched;   //!
   TBranch        *b_tau_L1_dr;   //!
   TBranch        *b_tau_L1_Et;   //!
   TBranch        *b_tau_L1_pt;   //!
   TBranch        *b_tau_L1_eta;   //!
   TBranch        *b_tau_L1_phi;   //!
   TBranch        *b_tau_L1_matched;   //!
   TBranch        *b_MET_RefFinal_etx;   //!
   TBranch        *b_MET_RefFinal_ety;   //!
   TBranch        *b_MET_RefFinal_sumet;   //!
   TBranch        *b_MET_RefFinal_et;   //!
   TBranch        *b_MET_RefFinal_phi;   //!
   TBranch        *b_MET_Cryo_etx;   //!
   TBranch        *b_MET_Cryo_ety;   //!
   TBranch        *b_MET_Cryo_sumet;   //!
   TBranch        *b_MET_Cryo_et;   //!
   TBranch        *b_MET_Cryo_phi;   //!
   TBranch        *b_MET_RefEle_etx;   //!
   TBranch        *b_MET_RefEle_ety;   //!
   TBranch        *b_MET_RefEle_sumet;   //!
   TBranch        *b_MET_RefEle_et;   //!
   TBranch        *b_MET_RefEle_phi;   //!
   TBranch        *b_MET_RefJet_etx;   //!
   TBranch        *b_MET_RefJet_ety;   //!
   TBranch        *b_MET_RefJet_sumet;   //!
   TBranch        *b_MET_RefJet_et;   //!
   TBranch        *b_MET_RefJet_phi;   //!
   TBranch        *b_MET_SoftJets_etx;   //!
   TBranch        *b_MET_SoftJets_ety;   //!
   TBranch        *b_MET_SoftJets_sumet;   //!
   TBranch        *b_MET_SoftJets_et;   //!
   TBranch        *b_MET_SoftJets_phi;   //!
   TBranch        *b_MET_RefMuon_etx;   //!
   TBranch        *b_MET_RefMuon_ety;   //!
   TBranch        *b_MET_RefMuon_sumet;   //!
   TBranch        *b_MET_RefMuon_et;   //!
   TBranch        *b_MET_RefMuon_phi;   //!
   TBranch        *b_MET_RefMuon_Staco_etx;   //!
   TBranch        *b_MET_RefMuon_Staco_ety;   //!
   TBranch        *b_MET_RefMuon_Staco_sumet;   //!
   TBranch        *b_MET_RefMuon_Staco_et;   //!
   TBranch        *b_MET_RefMuon_Staco_phi;   //!
   TBranch        *b_MET_RefMuon_Muid_etx;   //!
   TBranch        *b_MET_RefMuon_Muid_ety;   //!
   TBranch        *b_MET_RefMuon_Muid_sumet;   //!
   TBranch        *b_MET_RefMuon_Muid_et;   //!
   TBranch        *b_MET_RefMuon_Muid_phi;   //!
   TBranch        *b_MET_RefGamma_etx;   //!
   TBranch        *b_MET_RefGamma_ety;   //!
   TBranch        *b_MET_RefGamma_sumet;   //!
   TBranch        *b_MET_RefGamma_et;   //!
   TBranch        *b_MET_RefGamma_phi;   //!
   TBranch        *b_MET_RefTau_etx;   //!
   TBranch        *b_MET_RefTau_ety;   //!
   TBranch        *b_MET_RefTau_sumet;   //!
   TBranch        *b_MET_RefTau_et;   //!
   TBranch        *b_MET_RefTau_phi;   //!
   TBranch        *b_MET_CellOut_etx;   //!
   TBranch        *b_MET_CellOut_ety;   //!
   TBranch        *b_MET_CellOut_sumet;   //!
   TBranch        *b_MET_CellOut_et;   //!
   TBranch        *b_MET_CellOut_phi;   //!
   TBranch        *b_MET_Track_etx;   //!
   TBranch        *b_MET_Track_ety;   //!
   TBranch        *b_MET_Track_sumet;   //!
   TBranch        *b_MET_Track_et;   //!
   TBranch        *b_MET_Track_phi;   //!
   TBranch        *b_MET_Muon_Isol_Staco_etx;   //!
   TBranch        *b_MET_Muon_Isol_Staco_ety;   //!
   TBranch        *b_MET_Muon_Isol_Staco_sumet;   //!
   TBranch        *b_MET_Muon_Isol_Staco_et;   //!
   TBranch        *b_MET_Muon_Isol_Staco_phi;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_etx;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_ety;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_sumet;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_et;   //!
   TBranch        *b_MET_Muon_NonIsol_Staco_phi;   //!
   TBranch        *b_MET_Muon_Total_Staco_etx;   //!
   TBranch        *b_MET_Muon_Total_Staco_ety;   //!
   TBranch        *b_MET_Muon_Total_Staco_sumet;   //!
   TBranch        *b_MET_Muon_Total_Staco_et;   //!
   TBranch        *b_MET_Muon_Total_Staco_phi;   //!
   TBranch        *b_MET_Muon_Isol_Muid_etx;   //!
   TBranch        *b_MET_Muon_Isol_Muid_ety;   //!
   TBranch        *b_MET_Muon_Isol_Muid_sumet;   //!
   TBranch        *b_MET_Muon_Isol_Muid_et;   //!
   TBranch        *b_MET_Muon_Isol_Muid_phi;   //!
   TBranch        *b_MET_Muon_NonIsol_Muid_etx;   //!
   TBranch        *b_MET_Muon_NonIsol_Muid_ety;   //!
   TBranch        *b_MET_Muon_NonIsol_Muid_sumet;   //!
   TBranch        *b_MET_Muon_NonIsol_Muid_et;   //!
   TBranch        *b_MET_Muon_NonIsol_Muid_phi;   //!
   TBranch        *b_MET_Muon_Total_Muid_etx;   //!
   TBranch        *b_MET_Muon_Total_Muid_ety;   //!
   TBranch        *b_MET_Muon_Total_Muid_sumet;   //!
   TBranch        *b_MET_Muon_Total_Muid_et;   //!
   TBranch        *b_MET_Muon_Total_Muid_phi;   //!
   TBranch        *b_MET_MuonBoy_etx;   //!
   TBranch        *b_MET_MuonBoy_ety;   //!
   TBranch        *b_MET_MuonBoy_sumet;   //!
   TBranch        *b_MET_MuonBoy_et;   //!
   TBranch        *b_MET_MuonBoy_phi;   //!
   TBranch        *b_MET_RefMuon_Track_etx;   //!
   TBranch        *b_MET_RefMuon_Track_ety;   //!
   TBranch        *b_MET_RefMuon_Track_sumet;   //!
   TBranch        *b_MET_RefMuon_Track_et;   //!
   TBranch        *b_MET_RefMuon_Track_phi;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_etx;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_ety;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_sumet;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_et;   //!
   TBranch        *b_MET_RefMuon_Track_Staco_phi;   //!
   TBranch        *b_MET_RefMuon_Track_Muid_etx;   //!
   TBranch        *b_MET_RefMuon_Track_Muid_ety;   //!
   TBranch        *b_MET_RefMuon_Track_Muid_sumet;   //!
   TBranch        *b_MET_RefMuon_Track_Muid_et;   //!
   TBranch        *b_MET_RefMuon_Track_Muid_phi;   //!
   TBranch        *b_MET_CryoCone_etx;   //!
   TBranch        *b_MET_CryoCone_ety;   //!
   TBranch        *b_MET_CryoCone_sumet;   //!
   TBranch        *b_MET_CryoCone_et;   //!
   TBranch        *b_MET_CryoCone_phi;   //!
   TBranch        *b_MET_Final_etx;   //!
   TBranch        *b_MET_Final_ety;   //!
   TBranch        *b_MET_Final_sumet;   //!
   TBranch        *b_MET_Final_et;   //!
   TBranch        *b_MET_Final_phi;   //!
   TBranch        *b_MET_MuonBoy_Spectro_etx;   //!
   TBranch        *b_MET_MuonBoy_Spectro_ety;   //!
   TBranch        *b_MET_MuonBoy_Spectro_sumet;   //!
   TBranch        *b_MET_MuonBoy_Spectro_et;   //!
   TBranch        *b_MET_MuonBoy_Spectro_phi;   //!
   TBranch        *b_MET_MuonBoy_Track_etx;   //!
   TBranch        *b_MET_MuonBoy_Track_ety;   //!
   TBranch        *b_MET_MuonBoy_Track_sumet;   //!
   TBranch        *b_MET_MuonBoy_Track_et;   //!
   TBranch        *b_MET_MuonBoy_Track_phi;   //!
   TBranch        *b_MET_MuonMuid_etx;   //!
   TBranch        *b_MET_MuonMuid_ety;   //!
   TBranch        *b_MET_MuonMuid_sumet;   //!
   TBranch        *b_MET_MuonMuid_et;   //!
   TBranch        *b_MET_MuonMuid_phi;   //!
   TBranch        *b_MET_Muid_etx;   //!
   TBranch        *b_MET_Muid_ety;   //!
   TBranch        *b_MET_Muid_sumet;   //!
   TBranch        *b_MET_Muid_et;   //!
   TBranch        *b_MET_Muid_phi;   //!
   TBranch        *b_MET_Muid_Spectro_etx;   //!
   TBranch        *b_MET_Muid_Spectro_ety;   //!
   TBranch        *b_MET_Muid_Spectro_sumet;   //!
   TBranch        *b_MET_Muid_Spectro_et;   //!
   TBranch        *b_MET_Muid_Spectro_phi;   //!
   TBranch        *b_MET_Muid_Track_etx;   //!
   TBranch        *b_MET_Muid_Track_ety;   //!
   TBranch        *b_MET_Muid_Track_sumet;   //!
   TBranch        *b_MET_Muid_Track_et;   //!
   TBranch        *b_MET_Muid_Track_phi;   //!
   TBranch        *b_MET_Muon_etx;   //!
   TBranch        *b_MET_Muon_ety;   //!
   TBranch        *b_MET_Muon_sumet;   //!
   TBranch        *b_MET_Muon_et;   //!
   TBranch        *b_MET_Muon_phi;   //!
   TBranch        *b_MET_TopoObj_etx;   //!
   TBranch        *b_MET_TopoObj_ety;   //!
   TBranch        *b_MET_TopoObj_sumet;   //!
   TBranch        *b_MET_TopoObj_et;   //!
   TBranch        *b_MET_TopoObj_phi;   //!
   TBranch        *b_MET_LocHadTopoObj_etx;   //!
   TBranch        *b_MET_LocHadTopoObj_ety;   //!
   TBranch        *b_MET_LocHadTopoObj_sumet;   //!
   TBranch        *b_MET_LocHadTopoObj_et;   //!
   TBranch        *b_MET_LocHadTopoObj_phi;   //!
   TBranch        *b_MET_Topo_etx;   //!
   TBranch        *b_MET_Topo_ety;   //!
   TBranch        *b_MET_Topo_sumet;   //!
   TBranch        *b_MET_Topo_et;   //!
   TBranch        *b_MET_Topo_phi;   //!
   TBranch        *b_MET_Topo_SUMET_EMFrac;   //!
   TBranch        *b_MET_Topo_etx_PEMB;   //!
   TBranch        *b_MET_Topo_ety_PEMB;   //!
   TBranch        *b_MET_Topo_sumet_PEMB;   //!
   TBranch        *b_MET_Topo_phi_PEMB;   //!
   TBranch        *b_MET_Topo_etx_EMB;   //!
   TBranch        *b_MET_Topo_ety_EMB;   //!
   TBranch        *b_MET_Topo_sumet_EMB;   //!
   TBranch        *b_MET_Topo_phi_EMB;   //!
   TBranch        *b_MET_Topo_etx_PEMEC;   //!
   TBranch        *b_MET_Topo_ety_PEMEC;   //!
   TBranch        *b_MET_Topo_sumet_PEMEC;   //!
   TBranch        *b_MET_Topo_phi_PEMEC;   //!
   TBranch        *b_MET_Topo_etx_EME;   //!
   TBranch        *b_MET_Topo_ety_EME;   //!
   TBranch        *b_MET_Topo_sumet_EME;   //!
   TBranch        *b_MET_Topo_phi_EME;   //!
   TBranch        *b_MET_Topo_etx_TILE;   //!
   TBranch        *b_MET_Topo_ety_TILE;   //!
   TBranch        *b_MET_Topo_sumet_TILE;   //!
   TBranch        *b_MET_Topo_phi_TILE;   //!
   TBranch        *b_MET_Topo_etx_HEC;   //!
   TBranch        *b_MET_Topo_ety_HEC;   //!
   TBranch        *b_MET_Topo_sumet_HEC;   //!
   TBranch        *b_MET_Topo_phi_HEC;   //!
   TBranch        *b_MET_Topo_etx_FCAL;   //!
   TBranch        *b_MET_Topo_ety_FCAL;   //!
   TBranch        *b_MET_Topo_sumet_FCAL;   //!
   TBranch        *b_MET_Topo_phi_FCAL;   //!
   TBranch        *b_MET_Topo_nCell_PEMB;   //!
   TBranch        *b_MET_Topo_nCell_EMB;   //!
   TBranch        *b_MET_Topo_nCell_PEMEC;   //!
   TBranch        *b_MET_Topo_nCell_EME;   //!
   TBranch        *b_MET_Topo_nCell_TILE;   //!
   TBranch        *b_MET_Topo_nCell_HEC;   //!
   TBranch        *b_MET_Topo_nCell_FCAL;   //!
   TBranch        *b_MET_Topo_etx_CentralReg;   //!
   TBranch        *b_MET_Topo_ety_CentralReg;   //!
   TBranch        *b_MET_Topo_sumet_CentralReg;   //!
   TBranch        *b_MET_Topo_phi_CentralReg;   //!
   TBranch        *b_MET_Topo_etx_EndcapRegion;   //!
   TBranch        *b_MET_Topo_ety_EndcapRegion;   //!
   TBranch        *b_MET_Topo_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Topo_phi_EndcapRegion;   //!
   TBranch        *b_MET_Topo_etx_ForwardReg;   //!
   TBranch        *b_MET_Topo_ety_ForwardReg;   //!
   TBranch        *b_MET_Topo_sumet_ForwardReg;   //!
   TBranch        *b_MET_Topo_phi_ForwardReg;   //!
   TBranch        *b_MET_Base_etx;   //!
   TBranch        *b_MET_Base_ety;   //!
   TBranch        *b_MET_Base_sumet;   //!
   TBranch        *b_MET_Base_et;   //!
   TBranch        *b_MET_Base_phi;   //!
   TBranch        *b_MET_Base_SUMET_EMFrac;   //!
   TBranch        *b_MET_Base_etx_PEMB;   //!
   TBranch        *b_MET_Base_ety_PEMB;   //!
   TBranch        *b_MET_Base_sumet_PEMB;   //!
   TBranch        *b_MET_Base_phi_PEMB;   //!
   TBranch        *b_MET_Base_etx_EMB;   //!
   TBranch        *b_MET_Base_ety_EMB;   //!
   TBranch        *b_MET_Base_sumet_EMB;   //!
   TBranch        *b_MET_Base_phi_EMB;   //!
   TBranch        *b_MET_Base_etx_PEMEC;   //!
   TBranch        *b_MET_Base_ety_PEMEC;   //!
   TBranch        *b_MET_Base_sumet_PEMEC;   //!
   TBranch        *b_MET_Base_phi_PEMEC;   //!
   TBranch        *b_MET_Base_etx_EME;   //!
   TBranch        *b_MET_Base_ety_EME;   //!
   TBranch        *b_MET_Base_sumet_EME;   //!
   TBranch        *b_MET_Base_phi_EME;   //!
   TBranch        *b_MET_Base_etx_TILE;   //!
   TBranch        *b_MET_Base_ety_TILE;   //!
   TBranch        *b_MET_Base_sumet_TILE;   //!
   TBranch        *b_MET_Base_phi_TILE;   //!
   TBranch        *b_MET_Base_etx_HEC;   //!
   TBranch        *b_MET_Base_ety_HEC;   //!
   TBranch        *b_MET_Base_sumet_HEC;   //!
   TBranch        *b_MET_Base_phi_HEC;   //!
   TBranch        *b_MET_Base_etx_FCAL;   //!
   TBranch        *b_MET_Base_ety_FCAL;   //!
   TBranch        *b_MET_Base_sumet_FCAL;   //!
   TBranch        *b_MET_Base_phi_FCAL;   //!
   TBranch        *b_MET_Base_nCell_PEMB;   //!
   TBranch        *b_MET_Base_nCell_EMB;   //!
   TBranch        *b_MET_Base_nCell_PEMEC;   //!
   TBranch        *b_MET_Base_nCell_EME;   //!
   TBranch        *b_MET_Base_nCell_TILE;   //!
   TBranch        *b_MET_Base_nCell_HEC;   //!
   TBranch        *b_MET_Base_nCell_FCAL;   //!
   TBranch        *b_MET_Base_etx_CentralReg;   //!
   TBranch        *b_MET_Base_ety_CentralReg;   //!
   TBranch        *b_MET_Base_sumet_CentralReg;   //!
   TBranch        *b_MET_Base_phi_CentralReg;   //!
   TBranch        *b_MET_Base_etx_EndcapRegion;   //!
   TBranch        *b_MET_Base_ety_EndcapRegion;   //!
   TBranch        *b_MET_Base_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Base_phi_EndcapRegion;   //!
   TBranch        *b_MET_Base_etx_ForwardReg;   //!
   TBranch        *b_MET_Base_ety_ForwardReg;   //!
   TBranch        *b_MET_Base_sumet_ForwardReg;   //!
   TBranch        *b_MET_Base_phi_ForwardReg;   //!
   TBranch        *b_MET_Base0_etx;   //!
   TBranch        *b_MET_Base0_ety;   //!
   TBranch        *b_MET_Base0_sumet;   //!
   TBranch        *b_MET_Base0_et;   //!
   TBranch        *b_MET_Base0_phi;   //!
   TBranch        *b_MET_Base0_SUMET_EMFrac;   //!
   TBranch        *b_MET_Base0_etx_PEMB;   //!
   TBranch        *b_MET_Base0_ety_PEMB;   //!
   TBranch        *b_MET_Base0_sumet_PEMB;   //!
   TBranch        *b_MET_Base0_phi_PEMB;   //!
   TBranch        *b_MET_Base0_etx_EMB;   //!
   TBranch        *b_MET_Base0_ety_EMB;   //!
   TBranch        *b_MET_Base0_sumet_EMB;   //!
   TBranch        *b_MET_Base0_phi_EMB;   //!
   TBranch        *b_MET_Base0_etx_PEMEC;   //!
   TBranch        *b_MET_Base0_ety_PEMEC;   //!
   TBranch        *b_MET_Base0_sumet_PEMEC;   //!
   TBranch        *b_MET_Base0_phi_PEMEC;   //!
   TBranch        *b_MET_Base0_etx_EME;   //!
   TBranch        *b_MET_Base0_ety_EME;   //!
   TBranch        *b_MET_Base0_sumet_EME;   //!
   TBranch        *b_MET_Base0_phi_EME;   //!
   TBranch        *b_MET_Base0_etx_TILE;   //!
   TBranch        *b_MET_Base0_ety_TILE;   //!
   TBranch        *b_MET_Base0_sumet_TILE;   //!
   TBranch        *b_MET_Base0_phi_TILE;   //!
   TBranch        *b_MET_Base0_etx_HEC;   //!
   TBranch        *b_MET_Base0_ety_HEC;   //!
   TBranch        *b_MET_Base0_sumet_HEC;   //!
   TBranch        *b_MET_Base0_phi_HEC;   //!
   TBranch        *b_MET_Base0_etx_FCAL;   //!
   TBranch        *b_MET_Base0_ety_FCAL;   //!
   TBranch        *b_MET_Base0_sumet_FCAL;   //!
   TBranch        *b_MET_Base0_phi_FCAL;   //!
   TBranch        *b_MET_Base0_nCell_PEMB;   //!
   TBranch        *b_MET_Base0_nCell_EMB;   //!
   TBranch        *b_MET_Base0_nCell_PEMEC;   //!
   TBranch        *b_MET_Base0_nCell_EME;   //!
   TBranch        *b_MET_Base0_nCell_TILE;   //!
   TBranch        *b_MET_Base0_nCell_HEC;   //!
   TBranch        *b_MET_Base0_nCell_FCAL;   //!
   TBranch        *b_MET_Base0_etx_CentralReg;   //!
   TBranch        *b_MET_Base0_ety_CentralReg;   //!
   TBranch        *b_MET_Base0_sumet_CentralReg;   //!
   TBranch        *b_MET_Base0_phi_CentralReg;   //!
   TBranch        *b_MET_Base0_etx_EndcapRegion;   //!
   TBranch        *b_MET_Base0_ety_EndcapRegion;   //!
   TBranch        *b_MET_Base0_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Base0_phi_EndcapRegion;   //!
   TBranch        *b_MET_Base0_etx_ForwardReg;   //!
   TBranch        *b_MET_Base0_ety_ForwardReg;   //!
   TBranch        *b_MET_Base0_sumet_ForwardReg;   //!
   TBranch        *b_MET_Base0_phi_ForwardReg;   //!
   TBranch        *b_MET_CorrTopo_etx;   //!
   TBranch        *b_MET_CorrTopo_ety;   //!
   TBranch        *b_MET_CorrTopo_sumet;   //!
   TBranch        *b_MET_CorrTopo_et;   //!
   TBranch        *b_MET_CorrTopo_phi;   //!
   TBranch        *b_MET_CorrTopo_SUMET_EMFrac;   //!
   TBranch        *b_MET_CorrTopo_etx_PEMB;   //!
   TBranch        *b_MET_CorrTopo_ety_PEMB;   //!
   TBranch        *b_MET_CorrTopo_sumet_PEMB;   //!
   TBranch        *b_MET_CorrTopo_phi_PEMB;   //!
   TBranch        *b_MET_CorrTopo_etx_EMB;   //!
   TBranch        *b_MET_CorrTopo_ety_EMB;   //!
   TBranch        *b_MET_CorrTopo_sumet_EMB;   //!
   TBranch        *b_MET_CorrTopo_phi_EMB;   //!
   TBranch        *b_MET_CorrTopo_etx_PEMEC;   //!
   TBranch        *b_MET_CorrTopo_ety_PEMEC;   //!
   TBranch        *b_MET_CorrTopo_sumet_PEMEC;   //!
   TBranch        *b_MET_CorrTopo_phi_PEMEC;   //!
   TBranch        *b_MET_CorrTopo_etx_EME;   //!
   TBranch        *b_MET_CorrTopo_ety_EME;   //!
   TBranch        *b_MET_CorrTopo_sumet_EME;   //!
   TBranch        *b_MET_CorrTopo_phi_EME;   //!
   TBranch        *b_MET_CorrTopo_etx_TILE;   //!
   TBranch        *b_MET_CorrTopo_ety_TILE;   //!
   TBranch        *b_MET_CorrTopo_sumet_TILE;   //!
   TBranch        *b_MET_CorrTopo_phi_TILE;   //!
   TBranch        *b_MET_CorrTopo_etx_HEC;   //!
   TBranch        *b_MET_CorrTopo_ety_HEC;   //!
   TBranch        *b_MET_CorrTopo_sumet_HEC;   //!
   TBranch        *b_MET_CorrTopo_phi_HEC;   //!
   TBranch        *b_MET_CorrTopo_etx_FCAL;   //!
   TBranch        *b_MET_CorrTopo_ety_FCAL;   //!
   TBranch        *b_MET_CorrTopo_sumet_FCAL;   //!
   TBranch        *b_MET_CorrTopo_phi_FCAL;   //!
   TBranch        *b_MET_CorrTopo_nCell_PEMB;   //!
   TBranch        *b_MET_CorrTopo_nCell_EMB;   //!
   TBranch        *b_MET_CorrTopo_nCell_PEMEC;   //!
   TBranch        *b_MET_CorrTopo_nCell_EME;   //!
   TBranch        *b_MET_CorrTopo_nCell_TILE;   //!
   TBranch        *b_MET_CorrTopo_nCell_HEC;   //!
   TBranch        *b_MET_CorrTopo_nCell_FCAL;   //!
   TBranch        *b_MET_CorrTopo_etx_CentralReg;   //!
   TBranch        *b_MET_CorrTopo_ety_CentralReg;   //!
   TBranch        *b_MET_CorrTopo_sumet_CentralReg;   //!
   TBranch        *b_MET_CorrTopo_phi_CentralReg;   //!
   TBranch        *b_MET_CorrTopo_etx_EndcapRegion;   //!
   TBranch        *b_MET_CorrTopo_ety_EndcapRegion;   //!
   TBranch        *b_MET_CorrTopo_sumet_EndcapRegion;   //!
   TBranch        *b_MET_CorrTopo_phi_EndcapRegion;   //!
   TBranch        *b_MET_CorrTopo_etx_ForwardReg;   //!
   TBranch        *b_MET_CorrTopo_ety_ForwardReg;   //!
   TBranch        *b_MET_CorrTopo_sumet_ForwardReg;   //!
   TBranch        *b_MET_CorrTopo_phi_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_etx;   //!
   TBranch        *b_MET_LocHadTopo_ety;   //!
   TBranch        *b_MET_LocHadTopo_sumet;   //!
   TBranch        *b_MET_LocHadTopo_et;   //!
   TBranch        *b_MET_LocHadTopo_phi;   //!
   TBranch        *b_MET_LocHadTopo_SUMET_EMFrac;   //!
   TBranch        *b_MET_LocHadTopo_etx_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_ety_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_sumet_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_phi_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_etx_EMB;   //!
   TBranch        *b_MET_LocHadTopo_ety_EMB;   //!
   TBranch        *b_MET_LocHadTopo_sumet_EMB;   //!
   TBranch        *b_MET_LocHadTopo_phi_EMB;   //!
   TBranch        *b_MET_LocHadTopo_etx_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_ety_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_sumet_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_phi_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_etx_EME;   //!
   TBranch        *b_MET_LocHadTopo_ety_EME;   //!
   TBranch        *b_MET_LocHadTopo_sumet_EME;   //!
   TBranch        *b_MET_LocHadTopo_phi_EME;   //!
   TBranch        *b_MET_LocHadTopo_etx_TILE;   //!
   TBranch        *b_MET_LocHadTopo_ety_TILE;   //!
   TBranch        *b_MET_LocHadTopo_sumet_TILE;   //!
   TBranch        *b_MET_LocHadTopo_phi_TILE;   //!
   TBranch        *b_MET_LocHadTopo_etx_HEC;   //!
   TBranch        *b_MET_LocHadTopo_ety_HEC;   //!
   TBranch        *b_MET_LocHadTopo_sumet_HEC;   //!
   TBranch        *b_MET_LocHadTopo_phi_HEC;   //!
   TBranch        *b_MET_LocHadTopo_etx_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_ety_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_sumet_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_phi_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_nCell_PEMB;   //!
   TBranch        *b_MET_LocHadTopo_nCell_EMB;   //!
   TBranch        *b_MET_LocHadTopo_nCell_PEMEC;   //!
   TBranch        *b_MET_LocHadTopo_nCell_EME;   //!
   TBranch        *b_MET_LocHadTopo_nCell_TILE;   //!
   TBranch        *b_MET_LocHadTopo_nCell_HEC;   //!
   TBranch        *b_MET_LocHadTopo_nCell_FCAL;   //!
   TBranch        *b_MET_LocHadTopo_etx_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_ety_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_sumet_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_phi_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_etx_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_ety_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_sumet_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_phi_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_etx_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_ety_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_sumet_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_phi_ForwardReg;   //!
   TBranch        *b_MET_Calib_etx;   //!
   TBranch        *b_MET_Calib_ety;   //!
   TBranch        *b_MET_Calib_sumet;   //!
   TBranch        *b_MET_Calib_et;   //!
   TBranch        *b_MET_Calib_phi;   //!
   TBranch        *b_MET_Calib_SUMET_EMFrac;   //!
   TBranch        *b_MET_Calib_etx_PEMB;   //!
   TBranch        *b_MET_Calib_ety_PEMB;   //!
   TBranch        *b_MET_Calib_sumet_PEMB;   //!
   TBranch        *b_MET_Calib_phi_PEMB;   //!
   TBranch        *b_MET_Calib_etx_EMB;   //!
   TBranch        *b_MET_Calib_ety_EMB;   //!
   TBranch        *b_MET_Calib_sumet_EMB;   //!
   TBranch        *b_MET_Calib_phi_EMB;   //!
   TBranch        *b_MET_Calib_etx_PEMEC;   //!
   TBranch        *b_MET_Calib_ety_PEMEC;   //!
   TBranch        *b_MET_Calib_sumet_PEMEC;   //!
   TBranch        *b_MET_Calib_phi_PEMEC;   //!
   TBranch        *b_MET_Calib_etx_EME;   //!
   TBranch        *b_MET_Calib_ety_EME;   //!
   TBranch        *b_MET_Calib_sumet_EME;   //!
   TBranch        *b_MET_Calib_phi_EME;   //!
   TBranch        *b_MET_Calib_etx_TILE;   //!
   TBranch        *b_MET_Calib_ety_TILE;   //!
   TBranch        *b_MET_Calib_sumet_TILE;   //!
   TBranch        *b_MET_Calib_phi_TILE;   //!
   TBranch        *b_MET_Calib_etx_HEC;   //!
   TBranch        *b_MET_Calib_ety_HEC;   //!
   TBranch        *b_MET_Calib_sumet_HEC;   //!
   TBranch        *b_MET_Calib_phi_HEC;   //!
   TBranch        *b_MET_Calib_etx_FCAL;   //!
   TBranch        *b_MET_Calib_ety_FCAL;   //!
   TBranch        *b_MET_Calib_sumet_FCAL;   //!
   TBranch        *b_MET_Calib_phi_FCAL;   //!
   TBranch        *b_MET_Calib_nCell_PEMB;   //!
   TBranch        *b_MET_Calib_nCell_EMB;   //!
   TBranch        *b_MET_Calib_nCell_PEMEC;   //!
   TBranch        *b_MET_Calib_nCell_EME;   //!
   TBranch        *b_MET_Calib_nCell_TILE;   //!
   TBranch        *b_MET_Calib_nCell_HEC;   //!
   TBranch        *b_MET_Calib_nCell_FCAL;   //!
   TBranch        *b_MET_Calib_etx_CentralReg;   //!
   TBranch        *b_MET_Calib_ety_CentralReg;   //!
   TBranch        *b_MET_Calib_sumet_CentralReg;   //!
   TBranch        *b_MET_Calib_phi_CentralReg;   //!
   TBranch        *b_MET_Calib_etx_EndcapRegion;   //!
   TBranch        *b_MET_Calib_ety_EndcapRegion;   //!
   TBranch        *b_MET_Calib_sumet_EndcapRegion;   //!
   TBranch        *b_MET_Calib_phi_EndcapRegion;   //!
   TBranch        *b_MET_Calib_etx_ForwardReg;   //!
   TBranch        *b_MET_Calib_ety_ForwardReg;   //!
   TBranch        *b_MET_Calib_sumet_ForwardReg;   //!
   TBranch        *b_MET_Calib_phi_ForwardReg;   //!
   TBranch        *b_el_MET_n;   //!
   TBranch        *b_el_MET_wpx;   //!
   TBranch        *b_el_MET_wpy;   //!
   TBranch        *b_el_MET_wet;   //!
   TBranch        *b_el_MET_statusWord;   //!
   TBranch        *b_ph_MET_n;   //!
   TBranch        *b_ph_MET_wpx;   //!
   TBranch        *b_ph_MET_wpy;   //!
   TBranch        *b_ph_MET_wet;   //!
   TBranch        *b_ph_MET_statusWord;   //!
   TBranch        *b_mu_staco_MET_n;   //!
   TBranch        *b_mu_staco_MET_wpx;   //!
   TBranch        *b_mu_staco_MET_wpy;   //!
   TBranch        *b_mu_staco_MET_wet;   //!
   TBranch        *b_mu_staco_MET_statusWord;   //!
   TBranch        *b_tau_MET_n;   //!
   TBranch        *b_tau_MET_wpx;   //!
   TBranch        *b_tau_MET_wpy;   //!
   TBranch        *b_tau_MET_wet;   //!
   TBranch        *b_tau_MET_statusWord;   //!
   TBranch        *b_jet_AntiKt4H1Topo_MET_n;   //!
   TBranch        *b_jet_AntiKt4H1Topo_MET_wpx;   //!
   TBranch        *b_jet_AntiKt4H1Topo_MET_wpy;   //!
   TBranch        *b_jet_AntiKt4H1Topo_MET_wet;   //!
   TBranch        *b_jet_AntiKt4H1Topo_MET_statusWord;   //!
   TBranch        *b_cl_MET_n;   //!
   TBranch        *b_cl_MET_wpx;   //!
   TBranch        *b_cl_MET_wpy;   //!
   TBranch        *b_cl_MET_wet;   //!
   TBranch        *b_cl_MET_statusWord;   //!
   TBranch        *b_cl_n;   //!
   TBranch        *b_cl_E;   //!
   TBranch        *b_cl_pt;   //!
   TBranch        *b_cl_m;   //!
   TBranch        *b_cl_eta;   //!
   TBranch        *b_cl_phi;   //!
   TBranch        *b_MET_EMJES_RefGamma_etx;   //!
   TBranch        *b_MET_EMJES_RefGamma_ety;   //!
   TBranch        *b_MET_EMJES_RefGamma_sumet;   //!
   TBranch        *b_MET_EMJES_RefGamma_et;   //!
   TBranch        *b_MET_EMJES_RefGamma_phi;   //!
   TBranch        *b_MET_EMJES_RefEle_etx;   //!
   TBranch        *b_MET_EMJES_RefEle_ety;   //!
   TBranch        *b_MET_EMJES_RefEle_sumet;   //!
   TBranch        *b_MET_EMJES_RefEle_et;   //!
   TBranch        *b_MET_EMJES_RefEle_phi;   //!
   TBranch        *b_MET_EMJES_RefTau_etx;   //!
   TBranch        *b_MET_EMJES_RefTau_ety;   //!
   TBranch        *b_MET_EMJES_RefTau_sumet;   //!
   TBranch        *b_MET_EMJES_RefTau_et;   //!
   TBranch        *b_MET_EMJES_RefTau_phi;   //!
   TBranch        *b_MET_EMJES_RefJet_etx;   //!
   TBranch        *b_MET_EMJES_RefJet_ety;   //!
   TBranch        *b_MET_EMJES_RefJet_sumet;   //!
   TBranch        *b_MET_EMJES_RefJet_et;   //!
   TBranch        *b_MET_EMJES_RefJet_phi;   //!
   TBranch        *b_MET_EMJES_RefMuon_Staco_etx;   //!
   TBranch        *b_MET_EMJES_RefMuon_Staco_ety;   //!
   TBranch        *b_MET_EMJES_RefMuon_Staco_sumet;   //!
   TBranch        *b_MET_EMJES_RefMuon_Staco_et;   //!
   TBranch        *b_MET_EMJES_RefMuon_Staco_phi;   //!
   TBranch        *b_MET_EMJES_RefMuon_Track_Staco_etx;   //!
   TBranch        *b_MET_EMJES_RefMuon_Track_Staco_ety;   //!
   TBranch        *b_MET_EMJES_RefMuon_Track_Staco_sumet;   //!
   TBranch        *b_MET_EMJES_RefMuon_Track_Staco_et;   //!
   TBranch        *b_MET_EMJES_RefMuon_Track_Staco_phi;   //!
   TBranch        *b_MET_EMJES_Muon_Isol_Staco_etx;   //!
   TBranch        *b_MET_EMJES_Muon_Isol_Staco_ety;   //!
   TBranch        *b_MET_EMJES_Muon_Isol_Staco_sumet;   //!
   TBranch        *b_MET_EMJES_Muon_Isol_Staco_et;   //!
   TBranch        *b_MET_EMJES_Muon_Isol_Staco_phi;   //!
   TBranch        *b_MET_EMJES_Muon_NonIsol_Staco_etx;   //!
   TBranch        *b_MET_EMJES_Muon_NonIsol_Staco_ety;   //!
   TBranch        *b_MET_EMJES_Muon_NonIsol_Staco_sumet;   //!
   TBranch        *b_MET_EMJES_Muon_NonIsol_Staco_et;   //!
   TBranch        *b_MET_EMJES_Muon_NonIsol_Staco_phi;   //!
   TBranch        *b_MET_EMJES_Muon_Total_Staco_etx;   //!
   TBranch        *b_MET_EMJES_Muon_Total_Staco_ety;   //!
   TBranch        *b_MET_EMJES_Muon_Total_Staco_sumet;   //!
   TBranch        *b_MET_EMJES_Muon_Total_Staco_et;   //!
   TBranch        *b_MET_EMJES_Muon_Total_Staco_phi;   //!
   TBranch        *b_MET_EMJES_CellOutLocHad_etx;   //!
   TBranch        *b_MET_EMJES_CellOutLocHad_ety;   //!
   TBranch        *b_MET_EMJES_CellOutLocHad_sumet;   //!
   TBranch        *b_MET_EMJES_CellOutLocHad_et;   //!
   TBranch        *b_MET_EMJES_CellOutLocHad_phi;   //!
   TBranch        *b_MET_EMJES_RefFinal_CellOutLocHad_etx;   //!
   TBranch        *b_MET_EMJES_RefFinal_CellOutLocHad_ety;   //!
   TBranch        *b_MET_EMJES_RefFinal_CellOutLocHad_sumet;   //!
   TBranch        *b_MET_EMJES_RefFinal_CellOutLocHad_et;   //!
   TBranch        *b_MET_EMJES_RefFinal_CellOutLocHad_phi;   //!
   TBranch        *b_MET_EMJES_RefFinal_CellOutEM_etx;   //!
   TBranch        *b_MET_EMJES_RefFinal_CellOutEM_ety;   //!
   TBranch        *b_MET_EMJES_RefFinal_CellOutEM_sumet;   //!
   TBranch        *b_MET_EMJES_RefFinal_CellOutEM_et;   //!
   TBranch        *b_MET_EMJES_RefFinal_CellOutEM_phi;   //!
   TBranch        *b_MET_EMJES_CellOutEM_etx;   //!
   TBranch        *b_MET_EMJES_CellOutEM_ety;   //!
   TBranch        *b_MET_EMJES_CellOutEM_sumet;   //!
   TBranch        *b_MET_EMJES_CellOutEM_et;   //!
   TBranch        *b_MET_EMJES_CellOutEM_phi;   //!
   TBranch        *b_el_MET_EMJES_n;   //!
   TBranch        *b_el_MET_EMJES_wpx;   //!
   TBranch        *b_el_MET_EMJES_wpy;   //!
   TBranch        *b_el_MET_EMJES_wet;   //!
   TBranch        *b_el_MET_EMJES_statusWord;   //!
   TBranch        *b_ph_MET_EMJES_n;   //!
   TBranch        *b_ph_MET_EMJES_wpx;   //!
   TBranch        *b_ph_MET_EMJES_wpy;   //!
   TBranch        *b_ph_MET_EMJES_wet;   //!
   TBranch        *b_ph_MET_EMJES_statusWord;   //!
   TBranch        *b_mu_staco_MET_EMJES_n;   //!
   TBranch        *b_mu_staco_MET_EMJES_wpx;   //!
   TBranch        *b_mu_staco_MET_EMJES_wpy;   //!
   TBranch        *b_mu_staco_MET_EMJES_wet;   //!
   TBranch        *b_mu_staco_MET_EMJES_statusWord;   //!
   TBranch        *b_tau_MET_EMJES_n;   //!
   TBranch        *b_tau_MET_EMJES_wpx;   //!
   TBranch        *b_tau_MET_EMJES_wpy;   //!
   TBranch        *b_tau_MET_EMJES_wet;   //!
   TBranch        *b_tau_MET_EMJES_statusWord;   //!
   TBranch        *b_jet_AntiKt4TopoEM_MET_EMJES_n;   //!
   TBranch        *b_jet_AntiKt4TopoEM_MET_EMJES_wpx;   //!
   TBranch        *b_jet_AntiKt4TopoEM_MET_EMJES_wpy;   //!
   TBranch        *b_jet_AntiKt4TopoEM_MET_EMJES_wet;   //!
   TBranch        *b_jet_AntiKt4TopoEM_MET_EMJES_statusWord;   //!
   TBranch        *b_cl_MET_LocHad_n;   //!
   TBranch        *b_cl_MET_LocHad_wpx;   //!
   TBranch        *b_cl_MET_LocHad_wpy;   //!
   TBranch        *b_cl_MET_LocHad_wet;   //!
   TBranch        *b_cl_MET_LocHad_statusWord;   //!
   TBranch        *b_cl_MET_EM_20GeVJets_n;   //!
   TBranch        *b_cl_MET_EM_20GeVJets_wpx;   //!
   TBranch        *b_cl_MET_EM_20GeVJets_wpy;   //!
   TBranch        *b_cl_MET_EM_20GeVJets_wet;   //!
   TBranch        *b_cl_MET_EM_20GeVJets_statusWord;   //!
   TBranch        *b_cl_MET_EM_30GeVJets_n;   //!
   TBranch        *b_cl_MET_EM_30GeVJets_wpx;   //!
   TBranch        *b_cl_MET_EM_30GeVJets_wpy;   //!
   TBranch        *b_cl_MET_EM_30GeVJets_wet;   //!
   TBranch        *b_cl_MET_EM_30GeVJets_statusWord;   //!
   TBranch        *b_MET_Simplified30_RefJet_etx;   //!
   TBranch        *b_MET_Simplified30_RefJet_ety;   //!
   TBranch        *b_MET_Simplified30_RefJet_sumet;   //!
   TBranch        *b_MET_Simplified30_RefJet_et;   //!
   TBranch        *b_MET_Simplified30_RefJet_phi;   //!
   TBranch        *b_MET_Simplified30_RefFinal_etx;   //!
   TBranch        *b_MET_Simplified30_RefFinal_ety;   //!
   TBranch        *b_MET_Simplified30_RefFinal_sumet;   //!
   TBranch        *b_MET_Simplified30_RefFinal_et;   //!
   TBranch        *b_MET_Simplified30_RefFinal_phi;   //!
   TBranch        *b_MET_Simplified30_CellOut_etx;   //!
   TBranch        *b_MET_Simplified30_CellOut_ety;   //!
   TBranch        *b_MET_Simplified30_CellOut_sumet;   //!
   TBranch        *b_MET_Simplified30_CellOut_et;   //!
   TBranch        *b_MET_Simplified30_CellOut_phi;   //!
   TBranch        *b_MET_Simplified30_RefEle_etx;   //!
   TBranch        *b_MET_Simplified30_RefEle_ety;   //!
   TBranch        *b_MET_Simplified30_RefEle_sumet;   //!
   TBranch        *b_MET_Simplified30_RefEle_et;   //!
   TBranch        *b_MET_Simplified30_RefEle_phi;   //!
   TBranch        *b_MET_Simplified30_Muon_Total_Staco_etx;   //!
   TBranch        *b_MET_Simplified30_Muon_Total_Staco_ety;   //!
   TBranch        *b_MET_Simplified30_Muon_Total_Staco_sumet;   //!
   TBranch        *b_MET_Simplified30_Muon_Total_Staco_et;   //!
   TBranch        *b_MET_Simplified30_Muon_Total_Staco_phi;   //!
   TBranch        *b_MET_Simplified20_RefFinal_etx;   //!
   TBranch        *b_MET_Simplified20_RefFinal_ety;   //!
   TBranch        *b_MET_Simplified20_RefFinal_sumet;   //!
   TBranch        *b_MET_Simplified20_RefFinal_et;   //!
   TBranch        *b_MET_Simplified20_RefFinal_phi;   //!
   TBranch        *b_MET_Simplified20_CellOut_etx;   //!
   TBranch        *b_MET_Simplified20_CellOut_ety;   //!
   TBranch        *b_MET_Simplified20_CellOut_sumet;   //!
   TBranch        *b_MET_Simplified20_CellOut_et;   //!
   TBranch        *b_MET_Simplified20_CellOut_phi;   //!
   TBranch        *b_MET_Simplified20_RefJet_etx;   //!
   TBranch        *b_MET_Simplified20_RefJet_ety;   //!
   TBranch        *b_MET_Simplified20_RefJet_sumet;   //!
   TBranch        *b_MET_Simplified20_RefJet_et;   //!
   TBranch        *b_MET_Simplified20_RefJet_phi;   //!
   TBranch        *b_MET_Simplified20_RefEle_etx;   //!
   TBranch        *b_MET_Simplified20_RefEle_ety;   //!
   TBranch        *b_MET_Simplified20_RefEle_sumet;   //!
   TBranch        *b_MET_Simplified20_RefEle_et;   //!
   TBranch        *b_MET_Simplified20_RefEle_phi;   //!
   TBranch        *b_MET_Simplified20_Muon_Total_Staco_etx;   //!
   TBranch        *b_MET_Simplified20_Muon_Total_Staco_ety;   //!
   TBranch        *b_MET_Simplified20_Muon_Total_Staco_sumet;   //!
   TBranch        *b_MET_Simplified20_Muon_Total_Staco_et;   //!
   TBranch        *b_MET_Simplified20_Muon_Total_Staco_phi;   //!
   TBranch        *b_jet_AntiKt4H1Tower_n;   //!
   TBranch        *b_jet_AntiKt4H1Tower_E;   //!
   TBranch        *b_jet_AntiKt4H1Tower_pt;   //!
   TBranch        *b_jet_AntiKt4H1Tower_m;   //!
   TBranch        *b_jet_AntiKt4H1Tower_eta;   //!
   TBranch        *b_jet_AntiKt4H1Tower_phi;   //!
   TBranch        *b_jet_AntiKt4H1Tower_EtaPhys;   //!
   TBranch        *b_jet_AntiKt4H1Tower_PhiPhys;   //!
   TBranch        *b_jet_AntiKt4H1Tower_MPhys;   //!
   TBranch        *b_jet_AntiKt4H1Tower_WIDTH;   //!
   TBranch        *b_jet_AntiKt4H1Tower_n90;   //!
   TBranch        *b_jet_AntiKt4H1Tower_Timing;   //!
   TBranch        *b_jet_AntiKt4H1Tower_LArQuality;   //!
   TBranch        *b_jet_AntiKt4H1Tower_nTrk;   //!
   TBranch        *b_jet_AntiKt4H1Tower_sumPtTrk;   //!
   TBranch        *b_jet_AntiKt4H1Tower_OriginIndex;   //!
   TBranch        *b_jet_AntiKt4H1Tower_HECQuality;   //!
   TBranch        *b_jet_AntiKt4H1Tower_NegativeE;   //!
   TBranch        *b_jet_AntiKt4H1Tower_BCH_CORR_CELL;   //!
   TBranch        *b_jet_AntiKt4H1Tower_BCH_CORR_DOTX;   //!
   TBranch        *b_jet_AntiKt4H1Tower_BCH_CORR_JET;   //!
   TBranch        *b_jet_AntiKt4H1Tower_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_jet_AntiKt4H1Tower_ENG_BAD_CELLS;   //!
   TBranch        *b_jet_AntiKt4H1Tower_N_BAD_CELLS;   //!
   TBranch        *b_jet_AntiKt4H1Tower_N_BAD_CELLS_CORR;   //!
   TBranch        *b_jet_AntiKt4H1Tower_BAD_CELLS_CORR_E;   //!
   TBranch        *b_jet_AntiKt4H1Tower_SamplingMax;   //!
   TBranch        *b_jet_AntiKt4H1Tower_fracSamplingMax;   //!
   TBranch        *b_jet_AntiKt4H1Tower_hecf;   //!
   TBranch        *b_jet_AntiKt4H1Tower_tgap3f;   //!
   TBranch        *b_jet_AntiKt4H1Tower_isGood;   //!
   TBranch        *b_jet_AntiKt4H1Tower_emfrac;   //!
   TBranch        *b_jet_AntiKt4H1Tower_GCWJES;   //!
   TBranch        *b_jet_AntiKt4H1Tower_EMJES;   //!
   TBranch        *b_jet_AntiKt4H1Tower_CB;   //!
   TBranch        *b_jet_AntiKt4H1Tower_emscale_E;   //!
   TBranch        *b_jet_AntiKt4H1Tower_emscale_pt;   //!
   TBranch        *b_jet_AntiKt4H1Tower_emscale_m;   //!
   TBranch        *b_jet_AntiKt4H1Tower_emscale_eta;   //!
   TBranch        *b_jet_AntiKt4H1Tower_emscale_phi;   //!
   TBranch        *b_jet_AntiKt4H1Tower_jvtxf;   //!
   TBranch        *b_jet_AntiKt4H1Tower_jvtx_x;   //!
   TBranch        *b_jet_AntiKt4H1Tower_jvtx_y;   //!
   TBranch        *b_jet_AntiKt4H1Tower_jvtx_z;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_PreSamplerB;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_EMB1;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_EMB2;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_EMB3;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_PreSamplerE;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_EME1;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_EME2;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_EME3;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_HEC0;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_HEC1;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_HEC2;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_HEC3;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_TileBar0;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_TileBar1;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_TileBar2;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_TileGap1;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_TileGap2;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_TileGap3;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_TileExt0;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_TileExt1;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_TileExt2;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_FCAL0;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_FCAL1;   //!
   TBranch        *b_jet_AntiKt4H1Tower_e_FCAL2;   //!
   TBranch        *b_jet_AntiKt4H1Tower_Nconst;   //!
   TBranch        *b_jet_AntiKt4H1Tower_ptconst_emscale;   //!
   TBranch        *b_jet_AntiKt4H1Tower_econst_emscale;   //!
   TBranch        *b_jet_AntiKt4H1Tower_etaconst_emscale;   //!
   TBranch        *b_jet_AntiKt4H1Tower_phiconst_emscale;   //!
   TBranch        *b_jet_AntiKt4H1Tower_weightconst_emscale;   //!
   TBranch        *b_jet_AntiKt4H1Tower_constscale_E;   //!
   TBranch        *b_jet_AntiKt4H1Tower_constscale_pt;   //!
   TBranch        *b_jet_AntiKt4H1Tower_constscale_m;   //!
   TBranch        *b_jet_AntiKt4H1Tower_constscale_eta;   //!
   TBranch        *b_jet_AntiKt4H1Tower_constscale_phi;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_ip2d_pu;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_ip2d_pb;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_ip2d_ntrk;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_ip3d_pu;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_ip3d_pb;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_ip3d_ntrk;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_sv1_pu;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_sv1_pb;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_sv2_pu;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_sv2_pb;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_svp_mass;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_svp_n2t;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_svp_svok;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_svp_ntrk;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_svp_ntrkv;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_svp_ntrkj;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_svp_efrc;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_sv0p_mass;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_sv0p_n2t;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_sv0p_svok;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_sv0p_ntrk;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_sv0p_ntrkv;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_sv0p_ntrkj;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_sv0p_efrc;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_jfit_pu;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_jfit_pb;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_jfit_nvtxnt;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_jfit_nvtx1t;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_jfit_ntrk;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_jfit_efrc;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_jfit_mass;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_component_jfit_sig3d;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_TrackCounting2D;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_JetProb;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_IP1D;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_IP2D;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_IP3D;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_SV0;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_SV1;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_SV2;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_JetFitterTag;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_JetFitterCOMB;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_JetFitterTagNN;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_JetFitterCOMBNN;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_SoftMuonTag;   //!
   TBranch        *b_jet_AntiKt4H1Tower_flavor_weight_SoftElectronTag;   //!
   TBranch        *b_jet_AntiKt4H1Tower_el_dr;   //!
   TBranch        *b_jet_AntiKt4H1Tower_el_matched;   //!
   TBranch        *b_jet_AntiKt4H1Tower_mu_dr;   //!
   TBranch        *b_jet_AntiKt4H1Tower_mu_matched;   //!
   TBranch        *b_jet_AntiKt4H1Topo_n;   //!
   TBranch        *b_jet_AntiKt4H1Topo_E;   //!
   TBranch        *b_jet_AntiKt4H1Topo_pt;   //!
   TBranch        *b_jet_AntiKt4H1Topo_m;   //!
   TBranch        *b_jet_AntiKt4H1Topo_eta;   //!
   TBranch        *b_jet_AntiKt4H1Topo_phi;   //!
   TBranch        *b_jet_AntiKt4H1Topo_EtaPhys;   //!
   TBranch        *b_jet_AntiKt4H1Topo_PhiPhys;   //!
   TBranch        *b_jet_AntiKt4H1Topo_MPhys;   //!
   TBranch        *b_jet_AntiKt4H1Topo_WIDTH;   //!
   TBranch        *b_jet_AntiKt4H1Topo_n90;   //!
   TBranch        *b_jet_AntiKt4H1Topo_Timing;   //!
   TBranch        *b_jet_AntiKt4H1Topo_LArQuality;   //!
   TBranch        *b_jet_AntiKt4H1Topo_nTrk;   //!
   TBranch        *b_jet_AntiKt4H1Topo_sumPtTrk;   //!
   TBranch        *b_jet_AntiKt4H1Topo_OriginIndex;   //!
   TBranch        *b_jet_AntiKt4H1Topo_HECQuality;   //!
   TBranch        *b_jet_AntiKt4H1Topo_NegativeE;   //!
   TBranch        *b_jet_AntiKt4H1Topo_BCH_CORR_CELL;   //!
   TBranch        *b_jet_AntiKt4H1Topo_BCH_CORR_DOTX;   //!
   TBranch        *b_jet_AntiKt4H1Topo_BCH_CORR_JET;   //!
   TBranch        *b_jet_AntiKt4H1Topo_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_jet_AntiKt4H1Topo_ENG_BAD_CELLS;   //!
   TBranch        *b_jet_AntiKt4H1Topo_N_BAD_CELLS;   //!
   TBranch        *b_jet_AntiKt4H1Topo_N_BAD_CELLS_CORR;   //!
   TBranch        *b_jet_AntiKt4H1Topo_BAD_CELLS_CORR_E;   //!
   TBranch        *b_jet_AntiKt4H1Topo_SamplingMax;   //!
   TBranch        *b_jet_AntiKt4H1Topo_fracSamplingMax;   //!
   TBranch        *b_jet_AntiKt4H1Topo_hecf;   //!
   TBranch        *b_jet_AntiKt4H1Topo_tgap3f;   //!
   TBranch        *b_jet_AntiKt4H1Topo_isGood;   //!
   TBranch        *b_jet_AntiKt4H1Topo_emfrac;   //!
   TBranch        *b_jet_AntiKt4H1Topo_GCWJES;   //!
   TBranch        *b_jet_AntiKt4H1Topo_EMJES;   //!
   TBranch        *b_jet_AntiKt4H1Topo_CB;   //!
   TBranch        *b_jet_AntiKt4H1Topo_emscale_E;   //!
   TBranch        *b_jet_AntiKt4H1Topo_emscale_pt;   //!
   TBranch        *b_jet_AntiKt4H1Topo_emscale_m;   //!
   TBranch        *b_jet_AntiKt4H1Topo_emscale_eta;   //!
   TBranch        *b_jet_AntiKt4H1Topo_emscale_phi;   //!
   TBranch        *b_jet_AntiKt4H1Topo_jvtxf;   //!
   TBranch        *b_jet_AntiKt4H1Topo_jvtx_x;   //!
   TBranch        *b_jet_AntiKt4H1Topo_jvtx_y;   //!
   TBranch        *b_jet_AntiKt4H1Topo_jvtx_z;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_PreSamplerB;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_EMB1;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_EMB2;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_EMB3;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_PreSamplerE;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_EME1;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_EME2;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_EME3;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_HEC0;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_HEC1;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_HEC2;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_HEC3;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_TileBar0;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_TileBar1;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_TileBar2;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_TileGap1;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_TileGap2;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_TileGap3;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_TileExt0;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_TileExt1;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_TileExt2;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_FCAL0;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_FCAL1;   //!
   TBranch        *b_jet_AntiKt4H1Topo_e_FCAL2;   //!
   TBranch        *b_jet_AntiKt4H1Topo_Nconst;   //!
   TBranch        *b_jet_AntiKt4H1Topo_ptconst_emscale;   //!
   TBranch        *b_jet_AntiKt4H1Topo_econst_emscale;   //!
   TBranch        *b_jet_AntiKt4H1Topo_etaconst_emscale;   //!
   TBranch        *b_jet_AntiKt4H1Topo_phiconst_emscale;   //!
   TBranch        *b_jet_AntiKt4H1Topo_weightconst_emscale;   //!
   TBranch        *b_jet_AntiKt4H1Topo_constscale_E;   //!
   TBranch        *b_jet_AntiKt4H1Topo_constscale_pt;   //!
   TBranch        *b_jet_AntiKt4H1Topo_constscale_m;   //!
   TBranch        *b_jet_AntiKt4H1Topo_constscale_eta;   //!
   TBranch        *b_jet_AntiKt4H1Topo_constscale_phi;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_ip2d_pu;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_ip2d_pb;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_ip2d_ntrk;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_ip3d_pu;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_ip3d_pb;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_ip3d_ntrk;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_sv1_pu;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_sv1_pb;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_sv2_pu;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_sv2_pb;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_svp_mass;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_svp_n2t;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_svp_svok;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_svp_ntrk;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_svp_ntrkv;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_svp_ntrkj;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_svp_efrc;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_sv0p_mass;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_sv0p_n2t;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_sv0p_svok;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_sv0p_ntrk;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_sv0p_ntrkv;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_sv0p_ntrkj;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_sv0p_efrc;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_jfit_pu;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_jfit_pb;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_jfit_nvtxnt;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_jfit_nvtx1t;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_jfit_ntrk;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_jfit_efrc;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_jfit_mass;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_component_jfit_sig3d;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_TrackCounting2D;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_JetProb;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_IP1D;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_IP2D;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_IP3D;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_SV0;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_SV1;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_SV2;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_JetFitterTag;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_JetFitterCOMB;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_JetFitterTagNN;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_JetFitterCOMBNN;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_SoftMuonTag;   //!
   TBranch        *b_jet_AntiKt4H1Topo_flavor_weight_SoftElectronTag;   //!
   TBranch        *b_jet_AntiKt4H1Topo_el_dr;   //!
   TBranch        *b_jet_AntiKt4H1Topo_el_matched;   //!
   TBranch        *b_jet_AntiKt4H1Topo_mu_dr;   //!
   TBranch        *b_jet_AntiKt4H1Topo_mu_matched;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_n;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_E;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_pt;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_m;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_eta;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_phi;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_EtaPhys;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_PhiPhys;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_MPhys;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_WIDTH;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_n90;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_Timing;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_LArQuality;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_nTrk;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_sumPtTrk;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_OriginIndex;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_HECQuality;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_NegativeE;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_BCH_CORR_CELL;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_BCH_CORR_DOTX;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_BCH_CORR_JET;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_BCH_CORR_JET_FORCELL;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_ENG_BAD_CELLS;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_N_BAD_CELLS;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_N_BAD_CELLS_CORR;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_BAD_CELLS_CORR_E;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_SamplingMax;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_fracSamplingMax;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_hecf;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_tgap3f;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_isGood;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_emfrac;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_GCWJES;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_EMJES;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_CB;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_emscale_E;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_emscale_pt;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_emscale_m;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_emscale_eta;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_emscale_phi;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_jvtxf;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_jvtx_x;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_jvtx_y;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_jvtx_z;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_PreSamplerB;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_EMB1;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_EMB2;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_EMB3;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_PreSamplerE;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_EME1;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_EME2;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_EME3;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_HEC0;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_HEC1;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_HEC2;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_HEC3;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_TileBar0;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_TileBar1;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_TileBar2;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_TileGap1;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_TileGap2;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_TileGap3;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_TileExt0;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_TileExt1;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_TileExt2;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_FCAL0;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_FCAL1;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_e_FCAL2;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_Nconst;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_ptconst_emscale;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_econst_emscale;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_etaconst_emscale;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_phiconst_emscale;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_weightconst_emscale;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_constscale_E;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_constscale_pt;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_constscale_m;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_constscale_eta;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_constscale_phi;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_ip2d_pu;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_ip2d_pb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_ip2d_ntrk;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_ip3d_pu;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_ip3d_pb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_ip3d_ntrk;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_sv1_pu;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_sv1_pb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_sv2_pu;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_sv2_pb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_svp_mass;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_svp_n2t;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_svp_svok;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_svp_ntrk;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_svp_ntrkv;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_svp_ntrkj;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_svp_efrc;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_mass;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_n2t;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_svok;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrk;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrkv;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrkj;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_efrc;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_jfit_pu;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_jfit_pb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_jfit_nvtxnt;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_jfit_nvtx1t;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_jfit_ntrk;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_jfit_efrc;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_jfit_mass;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_component_jfit_sig3d;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_TrackCounting2D;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_JetProb;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_IP1D;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_IP2D;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_IP3D;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_SV0;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_SV1;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_SV2;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_JetFitterTag;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_JetFitterCOMB;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_JetFitterTagNN;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_JetFitterCOMBNN;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_SoftMuonTag;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_flavor_weight_SoftElectronTag;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_el_dr;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_el_matched;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_mu_dr;   //!
   TBranch        *b_jet_AntiKt4TopoEMJES_mu_matched;   //!
   TBranch        *b_mbtime_timeDiff;   //!
   TBranch        *b_mbtime_timeA;   //!
   TBranch        *b_mbtime_timeC;   //!
   TBranch        *b_mbtime_countA;   //!
   TBranch        *b_mbtime_countC;   //!
   TBranch        *b_collcand_passMBTSTime;   //!
   TBranch        *b_collcand_passCaloTime;   //!
   TBranch        *b_collcand_passTrigger;   //!
   TBranch        *b_collcand_pass;   //!
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
   TBranch        *b_SkimDecision_name;   //!
   TBranch        *b_SkimDecision_accepted;   //!
   TBranch        *b_ti_staco_topo_MET_etx;   //!
   TBranch        *b_ti_staco_topo_MET_ety;   //!
   TBranch        *b_ti_staco_topo_MET_sumet;   //!
   TBranch        *b_ti_staco_topo_MET_et;   //!
   TBranch        *b_ti_staco_topo_MET_phi;   //!
   TBranch        *b_ti_staco_topo_Jet_n;   //!
   TBranch        *b_ti_staco_topo_Jet_use;   //!
   TBranch        *b_ti_staco_topo_Jet_index;   //!
   TBranch        *b_ti_staco_topo_Jet_overlap_jetn;   //!
   TBranch        *b_ti_staco_topo_Jet_overlap_jetindex;   //!
   TBranch        *b_ti_staco_topo_Jet_overlap_mun;   //!
   TBranch        *b_ti_staco_topo_Jet_overlap_muindex;   //!
   TBranch        *b_ti_staco_topo_Jet_overlap_taun;   //!
   TBranch        *b_ti_staco_topo_Jet_overlap_tauindex;   //!
   TBranch        *b_ti_staco_topo_Mu_n;   //!
   TBranch        *b_ti_staco_topo_Mu_use;   //!
   TBranch        *b_ti_staco_topo_Mu_index;   //!
   TBranch        *b_ti_staco_topo_Mu_overlap_jetn;   //!
   TBranch        *b_ti_staco_topo_Mu_overlap_jetindex;   //!
   TBranch        *b_ti_staco_topo_Mu_overlap_mun;   //!
   TBranch        *b_ti_staco_topo_Mu_overlap_muindex;   //!
   TBranch        *b_ti_staco_topo_Mu_overlap_taun;   //!
   TBranch        *b_ti_staco_topo_Mu_overlap_tauindex;   //!
   TBranch        *b_ti_staco_topo_El_n;   //!
   TBranch        *b_ti_staco_topo_El_use;   //!
   TBranch        *b_ti_staco_topo_El_index;   //!
   TBranch        *b_ti_staco_topo_El_overlap_jetn;   //!
   TBranch        *b_ti_staco_topo_El_overlap_jetindex;   //!
   TBranch        *b_ti_staco_topo_El_overlap_mun;   //!
   TBranch        *b_ti_staco_topo_El_overlap_muindex;   //!
   TBranch        *b_ti_staco_topo_El_overlap_taun;   //!
   TBranch        *b_ti_staco_topo_El_overlap_tauindex;   //!
   TBranch        *b_ti_staco_tower_MET_etx;   //!
   TBranch        *b_ti_staco_tower_MET_ety;   //!
   TBranch        *b_ti_staco_tower_MET_sumet;   //!
   TBranch        *b_ti_staco_tower_MET_et;   //!
   TBranch        *b_ti_staco_tower_MET_phi;   //!
   TBranch        *b_ti_staco_tower_Jet_n;   //!
   TBranch        *b_ti_staco_tower_Jet_use;   //!
   TBranch        *b_ti_staco_tower_Jet_index;   //!
   TBranch        *b_ti_staco_tower_Jet_overlap_jetn;   //!
   TBranch        *b_ti_staco_tower_Jet_overlap_jetindex;   //!
   TBranch        *b_ti_staco_tower_Jet_overlap_mun;   //!
   TBranch        *b_ti_staco_tower_Jet_overlap_muindex;   //!
   TBranch        *b_ti_staco_tower_Jet_overlap_taun;   //!
   TBranch        *b_ti_staco_tower_Jet_overlap_tauindex;   //!
   TBranch        *b_ti_staco_tower_Mu_n;   //!
   TBranch        *b_ti_staco_tower_Mu_use;   //!
   TBranch        *b_ti_staco_tower_Mu_index;   //!
   TBranch        *b_ti_staco_tower_Mu_overlap_jetn;   //!
   TBranch        *b_ti_staco_tower_Mu_overlap_jetindex;   //!
   TBranch        *b_ti_staco_tower_Mu_overlap_mun;   //!
   TBranch        *b_ti_staco_tower_Mu_overlap_muindex;   //!
   TBranch        *b_ti_staco_tower_Mu_overlap_taun;   //!
   TBranch        *b_ti_staco_tower_Mu_overlap_tauindex;   //!
   TBranch        *b_ti_staco_tower_El_n;   //!
   TBranch        *b_ti_staco_tower_El_use;   //!
   TBranch        *b_ti_staco_tower_El_index;   //!
   TBranch        *b_ti_staco_tower_El_overlap_jetn;   //!
   TBranch        *b_ti_staco_tower_El_overlap_jetindex;   //!
   TBranch        *b_ti_staco_tower_El_overlap_mun;   //!
   TBranch        *b_ti_staco_tower_El_overlap_muindex;   //!
   TBranch        *b_ti_staco_tower_El_overlap_taun;   //!
   TBranch        *b_ti_staco_tower_El_overlap_tauindex;   //!
   TBranch        *b_MET_Goodness_CalClusForwBackw_pass;   //!
   TBranch        *b_MET_Goodness_CalClusUpDown_pass;   //!
   TBranch        *b_MET_Goodness_Calo_countA;   //!
   TBranch        *b_MET_Goodness_Calo_countC;   //!
   TBranch        *b_MET_Goodness_Calo_pass;   //!
   TBranch        *b_MET_Goodness_IsCollisionCandidate;   //!
   TBranch        *b_MET_Goodness_MBTS_countA;   //!
   TBranch        *b_MET_Goodness_MBTS_countC;   //!
   TBranch        *b_MET_Goodness_MBTS_pass;   //!
   TBranch        *b_MET_Goodness_MuonSp0Hits;   //!
   TBranch        *b_MET_Goodness_MuonSp1Hits;   //!
   TBranch        *b_MET_Goodness_MuonSpTotHits;   //!
   TBranch        *b_MET_Goodness_N_Jets;   //!
   TBranch        *b_MET_Goodness_OkayLB;   //!
   TBranch        *b_MET_Goodness_CalClusForwBackw_timeDiff;   //!
   TBranch        *b_MET_Goodness_CalClusUpDown_timeDiff;   //!
   TBranch        *b_MET_Goodness_CalClus_InTimeFraction;   //!
   TBranch        *b_MET_Goodness_CalClus_OutTimeEnergy;   //!
   TBranch        *b_MET_Goodness_CalClus_eventTime;   //!
   TBranch        *b_MET_Goodness_CalClus_ootEnergy10;   //!
   TBranch        *b_MET_Goodness_CalClus_ootEnergy15;   //!
   TBranch        *b_MET_Goodness_CalClus_ootEnergy20;   //!
   TBranch        *b_MET_Goodness_CalClus_ootEnergy25;   //!
   TBranch        *b_MET_Goodness_CalClus_ootFraction10;   //!
   TBranch        *b_MET_Goodness_CalClus_ootFraction15;   //!
   TBranch        *b_MET_Goodness_CalClus_ootFraction20;   //!
   TBranch        *b_MET_Goodness_CalClus_ootFraction25;   //!
   TBranch        *b_MET_Goodness_CalClus_timeA;   //!
   TBranch        *b_MET_Goodness_CalClus_timeC;   //!
   TBranch        *b_MET_Goodness_Calo_timeA;   //!
   TBranch        *b_MET_Goodness_Calo_timeC;   //!
   TBranch        *b_MET_Goodness_Calo_timeDiff;   //!
   TBranch        *b_MET_Goodness_DeltaTrackTopo;   //!
   TBranch        *b_MET_Goodness_EtoverRootSigmaEt;   //!
   TBranch        *b_MET_Goodness_EventEMFraction;   //!
   TBranch        *b_MET_Goodness_LArNoisyROSummary;   //!
   TBranch        *b_MET_Goodness_MBTS_timeA;   //!
   TBranch        *b_MET_Goodness_MBTS_timeC;   //!
   TBranch        *b_MET_Goodness_MBTS_timeDiff;   //!
   TBranch        *b_MET_Goodness_MuonSp0Eta;   //!
   TBranch        *b_MET_Goodness_MuonSp0Phi;   //!
   TBranch        *b_MET_Goodness_MuonSp1Eta;   //!
   TBranch        *b_MET_Goodness_MuonSp1Phi;   //!
   TBranch        *b_MET_Goodness_MuonTRTTiming;   //!
   TBranch        *b_MET_Goodness_BCH_CORR_CELL_Jet;   //!
   TBranch        *b_MET_Goodness_BCH_CORR_JET;   //!
   TBranch        *b_MET_Goodness_BCH_CORR_JET_FORCELL_Jet;   //!
   TBranch        *b_MET_Goodness_ChargeFraction_Jet;   //!
   TBranch        *b_MET_Goodness_DeltaEt_JetAlgs_Jet;   //!
   TBranch        *b_MET_Goodness_DeltaEta_JetAlgs_Jet;   //!
   TBranch        *b_MET_Goodness_DeltaPhi_JetAlgs_Jet;   //!
   TBranch        *b_MET_Goodness_DeltaPhi_MET_Jet;   //!
   TBranch        *b_MET_Goodness_ECal_Jet;   //!
   TBranch        *b_MET_Goodness_EMFraction_Jet;   //!
   TBranch        *b_MET_Goodness_E_BadCellsCorr_Jet;   //!
   TBranch        *b_MET_Goodness_E_BadCells_Jet;   //!
   TBranch        *b_MET_Goodness_Eta_Jet;   //!
   TBranch        *b_MET_Goodness_HECf_Jet;   //!
   TBranch        *b_MET_Goodness_LArQuality_Jet;   //!
   TBranch        *b_MET_Goodness_Phi_Jet;   //!
   TBranch        *b_MET_Goodness_PtCal_Jet;   //!
   TBranch        *b_MET_Goodness_QualityFrac_Jet;   //!
   TBranch        *b_MET_Goodness_SamplingFracCryo_Jet;   //!
   TBranch        *b_MET_Goodness_SamplingFracEM_Jet;   //!
   TBranch        *b_MET_Goodness_SamplingFracFCAL_Jet;   //!
   TBranch        *b_MET_Goodness_SamplingFracGap_Jet;   //!
   TBranch        *b_MET_Goodness_SamplingFracHEC3_Jet;   //!
   TBranch        *b_MET_Goodness_SamplingFracHEC_Jet;   //!
   TBranch        *b_MET_Goodness_SamplingFracMax_Jet;   //!
   TBranch        *b_MET_Goodness_SamplingFracPS_Jet;   //!
   TBranch        *b_MET_Goodness_SamplingFracTile10_Jet;   //!
   TBranch        *b_MET_Goodness_SamplingFracTile2_Jet;   //!
   TBranch        *b_MET_Goodness_SamplingFracTile_Jet;   //!
   TBranch        *b_MET_Goodness_TileQuality_Jet;   //!
   TBranch        *b_MET_Goodness_Timing_Jet;   //!
   TBranch        *b_MET_Goodness_ootE25_Jet;   //!
   TBranch        *b_MET_Goodness_ootE50_Jet;   //!
   TBranch        *b_MET_Goodness_ootE75_Jet;   //!
   TBranch        *b_MET_Goodness_tileGap3F_Jet;   //!
   TBranch        *b_MET_Goodness_N90Cells_Jet;   //!
   TBranch        *b_MET_Goodness_N90Constituents_Jet;   //!
   TBranch        *b_MET_Goodness_NConstituents_Jet;   //!
   TBranch        *b_MET_Goodness_N_BadCellsCorr_Jet;   //!
   TBranch        *b_MET_Goodness_N_BadCells_Jet;   //!
   TBranch        *b_MET_Goodness_NumTracks_Jet;   //!
   TBranch        *b_MET_Goodness_SamplingMaxID_Jet;   //!
   TBranch        *b_MET_Goodness_isBad_Jet;   //!
   TBranch        *b_MET_Goodness_isGood_Jet;   //!
   TBranch        *b_MET_Goodness_isUgly_Jet;   //!
   TBranch        *b_MET_Goodness_All;   //!
   TBranch        *b_MET_Goodness_JetCleaning;   //!
   TBranch        *b_MET_Goodness_BitMask;   //!

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
      chain->Add("/tmp/quinonez/data10_7TeV.00166466.physics_Muons.merge.NTUP_SUSY.f295_m619_p305_p308_tid185495_00/NTUP_SUSY.185495._000001.root.1/susy");
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
   el_E = 0;
   el_Et = 0;
   el_pt = 0;
   el_m = 0;
   el_eta = 0;
   el_phi = 0;
   el_px = 0;
   el_py = 0;
   el_pz = 0;
   el_charge = 0;
   el_author = 0;
   el_isEM = 0;
   el_convFlag = 0;
   el_isConv = 0;
   el_nConv = 0;
   el_nSingleTrackConv = 0;
   el_nDoubleTrackConv = 0;
   el_loose = 0;
   el_medium = 0;
   el_mediumIso = 0;
   el_tight = 0;
   el_tightIso = 0;
   el_Ethad = 0;
   el_Ethad1 = 0;
   el_f1 = 0;
   el_f1core = 0;
   el_Emins1 = 0;
   el_fside = 0;
   el_Emax2 = 0;
   el_ws3 = 0;
   el_wstot = 0;
   el_emaxs1 = 0;
   el_deltaEs = 0;
   el_E233 = 0;
   el_E237 = 0;
   el_E277 = 0;
   el_weta2 = 0;
   el_f3 = 0;
   el_f3core = 0;
   el_rphiallcalo = 0;
   el_Etcone45 = 0;
   el_Etcone20 = 0;
   el_Etcone30 = 0;
   el_Etcone40 = 0;
   el_ptcone30 = 0;
   el_convanglematch = 0;
   el_convtrackmatch = 0;
   el_hasconv = 0;
   el_convvtxx = 0;
   el_convvtxy = 0;
   el_convvtxz = 0;
   el_Rconv = 0;
   el_zconv = 0;
   el_convvtxchi2 = 0;
   el_pt1conv = 0;
   el_convtrk1nBLHits = 0;
   el_convtrk1nPixHits = 0;
   el_convtrk1nSCTHits = 0;
   el_convtrk1nTRTHits = 0;
   el_pt2conv = 0;
   el_convtrk2nBLHits = 0;
   el_convtrk2nPixHits = 0;
   el_convtrk2nSCTHits = 0;
   el_convtrk2nTRTHits = 0;
   el_ptconv = 0;
   el_pzconv = 0;
   el_pos7 = 0;
   el_etacorrmag = 0;
   el_deltaeta1 = 0;
   el_deltaeta2 = 0;
   el_deltaphi2 = 0;
   el_deltaphiRescaled = 0;
   el_expectHitInBLayer = 0;
   el_reta = 0;
   el_rphi = 0;
   el_EtringnoisedR03sig2 = 0;
   el_EtringnoisedR03sig3 = 0;
   el_EtringnoisedR03sig4 = 0;
   el_isolationlikelihoodjets = 0;
   el_isolationlikelihoodhqelectrons = 0;
   el_electronweight = 0;
   el_electronbgweight = 0;
   el_softeweight = 0;
   el_softebgweight = 0;
   el_neuralnet = 0;
   el_Hmatrix = 0;
   el_Hmatrix5 = 0;
   el_adaboost = 0;
   el_softeneuralnet = 0;
   el_zvertex = 0;
   el_errz = 0;
   el_etap = 0;
   el_depth = 0;
   el_refittedTrack_n = 0;
   el_refittedTrack_author = 0;
   el_refittedTrack_chi2 = 0;
   el_refittedTrack_qoverp = 0;
   el_refittedTrack_d0 = 0;
   el_refittedTrack_z0 = 0;
   el_refittedTrack_theta = 0;
   el_refittedTrack_phi = 0;
   el_refittedTrack_LMqoverp = 0;
   el_refittedTrack_hasBrem = 0;
   el_refittedTrack_bremRadius = 0;
   el_refittedTrack_bremZ = 0;
   el_refittedTrack_bremRadiusErr = 0;
   el_refittedTrack_bremZErr = 0;
   el_Es0 = 0;
   el_etas0 = 0;
   el_phis0 = 0;
   el_Es1 = 0;
   el_etas1 = 0;
   el_phis1 = 0;
   el_Es2 = 0;
   el_etas2 = 0;
   el_phis2 = 0;
   el_Es3 = 0;
   el_etas3 = 0;
   el_phis3 = 0;
   el_E_PreSamplerB = 0;
   el_E_EMB1 = 0;
   el_E_EMB2 = 0;
   el_E_EMB3 = 0;
   el_E_PreSamplerE = 0;
   el_E_EME1 = 0;
   el_E_EME2 = 0;
   el_E_EME3 = 0;
   el_E_HEC0 = 0;
   el_E_HEC1 = 0;
   el_E_HEC2 = 0;
   el_E_HEC3 = 0;
   el_E_TileBar0 = 0;
   el_E_TileBar1 = 0;
   el_E_TileBar2 = 0;
   el_E_TileGap1 = 0;
   el_E_TileGap2 = 0;
   el_E_TileGap3 = 0;
   el_E_TileExt0 = 0;
   el_E_TileExt1 = 0;
   el_E_TileExt2 = 0;
   el_E_FCAL0 = 0;
   el_E_FCAL1 = 0;
   el_E_FCAL2 = 0;
   el_cl_E = 0;
   el_cl_pt = 0;
   el_cl_eta = 0;
   el_cl_phi = 0;
   el_firstEdens = 0;
   el_cellmaxfrac = 0;
   el_longitudinal = 0;
   el_secondlambda = 0;
   el_lateral = 0;
   el_secondR = 0;
   el_centerlambda = 0;
   el_rawcl_Es0 = 0;
   el_rawcl_etas0 = 0;
   el_rawcl_phis0 = 0;
   el_rawcl_Es1 = 0;
   el_rawcl_etas1 = 0;
   el_rawcl_phis1 = 0;
   el_rawcl_Es2 = 0;
   el_rawcl_etas2 = 0;
   el_rawcl_phis2 = 0;
   el_rawcl_Es3 = 0;
   el_rawcl_etas3 = 0;
   el_rawcl_phis3 = 0;
   el_rawcl_E = 0;
   el_rawcl_pt = 0;
   el_rawcl_eta = 0;
   el_rawcl_phi = 0;
   el_trackd0 = 0;
   el_trackz0 = 0;
   el_trackphi = 0;
   el_tracktheta = 0;
   el_trackqoverp = 0;
   el_trackpt = 0;
   el_tracketa = 0;
   el_trackfitchi2 = 0;
   el_trackfitndof = 0;
   el_nBLHits = 0;
   el_nPixHits = 0;
   el_nSCTHits = 0;
   el_nTRTHits = 0;
   el_nPixHoles = 0;
   el_nSCTHoles = 0;
   el_nBLSharedHits = 0;
   el_nPixSharedHits = 0;
   el_nSCTSharedHits = 0;
   el_nTRTHighTHits = 0;
   el_nTRTOutliers = 0;
   el_nTRTHighTOutliers = 0;
   el_nSiHits = 0;
   el_TRTHighTHitsRatio = 0;
   el_pixeldEdx = 0;
   el_eProbabilityComb = 0;
   el_eProbabilityHT = 0;
   el_eProbabilityToT = 0;
   el_eProbabilityBrem = 0;
   el_vertx = 0;
   el_verty = 0;
   el_vertz = 0;
   el_hastrack = 0;
   el_deltaEmax2 = 0;
   el_calibHitsShowerDepth = 0;
   el_trackd0beam = 0;
   el_tracksigd0beam = 0;
   el_trackd0pv = 0;
   el_tracksigd0pv = 0;
   el_trackz0pv = 0;
   el_tracksigz0pv = 0;
   el_trackd0pvunbiased = 0;
   el_tracksigd0pvunbiased = 0;
   el_trackz0pvunbiased = 0;
   el_tracksigz0pvunbiased = 0;
   el_isIso = 0;
   el_mvaptcone20 = 0;
   el_mvaptcone30 = 0;
   el_mvaptcone40 = 0;
   el_jet_dr = 0;
   el_jet_E = 0;
   el_jet_pt = 0;
   el_jet_m = 0;
   el_jet_eta = 0;
   el_jet_phi = 0;
   el_jet_matched = 0;
   el_Etcone40_pt_corrected = 0;
   el_Etcone40_ED_corrected = 0;
   el_Etcone40_corrected = 0;
   el_EF_dr = 0;
   el_EF_index = 0;
   el_L2_dr = 0;
   el_L2_index = 0;
   el_L1_dr = 0;
   el_L1_index = 0;
   ph_E = 0;
   ph_Et = 0;
   ph_pt = 0;
   ph_m = 0;
   ph_eta = 0;
   ph_phi = 0;
   ph_px = 0;
   ph_py = 0;
   ph_pz = 0;
   ph_author = 0;
   ph_isRecovered = 0;
   ph_isEM = 0;
   ph_convFlag = 0;
   ph_isConv = 0;
   ph_nConv = 0;
   ph_nSingleTrackConv = 0;
   ph_nDoubleTrackConv = 0;
   ph_loose = 0;
   ph_tight = 0;
   ph_tightIso = 0;
   ph_Ethad = 0;
   ph_Ethad1 = 0;
   ph_E033 = 0;
   ph_f1 = 0;
   ph_f1core = 0;
   ph_Emins1 = 0;
   ph_fside = 0;
   ph_Emax2 = 0;
   ph_ws3 = 0;
   ph_wstot = 0;
   ph_E132 = 0;
   ph_E1152 = 0;
   ph_emaxs1 = 0;
   ph_deltaEs = 0;
   ph_E233 = 0;
   ph_E237 = 0;
   ph_E277 = 0;
   ph_weta2 = 0;
   ph_f3 = 0;
   ph_f3core = 0;
   ph_rphiallcalo = 0;
   ph_Etcone45 = 0;
   ph_Etcone20 = 0;
   ph_Etcone30 = 0;
   ph_Etcone40 = 0;
   ph_ptcone30 = 0;
   ph_convanglematch = 0;
   ph_convtrackmatch = 0;
   ph_hasconv = 0;
   ph_convvtxx = 0;
   ph_convvtxy = 0;
   ph_convvtxz = 0;
   ph_Rconv = 0;
   ph_zconv = 0;
   ph_convvtxchi2 = 0;
   ph_pt1conv = 0;
   ph_convtrk1nBLHits = 0;
   ph_convtrk1nPixHits = 0;
   ph_convtrk1nSCTHits = 0;
   ph_convtrk1nTRTHits = 0;
   ph_pt2conv = 0;
   ph_convtrk2nBLHits = 0;
   ph_convtrk2nPixHits = 0;
   ph_convtrk2nSCTHits = 0;
   ph_convtrk2nTRTHits = 0;
   ph_ptconv = 0;
   ph_pzconv = 0;
   ph_reta = 0;
   ph_rphi = 0;
   ph_EtringnoisedR03sig2 = 0;
   ph_EtringnoisedR03sig3 = 0;
   ph_EtringnoisedR03sig4 = 0;
   ph_isolationlikelihoodjets = 0;
   ph_isolationlikelihoodhqelectrons = 0;
   ph_loglikelihood = 0;
   ph_photonweight = 0;
   ph_photonbgweight = 0;
   ph_neuralnet = 0;
   ph_Hmatrix = 0;
   ph_Hmatrix5 = 0;
   ph_adaboost = 0;
   ph_zvertex = 0;
   ph_errz = 0;
   ph_etap = 0;
   ph_depth = 0;
   ph_cl_E = 0;
   ph_cl_pt = 0;
   ph_cl_eta = 0;
   ph_cl_phi = 0;
   ph_Es0 = 0;
   ph_etas0 = 0;
   ph_phis0 = 0;
   ph_Es1 = 0;
   ph_etas1 = 0;
   ph_phis1 = 0;
   ph_Es2 = 0;
   ph_etas2 = 0;
   ph_phis2 = 0;
   ph_Es3 = 0;
   ph_etas3 = 0;
   ph_phis3 = 0;
   ph_rawcl_Es0 = 0;
   ph_rawcl_etas0 = 0;
   ph_rawcl_phis0 = 0;
   ph_rawcl_Es1 = 0;
   ph_rawcl_etas1 = 0;
   ph_rawcl_phis1 = 0;
   ph_rawcl_Es2 = 0;
   ph_rawcl_etas2 = 0;
   ph_rawcl_phis2 = 0;
   ph_rawcl_Es3 = 0;
   ph_rawcl_etas3 = 0;
   ph_rawcl_phis3 = 0;
   ph_rawcl_E = 0;
   ph_rawcl_pt = 0;
   ph_rawcl_eta = 0;
   ph_rawcl_phi = 0;
   ph_deltaEmax2 = 0;
   ph_calibHitsShowerDepth = 0;
   ph_isIso = 0;
   ph_mvaptcone20 = 0;
   ph_mvaptcone30 = 0;
   ph_mvaptcone40 = 0;
   ph_topoEtcone20 = 0;
   ph_topoEtcone40 = 0;
   ph_topoEtcone60 = 0;
   ph_jet_dr = 0;
   ph_jet_E = 0;
   ph_jet_pt = 0;
   ph_jet_m = 0;
   ph_jet_eta = 0;
   ph_jet_phi = 0;
   ph_jet_matched = 0;
   ph_convIP = 0;
   ph_convIPRev = 0;
   ph_ptIsolationCone = 0;
   ph_ptIsolationConePhAngle = 0;
   ph_Etcone40_pt_corrected = 0;
   ph_Etcone40_ED_corrected = 0;
   ph_Etcone40_corrected = 0;
   ph_topodr = 0;
   ph_topopt = 0;
   ph_topoeta = 0;
   ph_topophi = 0;
   ph_topomatched = 0;
   ph_topoEMdr = 0;
   ph_topoEMpt = 0;
   ph_topoEMeta = 0;
   ph_topoEMphi = 0;
   ph_topoEMmatched = 0;
   ph_EF_dr = 0;
   ph_EF_index = 0;
   ph_L2_dr = 0;
   ph_L2_index = 0;
   ph_L1_dr = 0;
   ph_L1_index = 0;
   mu_staco_E = 0;
   mu_staco_pt = 0;
   mu_staco_m = 0;
   mu_staco_eta = 0;
   mu_staco_phi = 0;
   mu_staco_px = 0;
   mu_staco_py = 0;
   mu_staco_pz = 0;
   mu_staco_charge = 0;
   mu_staco_allauthor = 0;
   mu_staco_author = 0;
   mu_staco_matchchi2 = 0;
   mu_staco_matchndof = 0;
   mu_staco_etcone20 = 0;
   mu_staco_etcone30 = 0;
   mu_staco_etcone40 = 0;
   mu_staco_nucone20 = 0;
   mu_staco_nucone30 = 0;
   mu_staco_nucone40 = 0;
   mu_staco_ptcone20 = 0;
   mu_staco_ptcone30 = 0;
   mu_staco_ptcone40 = 0;
   mu_staco_energyLossPar = 0;
   mu_staco_energyLossErr = 0;
   mu_staco_etCore = 0;
   mu_staco_energyLossType = 0;
   mu_staco_bestMatch = 0;
   mu_staco_isStandAloneMuon = 0;
   mu_staco_isCombinedMuon = 0;
   mu_staco_isLowPtReconstructedMuon = 0;
   mu_staco_loose = 0;
   mu_staco_medium = 0;
   mu_staco_tight = 0;
   mu_staco_d0_exPV = 0;
   mu_staco_z0_exPV = 0;
   mu_staco_phi_exPV = 0;
   mu_staco_theta_exPV = 0;
   mu_staco_qoverp_exPV = 0;
   mu_staco_cb_d0_exPV = 0;
   mu_staco_cb_z0_exPV = 0;
   mu_staco_cb_phi_exPV = 0;
   mu_staco_cb_theta_exPV = 0;
   mu_staco_cb_qoverp_exPV = 0;
   mu_staco_id_d0_exPV = 0;
   mu_staco_id_z0_exPV = 0;
   mu_staco_id_phi_exPV = 0;
   mu_staco_id_theta_exPV = 0;
   mu_staco_id_qoverp_exPV = 0;
   mu_staco_me_d0_exPV = 0;
   mu_staco_me_z0_exPV = 0;
   mu_staco_me_phi_exPV = 0;
   mu_staco_me_theta_exPV = 0;
   mu_staco_me_qoverp_exPV = 0;
   mu_staco_ie_d0_exPV = 0;
   mu_staco_ie_z0_exPV = 0;
   mu_staco_ie_phi_exPV = 0;
   mu_staco_ie_theta_exPV = 0;
   mu_staco_ie_qoverp_exPV = 0;
   mu_staco_cov_d0_exPV = 0;
   mu_staco_cov_z0_exPV = 0;
   mu_staco_cov_phi_exPV = 0;
   mu_staco_cov_theta_exPV = 0;
   mu_staco_cov_qoverp_exPV = 0;
   mu_staco_cov_d0_z0_exPV = 0;
   mu_staco_cov_d0_phi_exPV = 0;
   mu_staco_cov_d0_theta_exPV = 0;
   mu_staco_cov_d0_qoverp_exPV = 0;
   mu_staco_cov_z0_phi_exPV = 0;
   mu_staco_cov_z0_theta_exPV = 0;
   mu_staco_cov_z0_qoverp_exPV = 0;
   mu_staco_cov_phi_theta_exPV = 0;
   mu_staco_cov_phi_qoverp_exPV = 0;
   mu_staco_cov_theta_qoverp_exPV = 0;
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
   mu_staco_nBLHits = 0;
   mu_staco_nPixHits = 0;
   mu_staco_nSCTHits = 0;
   mu_staco_nTRTHits = 0;
   mu_staco_nTRTHighTHits = 0;
   mu_staco_nBLSharedHits = 0;
   mu_staco_nPixSharedHits = 0;
   mu_staco_nPixHoles = 0;
   mu_staco_nSCTSharedHits = 0;
   mu_staco_nSCTHoles = 0;
   mu_staco_nTRTOutliers = 0;
   mu_staco_nTRTHighTOutliers = 0;
   mu_staco_nMDTHits = 0;
   mu_staco_nMDTHoles = 0;
   mu_staco_nCSCEtaHits = 0;
   mu_staco_nCSCEtaHoles = 0;
   mu_staco_nCSCPhiHits = 0;
   mu_staco_nCSCPhiHoles = 0;
   mu_staco_nRPCEtaHits = 0;
   mu_staco_nRPCEtaHoles = 0;
   mu_staco_nRPCPhiHits = 0;
   mu_staco_nRPCPhiHoles = 0;
   mu_staco_nTGCEtaHits = 0;
   mu_staco_nTGCEtaHoles = 0;
   mu_staco_nTGCPhiHits = 0;
   mu_staco_nTGCPhiHoles = 0;
   mu_staco_nGangedPixels = 0;
   mu_staco_nOutliersOnTrack = 0;
   mu_staco_nMDTBIHits = 0;
   mu_staco_nMDTBMHits = 0;
   mu_staco_nMDTBOHits = 0;
   mu_staco_nMDTBEEHits = 0;
   mu_staco_nMDTBIS78Hits = 0;
   mu_staco_nMDTEIHits = 0;
   mu_staco_nMDTEMHits = 0;
   mu_staco_nMDTEOHits = 0;
   mu_staco_nMDTEEHits = 0;
   mu_staco_nRPCLayer1EtaHits = 0;
   mu_staco_nRPCLayer2EtaHits = 0;
   mu_staco_nRPCLayer3EtaHits = 0;
   mu_staco_nRPCLayer1PhiHits = 0;
   mu_staco_nRPCLayer2PhiHits = 0;
   mu_staco_nRPCLayer3PhiHits = 0;
   mu_staco_nTGCLayer1EtaHits = 0;
   mu_staco_nTGCLayer2EtaHits = 0;
   mu_staco_nTGCLayer3EtaHits = 0;
   mu_staco_nTGCLayer4EtaHits = 0;
   mu_staco_nTGCLayer1PhiHits = 0;
   mu_staco_nTGCLayer2PhiHits = 0;
   mu_staco_nTGCLayer3PhiHits = 0;
   mu_staco_nTGCLayer4PhiHits = 0;
   mu_staco_barrelSectors = 0;
   mu_staco_endcapSectors = 0;
   mu_staco_trackd0 = 0;
   mu_staco_trackz0 = 0;
   mu_staco_trackphi = 0;
   mu_staco_tracktheta = 0;
   mu_staco_trackqoverp = 0;
   mu_staco_trackcov_d0 = 0;
   mu_staco_trackcov_z0 = 0;
   mu_staco_trackcov_phi = 0;
   mu_staco_trackcov_theta = 0;
   mu_staco_trackcov_qoverp = 0;
   mu_staco_trackcov_d0_z0 = 0;
   mu_staco_trackcov_d0_phi = 0;
   mu_staco_trackcov_d0_theta = 0;
   mu_staco_trackcov_d0_qoverp = 0;
   mu_staco_trackcov_z0_phi = 0;
   mu_staco_trackcov_z0_theta = 0;
   mu_staco_trackcov_z0_qoverp = 0;
   mu_staco_trackcov_phi_theta = 0;
   mu_staco_trackcov_phi_qoverp = 0;
   mu_staco_trackcov_theta_qoverp = 0;
   mu_staco_trackfitchi2 = 0;
   mu_staco_trackfitndof = 0;
   mu_staco_hastrack = 0;
   mu_staco_EF_dr = 0;
   mu_staco_EF_cb_eta = 0;
   mu_staco_EF_cb_phi = 0;
   mu_staco_EF_cb_pt = 0;
   mu_staco_EF_ms_eta = 0;
   mu_staco_EF_ms_phi = 0;
   mu_staco_EF_ms_pt = 0;
   mu_staco_EF_me_eta = 0;
   mu_staco_EF_me_phi = 0;
   mu_staco_EF_me_pt = 0;
   mu_staco_EF_matched = 0;
   mu_staco_L2CB_dr = 0;
   mu_staco_L2CB_pt = 0;
   mu_staco_L2CB_eta = 0;
   mu_staco_L2CB_phi = 0;
   mu_staco_L2CB_id_pt = 0;
   mu_staco_L2CB_ms_pt = 0;
   mu_staco_L2CB_nPixHits = 0;
   mu_staco_L2CB_nSCTHits = 0;
   mu_staco_L2CB_nTRTHits = 0;
   mu_staco_L2CB_nTRTHighTHits = 0;
   mu_staco_L2CB_matched = 0;
   mu_staco_L1_dr = 0;
   mu_staco_L1_pt = 0;
   mu_staco_L1_eta = 0;
   mu_staco_L1_phi = 0;
   mu_staco_L1_thrNumber = 0;
   mu_staco_L1_RoINumber = 0;
   mu_staco_L1_sectorAddress = 0;
   mu_staco_L1_firstCandidate = 0;
   mu_staco_L1_moreCandInRoI = 0;
   mu_staco_L1_moreCandInSector = 0;
   mu_staco_L1_source = 0;
   mu_staco_L1_hemisphere = 0;
   mu_staco_L1_matched = 0;
   mu_calo_E = 0;
   mu_calo_pt = 0;
   mu_calo_m = 0;
   mu_calo_eta = 0;
   mu_calo_phi = 0;
   mu_calo_px = 0;
   mu_calo_py = 0;
   mu_calo_pz = 0;
   mu_calo_charge = 0;
   mu_calo_allauthor = 0;
   mu_calo_author = 0;
   mu_calo_matchchi2 = 0;
   mu_calo_matchndof = 0;
   mu_calo_etcone20 = 0;
   mu_calo_etcone30 = 0;
   mu_calo_etcone40 = 0;
   mu_calo_nucone20 = 0;
   mu_calo_nucone30 = 0;
   mu_calo_nucone40 = 0;
   mu_calo_ptcone20 = 0;
   mu_calo_ptcone30 = 0;
   mu_calo_ptcone40 = 0;
   mu_calo_energyLossPar = 0;
   mu_calo_energyLossErr = 0;
   mu_calo_etCore = 0;
   mu_calo_energyLossType = 0;
   mu_calo_bestMatch = 0;
   mu_calo_isStandAloneMuon = 0;
   mu_calo_isCombinedMuon = 0;
   mu_calo_isLowPtReconstructedMuon = 0;
   mu_calo_loose = 0;
   mu_calo_medium = 0;
   mu_calo_tight = 0;
   mu_calo_d0_exPV = 0;
   mu_calo_z0_exPV = 0;
   mu_calo_phi_exPV = 0;
   mu_calo_theta_exPV = 0;
   mu_calo_qoverp_exPV = 0;
   mu_calo_cb_d0_exPV = 0;
   mu_calo_cb_z0_exPV = 0;
   mu_calo_cb_phi_exPV = 0;
   mu_calo_cb_theta_exPV = 0;
   mu_calo_cb_qoverp_exPV = 0;
   mu_calo_id_d0_exPV = 0;
   mu_calo_id_z0_exPV = 0;
   mu_calo_id_phi_exPV = 0;
   mu_calo_id_theta_exPV = 0;
   mu_calo_id_qoverp_exPV = 0;
   mu_calo_me_d0_exPV = 0;
   mu_calo_me_z0_exPV = 0;
   mu_calo_me_phi_exPV = 0;
   mu_calo_me_theta_exPV = 0;
   mu_calo_me_qoverp_exPV = 0;
   mu_calo_ie_d0_exPV = 0;
   mu_calo_ie_z0_exPV = 0;
   mu_calo_ie_phi_exPV = 0;
   mu_calo_ie_theta_exPV = 0;
   mu_calo_ie_qoverp_exPV = 0;
   mu_calo_cov_d0_exPV = 0;
   mu_calo_cov_z0_exPV = 0;
   mu_calo_cov_phi_exPV = 0;
   mu_calo_cov_theta_exPV = 0;
   mu_calo_cov_qoverp_exPV = 0;
   mu_calo_cov_d0_z0_exPV = 0;
   mu_calo_cov_d0_phi_exPV = 0;
   mu_calo_cov_d0_theta_exPV = 0;
   mu_calo_cov_d0_qoverp_exPV = 0;
   mu_calo_cov_z0_phi_exPV = 0;
   mu_calo_cov_z0_theta_exPV = 0;
   mu_calo_cov_z0_qoverp_exPV = 0;
   mu_calo_cov_phi_theta_exPV = 0;
   mu_calo_cov_phi_qoverp_exPV = 0;
   mu_calo_cov_theta_qoverp_exPV = 0;
   mu_calo_ms_d0 = 0;
   mu_calo_ms_z0 = 0;
   mu_calo_ms_phi = 0;
   mu_calo_ms_theta = 0;
   mu_calo_ms_qoverp = 0;
   mu_calo_id_d0 = 0;
   mu_calo_id_z0 = 0;
   mu_calo_id_phi = 0;
   mu_calo_id_theta = 0;
   mu_calo_id_qoverp = 0;
   mu_calo_me_d0 = 0;
   mu_calo_me_z0 = 0;
   mu_calo_me_phi = 0;
   mu_calo_me_theta = 0;
   mu_calo_me_qoverp = 0;
   mu_calo_ie_d0 = 0;
   mu_calo_ie_z0 = 0;
   mu_calo_ie_phi = 0;
   mu_calo_ie_theta = 0;
   mu_calo_ie_qoverp = 0;
   mu_calo_nBLHits = 0;
   mu_calo_nPixHits = 0;
   mu_calo_nSCTHits = 0;
   mu_calo_nTRTHits = 0;
   mu_calo_nTRTHighTHits = 0;
   mu_calo_nBLSharedHits = 0;
   mu_calo_nPixSharedHits = 0;
   mu_calo_nPixHoles = 0;
   mu_calo_nSCTSharedHits = 0;
   mu_calo_nSCTHoles = 0;
   mu_calo_nTRTOutliers = 0;
   mu_calo_nTRTHighTOutliers = 0;
   mu_calo_nMDTHits = 0;
   mu_calo_nMDTHoles = 0;
   mu_calo_nCSCEtaHits = 0;
   mu_calo_nCSCEtaHoles = 0;
   mu_calo_nCSCPhiHits = 0;
   mu_calo_nCSCPhiHoles = 0;
   mu_calo_nRPCEtaHits = 0;
   mu_calo_nRPCEtaHoles = 0;
   mu_calo_nRPCPhiHits = 0;
   mu_calo_nRPCPhiHoles = 0;
   mu_calo_nTGCEtaHits = 0;
   mu_calo_nTGCEtaHoles = 0;
   mu_calo_nTGCPhiHits = 0;
   mu_calo_nTGCPhiHoles = 0;
   mu_calo_nGangedPixels = 0;
   mu_calo_nOutliersOnTrack = 0;
   mu_calo_nMDTBIHits = 0;
   mu_calo_nMDTBMHits = 0;
   mu_calo_nMDTBOHits = 0;
   mu_calo_nMDTBEEHits = 0;
   mu_calo_nMDTBIS78Hits = 0;
   mu_calo_nMDTEIHits = 0;
   mu_calo_nMDTEMHits = 0;
   mu_calo_nMDTEOHits = 0;
   mu_calo_nMDTEEHits = 0;
   mu_calo_nRPCLayer1EtaHits = 0;
   mu_calo_nRPCLayer2EtaHits = 0;
   mu_calo_nRPCLayer3EtaHits = 0;
   mu_calo_nRPCLayer1PhiHits = 0;
   mu_calo_nRPCLayer2PhiHits = 0;
   mu_calo_nRPCLayer3PhiHits = 0;
   mu_calo_nTGCLayer1EtaHits = 0;
   mu_calo_nTGCLayer2EtaHits = 0;
   mu_calo_nTGCLayer3EtaHits = 0;
   mu_calo_nTGCLayer4EtaHits = 0;
   mu_calo_nTGCLayer1PhiHits = 0;
   mu_calo_nTGCLayer2PhiHits = 0;
   mu_calo_nTGCLayer3PhiHits = 0;
   mu_calo_nTGCLayer4PhiHits = 0;
   mu_calo_barrelSectors = 0;
   mu_calo_endcapSectors = 0;
   mu_calo_trackd0 = 0;
   mu_calo_trackz0 = 0;
   mu_calo_trackphi = 0;
   mu_calo_tracktheta = 0;
   mu_calo_trackqoverp = 0;
   mu_calo_trackcov_d0 = 0;
   mu_calo_trackcov_z0 = 0;
   mu_calo_trackcov_phi = 0;
   mu_calo_trackcov_theta = 0;
   mu_calo_trackcov_qoverp = 0;
   mu_calo_trackcov_d0_z0 = 0;
   mu_calo_trackcov_d0_phi = 0;
   mu_calo_trackcov_d0_theta = 0;
   mu_calo_trackcov_d0_qoverp = 0;
   mu_calo_trackcov_z0_phi = 0;
   mu_calo_trackcov_z0_theta = 0;
   mu_calo_trackcov_z0_qoverp = 0;
   mu_calo_trackcov_phi_theta = 0;
   mu_calo_trackcov_phi_qoverp = 0;
   mu_calo_trackcov_theta_qoverp = 0;
   mu_calo_trackfitchi2 = 0;
   mu_calo_trackfitndof = 0;
   mu_calo_hastrack = 0;
   mu_calo_EF_dr = 0;
   mu_calo_EF_cb_eta = 0;
   mu_calo_EF_cb_phi = 0;
   mu_calo_EF_cb_pt = 0;
   mu_calo_EF_ms_eta = 0;
   mu_calo_EF_ms_phi = 0;
   mu_calo_EF_ms_pt = 0;
   mu_calo_EF_me_eta = 0;
   mu_calo_EF_me_phi = 0;
   mu_calo_EF_me_pt = 0;
   mu_calo_EF_matched = 0;
   mu_calo_L2CB_dr = 0;
   mu_calo_L2CB_pt = 0;
   mu_calo_L2CB_eta = 0;
   mu_calo_L2CB_phi = 0;
   mu_calo_L2CB_id_pt = 0;
   mu_calo_L2CB_ms_pt = 0;
   mu_calo_L2CB_nPixHits = 0;
   mu_calo_L2CB_nSCTHits = 0;
   mu_calo_L2CB_nTRTHits = 0;
   mu_calo_L2CB_nTRTHighTHits = 0;
   mu_calo_L2CB_matched = 0;
   mu_calo_L1_dr = 0;
   mu_calo_L1_pt = 0;
   mu_calo_L1_eta = 0;
   mu_calo_L1_phi = 0;
   mu_calo_L1_thrNumber = 0;
   mu_calo_L1_RoINumber = 0;
   mu_calo_L1_sectorAddress = 0;
   mu_calo_L1_firstCandidate = 0;
   mu_calo_L1_moreCandInRoI = 0;
   mu_calo_L1_moreCandInSector = 0;
   mu_calo_L1_source = 0;
   mu_calo_L1_hemisphere = 0;
   mu_calo_L1_matched = 0;
   tau_Et = 0;
   tau_pt = 0;
   tau_m = 0;
   tau_eta = 0;
   tau_phi = 0;
   tau_charge = 0;
   tau_BDTEleScore = 0;
   tau_BDTJetScore = 0;
   tau_discCut = 0;
   tau_discCutTMVA = 0;
   tau_discLL = 0;
   tau_discNN = 0;
   tau_efficLL = 0;
   tau_efficNN = 0;
   tau_likelihood = 0;
   tau_tauJetNeuralNetwork = 0;
   tau_tauENeuralNetwork = 0;
   tau_tauElTauLikelihood = 0;
   tau_electronVetoLoose = 0;
   tau_electronVetoMedium = 0;
   tau_electronVetoTight = 0;
   tau_muonVeto = 0;
   tau_tauCutLoose = 0;
   tau_tauCutMedium = 0;
   tau_tauCutTight = 0;
   tau_tauCutSafeLoose = 0;
   tau_tauCutSafeMedium = 0;
   tau_tauCutSafeTight = 0;
   tau_tauCutSafeCaloLoose = 0;
   tau_tauCutSafeCaloMedium = 0;
   tau_tauCutSafeCaloTight = 0;
   tau_tauLlhLoose = 0;
   tau_tauLlhMedium = 0;
   tau_tauLlhTight = 0;
   tau_author = 0;
   tau_ROIword = 0;
   tau_nProng = 0;
   tau_numTrack = 0;
   tau_etOverPtLeadTrk = 0;
   tau_ipZ0SinThetaSigLeadTrk = 0;
   tau_leadTrkPt = 0;
   tau_nLooseTrk = 0;
   tau_nLooseConvTrk = 0;
   tau_nProngLoose = 0;
   tau_ipSigLeadTrk = 0;
   tau_ipSigLeadLooseTrk = 0;
   tau_etOverPtLeadLooseTrk = 0;
   tau_leadLooseTrkPt = 0;
   tau_chrgLooseTrk = 0;
   tau_massTrkSys = 0;
   tau_trkWidth2 = 0;
   tau_trFlightPathSig = 0;
   tau_etEflow = 0;
   tau_mEflow = 0;
   tau_nPi0 = 0;
   tau_ele_E237E277 = 0;
   tau_ele_PresamplerFraction = 0;
   tau_ele_ECALFirstFraction = 0;
   tau_seedCalo_EMRadius = 0;
   tau_seedCalo_hadRadius = 0;
   tau_seedCalo_etEMAtEMScale = 0;
   tau_seedCalo_etHadAtEMScale = 0;
   tau_seedCalo_isolFrac = 0;
   tau_seedCalo_centFrac = 0;
   tau_seedCalo_stripWidth2 = 0;
   tau_seedCalo_nStrip = 0;
   tau_seedCalo_etEMCalib = 0;
   tau_seedCalo_etHadCalib = 0;
   tau_seedCalo_eta = 0;
   tau_seedCalo_phi = 0;
   tau_seedCalo_nIsolLooseTrk = 0;
   tau_seedCalo_trkAvgDist = 0;
   tau_seedCalo_trkRmsDist = 0;
   tau_seedTrk_EMRadius = 0;
   tau_seedTrk_isolFrac = 0;
   tau_seedTrk_etChrgHadOverSumTrkPt = 0;
   tau_seedTrk_isolFracWide = 0;
   tau_seedTrk_etHadAtEMScale = 0;
   tau_seedTrk_etEMAtEMScale = 0;
   tau_seedTrk_etEMCL = 0;
   tau_seedTrk_etChrgEM = 0;
   tau_seedTrk_etNeuEM = 0;
   tau_seedTrk_etResNeuEM = 0;
   tau_seedTrk_hadLeakEt = 0;
   tau_seedTrk_sumEMCellEtOverLeadTrkPt = 0;
   tau_seedTrk_secMaxStripEt = 0;
   tau_seedTrk_stripWidth2 = 0;
   tau_seedTrk_nStrip = 0;
   tau_seedTrk_etChrgHad = 0;
   tau_seedTrk_nOtherCoreTrk = 0;
   tau_seedTrk_nIsolTrk = 0;
   tau_seedTrk_etIsolEM = 0;
   tau_seedTrk_etIsolHad = 0;
   tau_calcVars_sumTrkPt = 0;
   tau_calcVars_numTopoClusters = 0;
   tau_calcVars_numEffTopoClusters = 0;
   tau_calcVars_topoInvMass = 0;
   tau_calcVars_effTopoInvMass = 0;
   tau_calcVars_topoMeanDeltaR = 0;
   tau_calcVars_effTopoMeanDeltaR = 0;
   tau_calcVars_etHadSumPtTracks = 0;
   tau_calcVars_etEMSumPtTracks = 0;
   tau_calcVars_etHad_EMScale_Pt3Trks = 0;
   tau_calcVars_etEM_EMScale_Pt3Trks = 0;
   tau_calcVars_mass = 0;
   tau_calcVars_ipSigLeadLooseTrk = 0;
   tau_calcVars_drMax = 0;
   tau_calcVars_drMin = 0;
   tau_calcVars_emFracCalib = 0;
   tau_calcVars_TRTHTOverLT_LeadTrk = 0;
   tau_cluster_E = 0;
   tau_cluster_eta = 0;
   tau_cluster_phi = 0;
   tau_cluster_n = 0;
   tau_Pi0Cluster_pt = 0;
   tau_Pi0Cluster_eta = 0;
   tau_Pi0Cluster_phi = 0;
   tau_secvtx_x = 0;
   tau_secvtx_y = 0;
   tau_secvtx_z = 0;
   tau_secvtx_chiSquared = 0;
   tau_secvtx_numberDoF = 0;
   tau_jet_Et = 0;
   tau_jet_pt = 0;
   tau_jet_m = 0;
   tau_jet_eta = 0;
   tau_jet_phi = 0;
   tau_jet_WIDTH = 0;
   tau_jet_n90 = 0;
   tau_jet_n90constituents = 0;
   tau_jet_fracSamplingMax = 0;
   tau_jet_SamplingMax = 0;
   tau_jet_BCH_CORR_CELL = 0;
   tau_jet_BCH_CORR_JET = 0;
   tau_jet_BCH_CORR_JET_FORCELL = 0;
   tau_jet_ENG_BAD_CELLS = 0;
   tau_jet_N_BAD_CELLS = 0;
   tau_jet_N_BAD_CELLS_CORR = 0;
   tau_jet_BAD_CELLS_CORR_E = 0;
   tau_jet_hecf = 0;
   tau_jet_tgap3f = 0;
   tau_jet_isGood = 0;
   tau_jet_emfrac = 0;
   tau_jet_GCWJES = 0;
   tau_jet_EMJES = 0;
   tau_jet_emscale_E = 0;
   tau_jet_emscale_pt = 0;
   tau_jet_emscale_m = 0;
   tau_jet_emscale_eta = 0;
   tau_jet_emscale_phi = 0;
   tau_jet_jvtxf = 0;
   tau_jet_jvtx_x = 0;
   tau_jet_jvtx_y = 0;
   tau_jet_jvtx_z = 0;
   tau_jet_flavor_weight = 0;
   tau_jet_flavor_weight_TrackCounting2D = 0;
   tau_jet_flavor_weight_JetProb = 0;
   tau_jet_flavor_weight_IP1D = 0;
   tau_jet_flavor_weight_IP2D = 0;
   tau_jet_flavor_weight_IP3D = 0;
   tau_jet_flavor_weight_SV0 = 0;
   tau_jet_flavor_weight_SV1 = 0;
   tau_jet_flavor_weight_SV2 = 0;
   tau_jet_flavor_weight_JetFitterTag = 0;
   tau_jet_flavor_weight_JetFitterCOMB = 0;
   tau_jet_flavor_weight_JetFitterTagNN = 0;
   tau_jet_flavor_weight_JetFitterCOMBNN = 0;
   tau_jet_flavor_weight_SoftMuonTag = 0;
   tau_jet_flavor_weight_SoftElectronTag = 0;
   tau_jet_e_PreSamplerB = 0;
   tau_jet_e_EMB1 = 0;
   tau_jet_e_EMB2 = 0;
   tau_jet_e_EMB3 = 0;
   tau_jet_e_PreSamplerE = 0;
   tau_jet_e_EME1 = 0;
   tau_jet_e_EME2 = 0;
   tau_jet_e_EME3 = 0;
   tau_jet_e_HEC0 = 0;
   tau_jet_e_HEC1 = 0;
   tau_jet_e_HEC2 = 0;
   tau_jet_e_HEC3 = 0;
   tau_jet_e_TileBar0 = 0;
   tau_jet_e_TileBar1 = 0;
   tau_jet_e_TileBar2 = 0;
   tau_jet_e_TileGap1 = 0;
   tau_jet_e_TileGap2 = 0;
   tau_jet_e_TileGap3 = 0;
   tau_jet_e_TileExt0 = 0;
   tau_jet_e_TileExt1 = 0;
   tau_jet_e_TileExt2 = 0;
   tau_jet_e_FCAL0 = 0;
   tau_jet_e_FCAL1 = 0;
   tau_jet_e_FCAL2 = 0;
   tau_jet_shapeBins = 0;
   tau_track_n = 0;
   tau_track_d0 = 0;
   tau_track_z0 = 0;
   tau_track_phi = 0;
   tau_track_theta = 0;
   tau_track_qoverp = 0;
   tau_track_pt = 0;
   tau_track_eta = 0;
   tau_track_atPV_d0 = 0;
   tau_track_atPV_z0 = 0;
   tau_track_atPV_phi = 0;
   tau_track_atPV_theta = 0;
   tau_track_atPV_qoverp = 0;
   tau_track_atPV_pt = 0;
   tau_track_atPV_eta = 0;
   tau_track_nBLHits = 0;
   tau_track_nPixHits = 0;
   tau_track_nSCTHits = 0;
   tau_track_nTRTHits = 0;
   tau_track_nPixHoles = 0;
   tau_track_nSCTHoles = 0;
   tau_track_nBLSharedHits = 0;
   tau_track_nPixSharedHits = 0;
   tau_track_nSCTSharedHits = 0;
   tau_track_nTRTHighTHits = 0;
   tau_track_nTRTOutliers = 0;
   tau_track_nTRTHighTOutliers = 0;
   tau_track_nHits = 0;
   tau_track_pixeldEdx = 0;
   tau_EF_dr = 0;
   tau_EF_E = 0;
   tau_EF_Et = 0;
   tau_EF_pt = 0;
   tau_EF_eta = 0;
   tau_EF_phi = 0;
   tau_EF_matched = 0;
   tau_L2_dr = 0;
   tau_L2_E = 0;
   tau_L2_Et = 0;
   tau_L2_pt = 0;
   tau_L2_eta = 0;
   tau_L2_phi = 0;
   tau_L2_matched = 0;
   tau_L1_dr = 0;
   tau_L1_Et = 0;
   tau_L1_pt = 0;
   tau_L1_eta = 0;
   tau_L1_phi = 0;
   tau_L1_matched = 0;
   el_MET_wpx = 0;
   el_MET_wpy = 0;
   el_MET_wet = 0;
   el_MET_statusWord = 0;
   ph_MET_wpx = 0;
   ph_MET_wpy = 0;
   ph_MET_wet = 0;
   ph_MET_statusWord = 0;
   mu_staco_MET_wpx = 0;
   mu_staco_MET_wpy = 0;
   mu_staco_MET_wet = 0;
   mu_staco_MET_statusWord = 0;
   tau_MET_wpx = 0;
   tau_MET_wpy = 0;
   tau_MET_wet = 0;
   tau_MET_statusWord = 0;
   jet_AntiKt4H1Topo_MET_wpx = 0;
   jet_AntiKt4H1Topo_MET_wpy = 0;
   jet_AntiKt4H1Topo_MET_wet = 0;
   jet_AntiKt4H1Topo_MET_statusWord = 0;
   cl_MET_wpx = 0;
   cl_MET_wpy = 0;
   cl_MET_wet = 0;
   cl_MET_statusWord = 0;
   cl_E = 0;
   cl_pt = 0;
   cl_m = 0;
   cl_eta = 0;
   cl_phi = 0;
   el_MET_EMJES_wpx = 0;
   el_MET_EMJES_wpy = 0;
   el_MET_EMJES_wet = 0;
   el_MET_EMJES_statusWord = 0;
   ph_MET_EMJES_wpx = 0;
   ph_MET_EMJES_wpy = 0;
   ph_MET_EMJES_wet = 0;
   ph_MET_EMJES_statusWord = 0;
   mu_staco_MET_EMJES_wpx = 0;
   mu_staco_MET_EMJES_wpy = 0;
   mu_staco_MET_EMJES_wet = 0;
   mu_staco_MET_EMJES_statusWord = 0;
   tau_MET_EMJES_wpx = 0;
   tau_MET_EMJES_wpy = 0;
   tau_MET_EMJES_wet = 0;
   tau_MET_EMJES_statusWord = 0;
   jet_AntiKt4TopoEM_MET_EMJES_wpx = 0;
   jet_AntiKt4TopoEM_MET_EMJES_wpy = 0;
   jet_AntiKt4TopoEM_MET_EMJES_wet = 0;
   jet_AntiKt4TopoEM_MET_EMJES_statusWord = 0;
   cl_MET_LocHad_wpx = 0;
   cl_MET_LocHad_wpy = 0;
   cl_MET_LocHad_wet = 0;
   cl_MET_LocHad_statusWord = 0;
   cl_MET_EM_20GeVJets_wpx = 0;
   cl_MET_EM_20GeVJets_wpy = 0;
   cl_MET_EM_20GeVJets_wet = 0;
   cl_MET_EM_20GeVJets_statusWord = 0;
   cl_MET_EM_30GeVJets_wpx = 0;
   cl_MET_EM_30GeVJets_wpy = 0;
   cl_MET_EM_30GeVJets_wet = 0;
   cl_MET_EM_30GeVJets_statusWord = 0;
   jet_AntiKt4H1Tower_E = 0;
   jet_AntiKt4H1Tower_pt = 0;
   jet_AntiKt4H1Tower_m = 0;
   jet_AntiKt4H1Tower_eta = 0;
   jet_AntiKt4H1Tower_phi = 0;
   jet_AntiKt4H1Tower_EtaPhys = 0;
   jet_AntiKt4H1Tower_PhiPhys = 0;
   jet_AntiKt4H1Tower_MPhys = 0;
   jet_AntiKt4H1Tower_WIDTH = 0;
   jet_AntiKt4H1Tower_n90 = 0;
   jet_AntiKt4H1Tower_Timing = 0;
   jet_AntiKt4H1Tower_LArQuality = 0;
   jet_AntiKt4H1Tower_nTrk = 0;
   jet_AntiKt4H1Tower_sumPtTrk = 0;
   jet_AntiKt4H1Tower_OriginIndex = 0;
   jet_AntiKt4H1Tower_HECQuality = 0;
   jet_AntiKt4H1Tower_NegativeE = 0;
   jet_AntiKt4H1Tower_BCH_CORR_CELL = 0;
   jet_AntiKt4H1Tower_BCH_CORR_DOTX = 0;
   jet_AntiKt4H1Tower_BCH_CORR_JET = 0;
   jet_AntiKt4H1Tower_BCH_CORR_JET_FORCELL = 0;
   jet_AntiKt4H1Tower_ENG_BAD_CELLS = 0;
   jet_AntiKt4H1Tower_N_BAD_CELLS = 0;
   jet_AntiKt4H1Tower_N_BAD_CELLS_CORR = 0;
   jet_AntiKt4H1Tower_BAD_CELLS_CORR_E = 0;
   jet_AntiKt4H1Tower_SamplingMax = 0;
   jet_AntiKt4H1Tower_fracSamplingMax = 0;
   jet_AntiKt4H1Tower_hecf = 0;
   jet_AntiKt4H1Tower_tgap3f = 0;
   jet_AntiKt4H1Tower_isGood = 0;
   jet_AntiKt4H1Tower_emfrac = 0;
   jet_AntiKt4H1Tower_GCWJES = 0;
   jet_AntiKt4H1Tower_EMJES = 0;
   jet_AntiKt4H1Tower_CB = 0;
   jet_AntiKt4H1Tower_emscale_E = 0;
   jet_AntiKt4H1Tower_emscale_pt = 0;
   jet_AntiKt4H1Tower_emscale_m = 0;
   jet_AntiKt4H1Tower_emscale_eta = 0;
   jet_AntiKt4H1Tower_emscale_phi = 0;
   jet_AntiKt4H1Tower_jvtxf = 0;
   jet_AntiKt4H1Tower_jvtx_x = 0;
   jet_AntiKt4H1Tower_jvtx_y = 0;
   jet_AntiKt4H1Tower_jvtx_z = 0;
   jet_AntiKt4H1Tower_e_PreSamplerB = 0;
   jet_AntiKt4H1Tower_e_EMB1 = 0;
   jet_AntiKt4H1Tower_e_EMB2 = 0;
   jet_AntiKt4H1Tower_e_EMB3 = 0;
   jet_AntiKt4H1Tower_e_PreSamplerE = 0;
   jet_AntiKt4H1Tower_e_EME1 = 0;
   jet_AntiKt4H1Tower_e_EME2 = 0;
   jet_AntiKt4H1Tower_e_EME3 = 0;
   jet_AntiKt4H1Tower_e_HEC0 = 0;
   jet_AntiKt4H1Tower_e_HEC1 = 0;
   jet_AntiKt4H1Tower_e_HEC2 = 0;
   jet_AntiKt4H1Tower_e_HEC3 = 0;
   jet_AntiKt4H1Tower_e_TileBar0 = 0;
   jet_AntiKt4H1Tower_e_TileBar1 = 0;
   jet_AntiKt4H1Tower_e_TileBar2 = 0;
   jet_AntiKt4H1Tower_e_TileGap1 = 0;
   jet_AntiKt4H1Tower_e_TileGap2 = 0;
   jet_AntiKt4H1Tower_e_TileGap3 = 0;
   jet_AntiKt4H1Tower_e_TileExt0 = 0;
   jet_AntiKt4H1Tower_e_TileExt1 = 0;
   jet_AntiKt4H1Tower_e_TileExt2 = 0;
   jet_AntiKt4H1Tower_e_FCAL0 = 0;
   jet_AntiKt4H1Tower_e_FCAL1 = 0;
   jet_AntiKt4H1Tower_e_FCAL2 = 0;
   jet_AntiKt4H1Tower_Nconst = 0;
   jet_AntiKt4H1Tower_ptconst_emscale = 0;
   jet_AntiKt4H1Tower_econst_emscale = 0;
   jet_AntiKt4H1Tower_etaconst_emscale = 0;
   jet_AntiKt4H1Tower_phiconst_emscale = 0;
   jet_AntiKt4H1Tower_weightconst_emscale = 0;
   jet_AntiKt4H1Tower_constscale_E = 0;
   jet_AntiKt4H1Tower_constscale_pt = 0;
   jet_AntiKt4H1Tower_constscale_m = 0;
   jet_AntiKt4H1Tower_constscale_eta = 0;
   jet_AntiKt4H1Tower_constscale_phi = 0;
   jet_AntiKt4H1Tower_flavor_component_ip2d_pu = 0;
   jet_AntiKt4H1Tower_flavor_component_ip2d_pb = 0;
   jet_AntiKt4H1Tower_flavor_component_ip2d_ntrk = 0;
   jet_AntiKt4H1Tower_flavor_component_ip3d_pu = 0;
   jet_AntiKt4H1Tower_flavor_component_ip3d_pb = 0;
   jet_AntiKt4H1Tower_flavor_component_ip3d_ntrk = 0;
   jet_AntiKt4H1Tower_flavor_component_sv1_pu = 0;
   jet_AntiKt4H1Tower_flavor_component_sv1_pb = 0;
   jet_AntiKt4H1Tower_flavor_component_sv2_pu = 0;
   jet_AntiKt4H1Tower_flavor_component_sv2_pb = 0;
   jet_AntiKt4H1Tower_flavor_component_svp_mass = 0;
   jet_AntiKt4H1Tower_flavor_component_svp_n2t = 0;
   jet_AntiKt4H1Tower_flavor_component_svp_svok = 0;
   jet_AntiKt4H1Tower_flavor_component_svp_ntrk = 0;
   jet_AntiKt4H1Tower_flavor_component_svp_ntrkv = 0;
   jet_AntiKt4H1Tower_flavor_component_svp_ntrkj = 0;
   jet_AntiKt4H1Tower_flavor_component_svp_efrc = 0;
   jet_AntiKt4H1Tower_flavor_component_sv0p_mass = 0;
   jet_AntiKt4H1Tower_flavor_component_sv0p_n2t = 0;
   jet_AntiKt4H1Tower_flavor_component_sv0p_svok = 0;
   jet_AntiKt4H1Tower_flavor_component_sv0p_ntrk = 0;
   jet_AntiKt4H1Tower_flavor_component_sv0p_ntrkv = 0;
   jet_AntiKt4H1Tower_flavor_component_sv0p_ntrkj = 0;
   jet_AntiKt4H1Tower_flavor_component_sv0p_efrc = 0;
   jet_AntiKt4H1Tower_flavor_component_jfit_pu = 0;
   jet_AntiKt4H1Tower_flavor_component_jfit_pb = 0;
   jet_AntiKt4H1Tower_flavor_component_jfit_nvtxnt = 0;
   jet_AntiKt4H1Tower_flavor_component_jfit_nvtx1t = 0;
   jet_AntiKt4H1Tower_flavor_component_jfit_ntrk = 0;
   jet_AntiKt4H1Tower_flavor_component_jfit_efrc = 0;
   jet_AntiKt4H1Tower_flavor_component_jfit_mass = 0;
   jet_AntiKt4H1Tower_flavor_component_jfit_sig3d = 0;
   jet_AntiKt4H1Tower_flavor_weight = 0;
   jet_AntiKt4H1Tower_flavor_weight_TrackCounting2D = 0;
   jet_AntiKt4H1Tower_flavor_weight_JetProb = 0;
   jet_AntiKt4H1Tower_flavor_weight_IP1D = 0;
   jet_AntiKt4H1Tower_flavor_weight_IP2D = 0;
   jet_AntiKt4H1Tower_flavor_weight_IP3D = 0;
   jet_AntiKt4H1Tower_flavor_weight_SV0 = 0;
   jet_AntiKt4H1Tower_flavor_weight_SV1 = 0;
   jet_AntiKt4H1Tower_flavor_weight_SV2 = 0;
   jet_AntiKt4H1Tower_flavor_weight_JetFitterTag = 0;
   jet_AntiKt4H1Tower_flavor_weight_JetFitterCOMB = 0;
   jet_AntiKt4H1Tower_flavor_weight_JetFitterTagNN = 0;
   jet_AntiKt4H1Tower_flavor_weight_JetFitterCOMBNN = 0;
   jet_AntiKt4H1Tower_flavor_weight_SoftMuonTag = 0;
   jet_AntiKt4H1Tower_flavor_weight_SoftElectronTag = 0;
   jet_AntiKt4H1Tower_el_dr = 0;
   jet_AntiKt4H1Tower_el_matched = 0;
   jet_AntiKt4H1Tower_mu_dr = 0;
   jet_AntiKt4H1Tower_mu_matched = 0;
   jet_AntiKt4H1Topo_E = 0;
   jet_AntiKt4H1Topo_pt = 0;
   jet_AntiKt4H1Topo_m = 0;
   jet_AntiKt4H1Topo_eta = 0;
   jet_AntiKt4H1Topo_phi = 0;
   jet_AntiKt4H1Topo_EtaPhys = 0;
   jet_AntiKt4H1Topo_PhiPhys = 0;
   jet_AntiKt4H1Topo_MPhys = 0;
   jet_AntiKt4H1Topo_WIDTH = 0;
   jet_AntiKt4H1Topo_n90 = 0;
   jet_AntiKt4H1Topo_Timing = 0;
   jet_AntiKt4H1Topo_LArQuality = 0;
   jet_AntiKt4H1Topo_nTrk = 0;
   jet_AntiKt4H1Topo_sumPtTrk = 0;
   jet_AntiKt4H1Topo_OriginIndex = 0;
   jet_AntiKt4H1Topo_HECQuality = 0;
   jet_AntiKt4H1Topo_NegativeE = 0;
   jet_AntiKt4H1Topo_BCH_CORR_CELL = 0;
   jet_AntiKt4H1Topo_BCH_CORR_DOTX = 0;
   jet_AntiKt4H1Topo_BCH_CORR_JET = 0;
   jet_AntiKt4H1Topo_BCH_CORR_JET_FORCELL = 0;
   jet_AntiKt4H1Topo_ENG_BAD_CELLS = 0;
   jet_AntiKt4H1Topo_N_BAD_CELLS = 0;
   jet_AntiKt4H1Topo_N_BAD_CELLS_CORR = 0;
   jet_AntiKt4H1Topo_BAD_CELLS_CORR_E = 0;
   jet_AntiKt4H1Topo_SamplingMax = 0;
   jet_AntiKt4H1Topo_fracSamplingMax = 0;
   jet_AntiKt4H1Topo_hecf = 0;
   jet_AntiKt4H1Topo_tgap3f = 0;
   jet_AntiKt4H1Topo_isGood = 0;
   jet_AntiKt4H1Topo_emfrac = 0;
   jet_AntiKt4H1Topo_GCWJES = 0;
   jet_AntiKt4H1Topo_EMJES = 0;
   jet_AntiKt4H1Topo_CB = 0;
   jet_AntiKt4H1Topo_emscale_E = 0;
   jet_AntiKt4H1Topo_emscale_pt = 0;
   jet_AntiKt4H1Topo_emscale_m = 0;
   jet_AntiKt4H1Topo_emscale_eta = 0;
   jet_AntiKt4H1Topo_emscale_phi = 0;
   jet_AntiKt4H1Topo_jvtxf = 0;
   jet_AntiKt4H1Topo_jvtx_x = 0;
   jet_AntiKt4H1Topo_jvtx_y = 0;
   jet_AntiKt4H1Topo_jvtx_z = 0;
   jet_AntiKt4H1Topo_e_PreSamplerB = 0;
   jet_AntiKt4H1Topo_e_EMB1 = 0;
   jet_AntiKt4H1Topo_e_EMB2 = 0;
   jet_AntiKt4H1Topo_e_EMB3 = 0;
   jet_AntiKt4H1Topo_e_PreSamplerE = 0;
   jet_AntiKt4H1Topo_e_EME1 = 0;
   jet_AntiKt4H1Topo_e_EME2 = 0;
   jet_AntiKt4H1Topo_e_EME3 = 0;
   jet_AntiKt4H1Topo_e_HEC0 = 0;
   jet_AntiKt4H1Topo_e_HEC1 = 0;
   jet_AntiKt4H1Topo_e_HEC2 = 0;
   jet_AntiKt4H1Topo_e_HEC3 = 0;
   jet_AntiKt4H1Topo_e_TileBar0 = 0;
   jet_AntiKt4H1Topo_e_TileBar1 = 0;
   jet_AntiKt4H1Topo_e_TileBar2 = 0;
   jet_AntiKt4H1Topo_e_TileGap1 = 0;
   jet_AntiKt4H1Topo_e_TileGap2 = 0;
   jet_AntiKt4H1Topo_e_TileGap3 = 0;
   jet_AntiKt4H1Topo_e_TileExt0 = 0;
   jet_AntiKt4H1Topo_e_TileExt1 = 0;
   jet_AntiKt4H1Topo_e_TileExt2 = 0;
   jet_AntiKt4H1Topo_e_FCAL0 = 0;
   jet_AntiKt4H1Topo_e_FCAL1 = 0;
   jet_AntiKt4H1Topo_e_FCAL2 = 0;
   jet_AntiKt4H1Topo_Nconst = 0;
   jet_AntiKt4H1Topo_ptconst_emscale = 0;
   jet_AntiKt4H1Topo_econst_emscale = 0;
   jet_AntiKt4H1Topo_etaconst_emscale = 0;
   jet_AntiKt4H1Topo_phiconst_emscale = 0;
   jet_AntiKt4H1Topo_weightconst_emscale = 0;
   jet_AntiKt4H1Topo_constscale_E = 0;
   jet_AntiKt4H1Topo_constscale_pt = 0;
   jet_AntiKt4H1Topo_constscale_m = 0;
   jet_AntiKt4H1Topo_constscale_eta = 0;
   jet_AntiKt4H1Topo_constscale_phi = 0;
   jet_AntiKt4H1Topo_flavor_component_ip2d_pu = 0;
   jet_AntiKt4H1Topo_flavor_component_ip2d_pb = 0;
   jet_AntiKt4H1Topo_flavor_component_ip2d_ntrk = 0;
   jet_AntiKt4H1Topo_flavor_component_ip3d_pu = 0;
   jet_AntiKt4H1Topo_flavor_component_ip3d_pb = 0;
   jet_AntiKt4H1Topo_flavor_component_ip3d_ntrk = 0;
   jet_AntiKt4H1Topo_flavor_component_sv1_pu = 0;
   jet_AntiKt4H1Topo_flavor_component_sv1_pb = 0;
   jet_AntiKt4H1Topo_flavor_component_sv2_pu = 0;
   jet_AntiKt4H1Topo_flavor_component_sv2_pb = 0;
   jet_AntiKt4H1Topo_flavor_component_svp_mass = 0;
   jet_AntiKt4H1Topo_flavor_component_svp_n2t = 0;
   jet_AntiKt4H1Topo_flavor_component_svp_svok = 0;
   jet_AntiKt4H1Topo_flavor_component_svp_ntrk = 0;
   jet_AntiKt4H1Topo_flavor_component_svp_ntrkv = 0;
   jet_AntiKt4H1Topo_flavor_component_svp_ntrkj = 0;
   jet_AntiKt4H1Topo_flavor_component_svp_efrc = 0;
   jet_AntiKt4H1Topo_flavor_component_sv0p_mass = 0;
   jet_AntiKt4H1Topo_flavor_component_sv0p_n2t = 0;
   jet_AntiKt4H1Topo_flavor_component_sv0p_svok = 0;
   jet_AntiKt4H1Topo_flavor_component_sv0p_ntrk = 0;
   jet_AntiKt4H1Topo_flavor_component_sv0p_ntrkv = 0;
   jet_AntiKt4H1Topo_flavor_component_sv0p_ntrkj = 0;
   jet_AntiKt4H1Topo_flavor_component_sv0p_efrc = 0;
   jet_AntiKt4H1Topo_flavor_component_jfit_pu = 0;
   jet_AntiKt4H1Topo_flavor_component_jfit_pb = 0;
   jet_AntiKt4H1Topo_flavor_component_jfit_nvtxnt = 0;
   jet_AntiKt4H1Topo_flavor_component_jfit_nvtx1t = 0;
   jet_AntiKt4H1Topo_flavor_component_jfit_ntrk = 0;
   jet_AntiKt4H1Topo_flavor_component_jfit_efrc = 0;
   jet_AntiKt4H1Topo_flavor_component_jfit_mass = 0;
   jet_AntiKt4H1Topo_flavor_component_jfit_sig3d = 0;
   jet_AntiKt4H1Topo_flavor_weight = 0;
   jet_AntiKt4H1Topo_flavor_weight_TrackCounting2D = 0;
   jet_AntiKt4H1Topo_flavor_weight_JetProb = 0;
   jet_AntiKt4H1Topo_flavor_weight_IP1D = 0;
   jet_AntiKt4H1Topo_flavor_weight_IP2D = 0;
   jet_AntiKt4H1Topo_flavor_weight_IP3D = 0;
   jet_AntiKt4H1Topo_flavor_weight_SV0 = 0;
   jet_AntiKt4H1Topo_flavor_weight_SV1 = 0;
   jet_AntiKt4H1Topo_flavor_weight_SV2 = 0;
   jet_AntiKt4H1Topo_flavor_weight_JetFitterTag = 0;
   jet_AntiKt4H1Topo_flavor_weight_JetFitterCOMB = 0;
   jet_AntiKt4H1Topo_flavor_weight_JetFitterTagNN = 0;
   jet_AntiKt4H1Topo_flavor_weight_JetFitterCOMBNN = 0;
   jet_AntiKt4H1Topo_flavor_weight_SoftMuonTag = 0;
   jet_AntiKt4H1Topo_flavor_weight_SoftElectronTag = 0;
   jet_AntiKt4H1Topo_el_dr = 0;
   jet_AntiKt4H1Topo_el_matched = 0;
   jet_AntiKt4H1Topo_mu_dr = 0;
   jet_AntiKt4H1Topo_mu_matched = 0;
   jet_AntiKt4TopoEMJES_E = 0;
   jet_AntiKt4TopoEMJES_pt = 0;
   jet_AntiKt4TopoEMJES_m = 0;
   jet_AntiKt4TopoEMJES_eta = 0;
   jet_AntiKt4TopoEMJES_phi = 0;
   jet_AntiKt4TopoEMJES_EtaPhys = 0;
   jet_AntiKt4TopoEMJES_PhiPhys = 0;
   jet_AntiKt4TopoEMJES_MPhys = 0;
   jet_AntiKt4TopoEMJES_WIDTH = 0;
   jet_AntiKt4TopoEMJES_n90 = 0;
   jet_AntiKt4TopoEMJES_Timing = 0;
   jet_AntiKt4TopoEMJES_LArQuality = 0;
   jet_AntiKt4TopoEMJES_nTrk = 0;
   jet_AntiKt4TopoEMJES_sumPtTrk = 0;
   jet_AntiKt4TopoEMJES_OriginIndex = 0;
   jet_AntiKt4TopoEMJES_HECQuality = 0;
   jet_AntiKt4TopoEMJES_NegativeE = 0;
   jet_AntiKt4TopoEMJES_BCH_CORR_CELL = 0;
   jet_AntiKt4TopoEMJES_BCH_CORR_DOTX = 0;
   jet_AntiKt4TopoEMJES_BCH_CORR_JET = 0;
   jet_AntiKt4TopoEMJES_BCH_CORR_JET_FORCELL = 0;
   jet_AntiKt4TopoEMJES_ENG_BAD_CELLS = 0;
   jet_AntiKt4TopoEMJES_N_BAD_CELLS = 0;
   jet_AntiKt4TopoEMJES_N_BAD_CELLS_CORR = 0;
   jet_AntiKt4TopoEMJES_BAD_CELLS_CORR_E = 0;
   jet_AntiKt4TopoEMJES_SamplingMax = 0;
   jet_AntiKt4TopoEMJES_fracSamplingMax = 0;
   jet_AntiKt4TopoEMJES_hecf = 0;
   jet_AntiKt4TopoEMJES_tgap3f = 0;
   jet_AntiKt4TopoEMJES_isGood = 0;
   jet_AntiKt4TopoEMJES_emfrac = 0;
   jet_AntiKt4TopoEMJES_GCWJES = 0;
   jet_AntiKt4TopoEMJES_EMJES = 0;
   jet_AntiKt4TopoEMJES_CB = 0;
   jet_AntiKt4TopoEMJES_emscale_E = 0;
   jet_AntiKt4TopoEMJES_emscale_pt = 0;
   jet_AntiKt4TopoEMJES_emscale_m = 0;
   jet_AntiKt4TopoEMJES_emscale_eta = 0;
   jet_AntiKt4TopoEMJES_emscale_phi = 0;
   jet_AntiKt4TopoEMJES_jvtxf = 0;
   jet_AntiKt4TopoEMJES_jvtx_x = 0;
   jet_AntiKt4TopoEMJES_jvtx_y = 0;
   jet_AntiKt4TopoEMJES_jvtx_z = 0;
   jet_AntiKt4TopoEMJES_e_PreSamplerB = 0;
   jet_AntiKt4TopoEMJES_e_EMB1 = 0;
   jet_AntiKt4TopoEMJES_e_EMB2 = 0;
   jet_AntiKt4TopoEMJES_e_EMB3 = 0;
   jet_AntiKt4TopoEMJES_e_PreSamplerE = 0;
   jet_AntiKt4TopoEMJES_e_EME1 = 0;
   jet_AntiKt4TopoEMJES_e_EME2 = 0;
   jet_AntiKt4TopoEMJES_e_EME3 = 0;
   jet_AntiKt4TopoEMJES_e_HEC0 = 0;
   jet_AntiKt4TopoEMJES_e_HEC1 = 0;
   jet_AntiKt4TopoEMJES_e_HEC2 = 0;
   jet_AntiKt4TopoEMJES_e_HEC3 = 0;
   jet_AntiKt4TopoEMJES_e_TileBar0 = 0;
   jet_AntiKt4TopoEMJES_e_TileBar1 = 0;
   jet_AntiKt4TopoEMJES_e_TileBar2 = 0;
   jet_AntiKt4TopoEMJES_e_TileGap1 = 0;
   jet_AntiKt4TopoEMJES_e_TileGap2 = 0;
   jet_AntiKt4TopoEMJES_e_TileGap3 = 0;
   jet_AntiKt4TopoEMJES_e_TileExt0 = 0;
   jet_AntiKt4TopoEMJES_e_TileExt1 = 0;
   jet_AntiKt4TopoEMJES_e_TileExt2 = 0;
   jet_AntiKt4TopoEMJES_e_FCAL0 = 0;
   jet_AntiKt4TopoEMJES_e_FCAL1 = 0;
   jet_AntiKt4TopoEMJES_e_FCAL2 = 0;
   jet_AntiKt4TopoEMJES_Nconst = 0;
   jet_AntiKt4TopoEMJES_ptconst_emscale = 0;
   jet_AntiKt4TopoEMJES_econst_emscale = 0;
   jet_AntiKt4TopoEMJES_etaconst_emscale = 0;
   jet_AntiKt4TopoEMJES_phiconst_emscale = 0;
   jet_AntiKt4TopoEMJES_weightconst_emscale = 0;
   jet_AntiKt4TopoEMJES_constscale_E = 0;
   jet_AntiKt4TopoEMJES_constscale_pt = 0;
   jet_AntiKt4TopoEMJES_constscale_m = 0;
   jet_AntiKt4TopoEMJES_constscale_eta = 0;
   jet_AntiKt4TopoEMJES_constscale_phi = 0;
   jet_AntiKt4TopoEMJES_flavor_component_ip2d_pu = 0;
   jet_AntiKt4TopoEMJES_flavor_component_ip2d_pb = 0;
   jet_AntiKt4TopoEMJES_flavor_component_ip2d_ntrk = 0;
   jet_AntiKt4TopoEMJES_flavor_component_ip3d_pu = 0;
   jet_AntiKt4TopoEMJES_flavor_component_ip3d_pb = 0;
   jet_AntiKt4TopoEMJES_flavor_component_ip3d_ntrk = 0;
   jet_AntiKt4TopoEMJES_flavor_component_sv1_pu = 0;
   jet_AntiKt4TopoEMJES_flavor_component_sv1_pb = 0;
   jet_AntiKt4TopoEMJES_flavor_component_sv2_pu = 0;
   jet_AntiKt4TopoEMJES_flavor_component_sv2_pb = 0;
   jet_AntiKt4TopoEMJES_flavor_component_svp_mass = 0;
   jet_AntiKt4TopoEMJES_flavor_component_svp_n2t = 0;
   jet_AntiKt4TopoEMJES_flavor_component_svp_svok = 0;
   jet_AntiKt4TopoEMJES_flavor_component_svp_ntrk = 0;
   jet_AntiKt4TopoEMJES_flavor_component_svp_ntrkv = 0;
   jet_AntiKt4TopoEMJES_flavor_component_svp_ntrkj = 0;
   jet_AntiKt4TopoEMJES_flavor_component_svp_efrc = 0;
   jet_AntiKt4TopoEMJES_flavor_component_sv0p_mass = 0;
   jet_AntiKt4TopoEMJES_flavor_component_sv0p_n2t = 0;
   jet_AntiKt4TopoEMJES_flavor_component_sv0p_svok = 0;
   jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrk = 0;
   jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrkv = 0;
   jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrkj = 0;
   jet_AntiKt4TopoEMJES_flavor_component_sv0p_efrc = 0;
   jet_AntiKt4TopoEMJES_flavor_component_jfit_pu = 0;
   jet_AntiKt4TopoEMJES_flavor_component_jfit_pb = 0;
   jet_AntiKt4TopoEMJES_flavor_component_jfit_nvtxnt = 0;
   jet_AntiKt4TopoEMJES_flavor_component_jfit_nvtx1t = 0;
   jet_AntiKt4TopoEMJES_flavor_component_jfit_ntrk = 0;
   jet_AntiKt4TopoEMJES_flavor_component_jfit_efrc = 0;
   jet_AntiKt4TopoEMJES_flavor_component_jfit_mass = 0;
   jet_AntiKt4TopoEMJES_flavor_component_jfit_sig3d = 0;
   jet_AntiKt4TopoEMJES_flavor_weight = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_TrackCounting2D = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_JetProb = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_IP1D = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_IP2D = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_IP3D = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_SV0 = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_SV1 = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_SV2 = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_JetFitterTag = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_JetFitterCOMB = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_JetFitterTagNN = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_JetFitterCOMBNN = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_SoftMuonTag = 0;
   jet_AntiKt4TopoEMJES_flavor_weight_SoftElectronTag = 0;
   jet_AntiKt4TopoEMJES_el_dr = 0;
   jet_AntiKt4TopoEMJES_el_matched = 0;
   jet_AntiKt4TopoEMJES_mu_dr = 0;
   jet_AntiKt4TopoEMJES_mu_matched = 0;
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
   SkimDecision_name = 0;
   SkimDecision_accepted = 0;
   ti_staco_topo_Jet_use = 0;
   ti_staco_topo_Jet_index = 0;
   ti_staco_topo_Jet_overlap_jetn = 0;
   ti_staco_topo_Jet_overlap_jetindex = 0;
   ti_staco_topo_Jet_overlap_mun = 0;
   ti_staco_topo_Jet_overlap_muindex = 0;
   ti_staco_topo_Jet_overlap_taun = 0;
   ti_staco_topo_Jet_overlap_tauindex = 0;
   ti_staco_topo_Mu_use = 0;
   ti_staco_topo_Mu_index = 0;
   ti_staco_topo_Mu_overlap_jetn = 0;
   ti_staco_topo_Mu_overlap_jetindex = 0;
   ti_staco_topo_Mu_overlap_mun = 0;
   ti_staco_topo_Mu_overlap_muindex = 0;
   ti_staco_topo_Mu_overlap_taun = 0;
   ti_staco_topo_Mu_overlap_tauindex = 0;
   ti_staco_topo_El_use = 0;
   ti_staco_topo_El_index = 0;
   ti_staco_topo_El_overlap_jetn = 0;
   ti_staco_topo_El_overlap_jetindex = 0;
   ti_staco_topo_El_overlap_mun = 0;
   ti_staco_topo_El_overlap_muindex = 0;
   ti_staco_topo_El_overlap_taun = 0;
   ti_staco_topo_El_overlap_tauindex = 0;
   ti_staco_tower_Jet_use = 0;
   ti_staco_tower_Jet_index = 0;
   ti_staco_tower_Jet_overlap_jetn = 0;
   ti_staco_tower_Jet_overlap_jetindex = 0;
   ti_staco_tower_Jet_overlap_mun = 0;
   ti_staco_tower_Jet_overlap_muindex = 0;
   ti_staco_tower_Jet_overlap_taun = 0;
   ti_staco_tower_Jet_overlap_tauindex = 0;
   ti_staco_tower_Mu_use = 0;
   ti_staco_tower_Mu_index = 0;
   ti_staco_tower_Mu_overlap_jetn = 0;
   ti_staco_tower_Mu_overlap_jetindex = 0;
   ti_staco_tower_Mu_overlap_mun = 0;
   ti_staco_tower_Mu_overlap_muindex = 0;
   ti_staco_tower_Mu_overlap_taun = 0;
   ti_staco_tower_Mu_overlap_tauindex = 0;
   ti_staco_tower_El_use = 0;
   ti_staco_tower_El_index = 0;
   ti_staco_tower_El_overlap_jetn = 0;
   ti_staco_tower_El_overlap_jetindex = 0;
   ti_staco_tower_El_overlap_mun = 0;
   ti_staco_tower_El_overlap_muindex = 0;
   ti_staco_tower_El_overlap_taun = 0;
   ti_staco_tower_El_overlap_tauindex = 0;
   MET_Goodness_BCH_CORR_CELL_Jet = 0;
   MET_Goodness_BCH_CORR_JET = 0;
   MET_Goodness_BCH_CORR_JET_FORCELL_Jet = 0;
   MET_Goodness_ChargeFraction_Jet = 0;
   MET_Goodness_DeltaEt_JetAlgs_Jet = 0;
   MET_Goodness_DeltaEta_JetAlgs_Jet = 0;
   MET_Goodness_DeltaPhi_JetAlgs_Jet = 0;
   MET_Goodness_DeltaPhi_MET_Jet = 0;
   MET_Goodness_ECal_Jet = 0;
   MET_Goodness_EMFraction_Jet = 0;
   MET_Goodness_E_BadCellsCorr_Jet = 0;
   MET_Goodness_E_BadCells_Jet = 0;
   MET_Goodness_Eta_Jet = 0;
   MET_Goodness_HECf_Jet = 0;
   MET_Goodness_LArQuality_Jet = 0;
   MET_Goodness_Phi_Jet = 0;
   MET_Goodness_PtCal_Jet = 0;
   MET_Goodness_QualityFrac_Jet = 0;
   MET_Goodness_SamplingFracCryo_Jet = 0;
   MET_Goodness_SamplingFracEM_Jet = 0;
   MET_Goodness_SamplingFracFCAL_Jet = 0;
   MET_Goodness_SamplingFracGap_Jet = 0;
   MET_Goodness_SamplingFracHEC3_Jet = 0;
   MET_Goodness_SamplingFracHEC_Jet = 0;
   MET_Goodness_SamplingFracMax_Jet = 0;
   MET_Goodness_SamplingFracPS_Jet = 0;
   MET_Goodness_SamplingFracTile10_Jet = 0;
   MET_Goodness_SamplingFracTile2_Jet = 0;
   MET_Goodness_SamplingFracTile_Jet = 0;
   MET_Goodness_TileQuality_Jet = 0;
   MET_Goodness_Timing_Jet = 0;
   MET_Goodness_ootE25_Jet = 0;
   MET_Goodness_ootE50_Jet = 0;
   MET_Goodness_ootE75_Jet = 0;
   MET_Goodness_tileGap3F_Jet = 0;
   MET_Goodness_N90Cells_Jet = 0;
   MET_Goodness_N90Constituents_Jet = 0;
   MET_Goodness_NConstituents_Jet = 0;
   MET_Goodness_N_BadCellsCorr_Jet = 0;
   MET_Goodness_N_BadCells_Jet = 0;
   MET_Goodness_NumTracks_Jet = 0;
   MET_Goodness_SamplingMaxID_Jet = 0;
   MET_Goodness_isBad_Jet = 0;
   MET_Goodness_isGood_Jet = 0;
   MET_Goodness_isUgly_Jet = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);


   fChain->SetBranchAddress("EF_mu10_MSonly", &EF_mu10_MSonly, &b_EF_mu10_MSonly);
   fChain->SetBranchAddress("L1_MU6", &L1_MU6, &b_L1_MU6);
   fChain->SetBranchAddress("EF_mu13", &EF_mu13, &b_EF_mu13);
   fChain->SetBranchAddress("EF_mu13_tight", &EF_mu13_tight, &b_EF_mu13_tight);
   fChain->SetBranchAddress("L1_2J15", &L1_2J15, &b_L1_2J15);
   fChain->SetBranchAddress("L1_TAU11", &L1_TAU11, &b_L1_TAU11);

   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("timestamp", &timestamp, &b_timestamp);
   fChain->SetBranchAddress("timestamp_ns", &timestamp_ns, &b_timestamp_ns);
   fChain->SetBranchAddress("lbn", &lbn, &b_lbn);
   fChain->SetBranchAddress("bcid", &bcid, &b_bcid);
   fChain->SetBranchAddress("detmask0", &detmask0, &b_detmask0);
   fChain->SetBranchAddress("detmask1", &detmask1, &b_detmask1);
   fChain->SetBranchAddress("pixelFlags", &pixelFlags, &b_pixelFlags);
   fChain->SetBranchAddress("sctFlags", &sctFlags, &b_sctFlags);
   fChain->SetBranchAddress("trtFlags", &trtFlags, &b_trtFlags);
   fChain->SetBranchAddress("larFlags", &larFlags, &b_larFlags);
   fChain->SetBranchAddress("tileFlags", &tileFlags, &b_tileFlags);
   fChain->SetBranchAddress("muonFlags", &muonFlags, &b_muonFlags);
   fChain->SetBranchAddress("fwdFlags", &fwdFlags, &b_fwdFlags);
   fChain->SetBranchAddress("coreFlags", &coreFlags, &b_coreFlags);
   fChain->SetBranchAddress("pixelError", &pixelError, &b_pixelError);
   fChain->SetBranchAddress("sctError", &sctError, &b_sctError);
   fChain->SetBranchAddress("trtError", &trtError, &b_trtError);
   fChain->SetBranchAddress("larError", &larError, &b_larError);
   fChain->SetBranchAddress("tileError", &tileError, &b_tileError);
   fChain->SetBranchAddress("muonError", &muonError, &b_muonError);
   fChain->SetBranchAddress("fwdError", &fwdError, &b_fwdError);
   fChain->SetBranchAddress("coreError", &coreError, &b_coreError);
   fChain->SetBranchAddress("el_n", &el_n, &b_el_n);
   fChain->SetBranchAddress("el_E", &el_E, &b_el_E);
   fChain->SetBranchAddress("el_Et", &el_Et, &b_el_Et);
   fChain->SetBranchAddress("el_pt", &el_pt, &b_el_pt);
   fChain->SetBranchAddress("el_m", &el_m, &b_el_m);
   fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
   fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
   fChain->SetBranchAddress("el_px", &el_px, &b_el_px);
   fChain->SetBranchAddress("el_py", &el_py, &b_el_py);
   fChain->SetBranchAddress("el_pz", &el_pz, &b_el_pz);
   fChain->SetBranchAddress("el_charge", &el_charge, &b_el_charge);
   fChain->SetBranchAddress("el_author", &el_author, &b_el_author);
   fChain->SetBranchAddress("el_isEM", &el_isEM, &b_el_isEM);
   fChain->SetBranchAddress("el_convFlag", &el_convFlag, &b_el_convFlag);
   fChain->SetBranchAddress("el_isConv", &el_isConv, &b_el_isConv);
   fChain->SetBranchAddress("el_nConv", &el_nConv, &b_el_nConv);
   fChain->SetBranchAddress("el_nSingleTrackConv", &el_nSingleTrackConv, &b_el_nSingleTrackConv);
   fChain->SetBranchAddress("el_nDoubleTrackConv", &el_nDoubleTrackConv, &b_el_nDoubleTrackConv);
   fChain->SetBranchAddress("el_loose", &el_loose, &b_el_loose);
   fChain->SetBranchAddress("el_medium", &el_medium, &b_el_medium);
   fChain->SetBranchAddress("el_mediumIso", &el_mediumIso, &b_el_mediumIso);
   fChain->SetBranchAddress("el_tight", &el_tight, &b_el_tight);
   fChain->SetBranchAddress("el_tightIso", &el_tightIso, &b_el_tightIso);
   fChain->SetBranchAddress("el_Ethad", &el_Ethad, &b_el_Ethad);
   fChain->SetBranchAddress("el_Ethad1", &el_Ethad1, &b_el_Ethad1);
   fChain->SetBranchAddress("el_f1", &el_f1, &b_el_f1);
   fChain->SetBranchAddress("el_f1core", &el_f1core, &b_el_f1core);
   fChain->SetBranchAddress("el_Emins1", &el_Emins1, &b_el_Emins1);
   fChain->SetBranchAddress("el_fside", &el_fside, &b_el_fside);
   fChain->SetBranchAddress("el_Emax2", &el_Emax2, &b_el_Emax2);
   fChain->SetBranchAddress("el_ws3", &el_ws3, &b_el_ws3);
   fChain->SetBranchAddress("el_wstot", &el_wstot, &b_el_wstot);
   fChain->SetBranchAddress("el_emaxs1", &el_emaxs1, &b_el_emaxs1);
   fChain->SetBranchAddress("el_deltaEs", &el_deltaEs, &b_el_deltaEs);
   fChain->SetBranchAddress("el_E233", &el_E233, &b_el_E233);
   fChain->SetBranchAddress("el_E237", &el_E237, &b_el_E237);
   fChain->SetBranchAddress("el_E277", &el_E277, &b_el_E277);
   fChain->SetBranchAddress("el_weta2", &el_weta2, &b_el_weta2);
   fChain->SetBranchAddress("el_f3", &el_f3, &b_el_f3);
   fChain->SetBranchAddress("el_f3core", &el_f3core, &b_el_f3core);
   fChain->SetBranchAddress("el_rphiallcalo", &el_rphiallcalo, &b_el_rphiallcalo);
   fChain->SetBranchAddress("el_Etcone45", &el_Etcone45, &b_el_Etcone45);
   fChain->SetBranchAddress("el_Etcone20", &el_Etcone20, &b_el_Etcone20);
   fChain->SetBranchAddress("el_Etcone30", &el_Etcone30, &b_el_Etcone30);
   fChain->SetBranchAddress("el_Etcone40", &el_Etcone40, &b_el_Etcone40);
   fChain->SetBranchAddress("el_ptcone30", &el_ptcone30, &b_el_ptcone30);
   fChain->SetBranchAddress("el_convanglematch", &el_convanglematch, &b_el_convanglematch);
   fChain->SetBranchAddress("el_convtrackmatch", &el_convtrackmatch, &b_el_convtrackmatch);
   fChain->SetBranchAddress("el_hasconv", &el_hasconv, &b_el_hasconv);
   fChain->SetBranchAddress("el_convvtxx", &el_convvtxx, &b_el_convvtxx);
   fChain->SetBranchAddress("el_convvtxy", &el_convvtxy, &b_el_convvtxy);
   fChain->SetBranchAddress("el_convvtxz", &el_convvtxz, &b_el_convvtxz);
   fChain->SetBranchAddress("el_Rconv", &el_Rconv, &b_el_Rconv);
   fChain->SetBranchAddress("el_zconv", &el_zconv, &b_el_zconv);
   fChain->SetBranchAddress("el_convvtxchi2", &el_convvtxchi2, &b_el_convvtxchi2);
   fChain->SetBranchAddress("el_pt1conv", &el_pt1conv, &b_el_pt1conv);
   fChain->SetBranchAddress("el_convtrk1nBLHits", &el_convtrk1nBLHits, &b_el_convtrk1nBLHits);
   fChain->SetBranchAddress("el_convtrk1nPixHits", &el_convtrk1nPixHits, &b_el_convtrk1nPixHits);
   fChain->SetBranchAddress("el_convtrk1nSCTHits", &el_convtrk1nSCTHits, &b_el_convtrk1nSCTHits);
   fChain->SetBranchAddress("el_convtrk1nTRTHits", &el_convtrk1nTRTHits, &b_el_convtrk1nTRTHits);
   fChain->SetBranchAddress("el_pt2conv", &el_pt2conv, &b_el_pt2conv);
   fChain->SetBranchAddress("el_convtrk2nBLHits", &el_convtrk2nBLHits, &b_el_convtrk2nBLHits);
   fChain->SetBranchAddress("el_convtrk2nPixHits", &el_convtrk2nPixHits, &b_el_convtrk2nPixHits);
   fChain->SetBranchAddress("el_convtrk2nSCTHits", &el_convtrk2nSCTHits, &b_el_convtrk2nSCTHits);
   fChain->SetBranchAddress("el_convtrk2nTRTHits", &el_convtrk2nTRTHits, &b_el_convtrk2nTRTHits);
   fChain->SetBranchAddress("el_ptconv", &el_ptconv, &b_el_ptconv);
   fChain->SetBranchAddress("el_pzconv", &el_pzconv, &b_el_pzconv);
   fChain->SetBranchAddress("el_pos7", &el_pos7, &b_el_pos7);
   fChain->SetBranchAddress("el_etacorrmag", &el_etacorrmag, &b_el_etacorrmag);
   fChain->SetBranchAddress("el_deltaeta1", &el_deltaeta1, &b_el_deltaeta1);
   fChain->SetBranchAddress("el_deltaeta2", &el_deltaeta2, &b_el_deltaeta2);
   fChain->SetBranchAddress("el_deltaphi2", &el_deltaphi2, &b_el_deltaphi2);
   fChain->SetBranchAddress("el_deltaphiRescaled", &el_deltaphiRescaled, &b_el_deltaphiRescaled);
   fChain->SetBranchAddress("el_expectHitInBLayer", &el_expectHitInBLayer, &b_el_expectHitInBLayer);
   fChain->SetBranchAddress("el_reta", &el_reta, &b_el_reta);
   fChain->SetBranchAddress("el_rphi", &el_rphi, &b_el_rphi);
   fChain->SetBranchAddress("el_EtringnoisedR03sig2", &el_EtringnoisedR03sig2, &b_el_EtringnoisedR03sig2);
   fChain->SetBranchAddress("el_EtringnoisedR03sig3", &el_EtringnoisedR03sig3, &b_el_EtringnoisedR03sig3);
   fChain->SetBranchAddress("el_EtringnoisedR03sig4", &el_EtringnoisedR03sig4, &b_el_EtringnoisedR03sig4);
   fChain->SetBranchAddress("el_isolationlikelihoodjets", &el_isolationlikelihoodjets, &b_el_isolationlikelihoodjets);
   fChain->SetBranchAddress("el_isolationlikelihoodhqelectrons", &el_isolationlikelihoodhqelectrons, &b_el_isolationlikelihoodhqelectrons);
   fChain->SetBranchAddress("el_electronweight", &el_electronweight, &b_el_electronweight);
   fChain->SetBranchAddress("el_electronbgweight", &el_electronbgweight, &b_el_electronbgweight);
   fChain->SetBranchAddress("el_softeweight", &el_softeweight, &b_el_softeweight);
   fChain->SetBranchAddress("el_softebgweight", &el_softebgweight, &b_el_softebgweight);
   fChain->SetBranchAddress("el_neuralnet", &el_neuralnet, &b_el_neuralnet);
   fChain->SetBranchAddress("el_Hmatrix", &el_Hmatrix, &b_el_Hmatrix);
   fChain->SetBranchAddress("el_Hmatrix5", &el_Hmatrix5, &b_el_Hmatrix5);
   fChain->SetBranchAddress("el_adaboost", &el_adaboost, &b_el_adaboost);
   fChain->SetBranchAddress("el_softeneuralnet", &el_softeneuralnet, &b_el_softeneuralnet);
   fChain->SetBranchAddress("el_zvertex", &el_zvertex, &b_el_zvertex);
   fChain->SetBranchAddress("el_errz", &el_errz, &b_el_errz);
   fChain->SetBranchAddress("el_etap", &el_etap, &b_el_etap);
   fChain->SetBranchAddress("el_depth", &el_depth, &b_el_depth);
   fChain->SetBranchAddress("el_refittedTrack_n", &el_refittedTrack_n, &b_el_refittedTrack_n);
   fChain->SetBranchAddress("el_refittedTrack_author", &el_refittedTrack_author, &b_el_refittedTrack_author);
   fChain->SetBranchAddress("el_refittedTrack_chi2", &el_refittedTrack_chi2, &b_el_refittedTrack_chi2);
   fChain->SetBranchAddress("el_refittedTrack_qoverp", &el_refittedTrack_qoverp, &b_el_refittedTrack_qoverp);
   fChain->SetBranchAddress("el_refittedTrack_d0", &el_refittedTrack_d0, &b_el_refittedTrack_d0);
   fChain->SetBranchAddress("el_refittedTrack_z0", &el_refittedTrack_z0, &b_el_refittedTrack_z0);
   fChain->SetBranchAddress("el_refittedTrack_theta", &el_refittedTrack_theta, &b_el_refittedTrack_theta);
   fChain->SetBranchAddress("el_refittedTrack_phi", &el_refittedTrack_phi, &b_el_refittedTrack_phi);
   fChain->SetBranchAddress("el_refittedTrack_LMqoverp", &el_refittedTrack_LMqoverp, &b_el_refittedTrack_LMqoverp);
   fChain->SetBranchAddress("el_refittedTrack_hasBrem", &el_refittedTrack_hasBrem, &b_el_refittedTrack_hasBrem);
   fChain->SetBranchAddress("el_refittedTrack_bremRadius", &el_refittedTrack_bremRadius, &b_el_refittedTrack_bremRadius);
   fChain->SetBranchAddress("el_refittedTrack_bremZ", &el_refittedTrack_bremZ, &b_el_refittedTrack_bremZ);
   fChain->SetBranchAddress("el_refittedTrack_bremRadiusErr", &el_refittedTrack_bremRadiusErr, &b_el_refittedTrack_bremRadiusErr);
   fChain->SetBranchAddress("el_refittedTrack_bremZErr", &el_refittedTrack_bremZErr, &b_el_refittedTrack_bremZErr);
   fChain->SetBranchAddress("el_Es0", &el_Es0, &b_el_Es0);
   fChain->SetBranchAddress("el_etas0", &el_etas0, &b_el_etas0);
   fChain->SetBranchAddress("el_phis0", &el_phis0, &b_el_phis0);
   fChain->SetBranchAddress("el_Es1", &el_Es1, &b_el_Es1);
   fChain->SetBranchAddress("el_etas1", &el_etas1, &b_el_etas1);
   fChain->SetBranchAddress("el_phis1", &el_phis1, &b_el_phis1);
   fChain->SetBranchAddress("el_Es2", &el_Es2, &b_el_Es2);
   fChain->SetBranchAddress("el_etas2", &el_etas2, &b_el_etas2);
   fChain->SetBranchAddress("el_phis2", &el_phis2, &b_el_phis2);
   fChain->SetBranchAddress("el_Es3", &el_Es3, &b_el_Es3);
   fChain->SetBranchAddress("el_etas3", &el_etas3, &b_el_etas3);
   fChain->SetBranchAddress("el_phis3", &el_phis3, &b_el_phis3);
   fChain->SetBranchAddress("el_E_PreSamplerB", &el_E_PreSamplerB, &b_el_E_PreSamplerB);
   fChain->SetBranchAddress("el_E_EMB1", &el_E_EMB1, &b_el_E_EMB1);
   fChain->SetBranchAddress("el_E_EMB2", &el_E_EMB2, &b_el_E_EMB2);
   fChain->SetBranchAddress("el_E_EMB3", &el_E_EMB3, &b_el_E_EMB3);
   fChain->SetBranchAddress("el_E_PreSamplerE", &el_E_PreSamplerE, &b_el_E_PreSamplerE);
   fChain->SetBranchAddress("el_E_EME1", &el_E_EME1, &b_el_E_EME1);
   fChain->SetBranchAddress("el_E_EME2", &el_E_EME2, &b_el_E_EME2);
   fChain->SetBranchAddress("el_E_EME3", &el_E_EME3, &b_el_E_EME3);
   fChain->SetBranchAddress("el_E_HEC0", &el_E_HEC0, &b_el_E_HEC0);
   fChain->SetBranchAddress("el_E_HEC1", &el_E_HEC1, &b_el_E_HEC1);
   fChain->SetBranchAddress("el_E_HEC2", &el_E_HEC2, &b_el_E_HEC2);
   fChain->SetBranchAddress("el_E_HEC3", &el_E_HEC3, &b_el_E_HEC3);
   fChain->SetBranchAddress("el_E_TileBar0", &el_E_TileBar0, &b_el_E_TileBar0);
   fChain->SetBranchAddress("el_E_TileBar1", &el_E_TileBar1, &b_el_E_TileBar1);
   fChain->SetBranchAddress("el_E_TileBar2", &el_E_TileBar2, &b_el_E_TileBar2);
   fChain->SetBranchAddress("el_E_TileGap1", &el_E_TileGap1, &b_el_E_TileGap1);
   fChain->SetBranchAddress("el_E_TileGap2", &el_E_TileGap2, &b_el_E_TileGap2);
   fChain->SetBranchAddress("el_E_TileGap3", &el_E_TileGap3, &b_el_E_TileGap3);
   fChain->SetBranchAddress("el_E_TileExt0", &el_E_TileExt0, &b_el_E_TileExt0);
   fChain->SetBranchAddress("el_E_TileExt1", &el_E_TileExt1, &b_el_E_TileExt1);
   fChain->SetBranchAddress("el_E_TileExt2", &el_E_TileExt2, &b_el_E_TileExt2);
   fChain->SetBranchAddress("el_E_FCAL0", &el_E_FCAL0, &b_el_E_FCAL0);
   fChain->SetBranchAddress("el_E_FCAL1", &el_E_FCAL1, &b_el_E_FCAL1);
   fChain->SetBranchAddress("el_E_FCAL2", &el_E_FCAL2, &b_el_E_FCAL2);
   fChain->SetBranchAddress("el_cl_E", &el_cl_E, &b_el_cl_E);
   fChain->SetBranchAddress("el_cl_pt", &el_cl_pt, &b_el_cl_pt);
   fChain->SetBranchAddress("el_cl_eta", &el_cl_eta, &b_el_cl_eta);
   fChain->SetBranchAddress("el_cl_phi", &el_cl_phi, &b_el_cl_phi);
   fChain->SetBranchAddress("el_firstEdens", &el_firstEdens, &b_el_firstEdens);
   fChain->SetBranchAddress("el_cellmaxfrac", &el_cellmaxfrac, &b_el_cellmaxfrac);
   fChain->SetBranchAddress("el_longitudinal", &el_longitudinal, &b_el_longitudinal);
   fChain->SetBranchAddress("el_secondlambda", &el_secondlambda, &b_el_secondlambda);
   fChain->SetBranchAddress("el_lateral", &el_lateral, &b_el_lateral);
   fChain->SetBranchAddress("el_secondR", &el_secondR, &b_el_secondR);
   fChain->SetBranchAddress("el_centerlambda", &el_centerlambda, &b_el_centerlambda);
   fChain->SetBranchAddress("el_rawcl_Es0", &el_rawcl_Es0, &b_el_rawcl_Es0);
   fChain->SetBranchAddress("el_rawcl_etas0", &el_rawcl_etas0, &b_el_rawcl_etas0);
   fChain->SetBranchAddress("el_rawcl_phis0", &el_rawcl_phis0, &b_el_rawcl_phis0);
   fChain->SetBranchAddress("el_rawcl_Es1", &el_rawcl_Es1, &b_el_rawcl_Es1);
   fChain->SetBranchAddress("el_rawcl_etas1", &el_rawcl_etas1, &b_el_rawcl_etas1);
   fChain->SetBranchAddress("el_rawcl_phis1", &el_rawcl_phis1, &b_el_rawcl_phis1);
   fChain->SetBranchAddress("el_rawcl_Es2", &el_rawcl_Es2, &b_el_rawcl_Es2);
   fChain->SetBranchAddress("el_rawcl_etas2", &el_rawcl_etas2, &b_el_rawcl_etas2);
   fChain->SetBranchAddress("el_rawcl_phis2", &el_rawcl_phis2, &b_el_rawcl_phis2);
   fChain->SetBranchAddress("el_rawcl_Es3", &el_rawcl_Es3, &b_el_rawcl_Es3);
   fChain->SetBranchAddress("el_rawcl_etas3", &el_rawcl_etas3, &b_el_rawcl_etas3);
   fChain->SetBranchAddress("el_rawcl_phis3", &el_rawcl_phis3, &b_el_rawcl_phis3);
   fChain->SetBranchAddress("el_rawcl_E", &el_rawcl_E, &b_el_rawcl_E);
   fChain->SetBranchAddress("el_rawcl_pt", &el_rawcl_pt, &b_el_rawcl_pt);
   fChain->SetBranchAddress("el_rawcl_eta", &el_rawcl_eta, &b_el_rawcl_eta);
   fChain->SetBranchAddress("el_rawcl_phi", &el_rawcl_phi, &b_el_rawcl_phi);
   fChain->SetBranchAddress("el_trackd0", &el_trackd0, &b_el_trackd0);
   fChain->SetBranchAddress("el_trackz0", &el_trackz0, &b_el_trackz0);
   fChain->SetBranchAddress("el_trackphi", &el_trackphi, &b_el_trackphi);
   fChain->SetBranchAddress("el_tracktheta", &el_tracktheta, &b_el_tracktheta);
   fChain->SetBranchAddress("el_trackqoverp", &el_trackqoverp, &b_el_trackqoverp);
   fChain->SetBranchAddress("el_trackpt", &el_trackpt, &b_el_trackpt);
   fChain->SetBranchAddress("el_tracketa", &el_tracketa, &b_el_tracketa);
   fChain->SetBranchAddress("el_trackfitchi2", &el_trackfitchi2, &b_el_trackfitchi2);
   fChain->SetBranchAddress("el_trackfitndof", &el_trackfitndof, &b_el_trackfitndof);
   fChain->SetBranchAddress("el_nBLHits", &el_nBLHits, &b_el_nBLHits);
   fChain->SetBranchAddress("el_nPixHits", &el_nPixHits, &b_el_nPixHits);
   fChain->SetBranchAddress("el_nSCTHits", &el_nSCTHits, &b_el_nSCTHits);
   fChain->SetBranchAddress("el_nTRTHits", &el_nTRTHits, &b_el_nTRTHits);
   fChain->SetBranchAddress("el_nPixHoles", &el_nPixHoles, &b_el_nPixHoles);
   fChain->SetBranchAddress("el_nSCTHoles", &el_nSCTHoles, &b_el_nSCTHoles);
   fChain->SetBranchAddress("el_nBLSharedHits", &el_nBLSharedHits, &b_el_nBLSharedHits);
   fChain->SetBranchAddress("el_nPixSharedHits", &el_nPixSharedHits, &b_el_nPixSharedHits);
   fChain->SetBranchAddress("el_nSCTSharedHits", &el_nSCTSharedHits, &b_el_nSCTSharedHits);
   fChain->SetBranchAddress("el_nTRTHighTHits", &el_nTRTHighTHits, &b_el_nTRTHighTHits);
   fChain->SetBranchAddress("el_nTRTOutliers", &el_nTRTOutliers, &b_el_nTRTOutliers);
   fChain->SetBranchAddress("el_nTRTHighTOutliers", &el_nTRTHighTOutliers, &b_el_nTRTHighTOutliers);
   fChain->SetBranchAddress("el_nSiHits", &el_nSiHits, &b_el_nSiHits);
   fChain->SetBranchAddress("el_TRTHighTHitsRatio", &el_TRTHighTHitsRatio, &b_el_TRTHighTHitsRatio);
   fChain->SetBranchAddress("el_pixeldEdx", &el_pixeldEdx, &b_el_pixeldEdx);
   fChain->SetBranchAddress("el_eProbabilityComb", &el_eProbabilityComb, &b_el_eProbabilityComb);
   fChain->SetBranchAddress("el_eProbabilityHT", &el_eProbabilityHT, &b_el_eProbabilityHT);
   fChain->SetBranchAddress("el_eProbabilityToT", &el_eProbabilityToT, &b_el_eProbabilityToT);
   fChain->SetBranchAddress("el_eProbabilityBrem", &el_eProbabilityBrem, &b_el_eProbabilityBrem);
   fChain->SetBranchAddress("el_vertx", &el_vertx, &b_el_vertx);
   fChain->SetBranchAddress("el_verty", &el_verty, &b_el_verty);
   fChain->SetBranchAddress("el_vertz", &el_vertz, &b_el_vertz);
   fChain->SetBranchAddress("el_hastrack", &el_hastrack, &b_el_hastrack);
   fChain->SetBranchAddress("el_deltaEmax2", &el_deltaEmax2, &b_el_deltaEmax2);
   fChain->SetBranchAddress("el_calibHitsShowerDepth", &el_calibHitsShowerDepth, &b_el_calibHitsShowerDepth);
   fChain->SetBranchAddress("el_trackd0beam", &el_trackd0beam, &b_el_trackd0beam);
   fChain->SetBranchAddress("el_tracksigd0beam", &el_tracksigd0beam, &b_el_tracksigd0beam);
   fChain->SetBranchAddress("el_trackd0pv", &el_trackd0pv, &b_el_trackd0pv);
   fChain->SetBranchAddress("el_tracksigd0pv", &el_tracksigd0pv, &b_el_tracksigd0pv);
   fChain->SetBranchAddress("el_trackz0pv", &el_trackz0pv, &b_el_trackz0pv);
   fChain->SetBranchAddress("el_tracksigz0pv", &el_tracksigz0pv, &b_el_tracksigz0pv);
   fChain->SetBranchAddress("el_trackd0pvunbiased", &el_trackd0pvunbiased, &b_el_trackd0pvunbiased);
   fChain->SetBranchAddress("el_tracksigd0pvunbiased", &el_tracksigd0pvunbiased, &b_el_tracksigd0pvunbiased);
   fChain->SetBranchAddress("el_trackz0pvunbiased", &el_trackz0pvunbiased, &b_el_trackz0pvunbiased);
   fChain->SetBranchAddress("el_tracksigz0pvunbiased", &el_tracksigz0pvunbiased, &b_el_tracksigz0pvunbiased);
   fChain->SetBranchAddress("el_isIso", &el_isIso, &b_el_isIso);
   fChain->SetBranchAddress("el_mvaptcone20", &el_mvaptcone20, &b_el_mvaptcone20);
   fChain->SetBranchAddress("el_mvaptcone30", &el_mvaptcone30, &b_el_mvaptcone30);
   fChain->SetBranchAddress("el_mvaptcone40", &el_mvaptcone40, &b_el_mvaptcone40);
   fChain->SetBranchAddress("el_jet_dr", &el_jet_dr, &b_el_jet_dr);
   fChain->SetBranchAddress("el_jet_E", &el_jet_E, &b_el_jet_E);
   fChain->SetBranchAddress("el_jet_pt", &el_jet_pt, &b_el_jet_pt);
   fChain->SetBranchAddress("el_jet_m", &el_jet_m, &b_el_jet_m);
   fChain->SetBranchAddress("el_jet_eta", &el_jet_eta, &b_el_jet_eta);
   fChain->SetBranchAddress("el_jet_phi", &el_jet_phi, &b_el_jet_phi);
   fChain->SetBranchAddress("el_jet_matched", &el_jet_matched, &b_el_jet_matched);
   fChain->SetBranchAddress("el_Etcone40_pt_corrected", &el_Etcone40_pt_corrected, &b_el_Etcone40_pt_corrected);
   fChain->SetBranchAddress("el_Etcone40_ED_corrected", &el_Etcone40_ED_corrected, &b_el_Etcone40_ED_corrected);
   fChain->SetBranchAddress("el_Etcone40_corrected", &el_Etcone40_corrected, &b_el_Etcone40_corrected);
   fChain->SetBranchAddress("el_EF_dr", &el_EF_dr, &b_el_EF_dr);
   fChain->SetBranchAddress("el_EF_index", &el_EF_index, &b_el_EF_index);
   fChain->SetBranchAddress("el_L2_dr", &el_L2_dr, &b_el_L2_dr);
   fChain->SetBranchAddress("el_L2_index", &el_L2_index, &b_el_L2_index);
   fChain->SetBranchAddress("el_L1_dr", &el_L1_dr, &b_el_L1_dr);
   fChain->SetBranchAddress("el_L1_index", &el_L1_index, &b_el_L1_index);
   fChain->SetBranchAddress("ph_n", &ph_n, &b_ph_n);
   fChain->SetBranchAddress("ph_E", &ph_E, &b_ph_E);
   fChain->SetBranchAddress("ph_Et", &ph_Et, &b_ph_Et);
   fChain->SetBranchAddress("ph_pt", &ph_pt, &b_ph_pt);
   fChain->SetBranchAddress("ph_m", &ph_m, &b_ph_m);
   fChain->SetBranchAddress("ph_eta", &ph_eta, &b_ph_eta);
   fChain->SetBranchAddress("ph_phi", &ph_phi, &b_ph_phi);
   fChain->SetBranchAddress("ph_px", &ph_px, &b_ph_px);
   fChain->SetBranchAddress("ph_py", &ph_py, &b_ph_py);
   fChain->SetBranchAddress("ph_pz", &ph_pz, &b_ph_pz);
   fChain->SetBranchAddress("ph_author", &ph_author, &b_ph_author);
   fChain->SetBranchAddress("ph_isRecovered", &ph_isRecovered, &b_ph_isRecovered);
   fChain->SetBranchAddress("ph_isEM", &ph_isEM, &b_ph_isEM);
   fChain->SetBranchAddress("ph_convFlag", &ph_convFlag, &b_ph_convFlag);
   fChain->SetBranchAddress("ph_isConv", &ph_isConv, &b_ph_isConv);
   fChain->SetBranchAddress("ph_nConv", &ph_nConv, &b_ph_nConv);
   fChain->SetBranchAddress("ph_nSingleTrackConv", &ph_nSingleTrackConv, &b_ph_nSingleTrackConv);
   fChain->SetBranchAddress("ph_nDoubleTrackConv", &ph_nDoubleTrackConv, &b_ph_nDoubleTrackConv);
   fChain->SetBranchAddress("ph_loose", &ph_loose, &b_ph_loose);
   fChain->SetBranchAddress("ph_tight", &ph_tight, &b_ph_tight);
   fChain->SetBranchAddress("ph_tightIso", &ph_tightIso, &b_ph_tightIso);
   fChain->SetBranchAddress("ph_Ethad", &ph_Ethad, &b_ph_Ethad);
   fChain->SetBranchAddress("ph_Ethad1", &ph_Ethad1, &b_ph_Ethad1);
   fChain->SetBranchAddress("ph_E033", &ph_E033, &b_ph_E033);
   fChain->SetBranchAddress("ph_f1", &ph_f1, &b_ph_f1);
   fChain->SetBranchAddress("ph_f1core", &ph_f1core, &b_ph_f1core);
   fChain->SetBranchAddress("ph_Emins1", &ph_Emins1, &b_ph_Emins1);
   fChain->SetBranchAddress("ph_fside", &ph_fside, &b_ph_fside);
   fChain->SetBranchAddress("ph_Emax2", &ph_Emax2, &b_ph_Emax2);
   fChain->SetBranchAddress("ph_ws3", &ph_ws3, &b_ph_ws3);
   fChain->SetBranchAddress("ph_wstot", &ph_wstot, &b_ph_wstot);
   fChain->SetBranchAddress("ph_E132", &ph_E132, &b_ph_E132);
   fChain->SetBranchAddress("ph_E1152", &ph_E1152, &b_ph_E1152);
   fChain->SetBranchAddress("ph_emaxs1", &ph_emaxs1, &b_ph_emaxs1);
   fChain->SetBranchAddress("ph_deltaEs", &ph_deltaEs, &b_ph_deltaEs);
   fChain->SetBranchAddress("ph_E233", &ph_E233, &b_ph_E233);
   fChain->SetBranchAddress("ph_E237", &ph_E237, &b_ph_E237);
   fChain->SetBranchAddress("ph_E277", &ph_E277, &b_ph_E277);
   fChain->SetBranchAddress("ph_weta2", &ph_weta2, &b_ph_weta2);
   fChain->SetBranchAddress("ph_f3", &ph_f3, &b_ph_f3);
   fChain->SetBranchAddress("ph_f3core", &ph_f3core, &b_ph_f3core);
   fChain->SetBranchAddress("ph_rphiallcalo", &ph_rphiallcalo, &b_ph_rphiallcalo);
   fChain->SetBranchAddress("ph_Etcone45", &ph_Etcone45, &b_ph_Etcone45);
   fChain->SetBranchAddress("ph_Etcone20", &ph_Etcone20, &b_ph_Etcone20);
   fChain->SetBranchAddress("ph_Etcone30", &ph_Etcone30, &b_ph_Etcone30);
   fChain->SetBranchAddress("ph_Etcone40", &ph_Etcone40, &b_ph_Etcone40);
   fChain->SetBranchAddress("ph_ptcone30", &ph_ptcone30, &b_ph_ptcone30);
   fChain->SetBranchAddress("ph_convanglematch", &ph_convanglematch, &b_ph_convanglematch);
   fChain->SetBranchAddress("ph_convtrackmatch", &ph_convtrackmatch, &b_ph_convtrackmatch);
   fChain->SetBranchAddress("ph_hasconv", &ph_hasconv, &b_ph_hasconv);
   fChain->SetBranchAddress("ph_convvtxx", &ph_convvtxx, &b_ph_convvtxx);
   fChain->SetBranchAddress("ph_convvtxy", &ph_convvtxy, &b_ph_convvtxy);
   fChain->SetBranchAddress("ph_convvtxz", &ph_convvtxz, &b_ph_convvtxz);
   fChain->SetBranchAddress("ph_Rconv", &ph_Rconv, &b_ph_Rconv);
   fChain->SetBranchAddress("ph_zconv", &ph_zconv, &b_ph_zconv);
   fChain->SetBranchAddress("ph_convvtxchi2", &ph_convvtxchi2, &b_ph_convvtxchi2);
   fChain->SetBranchAddress("ph_pt1conv", &ph_pt1conv, &b_ph_pt1conv);
   fChain->SetBranchAddress("ph_convtrk1nBLHits", &ph_convtrk1nBLHits, &b_ph_convtrk1nBLHits);
   fChain->SetBranchAddress("ph_convtrk1nPixHits", &ph_convtrk1nPixHits, &b_ph_convtrk1nPixHits);
   fChain->SetBranchAddress("ph_convtrk1nSCTHits", &ph_convtrk1nSCTHits, &b_ph_convtrk1nSCTHits);
   fChain->SetBranchAddress("ph_convtrk1nTRTHits", &ph_convtrk1nTRTHits, &b_ph_convtrk1nTRTHits);
   fChain->SetBranchAddress("ph_pt2conv", &ph_pt2conv, &b_ph_pt2conv);
   fChain->SetBranchAddress("ph_convtrk2nBLHits", &ph_convtrk2nBLHits, &b_ph_convtrk2nBLHits);
   fChain->SetBranchAddress("ph_convtrk2nPixHits", &ph_convtrk2nPixHits, &b_ph_convtrk2nPixHits);
   fChain->SetBranchAddress("ph_convtrk2nSCTHits", &ph_convtrk2nSCTHits, &b_ph_convtrk2nSCTHits);
   fChain->SetBranchAddress("ph_convtrk2nTRTHits", &ph_convtrk2nTRTHits, &b_ph_convtrk2nTRTHits);
   fChain->SetBranchAddress("ph_ptconv", &ph_ptconv, &b_ph_ptconv);
   fChain->SetBranchAddress("ph_pzconv", &ph_pzconv, &b_ph_pzconv);
   fChain->SetBranchAddress("ph_reta", &ph_reta, &b_ph_reta);
   fChain->SetBranchAddress("ph_rphi", &ph_rphi, &b_ph_rphi);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig2", &ph_EtringnoisedR03sig2, &b_ph_EtringnoisedR03sig2);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig3", &ph_EtringnoisedR03sig3, &b_ph_EtringnoisedR03sig3);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig4", &ph_EtringnoisedR03sig4, &b_ph_EtringnoisedR03sig4);
   fChain->SetBranchAddress("ph_isolationlikelihoodjets", &ph_isolationlikelihoodjets, &b_ph_isolationlikelihoodjets);
   fChain->SetBranchAddress("ph_isolationlikelihoodhqelectrons", &ph_isolationlikelihoodhqelectrons, &b_ph_isolationlikelihoodhqelectrons);
   fChain->SetBranchAddress("ph_loglikelihood", &ph_loglikelihood, &b_ph_loglikelihood);
   fChain->SetBranchAddress("ph_photonweight", &ph_photonweight, &b_ph_photonweight);
   fChain->SetBranchAddress("ph_photonbgweight", &ph_photonbgweight, &b_ph_photonbgweight);
   fChain->SetBranchAddress("ph_neuralnet", &ph_neuralnet, &b_ph_neuralnet);
   fChain->SetBranchAddress("ph_Hmatrix", &ph_Hmatrix, &b_ph_Hmatrix);
   fChain->SetBranchAddress("ph_Hmatrix5", &ph_Hmatrix5, &b_ph_Hmatrix5);
   fChain->SetBranchAddress("ph_adaboost", &ph_adaboost, &b_ph_adaboost);
   fChain->SetBranchAddress("ph_zvertex", &ph_zvertex, &b_ph_zvertex);
   fChain->SetBranchAddress("ph_errz", &ph_errz, &b_ph_errz);
   fChain->SetBranchAddress("ph_etap", &ph_etap, &b_ph_etap);
   fChain->SetBranchAddress("ph_depth", &ph_depth, &b_ph_depth);
   fChain->SetBranchAddress("ph_cl_E", &ph_cl_E, &b_ph_cl_E);
   fChain->SetBranchAddress("ph_cl_pt", &ph_cl_pt, &b_ph_cl_pt);
   fChain->SetBranchAddress("ph_cl_eta", &ph_cl_eta, &b_ph_cl_eta);
   fChain->SetBranchAddress("ph_cl_phi", &ph_cl_phi, &b_ph_cl_phi);
   fChain->SetBranchAddress("ph_Es0", &ph_Es0, &b_ph_Es0);
   fChain->SetBranchAddress("ph_etas0", &ph_etas0, &b_ph_etas0);
   fChain->SetBranchAddress("ph_phis0", &ph_phis0, &b_ph_phis0);
   fChain->SetBranchAddress("ph_Es1", &ph_Es1, &b_ph_Es1);
   fChain->SetBranchAddress("ph_etas1", &ph_etas1, &b_ph_etas1);
   fChain->SetBranchAddress("ph_phis1", &ph_phis1, &b_ph_phis1);
   fChain->SetBranchAddress("ph_Es2", &ph_Es2, &b_ph_Es2);
   fChain->SetBranchAddress("ph_etas2", &ph_etas2, &b_ph_etas2);
   fChain->SetBranchAddress("ph_phis2", &ph_phis2, &b_ph_phis2);
   fChain->SetBranchAddress("ph_Es3", &ph_Es3, &b_ph_Es3);
   fChain->SetBranchAddress("ph_etas3", &ph_etas3, &b_ph_etas3);
   fChain->SetBranchAddress("ph_phis3", &ph_phis3, &b_ph_phis3);
   fChain->SetBranchAddress("ph_rawcl_Es0", &ph_rawcl_Es0, &b_ph_rawcl_Es0);
   fChain->SetBranchAddress("ph_rawcl_etas0", &ph_rawcl_etas0, &b_ph_rawcl_etas0);
   fChain->SetBranchAddress("ph_rawcl_phis0", &ph_rawcl_phis0, &b_ph_rawcl_phis0);
   fChain->SetBranchAddress("ph_rawcl_Es1", &ph_rawcl_Es1, &b_ph_rawcl_Es1);
   fChain->SetBranchAddress("ph_rawcl_etas1", &ph_rawcl_etas1, &b_ph_rawcl_etas1);
   fChain->SetBranchAddress("ph_rawcl_phis1", &ph_rawcl_phis1, &b_ph_rawcl_phis1);
   fChain->SetBranchAddress("ph_rawcl_Es2", &ph_rawcl_Es2, &b_ph_rawcl_Es2);
   fChain->SetBranchAddress("ph_rawcl_etas2", &ph_rawcl_etas2, &b_ph_rawcl_etas2);
   fChain->SetBranchAddress("ph_rawcl_phis2", &ph_rawcl_phis2, &b_ph_rawcl_phis2);
   fChain->SetBranchAddress("ph_rawcl_Es3", &ph_rawcl_Es3, &b_ph_rawcl_Es3);
   fChain->SetBranchAddress("ph_rawcl_etas3", &ph_rawcl_etas3, &b_ph_rawcl_etas3);
   fChain->SetBranchAddress("ph_rawcl_phis3", &ph_rawcl_phis3, &b_ph_rawcl_phis3);
   fChain->SetBranchAddress("ph_rawcl_E", &ph_rawcl_E, &b_ph_rawcl_E);
   fChain->SetBranchAddress("ph_rawcl_pt", &ph_rawcl_pt, &b_ph_rawcl_pt);
   fChain->SetBranchAddress("ph_rawcl_eta", &ph_rawcl_eta, &b_ph_rawcl_eta);
   fChain->SetBranchAddress("ph_rawcl_phi", &ph_rawcl_phi, &b_ph_rawcl_phi);
   fChain->SetBranchAddress("ph_deltaEmax2", &ph_deltaEmax2, &b_ph_deltaEmax2);
   fChain->SetBranchAddress("ph_calibHitsShowerDepth", &ph_calibHitsShowerDepth, &b_ph_calibHitsShowerDepth);
   fChain->SetBranchAddress("ph_isIso", &ph_isIso, &b_ph_isIso);
   fChain->SetBranchAddress("ph_mvaptcone20", &ph_mvaptcone20, &b_ph_mvaptcone20);
   fChain->SetBranchAddress("ph_mvaptcone30", &ph_mvaptcone30, &b_ph_mvaptcone30);
   fChain->SetBranchAddress("ph_mvaptcone40", &ph_mvaptcone40, &b_ph_mvaptcone40);
   fChain->SetBranchAddress("ph_topoEtcone20", &ph_topoEtcone20, &b_ph_topoEtcone20);
   fChain->SetBranchAddress("ph_topoEtcone40", &ph_topoEtcone40, &b_ph_topoEtcone40);
   fChain->SetBranchAddress("ph_topoEtcone60", &ph_topoEtcone60, &b_ph_topoEtcone60);
   fChain->SetBranchAddress("ph_jet_dr", &ph_jet_dr, &b_ph_jet_dr);
   fChain->SetBranchAddress("ph_jet_E", &ph_jet_E, &b_ph_jet_E);
   fChain->SetBranchAddress("ph_jet_pt", &ph_jet_pt, &b_ph_jet_pt);
   fChain->SetBranchAddress("ph_jet_m", &ph_jet_m, &b_ph_jet_m);
   fChain->SetBranchAddress("ph_jet_eta", &ph_jet_eta, &b_ph_jet_eta);
   fChain->SetBranchAddress("ph_jet_phi", &ph_jet_phi, &b_ph_jet_phi);
   fChain->SetBranchAddress("ph_jet_matched", &ph_jet_matched, &b_ph_jet_matched);
   fChain->SetBranchAddress("ph_convIP", &ph_convIP, &b_ph_convIP);
   fChain->SetBranchAddress("ph_convIPRev", &ph_convIPRev, &b_ph_convIPRev);
   fChain->SetBranchAddress("ph_ptIsolationCone", &ph_ptIsolationCone, &b_ph_ptIsolationCone);
   fChain->SetBranchAddress("ph_ptIsolationConePhAngle", &ph_ptIsolationConePhAngle, &b_ph_ptIsolationConePhAngle);
   fChain->SetBranchAddress("ph_Etcone40_pt_corrected", &ph_Etcone40_pt_corrected, &b_ph_Etcone40_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone40_ED_corrected", &ph_Etcone40_ED_corrected, &b_ph_Etcone40_ED_corrected);
   fChain->SetBranchAddress("ph_Etcone40_corrected", &ph_Etcone40_corrected, &b_ph_Etcone40_corrected);
   fChain->SetBranchAddress("ph_topodr", &ph_topodr, &b_ph_topodr);
   fChain->SetBranchAddress("ph_topopt", &ph_topopt, &b_ph_topopt);
   fChain->SetBranchAddress("ph_topoeta", &ph_topoeta, &b_ph_topoeta);
   fChain->SetBranchAddress("ph_topophi", &ph_topophi, &b_ph_topophi);
   fChain->SetBranchAddress("ph_topomatched", &ph_topomatched, &b_ph_topomatched);
   fChain->SetBranchAddress("ph_topoEMdr", &ph_topoEMdr, &b_ph_topoEMdr);
   fChain->SetBranchAddress("ph_topoEMpt", &ph_topoEMpt, &b_ph_topoEMpt);
   fChain->SetBranchAddress("ph_topoEMeta", &ph_topoEMeta, &b_ph_topoEMeta);
   fChain->SetBranchAddress("ph_topoEMphi", &ph_topoEMphi, &b_ph_topoEMphi);
   fChain->SetBranchAddress("ph_topoEMmatched", &ph_topoEMmatched, &b_ph_topoEMmatched);
   fChain->SetBranchAddress("ph_EF_dr", &ph_EF_dr, &b_ph_EF_dr);
   fChain->SetBranchAddress("ph_EF_index", &ph_EF_index, &b_ph_EF_index);
   fChain->SetBranchAddress("ph_L2_dr", &ph_L2_dr, &b_ph_L2_dr);
   fChain->SetBranchAddress("ph_L2_index", &ph_L2_index, &b_ph_L2_index);
   fChain->SetBranchAddress("ph_L1_dr", &ph_L1_dr, &b_ph_L1_dr);
   fChain->SetBranchAddress("ph_L1_index", &ph_L1_index, &b_ph_L1_index);
   fChain->SetBranchAddress("mu_staco_n", &mu_staco_n, &b_mu_staco_n);
   fChain->SetBranchAddress("mu_staco_E", &mu_staco_E, &b_mu_staco_E);
   fChain->SetBranchAddress("mu_staco_pt", &mu_staco_pt, &b_mu_staco_pt);
   fChain->SetBranchAddress("mu_staco_m", &mu_staco_m, &b_mu_staco_m);
   fChain->SetBranchAddress("mu_staco_eta", &mu_staco_eta, &b_mu_staco_eta);
   fChain->SetBranchAddress("mu_staco_phi", &mu_staco_phi, &b_mu_staco_phi);
   fChain->SetBranchAddress("mu_staco_px", &mu_staco_px, &b_mu_staco_px);
   fChain->SetBranchAddress("mu_staco_py", &mu_staco_py, &b_mu_staco_py);
   fChain->SetBranchAddress("mu_staco_pz", &mu_staco_pz, &b_mu_staco_pz);
   fChain->SetBranchAddress("mu_staco_charge", &mu_staco_charge, &b_mu_staco_charge);
   fChain->SetBranchAddress("mu_staco_allauthor", &mu_staco_allauthor, &b_mu_staco_allauthor);
   fChain->SetBranchAddress("mu_staco_author", &mu_staco_author, &b_mu_staco_author);
   fChain->SetBranchAddress("mu_staco_matchchi2", &mu_staco_matchchi2, &b_mu_staco_matchchi2);
   fChain->SetBranchAddress("mu_staco_matchndof", &mu_staco_matchndof, &b_mu_staco_matchndof);
   fChain->SetBranchAddress("mu_staco_etcone20", &mu_staco_etcone20, &b_mu_staco_etcone20);
   fChain->SetBranchAddress("mu_staco_etcone30", &mu_staco_etcone30, &b_mu_staco_etcone30);
   fChain->SetBranchAddress("mu_staco_etcone40", &mu_staco_etcone40, &b_mu_staco_etcone40);
   fChain->SetBranchAddress("mu_staco_nucone20", &mu_staco_nucone20, &b_mu_staco_nucone20);
   fChain->SetBranchAddress("mu_staco_nucone30", &mu_staco_nucone30, &b_mu_staco_nucone30);
   fChain->SetBranchAddress("mu_staco_nucone40", &mu_staco_nucone40, &b_mu_staco_nucone40);
   fChain->SetBranchAddress("mu_staco_ptcone20", &mu_staco_ptcone20, &b_mu_staco_ptcone20);
   fChain->SetBranchAddress("mu_staco_ptcone30", &mu_staco_ptcone30, &b_mu_staco_ptcone30);
   fChain->SetBranchAddress("mu_staco_ptcone40", &mu_staco_ptcone40, &b_mu_staco_ptcone40);
   fChain->SetBranchAddress("mu_staco_energyLossPar", &mu_staco_energyLossPar, &b_mu_staco_energyLossPar);
   fChain->SetBranchAddress("mu_staco_energyLossErr", &mu_staco_energyLossErr, &b_mu_staco_energyLossErr);
   fChain->SetBranchAddress("mu_staco_etCore", &mu_staco_etCore, &b_mu_staco_etCore);
   fChain->SetBranchAddress("mu_staco_energyLossType", &mu_staco_energyLossType, &b_mu_staco_energyLossType);
   fChain->SetBranchAddress("mu_staco_bestMatch", &mu_staco_bestMatch, &b_mu_staco_bestMatch);
   fChain->SetBranchAddress("mu_staco_isStandAloneMuon", &mu_staco_isStandAloneMuon, &b_mu_staco_isStandAloneMuon);
   fChain->SetBranchAddress("mu_staco_isCombinedMuon", &mu_staco_isCombinedMuon, &b_mu_staco_isCombinedMuon);
   fChain->SetBranchAddress("mu_staco_isLowPtReconstructedMuon", &mu_staco_isLowPtReconstructedMuon, &b_mu_staco_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_staco_loose", &mu_staco_loose, &b_mu_staco_loose);
   fChain->SetBranchAddress("mu_staco_medium", &mu_staco_medium, &b_mu_staco_medium);
   fChain->SetBranchAddress("mu_staco_tight", &mu_staco_tight, &b_mu_staco_tight);
   fChain->SetBranchAddress("mu_staco_d0_exPV", &mu_staco_d0_exPV, &b_mu_staco_d0_exPV);
   fChain->SetBranchAddress("mu_staco_z0_exPV", &mu_staco_z0_exPV, &b_mu_staco_z0_exPV);
   fChain->SetBranchAddress("mu_staco_phi_exPV", &mu_staco_phi_exPV, &b_mu_staco_phi_exPV);
   fChain->SetBranchAddress("mu_staco_theta_exPV", &mu_staco_theta_exPV, &b_mu_staco_theta_exPV);
   fChain->SetBranchAddress("mu_staco_qoverp_exPV", &mu_staco_qoverp_exPV, &b_mu_staco_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cb_d0_exPV", &mu_staco_cb_d0_exPV, &b_mu_staco_cb_d0_exPV);
   fChain->SetBranchAddress("mu_staco_cb_z0_exPV", &mu_staco_cb_z0_exPV, &b_mu_staco_cb_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cb_phi_exPV", &mu_staco_cb_phi_exPV, &b_mu_staco_cb_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cb_theta_exPV", &mu_staco_cb_theta_exPV, &b_mu_staco_cb_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cb_qoverp_exPV", &mu_staco_cb_qoverp_exPV, &b_mu_staco_cb_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_d0_exPV", &mu_staco_id_d0_exPV, &b_mu_staco_id_d0_exPV);
   fChain->SetBranchAddress("mu_staco_id_z0_exPV", &mu_staco_id_z0_exPV, &b_mu_staco_id_z0_exPV);
   fChain->SetBranchAddress("mu_staco_id_phi_exPV", &mu_staco_id_phi_exPV, &b_mu_staco_id_phi_exPV);
   fChain->SetBranchAddress("mu_staco_id_theta_exPV", &mu_staco_id_theta_exPV, &b_mu_staco_id_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_qoverp_exPV", &mu_staco_id_qoverp_exPV, &b_mu_staco_id_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_d0_exPV", &mu_staco_me_d0_exPV, &b_mu_staco_me_d0_exPV);
   fChain->SetBranchAddress("mu_staco_me_z0_exPV", &mu_staco_me_z0_exPV, &b_mu_staco_me_z0_exPV);
   fChain->SetBranchAddress("mu_staco_me_phi_exPV", &mu_staco_me_phi_exPV, &b_mu_staco_me_phi_exPV);
   fChain->SetBranchAddress("mu_staco_me_theta_exPV", &mu_staco_me_theta_exPV, &b_mu_staco_me_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_qoverp_exPV", &mu_staco_me_qoverp_exPV, &b_mu_staco_me_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_ie_d0_exPV", &mu_staco_ie_d0_exPV, &b_mu_staco_ie_d0_exPV);
   fChain->SetBranchAddress("mu_staco_ie_z0_exPV", &mu_staco_ie_z0_exPV, &b_mu_staco_ie_z0_exPV);
   fChain->SetBranchAddress("mu_staco_ie_phi_exPV", &mu_staco_ie_phi_exPV, &b_mu_staco_ie_phi_exPV);
   fChain->SetBranchAddress("mu_staco_ie_theta_exPV", &mu_staco_ie_theta_exPV, &b_mu_staco_ie_theta_exPV);
   fChain->SetBranchAddress("mu_staco_ie_qoverp_exPV", &mu_staco_ie_qoverp_exPV, &b_mu_staco_ie_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_exPV", &mu_staco_cov_d0_exPV, &b_mu_staco_cov_d0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_exPV", &mu_staco_cov_z0_exPV, &b_mu_staco_cov_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_exPV", &mu_staco_cov_phi_exPV, &b_mu_staco_cov_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_theta_exPV", &mu_staco_cov_theta_exPV, &b_mu_staco_cov_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_qoverp_exPV", &mu_staco_cov_qoverp_exPV, &b_mu_staco_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_z0_exPV", &mu_staco_cov_d0_z0_exPV, &b_mu_staco_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_phi_exPV", &mu_staco_cov_d0_phi_exPV, &b_mu_staco_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_theta_exPV", &mu_staco_cov_d0_theta_exPV, &b_mu_staco_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_qoverp_exPV", &mu_staco_cov_d0_qoverp_exPV, &b_mu_staco_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_phi_exPV", &mu_staco_cov_z0_phi_exPV, &b_mu_staco_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_theta_exPV", &mu_staco_cov_z0_theta_exPV, &b_mu_staco_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_qoverp_exPV", &mu_staco_cov_z0_qoverp_exPV, &b_mu_staco_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_theta_exPV", &mu_staco_cov_phi_theta_exPV, &b_mu_staco_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_qoverp_exPV", &mu_staco_cov_phi_qoverp_exPV, &b_mu_staco_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_theta_qoverp_exPV", &mu_staco_cov_theta_qoverp_exPV, &b_mu_staco_cov_theta_qoverp_exPV);
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
   fChain->SetBranchAddress("mu_staco_nBLHits", &mu_staco_nBLHits, &b_mu_staco_nBLHits);
   fChain->SetBranchAddress("mu_staco_nPixHits", &mu_staco_nPixHits, &b_mu_staco_nPixHits);
   fChain->SetBranchAddress("mu_staco_nSCTHits", &mu_staco_nSCTHits, &b_mu_staco_nSCTHits);
   fChain->SetBranchAddress("mu_staco_nTRTHits", &mu_staco_nTRTHits, &b_mu_staco_nTRTHits);
   fChain->SetBranchAddress("mu_staco_nTRTHighTHits", &mu_staco_nTRTHighTHits, &b_mu_staco_nTRTHighTHits);
   fChain->SetBranchAddress("mu_staco_nBLSharedHits", &mu_staco_nBLSharedHits, &b_mu_staco_nBLSharedHits);
   fChain->SetBranchAddress("mu_staco_nPixSharedHits", &mu_staco_nPixSharedHits, &b_mu_staco_nPixSharedHits);
   fChain->SetBranchAddress("mu_staco_nPixHoles", &mu_staco_nPixHoles, &b_mu_staco_nPixHoles);
   fChain->SetBranchAddress("mu_staco_nSCTSharedHits", &mu_staco_nSCTSharedHits, &b_mu_staco_nSCTSharedHits);
   fChain->SetBranchAddress("mu_staco_nSCTHoles", &mu_staco_nSCTHoles, &b_mu_staco_nSCTHoles);
   fChain->SetBranchAddress("mu_staco_nTRTOutliers", &mu_staco_nTRTOutliers, &b_mu_staco_nTRTOutliers);
   fChain->SetBranchAddress("mu_staco_nTRTHighTOutliers", &mu_staco_nTRTHighTOutliers, &b_mu_staco_nTRTHighTOutliers);
   fChain->SetBranchAddress("mu_staco_nMDTHits", &mu_staco_nMDTHits, &b_mu_staco_nMDTHits);
   fChain->SetBranchAddress("mu_staco_nMDTHoles", &mu_staco_nMDTHoles, &b_mu_staco_nMDTHoles);
   fChain->SetBranchAddress("mu_staco_nCSCEtaHits", &mu_staco_nCSCEtaHits, &b_mu_staco_nCSCEtaHits);
   fChain->SetBranchAddress("mu_staco_nCSCEtaHoles", &mu_staco_nCSCEtaHoles, &b_mu_staco_nCSCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nCSCPhiHits", &mu_staco_nCSCPhiHits, &b_mu_staco_nCSCPhiHits);
   fChain->SetBranchAddress("mu_staco_nCSCPhiHoles", &mu_staco_nCSCPhiHoles, &b_mu_staco_nCSCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nRPCEtaHits", &mu_staco_nRPCEtaHits, &b_mu_staco_nRPCEtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCEtaHoles", &mu_staco_nRPCEtaHoles, &b_mu_staco_nRPCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nRPCPhiHits", &mu_staco_nRPCPhiHits, &b_mu_staco_nRPCPhiHits);
   fChain->SetBranchAddress("mu_staco_nRPCPhiHoles", &mu_staco_nRPCPhiHoles, &b_mu_staco_nRPCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nTGCEtaHits", &mu_staco_nTGCEtaHits, &b_mu_staco_nTGCEtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCEtaHoles", &mu_staco_nTGCEtaHoles, &b_mu_staco_nTGCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nTGCPhiHits", &mu_staco_nTGCPhiHits, &b_mu_staco_nTGCPhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCPhiHoles", &mu_staco_nTGCPhiHoles, &b_mu_staco_nTGCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nGangedPixels", &mu_staco_nGangedPixels, &b_mu_staco_nGangedPixels);
   fChain->SetBranchAddress("mu_staco_nOutliersOnTrack", &mu_staco_nOutliersOnTrack, &b_mu_staco_nOutliersOnTrack);
   fChain->SetBranchAddress("mu_staco_nMDTBIHits", &mu_staco_nMDTBIHits, &b_mu_staco_nMDTBIHits);
   fChain->SetBranchAddress("mu_staco_nMDTBMHits", &mu_staco_nMDTBMHits, &b_mu_staco_nMDTBMHits);
   fChain->SetBranchAddress("mu_staco_nMDTBOHits", &mu_staco_nMDTBOHits, &b_mu_staco_nMDTBOHits);
   fChain->SetBranchAddress("mu_staco_nMDTBEEHits", &mu_staco_nMDTBEEHits, &b_mu_staco_nMDTBEEHits);
   fChain->SetBranchAddress("mu_staco_nMDTBIS78Hits", &mu_staco_nMDTBIS78Hits, &b_mu_staco_nMDTBIS78Hits);
   fChain->SetBranchAddress("mu_staco_nMDTEIHits", &mu_staco_nMDTEIHits, &b_mu_staco_nMDTEIHits);
   fChain->SetBranchAddress("mu_staco_nMDTEMHits", &mu_staco_nMDTEMHits, &b_mu_staco_nMDTEMHits);
   fChain->SetBranchAddress("mu_staco_nMDTEOHits", &mu_staco_nMDTEOHits, &b_mu_staco_nMDTEOHits);
   fChain->SetBranchAddress("mu_staco_nMDTEEHits", &mu_staco_nMDTEEHits, &b_mu_staco_nMDTEEHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer1EtaHits", &mu_staco_nRPCLayer1EtaHits, &b_mu_staco_nRPCLayer1EtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer2EtaHits", &mu_staco_nRPCLayer2EtaHits, &b_mu_staco_nRPCLayer2EtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer3EtaHits", &mu_staco_nRPCLayer3EtaHits, &b_mu_staco_nRPCLayer3EtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer1PhiHits", &mu_staco_nRPCLayer1PhiHits, &b_mu_staco_nRPCLayer1PhiHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer2PhiHits", &mu_staco_nRPCLayer2PhiHits, &b_mu_staco_nRPCLayer2PhiHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer3PhiHits", &mu_staco_nRPCLayer3PhiHits, &b_mu_staco_nRPCLayer3PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer1EtaHits", &mu_staco_nTGCLayer1EtaHits, &b_mu_staco_nTGCLayer1EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer2EtaHits", &mu_staco_nTGCLayer2EtaHits, &b_mu_staco_nTGCLayer2EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer3EtaHits", &mu_staco_nTGCLayer3EtaHits, &b_mu_staco_nTGCLayer3EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer4EtaHits", &mu_staco_nTGCLayer4EtaHits, &b_mu_staco_nTGCLayer4EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer1PhiHits", &mu_staco_nTGCLayer1PhiHits, &b_mu_staco_nTGCLayer1PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer2PhiHits", &mu_staco_nTGCLayer2PhiHits, &b_mu_staco_nTGCLayer2PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer3PhiHits", &mu_staco_nTGCLayer3PhiHits, &b_mu_staco_nTGCLayer3PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer4PhiHits", &mu_staco_nTGCLayer4PhiHits, &b_mu_staco_nTGCLayer4PhiHits);
   fChain->SetBranchAddress("mu_staco_barrelSectors", &mu_staco_barrelSectors, &b_mu_staco_barrelSectors);
   fChain->SetBranchAddress("mu_staco_endcapSectors", &mu_staco_endcapSectors, &b_mu_staco_endcapSectors);
   fChain->SetBranchAddress("mu_staco_trackd0", &mu_staco_trackd0, &b_mu_staco_trackd0);
   fChain->SetBranchAddress("mu_staco_trackz0", &mu_staco_trackz0, &b_mu_staco_trackz0);
   fChain->SetBranchAddress("mu_staco_trackphi", &mu_staco_trackphi, &b_mu_staco_trackphi);
   fChain->SetBranchAddress("mu_staco_tracktheta", &mu_staco_tracktheta, &b_mu_staco_tracktheta);
   fChain->SetBranchAddress("mu_staco_trackqoverp", &mu_staco_trackqoverp, &b_mu_staco_trackqoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_d0", &mu_staco_trackcov_d0, &b_mu_staco_trackcov_d0);
   fChain->SetBranchAddress("mu_staco_trackcov_z0", &mu_staco_trackcov_z0, &b_mu_staco_trackcov_z0);
   fChain->SetBranchAddress("mu_staco_trackcov_phi", &mu_staco_trackcov_phi, &b_mu_staco_trackcov_phi);
   fChain->SetBranchAddress("mu_staco_trackcov_theta", &mu_staco_trackcov_theta, &b_mu_staco_trackcov_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_qoverp", &mu_staco_trackcov_qoverp, &b_mu_staco_trackcov_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_z0", &mu_staco_trackcov_d0_z0, &b_mu_staco_trackcov_d0_z0);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_phi", &mu_staco_trackcov_d0_phi, &b_mu_staco_trackcov_d0_phi);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_theta", &mu_staco_trackcov_d0_theta, &b_mu_staco_trackcov_d0_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_qoverp", &mu_staco_trackcov_d0_qoverp, &b_mu_staco_trackcov_d0_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_z0_phi", &mu_staco_trackcov_z0_phi, &b_mu_staco_trackcov_z0_phi);
   fChain->SetBranchAddress("mu_staco_trackcov_z0_theta", &mu_staco_trackcov_z0_theta, &b_mu_staco_trackcov_z0_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_z0_qoverp", &mu_staco_trackcov_z0_qoverp, &b_mu_staco_trackcov_z0_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_phi_theta", &mu_staco_trackcov_phi_theta, &b_mu_staco_trackcov_phi_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_phi_qoverp", &mu_staco_trackcov_phi_qoverp, &b_mu_staco_trackcov_phi_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_theta_qoverp", &mu_staco_trackcov_theta_qoverp, &b_mu_staco_trackcov_theta_qoverp);
   fChain->SetBranchAddress("mu_staco_trackfitchi2", &mu_staco_trackfitchi2, &b_mu_staco_trackfitchi2);
   fChain->SetBranchAddress("mu_staco_trackfitndof", &mu_staco_trackfitndof, &b_mu_staco_trackfitndof);
   fChain->SetBranchAddress("mu_staco_hastrack", &mu_staco_hastrack, &b_mu_staco_hastrack);
   fChain->SetBranchAddress("mu_staco_EF_dr", &mu_staco_EF_dr, &b_mu_staco_EF_dr);
   fChain->SetBranchAddress("mu_staco_EF_cb_eta", &mu_staco_EF_cb_eta, &b_mu_staco_EF_cb_eta);
   fChain->SetBranchAddress("mu_staco_EF_cb_phi", &mu_staco_EF_cb_phi, &b_mu_staco_EF_cb_phi);
   fChain->SetBranchAddress("mu_staco_EF_cb_pt", &mu_staco_EF_cb_pt, &b_mu_staco_EF_cb_pt);
   fChain->SetBranchAddress("mu_staco_EF_ms_eta", &mu_staco_EF_ms_eta, &b_mu_staco_EF_ms_eta);
   fChain->SetBranchAddress("mu_staco_EF_ms_phi", &mu_staco_EF_ms_phi, &b_mu_staco_EF_ms_phi);
   fChain->SetBranchAddress("mu_staco_EF_ms_pt", &mu_staco_EF_ms_pt, &b_mu_staco_EF_ms_pt);
   fChain->SetBranchAddress("mu_staco_EF_me_eta", &mu_staco_EF_me_eta, &b_mu_staco_EF_me_eta);
   fChain->SetBranchAddress("mu_staco_EF_me_phi", &mu_staco_EF_me_phi, &b_mu_staco_EF_me_phi);
   fChain->SetBranchAddress("mu_staco_EF_me_pt", &mu_staco_EF_me_pt, &b_mu_staco_EF_me_pt);
   fChain->SetBranchAddress("mu_staco_EF_matched", &mu_staco_EF_matched, &b_mu_staco_EF_matched);
   fChain->SetBranchAddress("mu_staco_L2CB_dr", &mu_staco_L2CB_dr, &b_mu_staco_L2CB_dr);
   fChain->SetBranchAddress("mu_staco_L2CB_pt", &mu_staco_L2CB_pt, &b_mu_staco_L2CB_pt);
   fChain->SetBranchAddress("mu_staco_L2CB_eta", &mu_staco_L2CB_eta, &b_mu_staco_L2CB_eta);
   fChain->SetBranchAddress("mu_staco_L2CB_phi", &mu_staco_L2CB_phi, &b_mu_staco_L2CB_phi);
   fChain->SetBranchAddress("mu_staco_L2CB_id_pt", &mu_staco_L2CB_id_pt, &b_mu_staco_L2CB_id_pt);
   fChain->SetBranchAddress("mu_staco_L2CB_ms_pt", &mu_staco_L2CB_ms_pt, &b_mu_staco_L2CB_ms_pt);
   fChain->SetBranchAddress("mu_staco_L2CB_nPixHits", &mu_staco_L2CB_nPixHits, &b_mu_staco_L2CB_nPixHits);
   fChain->SetBranchAddress("mu_staco_L2CB_nSCTHits", &mu_staco_L2CB_nSCTHits, &b_mu_staco_L2CB_nSCTHits);
   fChain->SetBranchAddress("mu_staco_L2CB_nTRTHits", &mu_staco_L2CB_nTRTHits, &b_mu_staco_L2CB_nTRTHits);
   fChain->SetBranchAddress("mu_staco_L2CB_nTRTHighTHits", &mu_staco_L2CB_nTRTHighTHits, &b_mu_staco_L2CB_nTRTHighTHits);
   fChain->SetBranchAddress("mu_staco_L2CB_matched", &mu_staco_L2CB_matched, &b_mu_staco_L2CB_matched);
   fChain->SetBranchAddress("mu_staco_L1_dr", &mu_staco_L1_dr, &b_mu_staco_L1_dr);
   fChain->SetBranchAddress("mu_staco_L1_pt", &mu_staco_L1_pt, &b_mu_staco_L1_pt);
   fChain->SetBranchAddress("mu_staco_L1_eta", &mu_staco_L1_eta, &b_mu_staco_L1_eta);
   fChain->SetBranchAddress("mu_staco_L1_phi", &mu_staco_L1_phi, &b_mu_staco_L1_phi);
   fChain->SetBranchAddress("mu_staco_L1_thrNumber", &mu_staco_L1_thrNumber, &b_mu_staco_L1_thrNumber);
   fChain->SetBranchAddress("mu_staco_L1_RoINumber", &mu_staco_L1_RoINumber, &b_mu_staco_L1_RoINumber);
   fChain->SetBranchAddress("mu_staco_L1_sectorAddress", &mu_staco_L1_sectorAddress, &b_mu_staco_L1_sectorAddress);
   fChain->SetBranchAddress("mu_staco_L1_firstCandidate", &mu_staco_L1_firstCandidate, &b_mu_staco_L1_firstCandidate);
   fChain->SetBranchAddress("mu_staco_L1_moreCandInRoI", &mu_staco_L1_moreCandInRoI, &b_mu_staco_L1_moreCandInRoI);
   fChain->SetBranchAddress("mu_staco_L1_moreCandInSector", &mu_staco_L1_moreCandInSector, &b_mu_staco_L1_moreCandInSector);
   fChain->SetBranchAddress("mu_staco_L1_source", &mu_staco_L1_source, &b_mu_staco_L1_source);
   fChain->SetBranchAddress("mu_staco_L1_hemisphere", &mu_staco_L1_hemisphere, &b_mu_staco_L1_hemisphere);
   fChain->SetBranchAddress("mu_staco_L1_matched", &mu_staco_L1_matched, &b_mu_staco_L1_matched);
   fChain->SetBranchAddress("mu_calo_n", &mu_calo_n, &b_mu_calo_n);
   fChain->SetBranchAddress("mu_calo_E", &mu_calo_E, &b_mu_calo_E);
   fChain->SetBranchAddress("mu_calo_pt", &mu_calo_pt, &b_mu_calo_pt);
   fChain->SetBranchAddress("mu_calo_m", &mu_calo_m, &b_mu_calo_m);
   fChain->SetBranchAddress("mu_calo_eta", &mu_calo_eta, &b_mu_calo_eta);
   fChain->SetBranchAddress("mu_calo_phi", &mu_calo_phi, &b_mu_calo_phi);
   fChain->SetBranchAddress("mu_calo_px", &mu_calo_px, &b_mu_calo_px);
   fChain->SetBranchAddress("mu_calo_py", &mu_calo_py, &b_mu_calo_py);
   fChain->SetBranchAddress("mu_calo_pz", &mu_calo_pz, &b_mu_calo_pz);
   fChain->SetBranchAddress("mu_calo_charge", &mu_calo_charge, &b_mu_calo_charge);
   fChain->SetBranchAddress("mu_calo_allauthor", &mu_calo_allauthor, &b_mu_calo_allauthor);
   fChain->SetBranchAddress("mu_calo_author", &mu_calo_author, &b_mu_calo_author);
   fChain->SetBranchAddress("mu_calo_matchchi2", &mu_calo_matchchi2, &b_mu_calo_matchchi2);
   fChain->SetBranchAddress("mu_calo_matchndof", &mu_calo_matchndof, &b_mu_calo_matchndof);
   fChain->SetBranchAddress("mu_calo_etcone20", &mu_calo_etcone20, &b_mu_calo_etcone20);
   fChain->SetBranchAddress("mu_calo_etcone30", &mu_calo_etcone30, &b_mu_calo_etcone30);
   fChain->SetBranchAddress("mu_calo_etcone40", &mu_calo_etcone40, &b_mu_calo_etcone40);
   fChain->SetBranchAddress("mu_calo_nucone20", &mu_calo_nucone20, &b_mu_calo_nucone20);
   fChain->SetBranchAddress("mu_calo_nucone30", &mu_calo_nucone30, &b_mu_calo_nucone30);
   fChain->SetBranchAddress("mu_calo_nucone40", &mu_calo_nucone40, &b_mu_calo_nucone40);
   fChain->SetBranchAddress("mu_calo_ptcone20", &mu_calo_ptcone20, &b_mu_calo_ptcone20);
   fChain->SetBranchAddress("mu_calo_ptcone30", &mu_calo_ptcone30, &b_mu_calo_ptcone30);
   fChain->SetBranchAddress("mu_calo_ptcone40", &mu_calo_ptcone40, &b_mu_calo_ptcone40);
   fChain->SetBranchAddress("mu_calo_energyLossPar", &mu_calo_energyLossPar, &b_mu_calo_energyLossPar);
   fChain->SetBranchAddress("mu_calo_energyLossErr", &mu_calo_energyLossErr, &b_mu_calo_energyLossErr);
   fChain->SetBranchAddress("mu_calo_etCore", &mu_calo_etCore, &b_mu_calo_etCore);
   fChain->SetBranchAddress("mu_calo_energyLossType", &mu_calo_energyLossType, &b_mu_calo_energyLossType);
   fChain->SetBranchAddress("mu_calo_bestMatch", &mu_calo_bestMatch, &b_mu_calo_bestMatch);
   fChain->SetBranchAddress("mu_calo_isStandAloneMuon", &mu_calo_isStandAloneMuon, &b_mu_calo_isStandAloneMuon);
   fChain->SetBranchAddress("mu_calo_isCombinedMuon", &mu_calo_isCombinedMuon, &b_mu_calo_isCombinedMuon);
   fChain->SetBranchAddress("mu_calo_isLowPtReconstructedMuon", &mu_calo_isLowPtReconstructedMuon, &b_mu_calo_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_calo_loose", &mu_calo_loose, &b_mu_calo_loose);
   fChain->SetBranchAddress("mu_calo_medium", &mu_calo_medium, &b_mu_calo_medium);
   fChain->SetBranchAddress("mu_calo_tight", &mu_calo_tight, &b_mu_calo_tight);
   fChain->SetBranchAddress("mu_calo_d0_exPV", &mu_calo_d0_exPV, &b_mu_calo_d0_exPV);
   fChain->SetBranchAddress("mu_calo_z0_exPV", &mu_calo_z0_exPV, &b_mu_calo_z0_exPV);
   fChain->SetBranchAddress("mu_calo_phi_exPV", &mu_calo_phi_exPV, &b_mu_calo_phi_exPV);
   fChain->SetBranchAddress("mu_calo_theta_exPV", &mu_calo_theta_exPV, &b_mu_calo_theta_exPV);
   fChain->SetBranchAddress("mu_calo_qoverp_exPV", &mu_calo_qoverp_exPV, &b_mu_calo_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cb_d0_exPV", &mu_calo_cb_d0_exPV, &b_mu_calo_cb_d0_exPV);
   fChain->SetBranchAddress("mu_calo_cb_z0_exPV", &mu_calo_cb_z0_exPV, &b_mu_calo_cb_z0_exPV);
   fChain->SetBranchAddress("mu_calo_cb_phi_exPV", &mu_calo_cb_phi_exPV, &b_mu_calo_cb_phi_exPV);
   fChain->SetBranchAddress("mu_calo_cb_theta_exPV", &mu_calo_cb_theta_exPV, &b_mu_calo_cb_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cb_qoverp_exPV", &mu_calo_cb_qoverp_exPV, &b_mu_calo_cb_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_id_d0_exPV", &mu_calo_id_d0_exPV, &b_mu_calo_id_d0_exPV);
   fChain->SetBranchAddress("mu_calo_id_z0_exPV", &mu_calo_id_z0_exPV, &b_mu_calo_id_z0_exPV);
   fChain->SetBranchAddress("mu_calo_id_phi_exPV", &mu_calo_id_phi_exPV, &b_mu_calo_id_phi_exPV);
   fChain->SetBranchAddress("mu_calo_id_theta_exPV", &mu_calo_id_theta_exPV, &b_mu_calo_id_theta_exPV);
   fChain->SetBranchAddress("mu_calo_id_qoverp_exPV", &mu_calo_id_qoverp_exPV, &b_mu_calo_id_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_me_d0_exPV", &mu_calo_me_d0_exPV, &b_mu_calo_me_d0_exPV);
   fChain->SetBranchAddress("mu_calo_me_z0_exPV", &mu_calo_me_z0_exPV, &b_mu_calo_me_z0_exPV);
   fChain->SetBranchAddress("mu_calo_me_phi_exPV", &mu_calo_me_phi_exPV, &b_mu_calo_me_phi_exPV);
   fChain->SetBranchAddress("mu_calo_me_theta_exPV", &mu_calo_me_theta_exPV, &b_mu_calo_me_theta_exPV);
   fChain->SetBranchAddress("mu_calo_me_qoverp_exPV", &mu_calo_me_qoverp_exPV, &b_mu_calo_me_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_ie_d0_exPV", &mu_calo_ie_d0_exPV, &b_mu_calo_ie_d0_exPV);
   fChain->SetBranchAddress("mu_calo_ie_z0_exPV", &mu_calo_ie_z0_exPV, &b_mu_calo_ie_z0_exPV);
   fChain->SetBranchAddress("mu_calo_ie_phi_exPV", &mu_calo_ie_phi_exPV, &b_mu_calo_ie_phi_exPV);
   fChain->SetBranchAddress("mu_calo_ie_theta_exPV", &mu_calo_ie_theta_exPV, &b_mu_calo_ie_theta_exPV);
   fChain->SetBranchAddress("mu_calo_ie_qoverp_exPV", &mu_calo_ie_qoverp_exPV, &b_mu_calo_ie_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cov_d0_exPV", &mu_calo_cov_d0_exPV, &b_mu_calo_cov_d0_exPV);
   fChain->SetBranchAddress("mu_calo_cov_z0_exPV", &mu_calo_cov_z0_exPV, &b_mu_calo_cov_z0_exPV);
   fChain->SetBranchAddress("mu_calo_cov_phi_exPV", &mu_calo_cov_phi_exPV, &b_mu_calo_cov_phi_exPV);
   fChain->SetBranchAddress("mu_calo_cov_theta_exPV", &mu_calo_cov_theta_exPV, &b_mu_calo_cov_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cov_qoverp_exPV", &mu_calo_cov_qoverp_exPV, &b_mu_calo_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cov_d0_z0_exPV", &mu_calo_cov_d0_z0_exPV, &b_mu_calo_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_calo_cov_d0_phi_exPV", &mu_calo_cov_d0_phi_exPV, &b_mu_calo_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_cov_d0_theta_exPV", &mu_calo_cov_d0_theta_exPV, &b_mu_calo_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cov_d0_qoverp_exPV", &mu_calo_cov_d0_qoverp_exPV, &b_mu_calo_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cov_z0_phi_exPV", &mu_calo_cov_z0_phi_exPV, &b_mu_calo_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_cov_z0_theta_exPV", &mu_calo_cov_z0_theta_exPV, &b_mu_calo_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cov_z0_qoverp_exPV", &mu_calo_cov_z0_qoverp_exPV, &b_mu_calo_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cov_phi_theta_exPV", &mu_calo_cov_phi_theta_exPV, &b_mu_calo_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cov_phi_qoverp_exPV", &mu_calo_cov_phi_qoverp_exPV, &b_mu_calo_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cov_theta_qoverp_exPV", &mu_calo_cov_theta_qoverp_exPV, &b_mu_calo_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_ms_d0", &mu_calo_ms_d0, &b_mu_calo_ms_d0);
   fChain->SetBranchAddress("mu_calo_ms_z0", &mu_calo_ms_z0, &b_mu_calo_ms_z0);
   fChain->SetBranchAddress("mu_calo_ms_phi", &mu_calo_ms_phi, &b_mu_calo_ms_phi);
   fChain->SetBranchAddress("mu_calo_ms_theta", &mu_calo_ms_theta, &b_mu_calo_ms_theta);
   fChain->SetBranchAddress("mu_calo_ms_qoverp", &mu_calo_ms_qoverp, &b_mu_calo_ms_qoverp);
   fChain->SetBranchAddress("mu_calo_id_d0", &mu_calo_id_d0, &b_mu_calo_id_d0);
   fChain->SetBranchAddress("mu_calo_id_z0", &mu_calo_id_z0, &b_mu_calo_id_z0);
   fChain->SetBranchAddress("mu_calo_id_phi", &mu_calo_id_phi, &b_mu_calo_id_phi);
   fChain->SetBranchAddress("mu_calo_id_theta", &mu_calo_id_theta, &b_mu_calo_id_theta);
   fChain->SetBranchAddress("mu_calo_id_qoverp", &mu_calo_id_qoverp, &b_mu_calo_id_qoverp);
   fChain->SetBranchAddress("mu_calo_me_d0", &mu_calo_me_d0, &b_mu_calo_me_d0);
   fChain->SetBranchAddress("mu_calo_me_z0", &mu_calo_me_z0, &b_mu_calo_me_z0);
   fChain->SetBranchAddress("mu_calo_me_phi", &mu_calo_me_phi, &b_mu_calo_me_phi);
   fChain->SetBranchAddress("mu_calo_me_theta", &mu_calo_me_theta, &b_mu_calo_me_theta);
   fChain->SetBranchAddress("mu_calo_me_qoverp", &mu_calo_me_qoverp, &b_mu_calo_me_qoverp);
   fChain->SetBranchAddress("mu_calo_ie_d0", &mu_calo_ie_d0, &b_mu_calo_ie_d0);
   fChain->SetBranchAddress("mu_calo_ie_z0", &mu_calo_ie_z0, &b_mu_calo_ie_z0);
   fChain->SetBranchAddress("mu_calo_ie_phi", &mu_calo_ie_phi, &b_mu_calo_ie_phi);
   fChain->SetBranchAddress("mu_calo_ie_theta", &mu_calo_ie_theta, &b_mu_calo_ie_theta);
   fChain->SetBranchAddress("mu_calo_ie_qoverp", &mu_calo_ie_qoverp, &b_mu_calo_ie_qoverp);
   fChain->SetBranchAddress("mu_calo_nBLHits", &mu_calo_nBLHits, &b_mu_calo_nBLHits);
   fChain->SetBranchAddress("mu_calo_nPixHits", &mu_calo_nPixHits, &b_mu_calo_nPixHits);
   fChain->SetBranchAddress("mu_calo_nSCTHits", &mu_calo_nSCTHits, &b_mu_calo_nSCTHits);
   fChain->SetBranchAddress("mu_calo_nTRTHits", &mu_calo_nTRTHits, &b_mu_calo_nTRTHits);
   fChain->SetBranchAddress("mu_calo_nTRTHighTHits", &mu_calo_nTRTHighTHits, &b_mu_calo_nTRTHighTHits);
   fChain->SetBranchAddress("mu_calo_nBLSharedHits", &mu_calo_nBLSharedHits, &b_mu_calo_nBLSharedHits);
   fChain->SetBranchAddress("mu_calo_nPixSharedHits", &mu_calo_nPixSharedHits, &b_mu_calo_nPixSharedHits);
   fChain->SetBranchAddress("mu_calo_nPixHoles", &mu_calo_nPixHoles, &b_mu_calo_nPixHoles);
   fChain->SetBranchAddress("mu_calo_nSCTSharedHits", &mu_calo_nSCTSharedHits, &b_mu_calo_nSCTSharedHits);
   fChain->SetBranchAddress("mu_calo_nSCTHoles", &mu_calo_nSCTHoles, &b_mu_calo_nSCTHoles);
   fChain->SetBranchAddress("mu_calo_nTRTOutliers", &mu_calo_nTRTOutliers, &b_mu_calo_nTRTOutliers);
   fChain->SetBranchAddress("mu_calo_nTRTHighTOutliers", &mu_calo_nTRTHighTOutliers, &b_mu_calo_nTRTHighTOutliers);
   fChain->SetBranchAddress("mu_calo_nMDTHits", &mu_calo_nMDTHits, &b_mu_calo_nMDTHits);
   fChain->SetBranchAddress("mu_calo_nMDTHoles", &mu_calo_nMDTHoles, &b_mu_calo_nMDTHoles);
   fChain->SetBranchAddress("mu_calo_nCSCEtaHits", &mu_calo_nCSCEtaHits, &b_mu_calo_nCSCEtaHits);
   fChain->SetBranchAddress("mu_calo_nCSCEtaHoles", &mu_calo_nCSCEtaHoles, &b_mu_calo_nCSCEtaHoles);
   fChain->SetBranchAddress("mu_calo_nCSCPhiHits", &mu_calo_nCSCPhiHits, &b_mu_calo_nCSCPhiHits);
   fChain->SetBranchAddress("mu_calo_nCSCPhiHoles", &mu_calo_nCSCPhiHoles, &b_mu_calo_nCSCPhiHoles);
   fChain->SetBranchAddress("mu_calo_nRPCEtaHits", &mu_calo_nRPCEtaHits, &b_mu_calo_nRPCEtaHits);
   fChain->SetBranchAddress("mu_calo_nRPCEtaHoles", &mu_calo_nRPCEtaHoles, &b_mu_calo_nRPCEtaHoles);
   fChain->SetBranchAddress("mu_calo_nRPCPhiHits", &mu_calo_nRPCPhiHits, &b_mu_calo_nRPCPhiHits);
   fChain->SetBranchAddress("mu_calo_nRPCPhiHoles", &mu_calo_nRPCPhiHoles, &b_mu_calo_nRPCPhiHoles);
   fChain->SetBranchAddress("mu_calo_nTGCEtaHits", &mu_calo_nTGCEtaHits, &b_mu_calo_nTGCEtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCEtaHoles", &mu_calo_nTGCEtaHoles, &b_mu_calo_nTGCEtaHoles);
   fChain->SetBranchAddress("mu_calo_nTGCPhiHits", &mu_calo_nTGCPhiHits, &b_mu_calo_nTGCPhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCPhiHoles", &mu_calo_nTGCPhiHoles, &b_mu_calo_nTGCPhiHoles);
   fChain->SetBranchAddress("mu_calo_nGangedPixels", &mu_calo_nGangedPixels, &b_mu_calo_nGangedPixels);
   fChain->SetBranchAddress("mu_calo_nOutliersOnTrack", &mu_calo_nOutliersOnTrack, &b_mu_calo_nOutliersOnTrack);
   fChain->SetBranchAddress("mu_calo_nMDTBIHits", &mu_calo_nMDTBIHits, &b_mu_calo_nMDTBIHits);
   fChain->SetBranchAddress("mu_calo_nMDTBMHits", &mu_calo_nMDTBMHits, &b_mu_calo_nMDTBMHits);
   fChain->SetBranchAddress("mu_calo_nMDTBOHits", &mu_calo_nMDTBOHits, &b_mu_calo_nMDTBOHits);
   fChain->SetBranchAddress("mu_calo_nMDTBEEHits", &mu_calo_nMDTBEEHits, &b_mu_calo_nMDTBEEHits);
   fChain->SetBranchAddress("mu_calo_nMDTBIS78Hits", &mu_calo_nMDTBIS78Hits, &b_mu_calo_nMDTBIS78Hits);
   fChain->SetBranchAddress("mu_calo_nMDTEIHits", &mu_calo_nMDTEIHits, &b_mu_calo_nMDTEIHits);
   fChain->SetBranchAddress("mu_calo_nMDTEMHits", &mu_calo_nMDTEMHits, &b_mu_calo_nMDTEMHits);
   fChain->SetBranchAddress("mu_calo_nMDTEOHits", &mu_calo_nMDTEOHits, &b_mu_calo_nMDTEOHits);
   fChain->SetBranchAddress("mu_calo_nMDTEEHits", &mu_calo_nMDTEEHits, &b_mu_calo_nMDTEEHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer1EtaHits", &mu_calo_nRPCLayer1EtaHits, &b_mu_calo_nRPCLayer1EtaHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer2EtaHits", &mu_calo_nRPCLayer2EtaHits, &b_mu_calo_nRPCLayer2EtaHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer3EtaHits", &mu_calo_nRPCLayer3EtaHits, &b_mu_calo_nRPCLayer3EtaHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer1PhiHits", &mu_calo_nRPCLayer1PhiHits, &b_mu_calo_nRPCLayer1PhiHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer2PhiHits", &mu_calo_nRPCLayer2PhiHits, &b_mu_calo_nRPCLayer2PhiHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer3PhiHits", &mu_calo_nRPCLayer3PhiHits, &b_mu_calo_nRPCLayer3PhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer1EtaHits", &mu_calo_nTGCLayer1EtaHits, &b_mu_calo_nTGCLayer1EtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer2EtaHits", &mu_calo_nTGCLayer2EtaHits, &b_mu_calo_nTGCLayer2EtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer3EtaHits", &mu_calo_nTGCLayer3EtaHits, &b_mu_calo_nTGCLayer3EtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer4EtaHits", &mu_calo_nTGCLayer4EtaHits, &b_mu_calo_nTGCLayer4EtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer1PhiHits", &mu_calo_nTGCLayer1PhiHits, &b_mu_calo_nTGCLayer1PhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer2PhiHits", &mu_calo_nTGCLayer2PhiHits, &b_mu_calo_nTGCLayer2PhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer3PhiHits", &mu_calo_nTGCLayer3PhiHits, &b_mu_calo_nTGCLayer3PhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer4PhiHits", &mu_calo_nTGCLayer4PhiHits, &b_mu_calo_nTGCLayer4PhiHits);
   fChain->SetBranchAddress("mu_calo_barrelSectors", &mu_calo_barrelSectors, &b_mu_calo_barrelSectors);
   fChain->SetBranchAddress("mu_calo_endcapSectors", &mu_calo_endcapSectors, &b_mu_calo_endcapSectors);
   fChain->SetBranchAddress("mu_calo_trackd0", &mu_calo_trackd0, &b_mu_calo_trackd0);
   fChain->SetBranchAddress("mu_calo_trackz0", &mu_calo_trackz0, &b_mu_calo_trackz0);
   fChain->SetBranchAddress("mu_calo_trackphi", &mu_calo_trackphi, &b_mu_calo_trackphi);
   fChain->SetBranchAddress("mu_calo_tracktheta", &mu_calo_tracktheta, &b_mu_calo_tracktheta);
   fChain->SetBranchAddress("mu_calo_trackqoverp", &mu_calo_trackqoverp, &b_mu_calo_trackqoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_d0", &mu_calo_trackcov_d0, &b_mu_calo_trackcov_d0);
   fChain->SetBranchAddress("mu_calo_trackcov_z0", &mu_calo_trackcov_z0, &b_mu_calo_trackcov_z0);
   fChain->SetBranchAddress("mu_calo_trackcov_phi", &mu_calo_trackcov_phi, &b_mu_calo_trackcov_phi);
   fChain->SetBranchAddress("mu_calo_trackcov_theta", &mu_calo_trackcov_theta, &b_mu_calo_trackcov_theta);
   fChain->SetBranchAddress("mu_calo_trackcov_qoverp", &mu_calo_trackcov_qoverp, &b_mu_calo_trackcov_qoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_d0_z0", &mu_calo_trackcov_d0_z0, &b_mu_calo_trackcov_d0_z0);
   fChain->SetBranchAddress("mu_calo_trackcov_d0_phi", &mu_calo_trackcov_d0_phi, &b_mu_calo_trackcov_d0_phi);
   fChain->SetBranchAddress("mu_calo_trackcov_d0_theta", &mu_calo_trackcov_d0_theta, &b_mu_calo_trackcov_d0_theta);
   fChain->SetBranchAddress("mu_calo_trackcov_d0_qoverp", &mu_calo_trackcov_d0_qoverp, &b_mu_calo_trackcov_d0_qoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_z0_phi", &mu_calo_trackcov_z0_phi, &b_mu_calo_trackcov_z0_phi);
   fChain->SetBranchAddress("mu_calo_trackcov_z0_theta", &mu_calo_trackcov_z0_theta, &b_mu_calo_trackcov_z0_theta);
   fChain->SetBranchAddress("mu_calo_trackcov_z0_qoverp", &mu_calo_trackcov_z0_qoverp, &b_mu_calo_trackcov_z0_qoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_phi_theta", &mu_calo_trackcov_phi_theta, &b_mu_calo_trackcov_phi_theta);
   fChain->SetBranchAddress("mu_calo_trackcov_phi_qoverp", &mu_calo_trackcov_phi_qoverp, &b_mu_calo_trackcov_phi_qoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_theta_qoverp", &mu_calo_trackcov_theta_qoverp, &b_mu_calo_trackcov_theta_qoverp);
   fChain->SetBranchAddress("mu_calo_trackfitchi2", &mu_calo_trackfitchi2, &b_mu_calo_trackfitchi2);
   fChain->SetBranchAddress("mu_calo_trackfitndof", &mu_calo_trackfitndof, &b_mu_calo_trackfitndof);
   fChain->SetBranchAddress("mu_calo_hastrack", &mu_calo_hastrack, &b_mu_calo_hastrack);
   fChain->SetBranchAddress("mu_calo_EF_dr", &mu_calo_EF_dr, &b_mu_calo_EF_dr);
   fChain->SetBranchAddress("mu_calo_EF_cb_eta", &mu_calo_EF_cb_eta, &b_mu_calo_EF_cb_eta);
   fChain->SetBranchAddress("mu_calo_EF_cb_phi", &mu_calo_EF_cb_phi, &b_mu_calo_EF_cb_phi);
   fChain->SetBranchAddress("mu_calo_EF_cb_pt", &mu_calo_EF_cb_pt, &b_mu_calo_EF_cb_pt);
   fChain->SetBranchAddress("mu_calo_EF_ms_eta", &mu_calo_EF_ms_eta, &b_mu_calo_EF_ms_eta);
   fChain->SetBranchAddress("mu_calo_EF_ms_phi", &mu_calo_EF_ms_phi, &b_mu_calo_EF_ms_phi);
   fChain->SetBranchAddress("mu_calo_EF_ms_pt", &mu_calo_EF_ms_pt, &b_mu_calo_EF_ms_pt);
   fChain->SetBranchAddress("mu_calo_EF_me_eta", &mu_calo_EF_me_eta, &b_mu_calo_EF_me_eta);
   fChain->SetBranchAddress("mu_calo_EF_me_phi", &mu_calo_EF_me_phi, &b_mu_calo_EF_me_phi);
   fChain->SetBranchAddress("mu_calo_EF_me_pt", &mu_calo_EF_me_pt, &b_mu_calo_EF_me_pt);
   fChain->SetBranchAddress("mu_calo_EF_matched", &mu_calo_EF_matched, &b_mu_calo_EF_matched);
   fChain->SetBranchAddress("mu_calo_L2CB_dr", &mu_calo_L2CB_dr, &b_mu_calo_L2CB_dr);
   fChain->SetBranchAddress("mu_calo_L2CB_pt", &mu_calo_L2CB_pt, &b_mu_calo_L2CB_pt);
   fChain->SetBranchAddress("mu_calo_L2CB_eta", &mu_calo_L2CB_eta, &b_mu_calo_L2CB_eta);
   fChain->SetBranchAddress("mu_calo_L2CB_phi", &mu_calo_L2CB_phi, &b_mu_calo_L2CB_phi);
   fChain->SetBranchAddress("mu_calo_L2CB_id_pt", &mu_calo_L2CB_id_pt, &b_mu_calo_L2CB_id_pt);
   fChain->SetBranchAddress("mu_calo_L2CB_ms_pt", &mu_calo_L2CB_ms_pt, &b_mu_calo_L2CB_ms_pt);
   fChain->SetBranchAddress("mu_calo_L2CB_nPixHits", &mu_calo_L2CB_nPixHits, &b_mu_calo_L2CB_nPixHits);
   fChain->SetBranchAddress("mu_calo_L2CB_nSCTHits", &mu_calo_L2CB_nSCTHits, &b_mu_calo_L2CB_nSCTHits);
   fChain->SetBranchAddress("mu_calo_L2CB_nTRTHits", &mu_calo_L2CB_nTRTHits, &b_mu_calo_L2CB_nTRTHits);
   fChain->SetBranchAddress("mu_calo_L2CB_nTRTHighTHits", &mu_calo_L2CB_nTRTHighTHits, &b_mu_calo_L2CB_nTRTHighTHits);
   fChain->SetBranchAddress("mu_calo_L2CB_matched", &mu_calo_L2CB_matched, &b_mu_calo_L2CB_matched);
   fChain->SetBranchAddress("mu_calo_L1_dr", &mu_calo_L1_dr, &b_mu_calo_L1_dr);
   fChain->SetBranchAddress("mu_calo_L1_pt", &mu_calo_L1_pt, &b_mu_calo_L1_pt);
   fChain->SetBranchAddress("mu_calo_L1_eta", &mu_calo_L1_eta, &b_mu_calo_L1_eta);
   fChain->SetBranchAddress("mu_calo_L1_phi", &mu_calo_L1_phi, &b_mu_calo_L1_phi);
   fChain->SetBranchAddress("mu_calo_L1_thrNumber", &mu_calo_L1_thrNumber, &b_mu_calo_L1_thrNumber);
   fChain->SetBranchAddress("mu_calo_L1_RoINumber", &mu_calo_L1_RoINumber, &b_mu_calo_L1_RoINumber);
   fChain->SetBranchAddress("mu_calo_L1_sectorAddress", &mu_calo_L1_sectorAddress, &b_mu_calo_L1_sectorAddress);
   fChain->SetBranchAddress("mu_calo_L1_firstCandidate", &mu_calo_L1_firstCandidate, &b_mu_calo_L1_firstCandidate);
   fChain->SetBranchAddress("mu_calo_L1_moreCandInRoI", &mu_calo_L1_moreCandInRoI, &b_mu_calo_L1_moreCandInRoI);
   fChain->SetBranchAddress("mu_calo_L1_moreCandInSector", &mu_calo_L1_moreCandInSector, &b_mu_calo_L1_moreCandInSector);
   fChain->SetBranchAddress("mu_calo_L1_source", &mu_calo_L1_source, &b_mu_calo_L1_source);
   fChain->SetBranchAddress("mu_calo_L1_hemisphere", &mu_calo_L1_hemisphere, &b_mu_calo_L1_hemisphere);
   fChain->SetBranchAddress("mu_calo_L1_matched", &mu_calo_L1_matched, &b_mu_calo_L1_matched);
   fChain->SetBranchAddress("tau_n", &tau_n, &b_tau_n);
   fChain->SetBranchAddress("tau_Et", &tau_Et, &b_tau_Et);
   fChain->SetBranchAddress("tau_pt", &tau_pt, &b_tau_pt);
   fChain->SetBranchAddress("tau_m", &tau_m, &b_tau_m);
   fChain->SetBranchAddress("tau_eta", &tau_eta, &b_tau_eta);
   fChain->SetBranchAddress("tau_phi", &tau_phi, &b_tau_phi);
   fChain->SetBranchAddress("tau_charge", &tau_charge, &b_tau_charge);
   fChain->SetBranchAddress("tau_BDTEleScore", &tau_BDTEleScore, &b_tau_BDTEleScore);
   fChain->SetBranchAddress("tau_BDTJetScore", &tau_BDTJetScore, &b_tau_BDTJetScore);
   fChain->SetBranchAddress("tau_discCut", &tau_discCut, &b_tau_discCut);
   fChain->SetBranchAddress("tau_discCutTMVA", &tau_discCutTMVA, &b_tau_discCutTMVA);
   fChain->SetBranchAddress("tau_discLL", &tau_discLL, &b_tau_discLL);
   fChain->SetBranchAddress("tau_discNN", &tau_discNN, &b_tau_discNN);
   fChain->SetBranchAddress("tau_efficLL", &tau_efficLL, &b_tau_efficLL);
   fChain->SetBranchAddress("tau_efficNN", &tau_efficNN, &b_tau_efficNN);
   fChain->SetBranchAddress("tau_likelihood", &tau_likelihood, &b_tau_likelihood);
   fChain->SetBranchAddress("tau_tauJetNeuralNetwork", &tau_tauJetNeuralNetwork, &b_tau_tauJetNeuralNetwork);
   fChain->SetBranchAddress("tau_tauENeuralNetwork", &tau_tauENeuralNetwork, &b_tau_tauENeuralNetwork);
   fChain->SetBranchAddress("tau_tauElTauLikelihood", &tau_tauElTauLikelihood, &b_tau_tauElTauLikelihood);
   fChain->SetBranchAddress("tau_electronVetoLoose", &tau_electronVetoLoose, &b_tau_electronVetoLoose);
   fChain->SetBranchAddress("tau_electronVetoMedium", &tau_electronVetoMedium, &b_tau_electronVetoMedium);
   fChain->SetBranchAddress("tau_electronVetoTight", &tau_electronVetoTight, &b_tau_electronVetoTight);
   fChain->SetBranchAddress("tau_muonVeto", &tau_muonVeto, &b_tau_muonVeto);
   fChain->SetBranchAddress("tau_tauCutLoose", &tau_tauCutLoose, &b_tau_tauCutLoose);
   fChain->SetBranchAddress("tau_tauCutMedium", &tau_tauCutMedium, &b_tau_tauCutMedium);
   fChain->SetBranchAddress("tau_tauCutTight", &tau_tauCutTight, &b_tau_tauCutTight);
   fChain->SetBranchAddress("tau_tauCutSafeLoose", &tau_tauCutSafeLoose, &b_tau_tauCutSafeLoose);
   fChain->SetBranchAddress("tau_tauCutSafeMedium", &tau_tauCutSafeMedium, &b_tau_tauCutSafeMedium);
   fChain->SetBranchAddress("tau_tauCutSafeTight", &tau_tauCutSafeTight, &b_tau_tauCutSafeTight);
   fChain->SetBranchAddress("tau_tauCutSafeCaloLoose", &tau_tauCutSafeCaloLoose, &b_tau_tauCutSafeCaloLoose);
   fChain->SetBranchAddress("tau_tauCutSafeCaloMedium", &tau_tauCutSafeCaloMedium, &b_tau_tauCutSafeCaloMedium);
   fChain->SetBranchAddress("tau_tauCutSafeCaloTight", &tau_tauCutSafeCaloTight, &b_tau_tauCutSafeCaloTight);
   fChain->SetBranchAddress("tau_tauLlhLoose", &tau_tauLlhLoose, &b_tau_tauLlhLoose);
   fChain->SetBranchAddress("tau_tauLlhMedium", &tau_tauLlhMedium, &b_tau_tauLlhMedium);
   fChain->SetBranchAddress("tau_tauLlhTight", &tau_tauLlhTight, &b_tau_tauLlhTight);
   fChain->SetBranchAddress("tau_author", &tau_author, &b_tau_author);
   fChain->SetBranchAddress("tau_ROIword", &tau_ROIword, &b_tau_ROIword);
   fChain->SetBranchAddress("tau_nProng", &tau_nProng, &b_tau_nProng);
   fChain->SetBranchAddress("tau_numTrack", &tau_numTrack, &b_tau_numTrack);
   fChain->SetBranchAddress("tau_etOverPtLeadTrk", &tau_etOverPtLeadTrk, &b_tau_etOverPtLeadTrk);
   fChain->SetBranchAddress("tau_ipZ0SinThetaSigLeadTrk", &tau_ipZ0SinThetaSigLeadTrk, &b_tau_ipZ0SinThetaSigLeadTrk);
   fChain->SetBranchAddress("tau_leadTrkPt", &tau_leadTrkPt, &b_tau_leadTrkPt);
   fChain->SetBranchAddress("tau_nLooseTrk", &tau_nLooseTrk, &b_tau_nLooseTrk);
   fChain->SetBranchAddress("tau_nLooseConvTrk", &tau_nLooseConvTrk, &b_tau_nLooseConvTrk);
   fChain->SetBranchAddress("tau_nProngLoose", &tau_nProngLoose, &b_tau_nProngLoose);
   fChain->SetBranchAddress("tau_ipSigLeadTrk", &tau_ipSigLeadTrk, &b_tau_ipSigLeadTrk);
   fChain->SetBranchAddress("tau_ipSigLeadLooseTrk", &tau_ipSigLeadLooseTrk, &b_tau_ipSigLeadLooseTrk);
   fChain->SetBranchAddress("tau_etOverPtLeadLooseTrk", &tau_etOverPtLeadLooseTrk, &b_tau_etOverPtLeadLooseTrk);
   fChain->SetBranchAddress("tau_leadLooseTrkPt", &tau_leadLooseTrkPt, &b_tau_leadLooseTrkPt);
   fChain->SetBranchAddress("tau_chrgLooseTrk", &tau_chrgLooseTrk, &b_tau_chrgLooseTrk);
   fChain->SetBranchAddress("tau_massTrkSys", &tau_massTrkSys, &b_tau_massTrkSys);
   fChain->SetBranchAddress("tau_trkWidth2", &tau_trkWidth2, &b_tau_trkWidth2);
   fChain->SetBranchAddress("tau_trFlightPathSig", &tau_trFlightPathSig, &b_tau_trFlightPathSig);
   fChain->SetBranchAddress("tau_etEflow", &tau_etEflow, &b_tau_etEflow);
   fChain->SetBranchAddress("tau_mEflow", &tau_mEflow, &b_tau_mEflow);
   fChain->SetBranchAddress("tau_nPi0", &tau_nPi0, &b_tau_nPi0);
   fChain->SetBranchAddress("tau_ele_E237E277", &tau_ele_E237E277, &b_tau_ele_E237E277);
   fChain->SetBranchAddress("tau_ele_PresamplerFraction", &tau_ele_PresamplerFraction, &b_tau_ele_PresamplerFraction);
   fChain->SetBranchAddress("tau_ele_ECALFirstFraction", &tau_ele_ECALFirstFraction, &b_tau_ele_ECALFirstFraction);
   fChain->SetBranchAddress("tau_seedCalo_EMRadius", &tau_seedCalo_EMRadius, &b_tau_seedCalo_EMRadius);
   fChain->SetBranchAddress("tau_seedCalo_hadRadius", &tau_seedCalo_hadRadius, &b_tau_seedCalo_hadRadius);
   fChain->SetBranchAddress("tau_seedCalo_etEMAtEMScale", &tau_seedCalo_etEMAtEMScale, &b_tau_seedCalo_etEMAtEMScale);
   fChain->SetBranchAddress("tau_seedCalo_etHadAtEMScale", &tau_seedCalo_etHadAtEMScale, &b_tau_seedCalo_etHadAtEMScale);
   fChain->SetBranchAddress("tau_seedCalo_isolFrac", &tau_seedCalo_isolFrac, &b_tau_seedCalo_isolFrac);
   fChain->SetBranchAddress("tau_seedCalo_centFrac", &tau_seedCalo_centFrac, &b_tau_seedCalo_centFrac);
   fChain->SetBranchAddress("tau_seedCalo_stripWidth2", &tau_seedCalo_stripWidth2, &b_tau_seedCalo_stripWidth2);
   fChain->SetBranchAddress("tau_seedCalo_nStrip", &tau_seedCalo_nStrip, &b_tau_seedCalo_nStrip);
   fChain->SetBranchAddress("tau_seedCalo_etEMCalib", &tau_seedCalo_etEMCalib, &b_tau_seedCalo_etEMCalib);
   fChain->SetBranchAddress("tau_seedCalo_etHadCalib", &tau_seedCalo_etHadCalib, &b_tau_seedCalo_etHadCalib);
   fChain->SetBranchAddress("tau_seedCalo_eta", &tau_seedCalo_eta, &b_tau_seedCalo_eta);
   fChain->SetBranchAddress("tau_seedCalo_phi", &tau_seedCalo_phi, &b_tau_seedCalo_phi);
   fChain->SetBranchAddress("tau_seedCalo_nIsolLooseTrk", &tau_seedCalo_nIsolLooseTrk, &b_tau_seedCalo_nIsolLooseTrk);
   fChain->SetBranchAddress("tau_seedCalo_trkAvgDist", &tau_seedCalo_trkAvgDist, &b_tau_seedCalo_trkAvgDist);
   fChain->SetBranchAddress("tau_seedCalo_trkRmsDist", &tau_seedCalo_trkRmsDist, &b_tau_seedCalo_trkRmsDist);
   fChain->SetBranchAddress("tau_seedTrk_EMRadius", &tau_seedTrk_EMRadius, &b_tau_seedTrk_EMRadius);
   fChain->SetBranchAddress("tau_seedTrk_isolFrac", &tau_seedTrk_isolFrac, &b_tau_seedTrk_isolFrac);
   fChain->SetBranchAddress("tau_seedTrk_etChrgHadOverSumTrkPt", &tau_seedTrk_etChrgHadOverSumTrkPt, &b_tau_seedTrk_etChrgHadOverSumTrkPt);
   fChain->SetBranchAddress("tau_seedTrk_isolFracWide", &tau_seedTrk_isolFracWide, &b_tau_seedTrk_isolFracWide);
   fChain->SetBranchAddress("tau_seedTrk_etHadAtEMScale", &tau_seedTrk_etHadAtEMScale, &b_tau_seedTrk_etHadAtEMScale);
   fChain->SetBranchAddress("tau_seedTrk_etEMAtEMScale", &tau_seedTrk_etEMAtEMScale, &b_tau_seedTrk_etEMAtEMScale);
   fChain->SetBranchAddress("tau_seedTrk_etEMCL", &tau_seedTrk_etEMCL, &b_tau_seedTrk_etEMCL);
   fChain->SetBranchAddress("tau_seedTrk_etChrgEM", &tau_seedTrk_etChrgEM, &b_tau_seedTrk_etChrgEM);
   fChain->SetBranchAddress("tau_seedTrk_etNeuEM", &tau_seedTrk_etNeuEM, &b_tau_seedTrk_etNeuEM);
   fChain->SetBranchAddress("tau_seedTrk_etResNeuEM", &tau_seedTrk_etResNeuEM, &b_tau_seedTrk_etResNeuEM);
   fChain->SetBranchAddress("tau_seedTrk_hadLeakEt", &tau_seedTrk_hadLeakEt, &b_tau_seedTrk_hadLeakEt);
   fChain->SetBranchAddress("tau_seedTrk_sumEMCellEtOverLeadTrkPt", &tau_seedTrk_sumEMCellEtOverLeadTrkPt, &b_tau_seedTrk_sumEMCellEtOverLeadTrkPt);
   fChain->SetBranchAddress("tau_seedTrk_secMaxStripEt", &tau_seedTrk_secMaxStripEt, &b_tau_seedTrk_secMaxStripEt);
   fChain->SetBranchAddress("tau_seedTrk_stripWidth2", &tau_seedTrk_stripWidth2, &b_tau_seedTrk_stripWidth2);
   fChain->SetBranchAddress("tau_seedTrk_nStrip", &tau_seedTrk_nStrip, &b_tau_seedTrk_nStrip);
   fChain->SetBranchAddress("tau_seedTrk_etChrgHad", &tau_seedTrk_etChrgHad, &b_tau_seedTrk_etChrgHad);
   fChain->SetBranchAddress("tau_seedTrk_nOtherCoreTrk", &tau_seedTrk_nOtherCoreTrk, &b_tau_seedTrk_nOtherCoreTrk);
   fChain->SetBranchAddress("tau_seedTrk_nIsolTrk", &tau_seedTrk_nIsolTrk, &b_tau_seedTrk_nIsolTrk);
   fChain->SetBranchAddress("tau_seedTrk_etIsolEM", &tau_seedTrk_etIsolEM, &b_tau_seedTrk_etIsolEM);
   fChain->SetBranchAddress("tau_seedTrk_etIsolHad", &tau_seedTrk_etIsolHad, &b_tau_seedTrk_etIsolHad);
   fChain->SetBranchAddress("tau_calcVars_sumTrkPt", &tau_calcVars_sumTrkPt, &b_tau_calcVars_sumTrkPt);
   fChain->SetBranchAddress("tau_calcVars_numTopoClusters", &tau_calcVars_numTopoClusters, &b_tau_calcVars_numTopoClusters);
   fChain->SetBranchAddress("tau_calcVars_numEffTopoClusters", &tau_calcVars_numEffTopoClusters, &b_tau_calcVars_numEffTopoClusters);
   fChain->SetBranchAddress("tau_calcVars_topoInvMass", &tau_calcVars_topoInvMass, &b_tau_calcVars_topoInvMass);
   fChain->SetBranchAddress("tau_calcVars_effTopoInvMass", &tau_calcVars_effTopoInvMass, &b_tau_calcVars_effTopoInvMass);
   fChain->SetBranchAddress("tau_calcVars_topoMeanDeltaR", &tau_calcVars_topoMeanDeltaR, &b_tau_calcVars_topoMeanDeltaR);
   fChain->SetBranchAddress("tau_calcVars_effTopoMeanDeltaR", &tau_calcVars_effTopoMeanDeltaR, &b_tau_calcVars_effTopoMeanDeltaR);
   fChain->SetBranchAddress("tau_calcVars_etHadSumPtTracks", &tau_calcVars_etHadSumPtTracks, &b_tau_calcVars_etHadSumPtTracks);
   fChain->SetBranchAddress("tau_calcVars_etEMSumPtTracks", &tau_calcVars_etEMSumPtTracks, &b_tau_calcVars_etEMSumPtTracks);
   fChain->SetBranchAddress("tau_calcVars_etHad_EMScale_Pt3Trks", &tau_calcVars_etHad_EMScale_Pt3Trks, &b_tau_calcVars_etHad_EMScale_Pt3Trks);
   fChain->SetBranchAddress("tau_calcVars_etEM_EMScale_Pt3Trks", &tau_calcVars_etEM_EMScale_Pt3Trks, &b_tau_calcVars_etEM_EMScale_Pt3Trks);
   fChain->SetBranchAddress("tau_calcVars_mass", &tau_calcVars_mass, &b_tau_calcVars_mass);
   fChain->SetBranchAddress("tau_calcVars_ipSigLeadLooseTrk", &tau_calcVars_ipSigLeadLooseTrk, &b_tau_calcVars_ipSigLeadLooseTrk);
   fChain->SetBranchAddress("tau_calcVars_drMax", &tau_calcVars_drMax, &b_tau_calcVars_drMax);
   fChain->SetBranchAddress("tau_calcVars_drMin", &tau_calcVars_drMin, &b_tau_calcVars_drMin);
   fChain->SetBranchAddress("tau_calcVars_emFracCalib", &tau_calcVars_emFracCalib, &b_tau_calcVars_emFracCalib);
   fChain->SetBranchAddress("tau_calcVars_TRTHTOverLT_LeadTrk", &tau_calcVars_TRTHTOverLT_LeadTrk, &b_tau_calcVars_TRTHTOverLT_LeadTrk);
   fChain->SetBranchAddress("tau_cluster_E", &tau_cluster_E, &b_tau_cluster_E);
   fChain->SetBranchAddress("tau_cluster_eta", &tau_cluster_eta, &b_tau_cluster_eta);
   fChain->SetBranchAddress("tau_cluster_phi", &tau_cluster_phi, &b_tau_cluster_phi);
   fChain->SetBranchAddress("tau_cluster_n", &tau_cluster_n, &b_tau_cluster_n);
   fChain->SetBranchAddress("tau_Pi0Cluster_pt", &tau_Pi0Cluster_pt, &b_tau_Pi0Cluster_pt);
   fChain->SetBranchAddress("tau_Pi0Cluster_eta", &tau_Pi0Cluster_eta, &b_tau_Pi0Cluster_eta);
   fChain->SetBranchAddress("tau_Pi0Cluster_phi", &tau_Pi0Cluster_phi, &b_tau_Pi0Cluster_phi);
   fChain->SetBranchAddress("tau_secvtx_x", &tau_secvtx_x, &b_tau_secvtx_x);
   fChain->SetBranchAddress("tau_secvtx_y", &tau_secvtx_y, &b_tau_secvtx_y);
   fChain->SetBranchAddress("tau_secvtx_z", &tau_secvtx_z, &b_tau_secvtx_z);
   fChain->SetBranchAddress("tau_secvtx_chiSquared", &tau_secvtx_chiSquared, &b_tau_secvtx_chiSquared);
   fChain->SetBranchAddress("tau_secvtx_numberDoF", &tau_secvtx_numberDoF, &b_tau_secvtx_numberDoF);
   fChain->SetBranchAddress("tau_jet_Et", &tau_jet_Et, &b_tau_jet_Et);
   fChain->SetBranchAddress("tau_jet_pt", &tau_jet_pt, &b_tau_jet_pt);
   fChain->SetBranchAddress("tau_jet_m", &tau_jet_m, &b_tau_jet_m);
   fChain->SetBranchAddress("tau_jet_eta", &tau_jet_eta, &b_tau_jet_eta);
   fChain->SetBranchAddress("tau_jet_phi", &tau_jet_phi, &b_tau_jet_phi);
   fChain->SetBranchAddress("tau_jet_WIDTH", &tau_jet_WIDTH, &b_tau_jet_WIDTH);
   fChain->SetBranchAddress("tau_jet_n90", &tau_jet_n90, &b_tau_jet_n90);
   fChain->SetBranchAddress("tau_jet_n90constituents", &tau_jet_n90constituents, &b_tau_jet_n90constituents);
   fChain->SetBranchAddress("tau_jet_fracSamplingMax", &tau_jet_fracSamplingMax, &b_tau_jet_fracSamplingMax);
   fChain->SetBranchAddress("tau_jet_SamplingMax", &tau_jet_SamplingMax, &b_tau_jet_SamplingMax);
   fChain->SetBranchAddress("tau_jet_BCH_CORR_CELL", &tau_jet_BCH_CORR_CELL, &b_tau_jet_BCH_CORR_CELL);
   fChain->SetBranchAddress("tau_jet_BCH_CORR_JET", &tau_jet_BCH_CORR_JET, &b_tau_jet_BCH_CORR_JET);
   fChain->SetBranchAddress("tau_jet_BCH_CORR_JET_FORCELL", &tau_jet_BCH_CORR_JET_FORCELL, &b_tau_jet_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("tau_jet_ENG_BAD_CELLS", &tau_jet_ENG_BAD_CELLS, &b_tau_jet_ENG_BAD_CELLS);
   fChain->SetBranchAddress("tau_jet_N_BAD_CELLS", &tau_jet_N_BAD_CELLS, &b_tau_jet_N_BAD_CELLS);
   fChain->SetBranchAddress("tau_jet_N_BAD_CELLS_CORR", &tau_jet_N_BAD_CELLS_CORR, &b_tau_jet_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("tau_jet_BAD_CELLS_CORR_E", &tau_jet_BAD_CELLS_CORR_E, &b_tau_jet_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("tau_jet_hecf", &tau_jet_hecf, &b_tau_jet_hecf);
   fChain->SetBranchAddress("tau_jet_tgap3f", &tau_jet_tgap3f, &b_tau_jet_tgap3f);
   fChain->SetBranchAddress("tau_jet_isGood", &tau_jet_isGood, &b_tau_jet_isGood);
   fChain->SetBranchAddress("tau_jet_emfrac", &tau_jet_emfrac, &b_tau_jet_emfrac);
   fChain->SetBranchAddress("tau_jet_GCWJES", &tau_jet_GCWJES, &b_tau_jet_GCWJES);
   fChain->SetBranchAddress("tau_jet_EMJES", &tau_jet_EMJES, &b_tau_jet_EMJES);
   fChain->SetBranchAddress("tau_jet_emscale_E", &tau_jet_emscale_E, &b_tau_jet_emscale_E);
   fChain->SetBranchAddress("tau_jet_emscale_pt", &tau_jet_emscale_pt, &b_tau_jet_emscale_pt);
   fChain->SetBranchAddress("tau_jet_emscale_m", &tau_jet_emscale_m, &b_tau_jet_emscale_m);
   fChain->SetBranchAddress("tau_jet_emscale_eta", &tau_jet_emscale_eta, &b_tau_jet_emscale_eta);
   fChain->SetBranchAddress("tau_jet_emscale_phi", &tau_jet_emscale_phi, &b_tau_jet_emscale_phi);
   fChain->SetBranchAddress("tau_jet_jvtxf", &tau_jet_jvtxf, &b_tau_jet_jvtxf);
   fChain->SetBranchAddress("tau_jet_jvtx_x", &tau_jet_jvtx_x, &b_tau_jet_jvtx_x);
   fChain->SetBranchAddress("tau_jet_jvtx_y", &tau_jet_jvtx_y, &b_tau_jet_jvtx_y);
   fChain->SetBranchAddress("tau_jet_jvtx_z", &tau_jet_jvtx_z, &b_tau_jet_jvtx_z);
   fChain->SetBranchAddress("tau_jet_flavor_weight", &tau_jet_flavor_weight, &b_tau_jet_flavor_weight);
   fChain->SetBranchAddress("tau_jet_flavor_weight_TrackCounting2D", &tau_jet_flavor_weight_TrackCounting2D, &b_tau_jet_flavor_weight_TrackCounting2D);
   fChain->SetBranchAddress("tau_jet_flavor_weight_JetProb", &tau_jet_flavor_weight_JetProb, &b_tau_jet_flavor_weight_JetProb);
   fChain->SetBranchAddress("tau_jet_flavor_weight_IP1D", &tau_jet_flavor_weight_IP1D, &b_tau_jet_flavor_weight_IP1D);
   fChain->SetBranchAddress("tau_jet_flavor_weight_IP2D", &tau_jet_flavor_weight_IP2D, &b_tau_jet_flavor_weight_IP2D);
   fChain->SetBranchAddress("tau_jet_flavor_weight_IP3D", &tau_jet_flavor_weight_IP3D, &b_tau_jet_flavor_weight_IP3D);
   fChain->SetBranchAddress("tau_jet_flavor_weight_SV0", &tau_jet_flavor_weight_SV0, &b_tau_jet_flavor_weight_SV0);
   fChain->SetBranchAddress("tau_jet_flavor_weight_SV1", &tau_jet_flavor_weight_SV1, &b_tau_jet_flavor_weight_SV1);
   fChain->SetBranchAddress("tau_jet_flavor_weight_SV2", &tau_jet_flavor_weight_SV2, &b_tau_jet_flavor_weight_SV2);
   fChain->SetBranchAddress("tau_jet_flavor_weight_JetFitterTag", &tau_jet_flavor_weight_JetFitterTag, &b_tau_jet_flavor_weight_JetFitterTag);
   fChain->SetBranchAddress("tau_jet_flavor_weight_JetFitterCOMB", &tau_jet_flavor_weight_JetFitterCOMB, &b_tau_jet_flavor_weight_JetFitterCOMB);
   fChain->SetBranchAddress("tau_jet_flavor_weight_JetFitterTagNN", &tau_jet_flavor_weight_JetFitterTagNN, &b_tau_jet_flavor_weight_JetFitterTagNN);
   fChain->SetBranchAddress("tau_jet_flavor_weight_JetFitterCOMBNN", &tau_jet_flavor_weight_JetFitterCOMBNN, &b_tau_jet_flavor_weight_JetFitterCOMBNN);
   fChain->SetBranchAddress("tau_jet_flavor_weight_SoftMuonTag", &tau_jet_flavor_weight_SoftMuonTag, &b_tau_jet_flavor_weight_SoftMuonTag);
   fChain->SetBranchAddress("tau_jet_flavor_weight_SoftElectronTag", &tau_jet_flavor_weight_SoftElectronTag, &b_tau_jet_flavor_weight_SoftElectronTag);
   fChain->SetBranchAddress("tau_jet_e_PreSamplerB", &tau_jet_e_PreSamplerB, &b_tau_jet_e_PreSamplerB);
   fChain->SetBranchAddress("tau_jet_e_EMB1", &tau_jet_e_EMB1, &b_tau_jet_e_EMB1);
   fChain->SetBranchAddress("tau_jet_e_EMB2", &tau_jet_e_EMB2, &b_tau_jet_e_EMB2);
   fChain->SetBranchAddress("tau_jet_e_EMB3", &tau_jet_e_EMB3, &b_tau_jet_e_EMB3);
   fChain->SetBranchAddress("tau_jet_e_PreSamplerE", &tau_jet_e_PreSamplerE, &b_tau_jet_e_PreSamplerE);
   fChain->SetBranchAddress("tau_jet_e_EME1", &tau_jet_e_EME1, &b_tau_jet_e_EME1);
   fChain->SetBranchAddress("tau_jet_e_EME2", &tau_jet_e_EME2, &b_tau_jet_e_EME2);
   fChain->SetBranchAddress("tau_jet_e_EME3", &tau_jet_e_EME3, &b_tau_jet_e_EME3);
   fChain->SetBranchAddress("tau_jet_e_HEC0", &tau_jet_e_HEC0, &b_tau_jet_e_HEC0);
   fChain->SetBranchAddress("tau_jet_e_HEC1", &tau_jet_e_HEC1, &b_tau_jet_e_HEC1);
   fChain->SetBranchAddress("tau_jet_e_HEC2", &tau_jet_e_HEC2, &b_tau_jet_e_HEC2);
   fChain->SetBranchAddress("tau_jet_e_HEC3", &tau_jet_e_HEC3, &b_tau_jet_e_HEC3);
   fChain->SetBranchAddress("tau_jet_e_TileBar0", &tau_jet_e_TileBar0, &b_tau_jet_e_TileBar0);
   fChain->SetBranchAddress("tau_jet_e_TileBar1", &tau_jet_e_TileBar1, &b_tau_jet_e_TileBar1);
   fChain->SetBranchAddress("tau_jet_e_TileBar2", &tau_jet_e_TileBar2, &b_tau_jet_e_TileBar2);
   fChain->SetBranchAddress("tau_jet_e_TileGap1", &tau_jet_e_TileGap1, &b_tau_jet_e_TileGap1);
   fChain->SetBranchAddress("tau_jet_e_TileGap2", &tau_jet_e_TileGap2, &b_tau_jet_e_TileGap2);
   fChain->SetBranchAddress("tau_jet_e_TileGap3", &tau_jet_e_TileGap3, &b_tau_jet_e_TileGap3);
   fChain->SetBranchAddress("tau_jet_e_TileExt0", &tau_jet_e_TileExt0, &b_tau_jet_e_TileExt0);
   fChain->SetBranchAddress("tau_jet_e_TileExt1", &tau_jet_e_TileExt1, &b_tau_jet_e_TileExt1);
   fChain->SetBranchAddress("tau_jet_e_TileExt2", &tau_jet_e_TileExt2, &b_tau_jet_e_TileExt2);
   fChain->SetBranchAddress("tau_jet_e_FCAL0", &tau_jet_e_FCAL0, &b_tau_jet_e_FCAL0);
   fChain->SetBranchAddress("tau_jet_e_FCAL1", &tau_jet_e_FCAL1, &b_tau_jet_e_FCAL1);
   fChain->SetBranchAddress("tau_jet_e_FCAL2", &tau_jet_e_FCAL2, &b_tau_jet_e_FCAL2);
   fChain->SetBranchAddress("tau_jet_shapeBins", &tau_jet_shapeBins, &b_tau_jet_shapeBins);
   fChain->SetBranchAddress("tau_track_n", &tau_track_n, &b_tau_track_n);
   fChain->SetBranchAddress("tau_track_d0", &tau_track_d0, &b_tau_track_d0);
   fChain->SetBranchAddress("tau_track_z0", &tau_track_z0, &b_tau_track_z0);
   fChain->SetBranchAddress("tau_track_phi", &tau_track_phi, &b_tau_track_phi);
   fChain->SetBranchAddress("tau_track_theta", &tau_track_theta, &b_tau_track_theta);
   fChain->SetBranchAddress("tau_track_qoverp", &tau_track_qoverp, &b_tau_track_qoverp);
   fChain->SetBranchAddress("tau_track_pt", &tau_track_pt, &b_tau_track_pt);
   fChain->SetBranchAddress("tau_track_eta", &tau_track_eta, &b_tau_track_eta);
   fChain->SetBranchAddress("tau_track_atPV_d0", &tau_track_atPV_d0, &b_tau_track_atPV_d0);
   fChain->SetBranchAddress("tau_track_atPV_z0", &tau_track_atPV_z0, &b_tau_track_atPV_z0);
   fChain->SetBranchAddress("tau_track_atPV_phi", &tau_track_atPV_phi, &b_tau_track_atPV_phi);
   fChain->SetBranchAddress("tau_track_atPV_theta", &tau_track_atPV_theta, &b_tau_track_atPV_theta);
   fChain->SetBranchAddress("tau_track_atPV_qoverp", &tau_track_atPV_qoverp, &b_tau_track_atPV_qoverp);
   fChain->SetBranchAddress("tau_track_atPV_pt", &tau_track_atPV_pt, &b_tau_track_atPV_pt);
   fChain->SetBranchAddress("tau_track_atPV_eta", &tau_track_atPV_eta, &b_tau_track_atPV_eta);
   fChain->SetBranchAddress("tau_track_nBLHits", &tau_track_nBLHits, &b_tau_track_nBLHits);
   fChain->SetBranchAddress("tau_track_nPixHits", &tau_track_nPixHits, &b_tau_track_nPixHits);
   fChain->SetBranchAddress("tau_track_nSCTHits", &tau_track_nSCTHits, &b_tau_track_nSCTHits);
   fChain->SetBranchAddress("tau_track_nTRTHits", &tau_track_nTRTHits, &b_tau_track_nTRTHits);
   fChain->SetBranchAddress("tau_track_nPixHoles", &tau_track_nPixHoles, &b_tau_track_nPixHoles);
   fChain->SetBranchAddress("tau_track_nSCTHoles", &tau_track_nSCTHoles, &b_tau_track_nSCTHoles);
   fChain->SetBranchAddress("tau_track_nBLSharedHits", &tau_track_nBLSharedHits, &b_tau_track_nBLSharedHits);
   fChain->SetBranchAddress("tau_track_nPixSharedHits", &tau_track_nPixSharedHits, &b_tau_track_nPixSharedHits);
   fChain->SetBranchAddress("tau_track_nSCTSharedHits", &tau_track_nSCTSharedHits, &b_tau_track_nSCTSharedHits);
   fChain->SetBranchAddress("tau_track_nTRTHighTHits", &tau_track_nTRTHighTHits, &b_tau_track_nTRTHighTHits);
   fChain->SetBranchAddress("tau_track_nTRTOutliers", &tau_track_nTRTOutliers, &b_tau_track_nTRTOutliers);
   fChain->SetBranchAddress("tau_track_nTRTHighTOutliers", &tau_track_nTRTHighTOutliers, &b_tau_track_nTRTHighTOutliers);
   fChain->SetBranchAddress("tau_track_nHits", &tau_track_nHits, &b_tau_track_nHits);
   fChain->SetBranchAddress("tau_track_pixeldEdx", &tau_track_pixeldEdx, &b_tau_track_pixeldEdx);
   fChain->SetBranchAddress("tau_EF_dr", &tau_EF_dr, &b_tau_EF_dr);
   fChain->SetBranchAddress("tau_EF_E", &tau_EF_E, &b_tau_EF_E);
   fChain->SetBranchAddress("tau_EF_Et", &tau_EF_Et, &b_tau_EF_Et);
   fChain->SetBranchAddress("tau_EF_pt", &tau_EF_pt, &b_tau_EF_pt);
   fChain->SetBranchAddress("tau_EF_eta", &tau_EF_eta, &b_tau_EF_eta);
   fChain->SetBranchAddress("tau_EF_phi", &tau_EF_phi, &b_tau_EF_phi);
   fChain->SetBranchAddress("tau_EF_matched", &tau_EF_matched, &b_tau_EF_matched);
   fChain->SetBranchAddress("tau_L2_dr", &tau_L2_dr, &b_tau_L2_dr);
   fChain->SetBranchAddress("tau_L2_E", &tau_L2_E, &b_tau_L2_E);
   fChain->SetBranchAddress("tau_L2_Et", &tau_L2_Et, &b_tau_L2_Et);
   fChain->SetBranchAddress("tau_L2_pt", &tau_L2_pt, &b_tau_L2_pt);
   fChain->SetBranchAddress("tau_L2_eta", &tau_L2_eta, &b_tau_L2_eta);
   fChain->SetBranchAddress("tau_L2_phi", &tau_L2_phi, &b_tau_L2_phi);
   fChain->SetBranchAddress("tau_L2_matched", &tau_L2_matched, &b_tau_L2_matched);
   fChain->SetBranchAddress("tau_L1_dr", &tau_L1_dr, &b_tau_L1_dr);
   fChain->SetBranchAddress("tau_L1_Et", &tau_L1_Et, &b_tau_L1_Et);
   fChain->SetBranchAddress("tau_L1_pt", &tau_L1_pt, &b_tau_L1_pt);
   fChain->SetBranchAddress("tau_L1_eta", &tau_L1_eta, &b_tau_L1_eta);
   fChain->SetBranchAddress("tau_L1_phi", &tau_L1_phi, &b_tau_L1_phi);
   fChain->SetBranchAddress("tau_L1_matched", &tau_L1_matched, &b_tau_L1_matched);
   fChain->SetBranchAddress("MET_RefFinal_etx", &MET_RefFinal_etx, &b_MET_RefFinal_etx);
   fChain->SetBranchAddress("MET_RefFinal_ety", &MET_RefFinal_ety, &b_MET_RefFinal_ety);
   fChain->SetBranchAddress("MET_RefFinal_sumet", &MET_RefFinal_sumet, &b_MET_RefFinal_sumet);
   fChain->SetBranchAddress("MET_RefFinal_et", &MET_RefFinal_et, &b_MET_RefFinal_et);
   fChain->SetBranchAddress("MET_RefFinal_phi", &MET_RefFinal_phi, &b_MET_RefFinal_phi);
   fChain->SetBranchAddress("MET_Cryo_etx", &MET_Cryo_etx, &b_MET_Cryo_etx);
   fChain->SetBranchAddress("MET_Cryo_ety", &MET_Cryo_ety, &b_MET_Cryo_ety);
   fChain->SetBranchAddress("MET_Cryo_sumet", &MET_Cryo_sumet, &b_MET_Cryo_sumet);
   fChain->SetBranchAddress("MET_Cryo_et", &MET_Cryo_et, &b_MET_Cryo_et);
   fChain->SetBranchAddress("MET_Cryo_phi", &MET_Cryo_phi, &b_MET_Cryo_phi);
   fChain->SetBranchAddress("MET_RefEle_etx", &MET_RefEle_etx, &b_MET_RefEle_etx);
   fChain->SetBranchAddress("MET_RefEle_ety", &MET_RefEle_ety, &b_MET_RefEle_ety);
   fChain->SetBranchAddress("MET_RefEle_sumet", &MET_RefEle_sumet, &b_MET_RefEle_sumet);
   fChain->SetBranchAddress("MET_RefEle_et", &MET_RefEle_et, &b_MET_RefEle_et);
   fChain->SetBranchAddress("MET_RefEle_phi", &MET_RefEle_phi, &b_MET_RefEle_phi);
   fChain->SetBranchAddress("MET_RefJet_etx", &MET_RefJet_etx, &b_MET_RefJet_etx);
   fChain->SetBranchAddress("MET_RefJet_ety", &MET_RefJet_ety, &b_MET_RefJet_ety);
   fChain->SetBranchAddress("MET_RefJet_sumet", &MET_RefJet_sumet, &b_MET_RefJet_sumet);
   fChain->SetBranchAddress("MET_RefJet_et", &MET_RefJet_et, &b_MET_RefJet_et);
   fChain->SetBranchAddress("MET_RefJet_phi", &MET_RefJet_phi, &b_MET_RefJet_phi);
   fChain->SetBranchAddress("MET_SoftJets_etx", &MET_SoftJets_etx, &b_MET_SoftJets_etx);
   fChain->SetBranchAddress("MET_SoftJets_ety", &MET_SoftJets_ety, &b_MET_SoftJets_ety);
   fChain->SetBranchAddress("MET_SoftJets_sumet", &MET_SoftJets_sumet, &b_MET_SoftJets_sumet);
   fChain->SetBranchAddress("MET_SoftJets_et", &MET_SoftJets_et, &b_MET_SoftJets_et);
   fChain->SetBranchAddress("MET_SoftJets_phi", &MET_SoftJets_phi, &b_MET_SoftJets_phi);
   fChain->SetBranchAddress("MET_RefMuon_etx", &MET_RefMuon_etx, &b_MET_RefMuon_etx);
   fChain->SetBranchAddress("MET_RefMuon_ety", &MET_RefMuon_ety, &b_MET_RefMuon_ety);
   fChain->SetBranchAddress("MET_RefMuon_sumet", &MET_RefMuon_sumet, &b_MET_RefMuon_sumet);
   fChain->SetBranchAddress("MET_RefMuon_et", &MET_RefMuon_et, &b_MET_RefMuon_et);
   fChain->SetBranchAddress("MET_RefMuon_phi", &MET_RefMuon_phi, &b_MET_RefMuon_phi);
   fChain->SetBranchAddress("MET_RefMuon_Staco_etx", &MET_RefMuon_Staco_etx, &b_MET_RefMuon_Staco_etx);
   fChain->SetBranchAddress("MET_RefMuon_Staco_ety", &MET_RefMuon_Staco_ety, &b_MET_RefMuon_Staco_ety);
   fChain->SetBranchAddress("MET_RefMuon_Staco_sumet", &MET_RefMuon_Staco_sumet, &b_MET_RefMuon_Staco_sumet);
   fChain->SetBranchAddress("MET_RefMuon_Staco_et", &MET_RefMuon_Staco_et, &b_MET_RefMuon_Staco_et);
   fChain->SetBranchAddress("MET_RefMuon_Staco_phi", &MET_RefMuon_Staco_phi, &b_MET_RefMuon_Staco_phi);
   fChain->SetBranchAddress("MET_RefMuon_Muid_etx", &MET_RefMuon_Muid_etx, &b_MET_RefMuon_Muid_etx);
   fChain->SetBranchAddress("MET_RefMuon_Muid_ety", &MET_RefMuon_Muid_ety, &b_MET_RefMuon_Muid_ety);
   fChain->SetBranchAddress("MET_RefMuon_Muid_sumet", &MET_RefMuon_Muid_sumet, &b_MET_RefMuon_Muid_sumet);
   fChain->SetBranchAddress("MET_RefMuon_Muid_et", &MET_RefMuon_Muid_et, &b_MET_RefMuon_Muid_et);
   fChain->SetBranchAddress("MET_RefMuon_Muid_phi", &MET_RefMuon_Muid_phi, &b_MET_RefMuon_Muid_phi);
   fChain->SetBranchAddress("MET_RefGamma_etx", &MET_RefGamma_etx, &b_MET_RefGamma_etx);
   fChain->SetBranchAddress("MET_RefGamma_ety", &MET_RefGamma_ety, &b_MET_RefGamma_ety);
   fChain->SetBranchAddress("MET_RefGamma_sumet", &MET_RefGamma_sumet, &b_MET_RefGamma_sumet);
   fChain->SetBranchAddress("MET_RefGamma_et", &MET_RefGamma_et, &b_MET_RefGamma_et);
   fChain->SetBranchAddress("MET_RefGamma_phi", &MET_RefGamma_phi, &b_MET_RefGamma_phi);
   fChain->SetBranchAddress("MET_RefTau_etx", &MET_RefTau_etx, &b_MET_RefTau_etx);
   fChain->SetBranchAddress("MET_RefTau_ety", &MET_RefTau_ety, &b_MET_RefTau_ety);
   fChain->SetBranchAddress("MET_RefTau_sumet", &MET_RefTau_sumet, &b_MET_RefTau_sumet);
   fChain->SetBranchAddress("MET_RefTau_et", &MET_RefTau_et, &b_MET_RefTau_et);
   fChain->SetBranchAddress("MET_RefTau_phi", &MET_RefTau_phi, &b_MET_RefTau_phi);
   fChain->SetBranchAddress("MET_CellOut_etx", &MET_CellOut_etx, &b_MET_CellOut_etx);
   fChain->SetBranchAddress("MET_CellOut_ety", &MET_CellOut_ety, &b_MET_CellOut_ety);
   fChain->SetBranchAddress("MET_CellOut_sumet", &MET_CellOut_sumet, &b_MET_CellOut_sumet);
   fChain->SetBranchAddress("MET_CellOut_et", &MET_CellOut_et, &b_MET_CellOut_et);
   fChain->SetBranchAddress("MET_CellOut_phi", &MET_CellOut_phi, &b_MET_CellOut_phi);
   fChain->SetBranchAddress("MET_Track_etx", &MET_Track_etx, &b_MET_Track_etx);
   fChain->SetBranchAddress("MET_Track_ety", &MET_Track_ety, &b_MET_Track_ety);
   fChain->SetBranchAddress("MET_Track_sumet", &MET_Track_sumet, &b_MET_Track_sumet);
   fChain->SetBranchAddress("MET_Track_et", &MET_Track_et, &b_MET_Track_et);
   fChain->SetBranchAddress("MET_Track_phi", &MET_Track_phi, &b_MET_Track_phi);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_etx", &MET_Muon_Isol_Staco_etx, &b_MET_Muon_Isol_Staco_etx);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_ety", &MET_Muon_Isol_Staco_ety, &b_MET_Muon_Isol_Staco_ety);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_sumet", &MET_Muon_Isol_Staco_sumet, &b_MET_Muon_Isol_Staco_sumet);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_et", &MET_Muon_Isol_Staco_et, &b_MET_Muon_Isol_Staco_et);
   fChain->SetBranchAddress("MET_Muon_Isol_Staco_phi", &MET_Muon_Isol_Staco_phi, &b_MET_Muon_Isol_Staco_phi);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_etx", &MET_Muon_NonIsol_Staco_etx, &b_MET_Muon_NonIsol_Staco_etx);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_ety", &MET_Muon_NonIsol_Staco_ety, &b_MET_Muon_NonIsol_Staco_ety);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_sumet", &MET_Muon_NonIsol_Staco_sumet, &b_MET_Muon_NonIsol_Staco_sumet);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_et", &MET_Muon_NonIsol_Staco_et, &b_MET_Muon_NonIsol_Staco_et);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Staco_phi", &MET_Muon_NonIsol_Staco_phi, &b_MET_Muon_NonIsol_Staco_phi);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_etx", &MET_Muon_Total_Staco_etx, &b_MET_Muon_Total_Staco_etx);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_ety", &MET_Muon_Total_Staco_ety, &b_MET_Muon_Total_Staco_ety);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_sumet", &MET_Muon_Total_Staco_sumet, &b_MET_Muon_Total_Staco_sumet);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_et", &MET_Muon_Total_Staco_et, &b_MET_Muon_Total_Staco_et);
   fChain->SetBranchAddress("MET_Muon_Total_Staco_phi", &MET_Muon_Total_Staco_phi, &b_MET_Muon_Total_Staco_phi);
   fChain->SetBranchAddress("MET_Muon_Isol_Muid_etx", &MET_Muon_Isol_Muid_etx, &b_MET_Muon_Isol_Muid_etx);
   fChain->SetBranchAddress("MET_Muon_Isol_Muid_ety", &MET_Muon_Isol_Muid_ety, &b_MET_Muon_Isol_Muid_ety);
   fChain->SetBranchAddress("MET_Muon_Isol_Muid_sumet", &MET_Muon_Isol_Muid_sumet, &b_MET_Muon_Isol_Muid_sumet);
   fChain->SetBranchAddress("MET_Muon_Isol_Muid_et", &MET_Muon_Isol_Muid_et, &b_MET_Muon_Isol_Muid_et);
   fChain->SetBranchAddress("MET_Muon_Isol_Muid_phi", &MET_Muon_Isol_Muid_phi, &b_MET_Muon_Isol_Muid_phi);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Muid_etx", &MET_Muon_NonIsol_Muid_etx, &b_MET_Muon_NonIsol_Muid_etx);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Muid_ety", &MET_Muon_NonIsol_Muid_ety, &b_MET_Muon_NonIsol_Muid_ety);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Muid_sumet", &MET_Muon_NonIsol_Muid_sumet, &b_MET_Muon_NonIsol_Muid_sumet);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Muid_et", &MET_Muon_NonIsol_Muid_et, &b_MET_Muon_NonIsol_Muid_et);
   fChain->SetBranchAddress("MET_Muon_NonIsol_Muid_phi", &MET_Muon_NonIsol_Muid_phi, &b_MET_Muon_NonIsol_Muid_phi);
   fChain->SetBranchAddress("MET_Muon_Total_Muid_etx", &MET_Muon_Total_Muid_etx, &b_MET_Muon_Total_Muid_etx);
   fChain->SetBranchAddress("MET_Muon_Total_Muid_ety", &MET_Muon_Total_Muid_ety, &b_MET_Muon_Total_Muid_ety);
   fChain->SetBranchAddress("MET_Muon_Total_Muid_sumet", &MET_Muon_Total_Muid_sumet, &b_MET_Muon_Total_Muid_sumet);
   fChain->SetBranchAddress("MET_Muon_Total_Muid_et", &MET_Muon_Total_Muid_et, &b_MET_Muon_Total_Muid_et);
   fChain->SetBranchAddress("MET_Muon_Total_Muid_phi", &MET_Muon_Total_Muid_phi, &b_MET_Muon_Total_Muid_phi);
   fChain->SetBranchAddress("MET_MuonBoy_etx", &MET_MuonBoy_etx, &b_MET_MuonBoy_etx);
   fChain->SetBranchAddress("MET_MuonBoy_ety", &MET_MuonBoy_ety, &b_MET_MuonBoy_ety);
   fChain->SetBranchAddress("MET_MuonBoy_sumet", &MET_MuonBoy_sumet, &b_MET_MuonBoy_sumet);
   fChain->SetBranchAddress("MET_MuonBoy_et", &MET_MuonBoy_et, &b_MET_MuonBoy_et);
   fChain->SetBranchAddress("MET_MuonBoy_phi", &MET_MuonBoy_phi, &b_MET_MuonBoy_phi);
   fChain->SetBranchAddress("MET_RefMuon_Track_etx", &MET_RefMuon_Track_etx, &b_MET_RefMuon_Track_etx);
   fChain->SetBranchAddress("MET_RefMuon_Track_ety", &MET_RefMuon_Track_ety, &b_MET_RefMuon_Track_ety);
   fChain->SetBranchAddress("MET_RefMuon_Track_sumet", &MET_RefMuon_Track_sumet, &b_MET_RefMuon_Track_sumet);
   fChain->SetBranchAddress("MET_RefMuon_Track_et", &MET_RefMuon_Track_et, &b_MET_RefMuon_Track_et);
   fChain->SetBranchAddress("MET_RefMuon_Track_phi", &MET_RefMuon_Track_phi, &b_MET_RefMuon_Track_phi);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_etx", &MET_RefMuon_Track_Staco_etx, &b_MET_RefMuon_Track_Staco_etx);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_ety", &MET_RefMuon_Track_Staco_ety, &b_MET_RefMuon_Track_Staco_ety);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_sumet", &MET_RefMuon_Track_Staco_sumet, &b_MET_RefMuon_Track_Staco_sumet);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_et", &MET_RefMuon_Track_Staco_et, &b_MET_RefMuon_Track_Staco_et);
   fChain->SetBranchAddress("MET_RefMuon_Track_Staco_phi", &MET_RefMuon_Track_Staco_phi, &b_MET_RefMuon_Track_Staco_phi);
   fChain->SetBranchAddress("MET_RefMuon_Track_Muid_etx", &MET_RefMuon_Track_Muid_etx, &b_MET_RefMuon_Track_Muid_etx);
   fChain->SetBranchAddress("MET_RefMuon_Track_Muid_ety", &MET_RefMuon_Track_Muid_ety, &b_MET_RefMuon_Track_Muid_ety);
   fChain->SetBranchAddress("MET_RefMuon_Track_Muid_sumet", &MET_RefMuon_Track_Muid_sumet, &b_MET_RefMuon_Track_Muid_sumet);
   fChain->SetBranchAddress("MET_RefMuon_Track_Muid_et", &MET_RefMuon_Track_Muid_et, &b_MET_RefMuon_Track_Muid_et);
   fChain->SetBranchAddress("MET_RefMuon_Track_Muid_phi", &MET_RefMuon_Track_Muid_phi, &b_MET_RefMuon_Track_Muid_phi);
   fChain->SetBranchAddress("MET_CryoCone_etx", &MET_CryoCone_etx, &b_MET_CryoCone_etx);
   fChain->SetBranchAddress("MET_CryoCone_ety", &MET_CryoCone_ety, &b_MET_CryoCone_ety);
   fChain->SetBranchAddress("MET_CryoCone_sumet", &MET_CryoCone_sumet, &b_MET_CryoCone_sumet);
   fChain->SetBranchAddress("MET_CryoCone_et", &MET_CryoCone_et, &b_MET_CryoCone_et);
   fChain->SetBranchAddress("MET_CryoCone_phi", &MET_CryoCone_phi, &b_MET_CryoCone_phi);
   fChain->SetBranchAddress("MET_Final_etx", &MET_Final_etx, &b_MET_Final_etx);
   fChain->SetBranchAddress("MET_Final_ety", &MET_Final_ety, &b_MET_Final_ety);
   fChain->SetBranchAddress("MET_Final_sumet", &MET_Final_sumet, &b_MET_Final_sumet);
   fChain->SetBranchAddress("MET_Final_et", &MET_Final_et, &b_MET_Final_et);
   fChain->SetBranchAddress("MET_Final_phi", &MET_Final_phi, &b_MET_Final_phi);
   fChain->SetBranchAddress("MET_MuonBoy_Spectro_etx", &MET_MuonBoy_Spectro_etx, &b_MET_MuonBoy_Spectro_etx);
   fChain->SetBranchAddress("MET_MuonBoy_Spectro_ety", &MET_MuonBoy_Spectro_ety, &b_MET_MuonBoy_Spectro_ety);
   fChain->SetBranchAddress("MET_MuonBoy_Spectro_sumet", &MET_MuonBoy_Spectro_sumet, &b_MET_MuonBoy_Spectro_sumet);
   fChain->SetBranchAddress("MET_MuonBoy_Spectro_et", &MET_MuonBoy_Spectro_et, &b_MET_MuonBoy_Spectro_et);
   fChain->SetBranchAddress("MET_MuonBoy_Spectro_phi", &MET_MuonBoy_Spectro_phi, &b_MET_MuonBoy_Spectro_phi);
   fChain->SetBranchAddress("MET_MuonBoy_Track_etx", &MET_MuonBoy_Track_etx, &b_MET_MuonBoy_Track_etx);
   fChain->SetBranchAddress("MET_MuonBoy_Track_ety", &MET_MuonBoy_Track_ety, &b_MET_MuonBoy_Track_ety);
   fChain->SetBranchAddress("MET_MuonBoy_Track_sumet", &MET_MuonBoy_Track_sumet, &b_MET_MuonBoy_Track_sumet);
   fChain->SetBranchAddress("MET_MuonBoy_Track_et", &MET_MuonBoy_Track_et, &b_MET_MuonBoy_Track_et);
   fChain->SetBranchAddress("MET_MuonBoy_Track_phi", &MET_MuonBoy_Track_phi, &b_MET_MuonBoy_Track_phi);
   fChain->SetBranchAddress("MET_MuonMuid_etx", &MET_MuonMuid_etx, &b_MET_MuonMuid_etx);
   fChain->SetBranchAddress("MET_MuonMuid_ety", &MET_MuonMuid_ety, &b_MET_MuonMuid_ety);
   fChain->SetBranchAddress("MET_MuonMuid_sumet", &MET_MuonMuid_sumet, &b_MET_MuonMuid_sumet);
   fChain->SetBranchAddress("MET_MuonMuid_et", &MET_MuonMuid_et, &b_MET_MuonMuid_et);
   fChain->SetBranchAddress("MET_MuonMuid_phi", &MET_MuonMuid_phi, &b_MET_MuonMuid_phi);
   fChain->SetBranchAddress("MET_Muid_etx", &MET_Muid_etx, &b_MET_Muid_etx);
   fChain->SetBranchAddress("MET_Muid_ety", &MET_Muid_ety, &b_MET_Muid_ety);
   fChain->SetBranchAddress("MET_Muid_sumet", &MET_Muid_sumet, &b_MET_Muid_sumet);
   fChain->SetBranchAddress("MET_Muid_et", &MET_Muid_et, &b_MET_Muid_et);
   fChain->SetBranchAddress("MET_Muid_phi", &MET_Muid_phi, &b_MET_Muid_phi);
   fChain->SetBranchAddress("MET_Muid_Spectro_etx", &MET_Muid_Spectro_etx, &b_MET_Muid_Spectro_etx);
   fChain->SetBranchAddress("MET_Muid_Spectro_ety", &MET_Muid_Spectro_ety, &b_MET_Muid_Spectro_ety);
   fChain->SetBranchAddress("MET_Muid_Spectro_sumet", &MET_Muid_Spectro_sumet, &b_MET_Muid_Spectro_sumet);
   fChain->SetBranchAddress("MET_Muid_Spectro_et", &MET_Muid_Spectro_et, &b_MET_Muid_Spectro_et);
   fChain->SetBranchAddress("MET_Muid_Spectro_phi", &MET_Muid_Spectro_phi, &b_MET_Muid_Spectro_phi);
   fChain->SetBranchAddress("MET_Muid_Track_etx", &MET_Muid_Track_etx, &b_MET_Muid_Track_etx);
   fChain->SetBranchAddress("MET_Muid_Track_ety", &MET_Muid_Track_ety, &b_MET_Muid_Track_ety);
   fChain->SetBranchAddress("MET_Muid_Track_sumet", &MET_Muid_Track_sumet, &b_MET_Muid_Track_sumet);
   fChain->SetBranchAddress("MET_Muid_Track_et", &MET_Muid_Track_et, &b_MET_Muid_Track_et);
   fChain->SetBranchAddress("MET_Muid_Track_phi", &MET_Muid_Track_phi, &b_MET_Muid_Track_phi);
   fChain->SetBranchAddress("MET_Muon_etx", &MET_Muon_etx, &b_MET_Muon_etx);
   fChain->SetBranchAddress("MET_Muon_ety", &MET_Muon_ety, &b_MET_Muon_ety);
   fChain->SetBranchAddress("MET_Muon_sumet", &MET_Muon_sumet, &b_MET_Muon_sumet);
   fChain->SetBranchAddress("MET_Muon_et", &MET_Muon_et, &b_MET_Muon_et);
   fChain->SetBranchAddress("MET_Muon_phi", &MET_Muon_phi, &b_MET_Muon_phi);
   fChain->SetBranchAddress("MET_TopoObj_etx", &MET_TopoObj_etx, &b_MET_TopoObj_etx);
   fChain->SetBranchAddress("MET_TopoObj_ety", &MET_TopoObj_ety, &b_MET_TopoObj_ety);
   fChain->SetBranchAddress("MET_TopoObj_sumet", &MET_TopoObj_sumet, &b_MET_TopoObj_sumet);
   fChain->SetBranchAddress("MET_TopoObj_et", &MET_TopoObj_et, &b_MET_TopoObj_et);
   fChain->SetBranchAddress("MET_TopoObj_phi", &MET_TopoObj_phi, &b_MET_TopoObj_phi);
   fChain->SetBranchAddress("MET_LocHadTopoObj_etx", &MET_LocHadTopoObj_etx, &b_MET_LocHadTopoObj_etx);
   fChain->SetBranchAddress("MET_LocHadTopoObj_ety", &MET_LocHadTopoObj_ety, &b_MET_LocHadTopoObj_ety);
   fChain->SetBranchAddress("MET_LocHadTopoObj_sumet", &MET_LocHadTopoObj_sumet, &b_MET_LocHadTopoObj_sumet);
   fChain->SetBranchAddress("MET_LocHadTopoObj_et", &MET_LocHadTopoObj_et, &b_MET_LocHadTopoObj_et);
   fChain->SetBranchAddress("MET_LocHadTopoObj_phi", &MET_LocHadTopoObj_phi, &b_MET_LocHadTopoObj_phi);
   fChain->SetBranchAddress("MET_Topo_etx", &MET_Topo_etx, &b_MET_Topo_etx);
   fChain->SetBranchAddress("MET_Topo_ety", &MET_Topo_ety, &b_MET_Topo_ety);
   fChain->SetBranchAddress("MET_Topo_sumet", &MET_Topo_sumet, &b_MET_Topo_sumet);
   fChain->SetBranchAddress("MET_Topo_et", &MET_Topo_et, &b_MET_Topo_et);
   fChain->SetBranchAddress("MET_Topo_phi", &MET_Topo_phi, &b_MET_Topo_phi);
   fChain->SetBranchAddress("MET_Topo_SUMET_EMFrac", &MET_Topo_SUMET_EMFrac, &b_MET_Topo_SUMET_EMFrac);
   fChain->SetBranchAddress("MET_Topo_etx_PEMB", &MET_Topo_etx_PEMB, &b_MET_Topo_etx_PEMB);
   fChain->SetBranchAddress("MET_Topo_ety_PEMB", &MET_Topo_ety_PEMB, &b_MET_Topo_ety_PEMB);
   fChain->SetBranchAddress("MET_Topo_sumet_PEMB", &MET_Topo_sumet_PEMB, &b_MET_Topo_sumet_PEMB);
   fChain->SetBranchAddress("MET_Topo_phi_PEMB", &MET_Topo_phi_PEMB, &b_MET_Topo_phi_PEMB);
   fChain->SetBranchAddress("MET_Topo_etx_EMB", &MET_Topo_etx_EMB, &b_MET_Topo_etx_EMB);
   fChain->SetBranchAddress("MET_Topo_ety_EMB", &MET_Topo_ety_EMB, &b_MET_Topo_ety_EMB);
   fChain->SetBranchAddress("MET_Topo_sumet_EMB", &MET_Topo_sumet_EMB, &b_MET_Topo_sumet_EMB);
   fChain->SetBranchAddress("MET_Topo_phi_EMB", &MET_Topo_phi_EMB, &b_MET_Topo_phi_EMB);
   fChain->SetBranchAddress("MET_Topo_etx_PEMEC", &MET_Topo_etx_PEMEC, &b_MET_Topo_etx_PEMEC);
   fChain->SetBranchAddress("MET_Topo_ety_PEMEC", &MET_Topo_ety_PEMEC, &b_MET_Topo_ety_PEMEC);
   fChain->SetBranchAddress("MET_Topo_sumet_PEMEC", &MET_Topo_sumet_PEMEC, &b_MET_Topo_sumet_PEMEC);
   fChain->SetBranchAddress("MET_Topo_phi_PEMEC", &MET_Topo_phi_PEMEC, &b_MET_Topo_phi_PEMEC);
   fChain->SetBranchAddress("MET_Topo_etx_EME", &MET_Topo_etx_EME, &b_MET_Topo_etx_EME);
   fChain->SetBranchAddress("MET_Topo_ety_EME", &MET_Topo_ety_EME, &b_MET_Topo_ety_EME);
   fChain->SetBranchAddress("MET_Topo_sumet_EME", &MET_Topo_sumet_EME, &b_MET_Topo_sumet_EME);
   fChain->SetBranchAddress("MET_Topo_phi_EME", &MET_Topo_phi_EME, &b_MET_Topo_phi_EME);
   fChain->SetBranchAddress("MET_Topo_etx_TILE", &MET_Topo_etx_TILE, &b_MET_Topo_etx_TILE);
   fChain->SetBranchAddress("MET_Topo_ety_TILE", &MET_Topo_ety_TILE, &b_MET_Topo_ety_TILE);
   fChain->SetBranchAddress("MET_Topo_sumet_TILE", &MET_Topo_sumet_TILE, &b_MET_Topo_sumet_TILE);
   fChain->SetBranchAddress("MET_Topo_phi_TILE", &MET_Topo_phi_TILE, &b_MET_Topo_phi_TILE);
   fChain->SetBranchAddress("MET_Topo_etx_HEC", &MET_Topo_etx_HEC, &b_MET_Topo_etx_HEC);
   fChain->SetBranchAddress("MET_Topo_ety_HEC", &MET_Topo_ety_HEC, &b_MET_Topo_ety_HEC);
   fChain->SetBranchAddress("MET_Topo_sumet_HEC", &MET_Topo_sumet_HEC, &b_MET_Topo_sumet_HEC);
   fChain->SetBranchAddress("MET_Topo_phi_HEC", &MET_Topo_phi_HEC, &b_MET_Topo_phi_HEC);
   fChain->SetBranchAddress("MET_Topo_etx_FCAL", &MET_Topo_etx_FCAL, &b_MET_Topo_etx_FCAL);
   fChain->SetBranchAddress("MET_Topo_ety_FCAL", &MET_Topo_ety_FCAL, &b_MET_Topo_ety_FCAL);
   fChain->SetBranchAddress("MET_Topo_sumet_FCAL", &MET_Topo_sumet_FCAL, &b_MET_Topo_sumet_FCAL);
   fChain->SetBranchAddress("MET_Topo_phi_FCAL", &MET_Topo_phi_FCAL, &b_MET_Topo_phi_FCAL);
   fChain->SetBranchAddress("MET_Topo_nCell_PEMB", &MET_Topo_nCell_PEMB, &b_MET_Topo_nCell_PEMB);
   fChain->SetBranchAddress("MET_Topo_nCell_EMB", &MET_Topo_nCell_EMB, &b_MET_Topo_nCell_EMB);
   fChain->SetBranchAddress("MET_Topo_nCell_PEMEC", &MET_Topo_nCell_PEMEC, &b_MET_Topo_nCell_PEMEC);
   fChain->SetBranchAddress("MET_Topo_nCell_EME", &MET_Topo_nCell_EME, &b_MET_Topo_nCell_EME);
   fChain->SetBranchAddress("MET_Topo_nCell_TILE", &MET_Topo_nCell_TILE, &b_MET_Topo_nCell_TILE);
   fChain->SetBranchAddress("MET_Topo_nCell_HEC", &MET_Topo_nCell_HEC, &b_MET_Topo_nCell_HEC);
   fChain->SetBranchAddress("MET_Topo_nCell_FCAL", &MET_Topo_nCell_FCAL, &b_MET_Topo_nCell_FCAL);
   fChain->SetBranchAddress("MET_Topo_etx_CentralReg", &MET_Topo_etx_CentralReg, &b_MET_Topo_etx_CentralReg);
   fChain->SetBranchAddress("MET_Topo_ety_CentralReg", &MET_Topo_ety_CentralReg, &b_MET_Topo_ety_CentralReg);
   fChain->SetBranchAddress("MET_Topo_sumet_CentralReg", &MET_Topo_sumet_CentralReg, &b_MET_Topo_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Topo_phi_CentralReg", &MET_Topo_phi_CentralReg, &b_MET_Topo_phi_CentralReg);
   fChain->SetBranchAddress("MET_Topo_etx_EndcapRegion", &MET_Topo_etx_EndcapRegion, &b_MET_Topo_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Topo_ety_EndcapRegion", &MET_Topo_ety_EndcapRegion, &b_MET_Topo_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Topo_sumet_EndcapRegion", &MET_Topo_sumet_EndcapRegion, &b_MET_Topo_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Topo_phi_EndcapRegion", &MET_Topo_phi_EndcapRegion, &b_MET_Topo_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Topo_etx_ForwardReg", &MET_Topo_etx_ForwardReg, &b_MET_Topo_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Topo_ety_ForwardReg", &MET_Topo_ety_ForwardReg, &b_MET_Topo_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Topo_sumet_ForwardReg", &MET_Topo_sumet_ForwardReg, &b_MET_Topo_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Topo_phi_ForwardReg", &MET_Topo_phi_ForwardReg, &b_MET_Topo_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Base_etx", &MET_Base_etx, &b_MET_Base_etx);
   fChain->SetBranchAddress("MET_Base_ety", &MET_Base_ety, &b_MET_Base_ety);
   fChain->SetBranchAddress("MET_Base_sumet", &MET_Base_sumet, &b_MET_Base_sumet);
   fChain->SetBranchAddress("MET_Base_et", &MET_Base_et, &b_MET_Base_et);
   fChain->SetBranchAddress("MET_Base_phi", &MET_Base_phi, &b_MET_Base_phi);
   fChain->SetBranchAddress("MET_Base_SUMET_EMFrac", &MET_Base_SUMET_EMFrac, &b_MET_Base_SUMET_EMFrac);
   fChain->SetBranchAddress("MET_Base_etx_PEMB", &MET_Base_etx_PEMB, &b_MET_Base_etx_PEMB);
   fChain->SetBranchAddress("MET_Base_ety_PEMB", &MET_Base_ety_PEMB, &b_MET_Base_ety_PEMB);
   fChain->SetBranchAddress("MET_Base_sumet_PEMB", &MET_Base_sumet_PEMB, &b_MET_Base_sumet_PEMB);
   fChain->SetBranchAddress("MET_Base_phi_PEMB", &MET_Base_phi_PEMB, &b_MET_Base_phi_PEMB);
   fChain->SetBranchAddress("MET_Base_etx_EMB", &MET_Base_etx_EMB, &b_MET_Base_etx_EMB);
   fChain->SetBranchAddress("MET_Base_ety_EMB", &MET_Base_ety_EMB, &b_MET_Base_ety_EMB);
   fChain->SetBranchAddress("MET_Base_sumet_EMB", &MET_Base_sumet_EMB, &b_MET_Base_sumet_EMB);
   fChain->SetBranchAddress("MET_Base_phi_EMB", &MET_Base_phi_EMB, &b_MET_Base_phi_EMB);
   fChain->SetBranchAddress("MET_Base_etx_PEMEC", &MET_Base_etx_PEMEC, &b_MET_Base_etx_PEMEC);
   fChain->SetBranchAddress("MET_Base_ety_PEMEC", &MET_Base_ety_PEMEC, &b_MET_Base_ety_PEMEC);
   fChain->SetBranchAddress("MET_Base_sumet_PEMEC", &MET_Base_sumet_PEMEC, &b_MET_Base_sumet_PEMEC);
   fChain->SetBranchAddress("MET_Base_phi_PEMEC", &MET_Base_phi_PEMEC, &b_MET_Base_phi_PEMEC);
   fChain->SetBranchAddress("MET_Base_etx_EME", &MET_Base_etx_EME, &b_MET_Base_etx_EME);
   fChain->SetBranchAddress("MET_Base_ety_EME", &MET_Base_ety_EME, &b_MET_Base_ety_EME);
   fChain->SetBranchAddress("MET_Base_sumet_EME", &MET_Base_sumet_EME, &b_MET_Base_sumet_EME);
   fChain->SetBranchAddress("MET_Base_phi_EME", &MET_Base_phi_EME, &b_MET_Base_phi_EME);
   fChain->SetBranchAddress("MET_Base_etx_TILE", &MET_Base_etx_TILE, &b_MET_Base_etx_TILE);
   fChain->SetBranchAddress("MET_Base_ety_TILE", &MET_Base_ety_TILE, &b_MET_Base_ety_TILE);
   fChain->SetBranchAddress("MET_Base_sumet_TILE", &MET_Base_sumet_TILE, &b_MET_Base_sumet_TILE);
   fChain->SetBranchAddress("MET_Base_phi_TILE", &MET_Base_phi_TILE, &b_MET_Base_phi_TILE);
   fChain->SetBranchAddress("MET_Base_etx_HEC", &MET_Base_etx_HEC, &b_MET_Base_etx_HEC);
   fChain->SetBranchAddress("MET_Base_ety_HEC", &MET_Base_ety_HEC, &b_MET_Base_ety_HEC);
   fChain->SetBranchAddress("MET_Base_sumet_HEC", &MET_Base_sumet_HEC, &b_MET_Base_sumet_HEC);
   fChain->SetBranchAddress("MET_Base_phi_HEC", &MET_Base_phi_HEC, &b_MET_Base_phi_HEC);
   fChain->SetBranchAddress("MET_Base_etx_FCAL", &MET_Base_etx_FCAL, &b_MET_Base_etx_FCAL);
   fChain->SetBranchAddress("MET_Base_ety_FCAL", &MET_Base_ety_FCAL, &b_MET_Base_ety_FCAL);
   fChain->SetBranchAddress("MET_Base_sumet_FCAL", &MET_Base_sumet_FCAL, &b_MET_Base_sumet_FCAL);
   fChain->SetBranchAddress("MET_Base_phi_FCAL", &MET_Base_phi_FCAL, &b_MET_Base_phi_FCAL);
   fChain->SetBranchAddress("MET_Base_nCell_PEMB", &MET_Base_nCell_PEMB, &b_MET_Base_nCell_PEMB);
   fChain->SetBranchAddress("MET_Base_nCell_EMB", &MET_Base_nCell_EMB, &b_MET_Base_nCell_EMB);
   fChain->SetBranchAddress("MET_Base_nCell_PEMEC", &MET_Base_nCell_PEMEC, &b_MET_Base_nCell_PEMEC);
   fChain->SetBranchAddress("MET_Base_nCell_EME", &MET_Base_nCell_EME, &b_MET_Base_nCell_EME);
   fChain->SetBranchAddress("MET_Base_nCell_TILE", &MET_Base_nCell_TILE, &b_MET_Base_nCell_TILE);
   fChain->SetBranchAddress("MET_Base_nCell_HEC", &MET_Base_nCell_HEC, &b_MET_Base_nCell_HEC);
   fChain->SetBranchAddress("MET_Base_nCell_FCAL", &MET_Base_nCell_FCAL, &b_MET_Base_nCell_FCAL);
   fChain->SetBranchAddress("MET_Base_etx_CentralReg", &MET_Base_etx_CentralReg, &b_MET_Base_etx_CentralReg);
   fChain->SetBranchAddress("MET_Base_ety_CentralReg", &MET_Base_ety_CentralReg, &b_MET_Base_ety_CentralReg);
   fChain->SetBranchAddress("MET_Base_sumet_CentralReg", &MET_Base_sumet_CentralReg, &b_MET_Base_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Base_phi_CentralReg", &MET_Base_phi_CentralReg, &b_MET_Base_phi_CentralReg);
   fChain->SetBranchAddress("MET_Base_etx_EndcapRegion", &MET_Base_etx_EndcapRegion, &b_MET_Base_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Base_ety_EndcapRegion", &MET_Base_ety_EndcapRegion, &b_MET_Base_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Base_sumet_EndcapRegion", &MET_Base_sumet_EndcapRegion, &b_MET_Base_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Base_phi_EndcapRegion", &MET_Base_phi_EndcapRegion, &b_MET_Base_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Base_etx_ForwardReg", &MET_Base_etx_ForwardReg, &b_MET_Base_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Base_ety_ForwardReg", &MET_Base_ety_ForwardReg, &b_MET_Base_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Base_sumet_ForwardReg", &MET_Base_sumet_ForwardReg, &b_MET_Base_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Base_phi_ForwardReg", &MET_Base_phi_ForwardReg, &b_MET_Base_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Base0_etx", &MET_Base0_etx, &b_MET_Base0_etx);
   fChain->SetBranchAddress("MET_Base0_ety", &MET_Base0_ety, &b_MET_Base0_ety);
   fChain->SetBranchAddress("MET_Base0_sumet", &MET_Base0_sumet, &b_MET_Base0_sumet);
   fChain->SetBranchAddress("MET_Base0_et", &MET_Base0_et, &b_MET_Base0_et);
   fChain->SetBranchAddress("MET_Base0_phi", &MET_Base0_phi, &b_MET_Base0_phi);
   fChain->SetBranchAddress("MET_Base0_SUMET_EMFrac", &MET_Base0_SUMET_EMFrac, &b_MET_Base0_SUMET_EMFrac);
   fChain->SetBranchAddress("MET_Base0_etx_PEMB", &MET_Base0_etx_PEMB, &b_MET_Base0_etx_PEMB);
   fChain->SetBranchAddress("MET_Base0_ety_PEMB", &MET_Base0_ety_PEMB, &b_MET_Base0_ety_PEMB);
   fChain->SetBranchAddress("MET_Base0_sumet_PEMB", &MET_Base0_sumet_PEMB, &b_MET_Base0_sumet_PEMB);
   fChain->SetBranchAddress("MET_Base0_phi_PEMB", &MET_Base0_phi_PEMB, &b_MET_Base0_phi_PEMB);
   fChain->SetBranchAddress("MET_Base0_etx_EMB", &MET_Base0_etx_EMB, &b_MET_Base0_etx_EMB);
   fChain->SetBranchAddress("MET_Base0_ety_EMB", &MET_Base0_ety_EMB, &b_MET_Base0_ety_EMB);
   fChain->SetBranchAddress("MET_Base0_sumet_EMB", &MET_Base0_sumet_EMB, &b_MET_Base0_sumet_EMB);
   fChain->SetBranchAddress("MET_Base0_phi_EMB", &MET_Base0_phi_EMB, &b_MET_Base0_phi_EMB);
   fChain->SetBranchAddress("MET_Base0_etx_PEMEC", &MET_Base0_etx_PEMEC, &b_MET_Base0_etx_PEMEC);
   fChain->SetBranchAddress("MET_Base0_ety_PEMEC", &MET_Base0_ety_PEMEC, &b_MET_Base0_ety_PEMEC);
   fChain->SetBranchAddress("MET_Base0_sumet_PEMEC", &MET_Base0_sumet_PEMEC, &b_MET_Base0_sumet_PEMEC);
   fChain->SetBranchAddress("MET_Base0_phi_PEMEC", &MET_Base0_phi_PEMEC, &b_MET_Base0_phi_PEMEC);
   fChain->SetBranchAddress("MET_Base0_etx_EME", &MET_Base0_etx_EME, &b_MET_Base0_etx_EME);
   fChain->SetBranchAddress("MET_Base0_ety_EME", &MET_Base0_ety_EME, &b_MET_Base0_ety_EME);
   fChain->SetBranchAddress("MET_Base0_sumet_EME", &MET_Base0_sumet_EME, &b_MET_Base0_sumet_EME);
   fChain->SetBranchAddress("MET_Base0_phi_EME", &MET_Base0_phi_EME, &b_MET_Base0_phi_EME);
   fChain->SetBranchAddress("MET_Base0_etx_TILE", &MET_Base0_etx_TILE, &b_MET_Base0_etx_TILE);
   fChain->SetBranchAddress("MET_Base0_ety_TILE", &MET_Base0_ety_TILE, &b_MET_Base0_ety_TILE);
   fChain->SetBranchAddress("MET_Base0_sumet_TILE", &MET_Base0_sumet_TILE, &b_MET_Base0_sumet_TILE);
   fChain->SetBranchAddress("MET_Base0_phi_TILE", &MET_Base0_phi_TILE, &b_MET_Base0_phi_TILE);
   fChain->SetBranchAddress("MET_Base0_etx_HEC", &MET_Base0_etx_HEC, &b_MET_Base0_etx_HEC);
   fChain->SetBranchAddress("MET_Base0_ety_HEC", &MET_Base0_ety_HEC, &b_MET_Base0_ety_HEC);
   fChain->SetBranchAddress("MET_Base0_sumet_HEC", &MET_Base0_sumet_HEC, &b_MET_Base0_sumet_HEC);
   fChain->SetBranchAddress("MET_Base0_phi_HEC", &MET_Base0_phi_HEC, &b_MET_Base0_phi_HEC);
   fChain->SetBranchAddress("MET_Base0_etx_FCAL", &MET_Base0_etx_FCAL, &b_MET_Base0_etx_FCAL);
   fChain->SetBranchAddress("MET_Base0_ety_FCAL", &MET_Base0_ety_FCAL, &b_MET_Base0_ety_FCAL);
   fChain->SetBranchAddress("MET_Base0_sumet_FCAL", &MET_Base0_sumet_FCAL, &b_MET_Base0_sumet_FCAL);
   fChain->SetBranchAddress("MET_Base0_phi_FCAL", &MET_Base0_phi_FCAL, &b_MET_Base0_phi_FCAL);
   fChain->SetBranchAddress("MET_Base0_nCell_PEMB", &MET_Base0_nCell_PEMB, &b_MET_Base0_nCell_PEMB);
   fChain->SetBranchAddress("MET_Base0_nCell_EMB", &MET_Base0_nCell_EMB, &b_MET_Base0_nCell_EMB);
   fChain->SetBranchAddress("MET_Base0_nCell_PEMEC", &MET_Base0_nCell_PEMEC, &b_MET_Base0_nCell_PEMEC);
   fChain->SetBranchAddress("MET_Base0_nCell_EME", &MET_Base0_nCell_EME, &b_MET_Base0_nCell_EME);
   fChain->SetBranchAddress("MET_Base0_nCell_TILE", &MET_Base0_nCell_TILE, &b_MET_Base0_nCell_TILE);
   fChain->SetBranchAddress("MET_Base0_nCell_HEC", &MET_Base0_nCell_HEC, &b_MET_Base0_nCell_HEC);
   fChain->SetBranchAddress("MET_Base0_nCell_FCAL", &MET_Base0_nCell_FCAL, &b_MET_Base0_nCell_FCAL);
   fChain->SetBranchAddress("MET_Base0_etx_CentralReg", &MET_Base0_etx_CentralReg, &b_MET_Base0_etx_CentralReg);
   fChain->SetBranchAddress("MET_Base0_ety_CentralReg", &MET_Base0_ety_CentralReg, &b_MET_Base0_ety_CentralReg);
   fChain->SetBranchAddress("MET_Base0_sumet_CentralReg", &MET_Base0_sumet_CentralReg, &b_MET_Base0_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Base0_phi_CentralReg", &MET_Base0_phi_CentralReg, &b_MET_Base0_phi_CentralReg);
   fChain->SetBranchAddress("MET_Base0_etx_EndcapRegion", &MET_Base0_etx_EndcapRegion, &b_MET_Base0_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Base0_ety_EndcapRegion", &MET_Base0_ety_EndcapRegion, &b_MET_Base0_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Base0_sumet_EndcapRegion", &MET_Base0_sumet_EndcapRegion, &b_MET_Base0_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Base0_phi_EndcapRegion", &MET_Base0_phi_EndcapRegion, &b_MET_Base0_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Base0_etx_ForwardReg", &MET_Base0_etx_ForwardReg, &b_MET_Base0_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Base0_ety_ForwardReg", &MET_Base0_ety_ForwardReg, &b_MET_Base0_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Base0_sumet_ForwardReg", &MET_Base0_sumet_ForwardReg, &b_MET_Base0_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Base0_phi_ForwardReg", &MET_Base0_phi_ForwardReg, &b_MET_Base0_phi_ForwardReg);
   fChain->SetBranchAddress("MET_CorrTopo_etx", &MET_CorrTopo_etx, &b_MET_CorrTopo_etx);
   fChain->SetBranchAddress("MET_CorrTopo_ety", &MET_CorrTopo_ety, &b_MET_CorrTopo_ety);
   fChain->SetBranchAddress("MET_CorrTopo_sumet", &MET_CorrTopo_sumet, &b_MET_CorrTopo_sumet);
   fChain->SetBranchAddress("MET_CorrTopo_et", &MET_CorrTopo_et, &b_MET_CorrTopo_et);
   fChain->SetBranchAddress("MET_CorrTopo_phi", &MET_CorrTopo_phi, &b_MET_CorrTopo_phi);
   fChain->SetBranchAddress("MET_CorrTopo_SUMET_EMFrac", &MET_CorrTopo_SUMET_EMFrac, &b_MET_CorrTopo_SUMET_EMFrac);
   fChain->SetBranchAddress("MET_CorrTopo_etx_PEMB", &MET_CorrTopo_etx_PEMB, &b_MET_CorrTopo_etx_PEMB);
   fChain->SetBranchAddress("MET_CorrTopo_ety_PEMB", &MET_CorrTopo_ety_PEMB, &b_MET_CorrTopo_ety_PEMB);
   fChain->SetBranchAddress("MET_CorrTopo_sumet_PEMB", &MET_CorrTopo_sumet_PEMB, &b_MET_CorrTopo_sumet_PEMB);
   fChain->SetBranchAddress("MET_CorrTopo_phi_PEMB", &MET_CorrTopo_phi_PEMB, &b_MET_CorrTopo_phi_PEMB);
   fChain->SetBranchAddress("MET_CorrTopo_etx_EMB", &MET_CorrTopo_etx_EMB, &b_MET_CorrTopo_etx_EMB);
   fChain->SetBranchAddress("MET_CorrTopo_ety_EMB", &MET_CorrTopo_ety_EMB, &b_MET_CorrTopo_ety_EMB);
   fChain->SetBranchAddress("MET_CorrTopo_sumet_EMB", &MET_CorrTopo_sumet_EMB, &b_MET_CorrTopo_sumet_EMB);
   fChain->SetBranchAddress("MET_CorrTopo_phi_EMB", &MET_CorrTopo_phi_EMB, &b_MET_CorrTopo_phi_EMB);
   fChain->SetBranchAddress("MET_CorrTopo_etx_PEMEC", &MET_CorrTopo_etx_PEMEC, &b_MET_CorrTopo_etx_PEMEC);
   fChain->SetBranchAddress("MET_CorrTopo_ety_PEMEC", &MET_CorrTopo_ety_PEMEC, &b_MET_CorrTopo_ety_PEMEC);
   fChain->SetBranchAddress("MET_CorrTopo_sumet_PEMEC", &MET_CorrTopo_sumet_PEMEC, &b_MET_CorrTopo_sumet_PEMEC);
   fChain->SetBranchAddress("MET_CorrTopo_phi_PEMEC", &MET_CorrTopo_phi_PEMEC, &b_MET_CorrTopo_phi_PEMEC);
   fChain->SetBranchAddress("MET_CorrTopo_etx_EME", &MET_CorrTopo_etx_EME, &b_MET_CorrTopo_etx_EME);
   fChain->SetBranchAddress("MET_CorrTopo_ety_EME", &MET_CorrTopo_ety_EME, &b_MET_CorrTopo_ety_EME);
   fChain->SetBranchAddress("MET_CorrTopo_sumet_EME", &MET_CorrTopo_sumet_EME, &b_MET_CorrTopo_sumet_EME);
   fChain->SetBranchAddress("MET_CorrTopo_phi_EME", &MET_CorrTopo_phi_EME, &b_MET_CorrTopo_phi_EME);
   fChain->SetBranchAddress("MET_CorrTopo_etx_TILE", &MET_CorrTopo_etx_TILE, &b_MET_CorrTopo_etx_TILE);
   fChain->SetBranchAddress("MET_CorrTopo_ety_TILE", &MET_CorrTopo_ety_TILE, &b_MET_CorrTopo_ety_TILE);
   fChain->SetBranchAddress("MET_CorrTopo_sumet_TILE", &MET_CorrTopo_sumet_TILE, &b_MET_CorrTopo_sumet_TILE);
   fChain->SetBranchAddress("MET_CorrTopo_phi_TILE", &MET_CorrTopo_phi_TILE, &b_MET_CorrTopo_phi_TILE);
   fChain->SetBranchAddress("MET_CorrTopo_etx_HEC", &MET_CorrTopo_etx_HEC, &b_MET_CorrTopo_etx_HEC);
   fChain->SetBranchAddress("MET_CorrTopo_ety_HEC", &MET_CorrTopo_ety_HEC, &b_MET_CorrTopo_ety_HEC);
   fChain->SetBranchAddress("MET_CorrTopo_sumet_HEC", &MET_CorrTopo_sumet_HEC, &b_MET_CorrTopo_sumet_HEC);
   fChain->SetBranchAddress("MET_CorrTopo_phi_HEC", &MET_CorrTopo_phi_HEC, &b_MET_CorrTopo_phi_HEC);
   fChain->SetBranchAddress("MET_CorrTopo_etx_FCAL", &MET_CorrTopo_etx_FCAL, &b_MET_CorrTopo_etx_FCAL);
   fChain->SetBranchAddress("MET_CorrTopo_ety_FCAL", &MET_CorrTopo_ety_FCAL, &b_MET_CorrTopo_ety_FCAL);
   fChain->SetBranchAddress("MET_CorrTopo_sumet_FCAL", &MET_CorrTopo_sumet_FCAL, &b_MET_CorrTopo_sumet_FCAL);
   fChain->SetBranchAddress("MET_CorrTopo_phi_FCAL", &MET_CorrTopo_phi_FCAL, &b_MET_CorrTopo_phi_FCAL);
   fChain->SetBranchAddress("MET_CorrTopo_nCell_PEMB", &MET_CorrTopo_nCell_PEMB, &b_MET_CorrTopo_nCell_PEMB);
   fChain->SetBranchAddress("MET_CorrTopo_nCell_EMB", &MET_CorrTopo_nCell_EMB, &b_MET_CorrTopo_nCell_EMB);
   fChain->SetBranchAddress("MET_CorrTopo_nCell_PEMEC", &MET_CorrTopo_nCell_PEMEC, &b_MET_CorrTopo_nCell_PEMEC);
   fChain->SetBranchAddress("MET_CorrTopo_nCell_EME", &MET_CorrTopo_nCell_EME, &b_MET_CorrTopo_nCell_EME);
   fChain->SetBranchAddress("MET_CorrTopo_nCell_TILE", &MET_CorrTopo_nCell_TILE, &b_MET_CorrTopo_nCell_TILE);
   fChain->SetBranchAddress("MET_CorrTopo_nCell_HEC", &MET_CorrTopo_nCell_HEC, &b_MET_CorrTopo_nCell_HEC);
   fChain->SetBranchAddress("MET_CorrTopo_nCell_FCAL", &MET_CorrTopo_nCell_FCAL, &b_MET_CorrTopo_nCell_FCAL);
   fChain->SetBranchAddress("MET_CorrTopo_etx_CentralReg", &MET_CorrTopo_etx_CentralReg, &b_MET_CorrTopo_etx_CentralReg);
   fChain->SetBranchAddress("MET_CorrTopo_ety_CentralReg", &MET_CorrTopo_ety_CentralReg, &b_MET_CorrTopo_ety_CentralReg);
   fChain->SetBranchAddress("MET_CorrTopo_sumet_CentralReg", &MET_CorrTopo_sumet_CentralReg, &b_MET_CorrTopo_sumet_CentralReg);
   fChain->SetBranchAddress("MET_CorrTopo_phi_CentralReg", &MET_CorrTopo_phi_CentralReg, &b_MET_CorrTopo_phi_CentralReg);
   fChain->SetBranchAddress("MET_CorrTopo_etx_EndcapRegion", &MET_CorrTopo_etx_EndcapRegion, &b_MET_CorrTopo_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_CorrTopo_ety_EndcapRegion", &MET_CorrTopo_ety_EndcapRegion, &b_MET_CorrTopo_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_CorrTopo_sumet_EndcapRegion", &MET_CorrTopo_sumet_EndcapRegion, &b_MET_CorrTopo_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_CorrTopo_phi_EndcapRegion", &MET_CorrTopo_phi_EndcapRegion, &b_MET_CorrTopo_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_CorrTopo_etx_ForwardReg", &MET_CorrTopo_etx_ForwardReg, &b_MET_CorrTopo_etx_ForwardReg);
   fChain->SetBranchAddress("MET_CorrTopo_ety_ForwardReg", &MET_CorrTopo_ety_ForwardReg, &b_MET_CorrTopo_ety_ForwardReg);
   fChain->SetBranchAddress("MET_CorrTopo_sumet_ForwardReg", &MET_CorrTopo_sumet_ForwardReg, &b_MET_CorrTopo_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_CorrTopo_phi_ForwardReg", &MET_CorrTopo_phi_ForwardReg, &b_MET_CorrTopo_phi_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_etx", &MET_LocHadTopo_etx, &b_MET_LocHadTopo_etx);
   fChain->SetBranchAddress("MET_LocHadTopo_ety", &MET_LocHadTopo_ety, &b_MET_LocHadTopo_ety);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet", &MET_LocHadTopo_sumet, &b_MET_LocHadTopo_sumet);
   fChain->SetBranchAddress("MET_LocHadTopo_et", &MET_LocHadTopo_et, &b_MET_LocHadTopo_et);
   fChain->SetBranchAddress("MET_LocHadTopo_phi", &MET_LocHadTopo_phi, &b_MET_LocHadTopo_phi);
   fChain->SetBranchAddress("MET_LocHadTopo_SUMET_EMFrac", &MET_LocHadTopo_SUMET_EMFrac, &b_MET_LocHadTopo_SUMET_EMFrac);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_PEMB", &MET_LocHadTopo_etx_PEMB, &b_MET_LocHadTopo_etx_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_PEMB", &MET_LocHadTopo_ety_PEMB, &b_MET_LocHadTopo_ety_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_PEMB", &MET_LocHadTopo_sumet_PEMB, &b_MET_LocHadTopo_sumet_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_PEMB", &MET_LocHadTopo_phi_PEMB, &b_MET_LocHadTopo_phi_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_EMB", &MET_LocHadTopo_etx_EMB, &b_MET_LocHadTopo_etx_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_EMB", &MET_LocHadTopo_ety_EMB, &b_MET_LocHadTopo_ety_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_EMB", &MET_LocHadTopo_sumet_EMB, &b_MET_LocHadTopo_sumet_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_EMB", &MET_LocHadTopo_phi_EMB, &b_MET_LocHadTopo_phi_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_PEMEC", &MET_LocHadTopo_etx_PEMEC, &b_MET_LocHadTopo_etx_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_PEMEC", &MET_LocHadTopo_ety_PEMEC, &b_MET_LocHadTopo_ety_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_PEMEC", &MET_LocHadTopo_sumet_PEMEC, &b_MET_LocHadTopo_sumet_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_PEMEC", &MET_LocHadTopo_phi_PEMEC, &b_MET_LocHadTopo_phi_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_EME", &MET_LocHadTopo_etx_EME, &b_MET_LocHadTopo_etx_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_EME", &MET_LocHadTopo_ety_EME, &b_MET_LocHadTopo_ety_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_EME", &MET_LocHadTopo_sumet_EME, &b_MET_LocHadTopo_sumet_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_EME", &MET_LocHadTopo_phi_EME, &b_MET_LocHadTopo_phi_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_TILE", &MET_LocHadTopo_etx_TILE, &b_MET_LocHadTopo_etx_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_TILE", &MET_LocHadTopo_ety_TILE, &b_MET_LocHadTopo_ety_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_TILE", &MET_LocHadTopo_sumet_TILE, &b_MET_LocHadTopo_sumet_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_TILE", &MET_LocHadTopo_phi_TILE, &b_MET_LocHadTopo_phi_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_HEC", &MET_LocHadTopo_etx_HEC, &b_MET_LocHadTopo_etx_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_HEC", &MET_LocHadTopo_ety_HEC, &b_MET_LocHadTopo_ety_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_HEC", &MET_LocHadTopo_sumet_HEC, &b_MET_LocHadTopo_sumet_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_HEC", &MET_LocHadTopo_phi_HEC, &b_MET_LocHadTopo_phi_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_FCAL", &MET_LocHadTopo_etx_FCAL, &b_MET_LocHadTopo_etx_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_FCAL", &MET_LocHadTopo_ety_FCAL, &b_MET_LocHadTopo_ety_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_FCAL", &MET_LocHadTopo_sumet_FCAL, &b_MET_LocHadTopo_sumet_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_FCAL", &MET_LocHadTopo_phi_FCAL, &b_MET_LocHadTopo_phi_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_PEMB", &MET_LocHadTopo_nCell_PEMB, &b_MET_LocHadTopo_nCell_PEMB);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_EMB", &MET_LocHadTopo_nCell_EMB, &b_MET_LocHadTopo_nCell_EMB);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_PEMEC", &MET_LocHadTopo_nCell_PEMEC, &b_MET_LocHadTopo_nCell_PEMEC);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_EME", &MET_LocHadTopo_nCell_EME, &b_MET_LocHadTopo_nCell_EME);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_TILE", &MET_LocHadTopo_nCell_TILE, &b_MET_LocHadTopo_nCell_TILE);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_HEC", &MET_LocHadTopo_nCell_HEC, &b_MET_LocHadTopo_nCell_HEC);
   fChain->SetBranchAddress("MET_LocHadTopo_nCell_FCAL", &MET_LocHadTopo_nCell_FCAL, &b_MET_LocHadTopo_nCell_FCAL);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_CentralReg", &MET_LocHadTopo_etx_CentralReg, &b_MET_LocHadTopo_etx_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_CentralReg", &MET_LocHadTopo_ety_CentralReg, &b_MET_LocHadTopo_ety_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_CentralReg", &MET_LocHadTopo_sumet_CentralReg, &b_MET_LocHadTopo_sumet_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_CentralReg", &MET_LocHadTopo_phi_CentralReg, &b_MET_LocHadTopo_phi_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_EndcapRegion", &MET_LocHadTopo_etx_EndcapRegion, &b_MET_LocHadTopo_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_EndcapRegion", &MET_LocHadTopo_ety_EndcapRegion, &b_MET_LocHadTopo_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_EndcapRegion", &MET_LocHadTopo_sumet_EndcapRegion, &b_MET_LocHadTopo_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_EndcapRegion", &MET_LocHadTopo_phi_EndcapRegion, &b_MET_LocHadTopo_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_ForwardReg", &MET_LocHadTopo_etx_ForwardReg, &b_MET_LocHadTopo_etx_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_ForwardReg", &MET_LocHadTopo_ety_ForwardReg, &b_MET_LocHadTopo_ety_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_sumet_ForwardReg", &MET_LocHadTopo_sumet_ForwardReg, &b_MET_LocHadTopo_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_phi_ForwardReg", &MET_LocHadTopo_phi_ForwardReg, &b_MET_LocHadTopo_phi_ForwardReg);
   fChain->SetBranchAddress("MET_Calib_etx", &MET_Calib_etx, &b_MET_Calib_etx);
   fChain->SetBranchAddress("MET_Calib_ety", &MET_Calib_ety, &b_MET_Calib_ety);
   fChain->SetBranchAddress("MET_Calib_sumet", &MET_Calib_sumet, &b_MET_Calib_sumet);
   fChain->SetBranchAddress("MET_Calib_et", &MET_Calib_et, &b_MET_Calib_et);
   fChain->SetBranchAddress("MET_Calib_phi", &MET_Calib_phi, &b_MET_Calib_phi);
   fChain->SetBranchAddress("MET_Calib_SUMET_EMFrac", &MET_Calib_SUMET_EMFrac, &b_MET_Calib_SUMET_EMFrac);
   fChain->SetBranchAddress("MET_Calib_etx_PEMB", &MET_Calib_etx_PEMB, &b_MET_Calib_etx_PEMB);
   fChain->SetBranchAddress("MET_Calib_ety_PEMB", &MET_Calib_ety_PEMB, &b_MET_Calib_ety_PEMB);
   fChain->SetBranchAddress("MET_Calib_sumet_PEMB", &MET_Calib_sumet_PEMB, &b_MET_Calib_sumet_PEMB);
   fChain->SetBranchAddress("MET_Calib_phi_PEMB", &MET_Calib_phi_PEMB, &b_MET_Calib_phi_PEMB);
   fChain->SetBranchAddress("MET_Calib_etx_EMB", &MET_Calib_etx_EMB, &b_MET_Calib_etx_EMB);
   fChain->SetBranchAddress("MET_Calib_ety_EMB", &MET_Calib_ety_EMB, &b_MET_Calib_ety_EMB);
   fChain->SetBranchAddress("MET_Calib_sumet_EMB", &MET_Calib_sumet_EMB, &b_MET_Calib_sumet_EMB);
   fChain->SetBranchAddress("MET_Calib_phi_EMB", &MET_Calib_phi_EMB, &b_MET_Calib_phi_EMB);
   fChain->SetBranchAddress("MET_Calib_etx_PEMEC", &MET_Calib_etx_PEMEC, &b_MET_Calib_etx_PEMEC);
   fChain->SetBranchAddress("MET_Calib_ety_PEMEC", &MET_Calib_ety_PEMEC, &b_MET_Calib_ety_PEMEC);
   fChain->SetBranchAddress("MET_Calib_sumet_PEMEC", &MET_Calib_sumet_PEMEC, &b_MET_Calib_sumet_PEMEC);
   fChain->SetBranchAddress("MET_Calib_phi_PEMEC", &MET_Calib_phi_PEMEC, &b_MET_Calib_phi_PEMEC);
   fChain->SetBranchAddress("MET_Calib_etx_EME", &MET_Calib_etx_EME, &b_MET_Calib_etx_EME);
   fChain->SetBranchAddress("MET_Calib_ety_EME", &MET_Calib_ety_EME, &b_MET_Calib_ety_EME);
   fChain->SetBranchAddress("MET_Calib_sumet_EME", &MET_Calib_sumet_EME, &b_MET_Calib_sumet_EME);
   fChain->SetBranchAddress("MET_Calib_phi_EME", &MET_Calib_phi_EME, &b_MET_Calib_phi_EME);
   fChain->SetBranchAddress("MET_Calib_etx_TILE", &MET_Calib_etx_TILE, &b_MET_Calib_etx_TILE);
   fChain->SetBranchAddress("MET_Calib_ety_TILE", &MET_Calib_ety_TILE, &b_MET_Calib_ety_TILE);
   fChain->SetBranchAddress("MET_Calib_sumet_TILE", &MET_Calib_sumet_TILE, &b_MET_Calib_sumet_TILE);
   fChain->SetBranchAddress("MET_Calib_phi_TILE", &MET_Calib_phi_TILE, &b_MET_Calib_phi_TILE);
   fChain->SetBranchAddress("MET_Calib_etx_HEC", &MET_Calib_etx_HEC, &b_MET_Calib_etx_HEC);
   fChain->SetBranchAddress("MET_Calib_ety_HEC", &MET_Calib_ety_HEC, &b_MET_Calib_ety_HEC);
   fChain->SetBranchAddress("MET_Calib_sumet_HEC", &MET_Calib_sumet_HEC, &b_MET_Calib_sumet_HEC);
   fChain->SetBranchAddress("MET_Calib_phi_HEC", &MET_Calib_phi_HEC, &b_MET_Calib_phi_HEC);
   fChain->SetBranchAddress("MET_Calib_etx_FCAL", &MET_Calib_etx_FCAL, &b_MET_Calib_etx_FCAL);
   fChain->SetBranchAddress("MET_Calib_ety_FCAL", &MET_Calib_ety_FCAL, &b_MET_Calib_ety_FCAL);
   fChain->SetBranchAddress("MET_Calib_sumet_FCAL", &MET_Calib_sumet_FCAL, &b_MET_Calib_sumet_FCAL);
   fChain->SetBranchAddress("MET_Calib_phi_FCAL", &MET_Calib_phi_FCAL, &b_MET_Calib_phi_FCAL);
   fChain->SetBranchAddress("MET_Calib_nCell_PEMB", &MET_Calib_nCell_PEMB, &b_MET_Calib_nCell_PEMB);
   fChain->SetBranchAddress("MET_Calib_nCell_EMB", &MET_Calib_nCell_EMB, &b_MET_Calib_nCell_EMB);
   fChain->SetBranchAddress("MET_Calib_nCell_PEMEC", &MET_Calib_nCell_PEMEC, &b_MET_Calib_nCell_PEMEC);
   fChain->SetBranchAddress("MET_Calib_nCell_EME", &MET_Calib_nCell_EME, &b_MET_Calib_nCell_EME);
   fChain->SetBranchAddress("MET_Calib_nCell_TILE", &MET_Calib_nCell_TILE, &b_MET_Calib_nCell_TILE);
   fChain->SetBranchAddress("MET_Calib_nCell_HEC", &MET_Calib_nCell_HEC, &b_MET_Calib_nCell_HEC);
   fChain->SetBranchAddress("MET_Calib_nCell_FCAL", &MET_Calib_nCell_FCAL, &b_MET_Calib_nCell_FCAL);
   fChain->SetBranchAddress("MET_Calib_etx_CentralReg", &MET_Calib_etx_CentralReg, &b_MET_Calib_etx_CentralReg);
   fChain->SetBranchAddress("MET_Calib_ety_CentralReg", &MET_Calib_ety_CentralReg, &b_MET_Calib_ety_CentralReg);
   fChain->SetBranchAddress("MET_Calib_sumet_CentralReg", &MET_Calib_sumet_CentralReg, &b_MET_Calib_sumet_CentralReg);
   fChain->SetBranchAddress("MET_Calib_phi_CentralReg", &MET_Calib_phi_CentralReg, &b_MET_Calib_phi_CentralReg);
   fChain->SetBranchAddress("MET_Calib_etx_EndcapRegion", &MET_Calib_etx_EndcapRegion, &b_MET_Calib_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_Calib_ety_EndcapRegion", &MET_Calib_ety_EndcapRegion, &b_MET_Calib_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_Calib_sumet_EndcapRegion", &MET_Calib_sumet_EndcapRegion, &b_MET_Calib_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_Calib_phi_EndcapRegion", &MET_Calib_phi_EndcapRegion, &b_MET_Calib_phi_EndcapRegion);
   fChain->SetBranchAddress("MET_Calib_etx_ForwardReg", &MET_Calib_etx_ForwardReg, &b_MET_Calib_etx_ForwardReg);
   fChain->SetBranchAddress("MET_Calib_ety_ForwardReg", &MET_Calib_ety_ForwardReg, &b_MET_Calib_ety_ForwardReg);
   fChain->SetBranchAddress("MET_Calib_sumet_ForwardReg", &MET_Calib_sumet_ForwardReg, &b_MET_Calib_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_Calib_phi_ForwardReg", &MET_Calib_phi_ForwardReg, &b_MET_Calib_phi_ForwardReg);
   fChain->SetBranchAddress("el_MET_n", &el_MET_n, &b_el_MET_n);
   fChain->SetBranchAddress("el_MET_wpx", &el_MET_wpx, &b_el_MET_wpx);
   fChain->SetBranchAddress("el_MET_wpy", &el_MET_wpy, &b_el_MET_wpy);
   fChain->SetBranchAddress("el_MET_wet", &el_MET_wet, &b_el_MET_wet);
   fChain->SetBranchAddress("el_MET_statusWord", &el_MET_statusWord, &b_el_MET_statusWord);
   fChain->SetBranchAddress("ph_MET_n", &ph_MET_n, &b_ph_MET_n);
   fChain->SetBranchAddress("ph_MET_wpx", &ph_MET_wpx, &b_ph_MET_wpx);
   fChain->SetBranchAddress("ph_MET_wpy", &ph_MET_wpy, &b_ph_MET_wpy);
   fChain->SetBranchAddress("ph_MET_wet", &ph_MET_wet, &b_ph_MET_wet);
   fChain->SetBranchAddress("ph_MET_statusWord", &ph_MET_statusWord, &b_ph_MET_statusWord);
   fChain->SetBranchAddress("mu_staco_MET_n", &mu_staco_MET_n, &b_mu_staco_MET_n);
   fChain->SetBranchAddress("mu_staco_MET_wpx", &mu_staco_MET_wpx, &b_mu_staco_MET_wpx);
   fChain->SetBranchAddress("mu_staco_MET_wpy", &mu_staco_MET_wpy, &b_mu_staco_MET_wpy);
   fChain->SetBranchAddress("mu_staco_MET_wet", &mu_staco_MET_wet, &b_mu_staco_MET_wet);
   fChain->SetBranchAddress("mu_staco_MET_statusWord", &mu_staco_MET_statusWord, &b_mu_staco_MET_statusWord);
   fChain->SetBranchAddress("tau_MET_n", &tau_MET_n, &b_tau_MET_n);
   fChain->SetBranchAddress("tau_MET_wpx", &tau_MET_wpx, &b_tau_MET_wpx);
   fChain->SetBranchAddress("tau_MET_wpy", &tau_MET_wpy, &b_tau_MET_wpy);
   fChain->SetBranchAddress("tau_MET_wet", &tau_MET_wet, &b_tau_MET_wet);
   fChain->SetBranchAddress("tau_MET_statusWord", &tau_MET_statusWord, &b_tau_MET_statusWord);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_MET_n", &jet_AntiKt4H1Topo_MET_n, &b_jet_AntiKt4H1Topo_MET_n);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_MET_wpx", &jet_AntiKt4H1Topo_MET_wpx, &b_jet_AntiKt4H1Topo_MET_wpx);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_MET_wpy", &jet_AntiKt4H1Topo_MET_wpy, &b_jet_AntiKt4H1Topo_MET_wpy);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_MET_wet", &jet_AntiKt4H1Topo_MET_wet, &b_jet_AntiKt4H1Topo_MET_wet);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_MET_statusWord", &jet_AntiKt4H1Topo_MET_statusWord, &b_jet_AntiKt4H1Topo_MET_statusWord);
   fChain->SetBranchAddress("cl_MET_n", &cl_MET_n, &b_cl_MET_n);
   fChain->SetBranchAddress("cl_MET_wpx", &cl_MET_wpx, &b_cl_MET_wpx);
   fChain->SetBranchAddress("cl_MET_wpy", &cl_MET_wpy, &b_cl_MET_wpy);
   fChain->SetBranchAddress("cl_MET_wet", &cl_MET_wet, &b_cl_MET_wet);
   fChain->SetBranchAddress("cl_MET_statusWord", &cl_MET_statusWord, &b_cl_MET_statusWord);
   fChain->SetBranchAddress("cl_n", &cl_n, &b_cl_n);
   fChain->SetBranchAddress("cl_E", &cl_E, &b_cl_E);
   fChain->SetBranchAddress("cl_pt", &cl_pt, &b_cl_pt);
   fChain->SetBranchAddress("cl_m", &cl_m, &b_cl_m);
   fChain->SetBranchAddress("cl_eta", &cl_eta, &b_cl_eta);
   fChain->SetBranchAddress("cl_phi", &cl_phi, &b_cl_phi);
   fChain->SetBranchAddress("MET_EMJES_RefGamma_etx", &MET_EMJES_RefGamma_etx, &b_MET_EMJES_RefGamma_etx);
   fChain->SetBranchAddress("MET_EMJES_RefGamma_ety", &MET_EMJES_RefGamma_ety, &b_MET_EMJES_RefGamma_ety);
   fChain->SetBranchAddress("MET_EMJES_RefGamma_sumet", &MET_EMJES_RefGamma_sumet, &b_MET_EMJES_RefGamma_sumet);
   fChain->SetBranchAddress("MET_EMJES_RefGamma_et", &MET_EMJES_RefGamma_et, &b_MET_EMJES_RefGamma_et);
   fChain->SetBranchAddress("MET_EMJES_RefGamma_phi", &MET_EMJES_RefGamma_phi, &b_MET_EMJES_RefGamma_phi);
   fChain->SetBranchAddress("MET_EMJES_RefEle_etx", &MET_EMJES_RefEle_etx, &b_MET_EMJES_RefEle_etx);
   fChain->SetBranchAddress("MET_EMJES_RefEle_ety", &MET_EMJES_RefEle_ety, &b_MET_EMJES_RefEle_ety);
   fChain->SetBranchAddress("MET_EMJES_RefEle_sumet", &MET_EMJES_RefEle_sumet, &b_MET_EMJES_RefEle_sumet);
   fChain->SetBranchAddress("MET_EMJES_RefEle_et", &MET_EMJES_RefEle_et, &b_MET_EMJES_RefEle_et);
   fChain->SetBranchAddress("MET_EMJES_RefEle_phi", &MET_EMJES_RefEle_phi, &b_MET_EMJES_RefEle_phi);
   fChain->SetBranchAddress("MET_EMJES_RefTau_etx", &MET_EMJES_RefTau_etx, &b_MET_EMJES_RefTau_etx);
   fChain->SetBranchAddress("MET_EMJES_RefTau_ety", &MET_EMJES_RefTau_ety, &b_MET_EMJES_RefTau_ety);
   fChain->SetBranchAddress("MET_EMJES_RefTau_sumet", &MET_EMJES_RefTau_sumet, &b_MET_EMJES_RefTau_sumet);
   fChain->SetBranchAddress("MET_EMJES_RefTau_et", &MET_EMJES_RefTau_et, &b_MET_EMJES_RefTau_et);
   fChain->SetBranchAddress("MET_EMJES_RefTau_phi", &MET_EMJES_RefTau_phi, &b_MET_EMJES_RefTau_phi);
   fChain->SetBranchAddress("MET_EMJES_RefJet_etx", &MET_EMJES_RefJet_etx, &b_MET_EMJES_RefJet_etx);
   fChain->SetBranchAddress("MET_EMJES_RefJet_ety", &MET_EMJES_RefJet_ety, &b_MET_EMJES_RefJet_ety);
   fChain->SetBranchAddress("MET_EMJES_RefJet_sumet", &MET_EMJES_RefJet_sumet, &b_MET_EMJES_RefJet_sumet);
   fChain->SetBranchAddress("MET_EMJES_RefJet_et", &MET_EMJES_RefJet_et, &b_MET_EMJES_RefJet_et);
   fChain->SetBranchAddress("MET_EMJES_RefJet_phi", &MET_EMJES_RefJet_phi, &b_MET_EMJES_RefJet_phi);
   fChain->SetBranchAddress("MET_EMJES_RefMuon_Staco_etx", &MET_EMJES_RefMuon_Staco_etx, &b_MET_EMJES_RefMuon_Staco_etx);
   fChain->SetBranchAddress("MET_EMJES_RefMuon_Staco_ety", &MET_EMJES_RefMuon_Staco_ety, &b_MET_EMJES_RefMuon_Staco_ety);
   fChain->SetBranchAddress("MET_EMJES_RefMuon_Staco_sumet", &MET_EMJES_RefMuon_Staco_sumet, &b_MET_EMJES_RefMuon_Staco_sumet);
   fChain->SetBranchAddress("MET_EMJES_RefMuon_Staco_et", &MET_EMJES_RefMuon_Staco_et, &b_MET_EMJES_RefMuon_Staco_et);
   fChain->SetBranchAddress("MET_EMJES_RefMuon_Staco_phi", &MET_EMJES_RefMuon_Staco_phi, &b_MET_EMJES_RefMuon_Staco_phi);
   fChain->SetBranchAddress("MET_EMJES_RefMuon_Track_Staco_etx", &MET_EMJES_RefMuon_Track_Staco_etx, &b_MET_EMJES_RefMuon_Track_Staco_etx);
   fChain->SetBranchAddress("MET_EMJES_RefMuon_Track_Staco_ety", &MET_EMJES_RefMuon_Track_Staco_ety, &b_MET_EMJES_RefMuon_Track_Staco_ety);
   fChain->SetBranchAddress("MET_EMJES_RefMuon_Track_Staco_sumet", &MET_EMJES_RefMuon_Track_Staco_sumet, &b_MET_EMJES_RefMuon_Track_Staco_sumet);
   fChain->SetBranchAddress("MET_EMJES_RefMuon_Track_Staco_et", &MET_EMJES_RefMuon_Track_Staco_et, &b_MET_EMJES_RefMuon_Track_Staco_et);
   fChain->SetBranchAddress("MET_EMJES_RefMuon_Track_Staco_phi", &MET_EMJES_RefMuon_Track_Staco_phi, &b_MET_EMJES_RefMuon_Track_Staco_phi);
   fChain->SetBranchAddress("MET_EMJES_Muon_Isol_Staco_etx", &MET_EMJES_Muon_Isol_Staco_etx, &b_MET_EMJES_Muon_Isol_Staco_etx);
   fChain->SetBranchAddress("MET_EMJES_Muon_Isol_Staco_ety", &MET_EMJES_Muon_Isol_Staco_ety, &b_MET_EMJES_Muon_Isol_Staco_ety);
   fChain->SetBranchAddress("MET_EMJES_Muon_Isol_Staco_sumet", &MET_EMJES_Muon_Isol_Staco_sumet, &b_MET_EMJES_Muon_Isol_Staco_sumet);
   fChain->SetBranchAddress("MET_EMJES_Muon_Isol_Staco_et", &MET_EMJES_Muon_Isol_Staco_et, &b_MET_EMJES_Muon_Isol_Staco_et);
   fChain->SetBranchAddress("MET_EMJES_Muon_Isol_Staco_phi", &MET_EMJES_Muon_Isol_Staco_phi, &b_MET_EMJES_Muon_Isol_Staco_phi);
   fChain->SetBranchAddress("MET_EMJES_Muon_NonIsol_Staco_etx", &MET_EMJES_Muon_NonIsol_Staco_etx, &b_MET_EMJES_Muon_NonIsol_Staco_etx);
   fChain->SetBranchAddress("MET_EMJES_Muon_NonIsol_Staco_ety", &MET_EMJES_Muon_NonIsol_Staco_ety, &b_MET_EMJES_Muon_NonIsol_Staco_ety);
   fChain->SetBranchAddress("MET_EMJES_Muon_NonIsol_Staco_sumet", &MET_EMJES_Muon_NonIsol_Staco_sumet, &b_MET_EMJES_Muon_NonIsol_Staco_sumet);
   fChain->SetBranchAddress("MET_EMJES_Muon_NonIsol_Staco_et", &MET_EMJES_Muon_NonIsol_Staco_et, &b_MET_EMJES_Muon_NonIsol_Staco_et);
   fChain->SetBranchAddress("MET_EMJES_Muon_NonIsol_Staco_phi", &MET_EMJES_Muon_NonIsol_Staco_phi, &b_MET_EMJES_Muon_NonIsol_Staco_phi);
   fChain->SetBranchAddress("MET_EMJES_Muon_Total_Staco_etx", &MET_EMJES_Muon_Total_Staco_etx, &b_MET_EMJES_Muon_Total_Staco_etx);
   fChain->SetBranchAddress("MET_EMJES_Muon_Total_Staco_ety", &MET_EMJES_Muon_Total_Staco_ety, &b_MET_EMJES_Muon_Total_Staco_ety);
   fChain->SetBranchAddress("MET_EMJES_Muon_Total_Staco_sumet", &MET_EMJES_Muon_Total_Staco_sumet, &b_MET_EMJES_Muon_Total_Staco_sumet);
   fChain->SetBranchAddress("MET_EMJES_Muon_Total_Staco_et", &MET_EMJES_Muon_Total_Staco_et, &b_MET_EMJES_Muon_Total_Staco_et);
   fChain->SetBranchAddress("MET_EMJES_Muon_Total_Staco_phi", &MET_EMJES_Muon_Total_Staco_phi, &b_MET_EMJES_Muon_Total_Staco_phi);
   fChain->SetBranchAddress("MET_EMJES_CellOutLocHad_etx", &MET_EMJES_CellOutLocHad_etx, &b_MET_EMJES_CellOutLocHad_etx);
   fChain->SetBranchAddress("MET_EMJES_CellOutLocHad_ety", &MET_EMJES_CellOutLocHad_ety, &b_MET_EMJES_CellOutLocHad_ety);
   fChain->SetBranchAddress("MET_EMJES_CellOutLocHad_sumet", &MET_EMJES_CellOutLocHad_sumet, &b_MET_EMJES_CellOutLocHad_sumet);
   fChain->SetBranchAddress("MET_EMJES_CellOutLocHad_et", &MET_EMJES_CellOutLocHad_et, &b_MET_EMJES_CellOutLocHad_et);
   fChain->SetBranchAddress("MET_EMJES_CellOutLocHad_phi", &MET_EMJES_CellOutLocHad_phi, &b_MET_EMJES_CellOutLocHad_phi);
   fChain->SetBranchAddress("MET_EMJES_RefFinal_CellOutLocHad_etx", &MET_EMJES_RefFinal_CellOutLocHad_etx, &b_MET_EMJES_RefFinal_CellOutLocHad_etx);
   fChain->SetBranchAddress("MET_EMJES_RefFinal_CellOutLocHad_ety", &MET_EMJES_RefFinal_CellOutLocHad_ety, &b_MET_EMJES_RefFinal_CellOutLocHad_ety);
   fChain->SetBranchAddress("MET_EMJES_RefFinal_CellOutLocHad_sumet", &MET_EMJES_RefFinal_CellOutLocHad_sumet, &b_MET_EMJES_RefFinal_CellOutLocHad_sumet);
   fChain->SetBranchAddress("MET_EMJES_RefFinal_CellOutLocHad_et", &MET_EMJES_RefFinal_CellOutLocHad_et, &b_MET_EMJES_RefFinal_CellOutLocHad_et);
   fChain->SetBranchAddress("MET_EMJES_RefFinal_CellOutLocHad_phi", &MET_EMJES_RefFinal_CellOutLocHad_phi, &b_MET_EMJES_RefFinal_CellOutLocHad_phi);
   fChain->SetBranchAddress("MET_EMJES_RefFinal_CellOutEM_etx", &MET_EMJES_RefFinal_CellOutEM_etx, &b_MET_EMJES_RefFinal_CellOutEM_etx);
   fChain->SetBranchAddress("MET_EMJES_RefFinal_CellOutEM_ety", &MET_EMJES_RefFinal_CellOutEM_ety, &b_MET_EMJES_RefFinal_CellOutEM_ety);
   fChain->SetBranchAddress("MET_EMJES_RefFinal_CellOutEM_sumet", &MET_EMJES_RefFinal_CellOutEM_sumet, &b_MET_EMJES_RefFinal_CellOutEM_sumet);
   fChain->SetBranchAddress("MET_EMJES_RefFinal_CellOutEM_et", &MET_EMJES_RefFinal_CellOutEM_et, &b_MET_EMJES_RefFinal_CellOutEM_et);
   fChain->SetBranchAddress("MET_EMJES_RefFinal_CellOutEM_phi", &MET_EMJES_RefFinal_CellOutEM_phi, &b_MET_EMJES_RefFinal_CellOutEM_phi);
   fChain->SetBranchAddress("MET_EMJES_CellOutEM_etx", &MET_EMJES_CellOutEM_etx, &b_MET_EMJES_CellOutEM_etx);
   fChain->SetBranchAddress("MET_EMJES_CellOutEM_ety", &MET_EMJES_CellOutEM_ety, &b_MET_EMJES_CellOutEM_ety);
   fChain->SetBranchAddress("MET_EMJES_CellOutEM_sumet", &MET_EMJES_CellOutEM_sumet, &b_MET_EMJES_CellOutEM_sumet);
   fChain->SetBranchAddress("MET_EMJES_CellOutEM_et", &MET_EMJES_CellOutEM_et, &b_MET_EMJES_CellOutEM_et);
   fChain->SetBranchAddress("MET_EMJES_CellOutEM_phi", &MET_EMJES_CellOutEM_phi, &b_MET_EMJES_CellOutEM_phi);
   fChain->SetBranchAddress("el_MET_EMJES_n", &el_MET_EMJES_n, &b_el_MET_EMJES_n);
   fChain->SetBranchAddress("el_MET_EMJES_wpx", &el_MET_EMJES_wpx, &b_el_MET_EMJES_wpx);
   fChain->SetBranchAddress("el_MET_EMJES_wpy", &el_MET_EMJES_wpy, &b_el_MET_EMJES_wpy);
   fChain->SetBranchAddress("el_MET_EMJES_wet", &el_MET_EMJES_wet, &b_el_MET_EMJES_wet);
   fChain->SetBranchAddress("el_MET_EMJES_statusWord", &el_MET_EMJES_statusWord, &b_el_MET_EMJES_statusWord);
   fChain->SetBranchAddress("ph_MET_EMJES_n", &ph_MET_EMJES_n, &b_ph_MET_EMJES_n);
   fChain->SetBranchAddress("ph_MET_EMJES_wpx", &ph_MET_EMJES_wpx, &b_ph_MET_EMJES_wpx);
   fChain->SetBranchAddress("ph_MET_EMJES_wpy", &ph_MET_EMJES_wpy, &b_ph_MET_EMJES_wpy);
   fChain->SetBranchAddress("ph_MET_EMJES_wet", &ph_MET_EMJES_wet, &b_ph_MET_EMJES_wet);
   fChain->SetBranchAddress("ph_MET_EMJES_statusWord", &ph_MET_EMJES_statusWord, &b_ph_MET_EMJES_statusWord);
   fChain->SetBranchAddress("mu_staco_MET_EMJES_n", &mu_staco_MET_EMJES_n, &b_mu_staco_MET_EMJES_n);
   fChain->SetBranchAddress("mu_staco_MET_EMJES_wpx", &mu_staco_MET_EMJES_wpx, &b_mu_staco_MET_EMJES_wpx);
   fChain->SetBranchAddress("mu_staco_MET_EMJES_wpy", &mu_staco_MET_EMJES_wpy, &b_mu_staco_MET_EMJES_wpy);
   fChain->SetBranchAddress("mu_staco_MET_EMJES_wet", &mu_staco_MET_EMJES_wet, &b_mu_staco_MET_EMJES_wet);
   fChain->SetBranchAddress("mu_staco_MET_EMJES_statusWord", &mu_staco_MET_EMJES_statusWord, &b_mu_staco_MET_EMJES_statusWord);
   fChain->SetBranchAddress("tau_MET_EMJES_n", &tau_MET_EMJES_n, &b_tau_MET_EMJES_n);
   fChain->SetBranchAddress("tau_MET_EMJES_wpx", &tau_MET_EMJES_wpx, &b_tau_MET_EMJES_wpx);
   fChain->SetBranchAddress("tau_MET_EMJES_wpy", &tau_MET_EMJES_wpy, &b_tau_MET_EMJES_wpy);
   fChain->SetBranchAddress("tau_MET_EMJES_wet", &tau_MET_EMJES_wet, &b_tau_MET_EMJES_wet);
   fChain->SetBranchAddress("tau_MET_EMJES_statusWord", &tau_MET_EMJES_statusWord, &b_tau_MET_EMJES_statusWord);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_MET_EMJES_n", &jet_AntiKt4TopoEM_MET_EMJES_n, &b_jet_AntiKt4TopoEM_MET_EMJES_n);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_MET_EMJES_wpx", &jet_AntiKt4TopoEM_MET_EMJES_wpx, &b_jet_AntiKt4TopoEM_MET_EMJES_wpx);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_MET_EMJES_wpy", &jet_AntiKt4TopoEM_MET_EMJES_wpy, &b_jet_AntiKt4TopoEM_MET_EMJES_wpy);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_MET_EMJES_wet", &jet_AntiKt4TopoEM_MET_EMJES_wet, &b_jet_AntiKt4TopoEM_MET_EMJES_wet);
   fChain->SetBranchAddress("jet_AntiKt4TopoEM_MET_EMJES_statusWord", &jet_AntiKt4TopoEM_MET_EMJES_statusWord, &b_jet_AntiKt4TopoEM_MET_EMJES_statusWord);
   fChain->SetBranchAddress("cl_MET_LocHad_n", &cl_MET_LocHad_n, &b_cl_MET_LocHad_n);
   fChain->SetBranchAddress("cl_MET_LocHad_wpx", &cl_MET_LocHad_wpx, &b_cl_MET_LocHad_wpx);
   fChain->SetBranchAddress("cl_MET_LocHad_wpy", &cl_MET_LocHad_wpy, &b_cl_MET_LocHad_wpy);
   fChain->SetBranchAddress("cl_MET_LocHad_wet", &cl_MET_LocHad_wet, &b_cl_MET_LocHad_wet);
   fChain->SetBranchAddress("cl_MET_LocHad_statusWord", &cl_MET_LocHad_statusWord, &b_cl_MET_LocHad_statusWord);
   fChain->SetBranchAddress("cl_MET_EM_20GeVJets_n", &cl_MET_EM_20GeVJets_n, &b_cl_MET_EM_20GeVJets_n);
   fChain->SetBranchAddress("cl_MET_EM_20GeVJets_wpx", &cl_MET_EM_20GeVJets_wpx, &b_cl_MET_EM_20GeVJets_wpx);
   fChain->SetBranchAddress("cl_MET_EM_20GeVJets_wpy", &cl_MET_EM_20GeVJets_wpy, &b_cl_MET_EM_20GeVJets_wpy);
   fChain->SetBranchAddress("cl_MET_EM_20GeVJets_wet", &cl_MET_EM_20GeVJets_wet, &b_cl_MET_EM_20GeVJets_wet);
   fChain->SetBranchAddress("cl_MET_EM_20GeVJets_statusWord", &cl_MET_EM_20GeVJets_statusWord, &b_cl_MET_EM_20GeVJets_statusWord);
   fChain->SetBranchAddress("cl_MET_EM_30GeVJets_n", &cl_MET_EM_30GeVJets_n, &b_cl_MET_EM_30GeVJets_n);
   fChain->SetBranchAddress("cl_MET_EM_30GeVJets_wpx", &cl_MET_EM_30GeVJets_wpx, &b_cl_MET_EM_30GeVJets_wpx);
   fChain->SetBranchAddress("cl_MET_EM_30GeVJets_wpy", &cl_MET_EM_30GeVJets_wpy, &b_cl_MET_EM_30GeVJets_wpy);
   fChain->SetBranchAddress("cl_MET_EM_30GeVJets_wet", &cl_MET_EM_30GeVJets_wet, &b_cl_MET_EM_30GeVJets_wet);
   fChain->SetBranchAddress("cl_MET_EM_30GeVJets_statusWord", &cl_MET_EM_30GeVJets_statusWord, &b_cl_MET_EM_30GeVJets_statusWord);
   fChain->SetBranchAddress("MET_Simplified30_RefJet_etx", &MET_Simplified30_RefJet_etx, &b_MET_Simplified30_RefJet_etx);
   fChain->SetBranchAddress("MET_Simplified30_RefJet_ety", &MET_Simplified30_RefJet_ety, &b_MET_Simplified30_RefJet_ety);
   fChain->SetBranchAddress("MET_Simplified30_RefJet_sumet", &MET_Simplified30_RefJet_sumet, &b_MET_Simplified30_RefJet_sumet);
   fChain->SetBranchAddress("MET_Simplified30_RefJet_et", &MET_Simplified30_RefJet_et, &b_MET_Simplified30_RefJet_et);
   fChain->SetBranchAddress("MET_Simplified30_RefJet_phi", &MET_Simplified30_RefJet_phi, &b_MET_Simplified30_RefJet_phi);
   fChain->SetBranchAddress("MET_Simplified30_RefFinal_etx", &MET_Simplified30_RefFinal_etx, &b_MET_Simplified30_RefFinal_etx);
   fChain->SetBranchAddress("MET_Simplified30_RefFinal_ety", &MET_Simplified30_RefFinal_ety, &b_MET_Simplified30_RefFinal_ety);
   fChain->SetBranchAddress("MET_Simplified30_RefFinal_sumet", &MET_Simplified30_RefFinal_sumet, &b_MET_Simplified30_RefFinal_sumet);
   fChain->SetBranchAddress("MET_Simplified30_RefFinal_et", &MET_Simplified30_RefFinal_et, &b_MET_Simplified30_RefFinal_et);
   fChain->SetBranchAddress("MET_Simplified30_RefFinal_phi", &MET_Simplified30_RefFinal_phi, &b_MET_Simplified30_RefFinal_phi);
   fChain->SetBranchAddress("MET_Simplified30_CellOut_etx", &MET_Simplified30_CellOut_etx, &b_MET_Simplified30_CellOut_etx);
   fChain->SetBranchAddress("MET_Simplified30_CellOut_ety", &MET_Simplified30_CellOut_ety, &b_MET_Simplified30_CellOut_ety);
   fChain->SetBranchAddress("MET_Simplified30_CellOut_sumet", &MET_Simplified30_CellOut_sumet, &b_MET_Simplified30_CellOut_sumet);
   fChain->SetBranchAddress("MET_Simplified30_CellOut_et", &MET_Simplified30_CellOut_et, &b_MET_Simplified30_CellOut_et);
   fChain->SetBranchAddress("MET_Simplified30_CellOut_phi", &MET_Simplified30_CellOut_phi, &b_MET_Simplified30_CellOut_phi);
   fChain->SetBranchAddress("MET_Simplified30_RefEle_etx", &MET_Simplified30_RefEle_etx, &b_MET_Simplified30_RefEle_etx);
   fChain->SetBranchAddress("MET_Simplified30_RefEle_ety", &MET_Simplified30_RefEle_ety, &b_MET_Simplified30_RefEle_ety);
   fChain->SetBranchAddress("MET_Simplified30_RefEle_sumet", &MET_Simplified30_RefEle_sumet, &b_MET_Simplified30_RefEle_sumet);
   fChain->SetBranchAddress("MET_Simplified30_RefEle_et", &MET_Simplified30_RefEle_et, &b_MET_Simplified30_RefEle_et);
   fChain->SetBranchAddress("MET_Simplified30_RefEle_phi", &MET_Simplified30_RefEle_phi, &b_MET_Simplified30_RefEle_phi);
   fChain->SetBranchAddress("MET_Simplified30_Muon_Total_Staco_etx", &MET_Simplified30_Muon_Total_Staco_etx, &b_MET_Simplified30_Muon_Total_Staco_etx);
   fChain->SetBranchAddress("MET_Simplified30_Muon_Total_Staco_ety", &MET_Simplified30_Muon_Total_Staco_ety, &b_MET_Simplified30_Muon_Total_Staco_ety);
   fChain->SetBranchAddress("MET_Simplified30_Muon_Total_Staco_sumet", &MET_Simplified30_Muon_Total_Staco_sumet, &b_MET_Simplified30_Muon_Total_Staco_sumet);
   fChain->SetBranchAddress("MET_Simplified30_Muon_Total_Staco_et", &MET_Simplified30_Muon_Total_Staco_et, &b_MET_Simplified30_Muon_Total_Staco_et);
   fChain->SetBranchAddress("MET_Simplified30_Muon_Total_Staco_phi", &MET_Simplified30_Muon_Total_Staco_phi, &b_MET_Simplified30_Muon_Total_Staco_phi);
   fChain->SetBranchAddress("MET_Simplified20_RefFinal_etx", &MET_Simplified20_RefFinal_etx, &b_MET_Simplified20_RefFinal_etx);
   fChain->SetBranchAddress("MET_Simplified20_RefFinal_ety", &MET_Simplified20_RefFinal_ety, &b_MET_Simplified20_RefFinal_ety);
   fChain->SetBranchAddress("MET_Simplified20_RefFinal_sumet", &MET_Simplified20_RefFinal_sumet, &b_MET_Simplified20_RefFinal_sumet);
   fChain->SetBranchAddress("MET_Simplified20_RefFinal_et", &MET_Simplified20_RefFinal_et, &b_MET_Simplified20_RefFinal_et);
   fChain->SetBranchAddress("MET_Simplified20_RefFinal_phi", &MET_Simplified20_RefFinal_phi, &b_MET_Simplified20_RefFinal_phi);
   fChain->SetBranchAddress("MET_Simplified20_CellOut_etx", &MET_Simplified20_CellOut_etx, &b_MET_Simplified20_CellOut_etx);
   fChain->SetBranchAddress("MET_Simplified20_CellOut_ety", &MET_Simplified20_CellOut_ety, &b_MET_Simplified20_CellOut_ety);
   fChain->SetBranchAddress("MET_Simplified20_CellOut_sumet", &MET_Simplified20_CellOut_sumet, &b_MET_Simplified20_CellOut_sumet);
   fChain->SetBranchAddress("MET_Simplified20_CellOut_et", &MET_Simplified20_CellOut_et, &b_MET_Simplified20_CellOut_et);
   fChain->SetBranchAddress("MET_Simplified20_CellOut_phi", &MET_Simplified20_CellOut_phi, &b_MET_Simplified20_CellOut_phi);
   fChain->SetBranchAddress("MET_Simplified20_RefJet_etx", &MET_Simplified20_RefJet_etx, &b_MET_Simplified20_RefJet_etx);
   fChain->SetBranchAddress("MET_Simplified20_RefJet_ety", &MET_Simplified20_RefJet_ety, &b_MET_Simplified20_RefJet_ety);
   fChain->SetBranchAddress("MET_Simplified20_RefJet_sumet", &MET_Simplified20_RefJet_sumet, &b_MET_Simplified20_RefJet_sumet);
   fChain->SetBranchAddress("MET_Simplified20_RefJet_et", &MET_Simplified20_RefJet_et, &b_MET_Simplified20_RefJet_et);
   fChain->SetBranchAddress("MET_Simplified20_RefJet_phi", &MET_Simplified20_RefJet_phi, &b_MET_Simplified20_RefJet_phi);
   fChain->SetBranchAddress("MET_Simplified20_RefEle_etx", &MET_Simplified20_RefEle_etx, &b_MET_Simplified20_RefEle_etx);
   fChain->SetBranchAddress("MET_Simplified20_RefEle_ety", &MET_Simplified20_RefEle_ety, &b_MET_Simplified20_RefEle_ety);
   fChain->SetBranchAddress("MET_Simplified20_RefEle_sumet", &MET_Simplified20_RefEle_sumet, &b_MET_Simplified20_RefEle_sumet);
   fChain->SetBranchAddress("MET_Simplified20_RefEle_et", &MET_Simplified20_RefEle_et, &b_MET_Simplified20_RefEle_et);
   fChain->SetBranchAddress("MET_Simplified20_RefEle_phi", &MET_Simplified20_RefEle_phi, &b_MET_Simplified20_RefEle_phi);
   fChain->SetBranchAddress("MET_Simplified20_Muon_Total_Staco_etx", &MET_Simplified20_Muon_Total_Staco_etx, &b_MET_Simplified20_Muon_Total_Staco_etx);
   fChain->SetBranchAddress("MET_Simplified20_Muon_Total_Staco_ety", &MET_Simplified20_Muon_Total_Staco_ety, &b_MET_Simplified20_Muon_Total_Staco_ety);
   fChain->SetBranchAddress("MET_Simplified20_Muon_Total_Staco_sumet", &MET_Simplified20_Muon_Total_Staco_sumet, &b_MET_Simplified20_Muon_Total_Staco_sumet);
   fChain->SetBranchAddress("MET_Simplified20_Muon_Total_Staco_et", &MET_Simplified20_Muon_Total_Staco_et, &b_MET_Simplified20_Muon_Total_Staco_et);
   fChain->SetBranchAddress("MET_Simplified20_Muon_Total_Staco_phi", &MET_Simplified20_Muon_Total_Staco_phi, &b_MET_Simplified20_Muon_Total_Staco_phi);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_n", &jet_AntiKt4H1Tower_n, &b_jet_AntiKt4H1Tower_n);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_E", &jet_AntiKt4H1Tower_E, &b_jet_AntiKt4H1Tower_E);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_pt", &jet_AntiKt4H1Tower_pt, &b_jet_AntiKt4H1Tower_pt);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_m", &jet_AntiKt4H1Tower_m, &b_jet_AntiKt4H1Tower_m);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_eta", &jet_AntiKt4H1Tower_eta, &b_jet_AntiKt4H1Tower_eta);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_phi", &jet_AntiKt4H1Tower_phi, &b_jet_AntiKt4H1Tower_phi);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_EtaPhys", &jet_AntiKt4H1Tower_EtaPhys, &b_jet_AntiKt4H1Tower_EtaPhys);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_PhiPhys", &jet_AntiKt4H1Tower_PhiPhys, &b_jet_AntiKt4H1Tower_PhiPhys);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_MPhys", &jet_AntiKt4H1Tower_MPhys, &b_jet_AntiKt4H1Tower_MPhys);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_WIDTH", &jet_AntiKt4H1Tower_WIDTH, &b_jet_AntiKt4H1Tower_WIDTH);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_n90", &jet_AntiKt4H1Tower_n90, &b_jet_AntiKt4H1Tower_n90);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_Timing", &jet_AntiKt4H1Tower_Timing, &b_jet_AntiKt4H1Tower_Timing);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_LArQuality", &jet_AntiKt4H1Tower_LArQuality, &b_jet_AntiKt4H1Tower_LArQuality);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_nTrk", &jet_AntiKt4H1Tower_nTrk, &b_jet_AntiKt4H1Tower_nTrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_sumPtTrk", &jet_AntiKt4H1Tower_sumPtTrk, &b_jet_AntiKt4H1Tower_sumPtTrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_OriginIndex", &jet_AntiKt4H1Tower_OriginIndex, &b_jet_AntiKt4H1Tower_OriginIndex);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_HECQuality", &jet_AntiKt4H1Tower_HECQuality, &b_jet_AntiKt4H1Tower_HECQuality);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_NegativeE", &jet_AntiKt4H1Tower_NegativeE, &b_jet_AntiKt4H1Tower_NegativeE);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_BCH_CORR_CELL", &jet_AntiKt4H1Tower_BCH_CORR_CELL, &b_jet_AntiKt4H1Tower_BCH_CORR_CELL);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_BCH_CORR_DOTX", &jet_AntiKt4H1Tower_BCH_CORR_DOTX, &b_jet_AntiKt4H1Tower_BCH_CORR_DOTX);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_BCH_CORR_JET", &jet_AntiKt4H1Tower_BCH_CORR_JET, &b_jet_AntiKt4H1Tower_BCH_CORR_JET);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_BCH_CORR_JET_FORCELL", &jet_AntiKt4H1Tower_BCH_CORR_JET_FORCELL, &b_jet_AntiKt4H1Tower_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_ENG_BAD_CELLS", &jet_AntiKt4H1Tower_ENG_BAD_CELLS, &b_jet_AntiKt4H1Tower_ENG_BAD_CELLS);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_N_BAD_CELLS", &jet_AntiKt4H1Tower_N_BAD_CELLS, &b_jet_AntiKt4H1Tower_N_BAD_CELLS);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_N_BAD_CELLS_CORR", &jet_AntiKt4H1Tower_N_BAD_CELLS_CORR, &b_jet_AntiKt4H1Tower_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_BAD_CELLS_CORR_E", &jet_AntiKt4H1Tower_BAD_CELLS_CORR_E, &b_jet_AntiKt4H1Tower_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_SamplingMax", &jet_AntiKt4H1Tower_SamplingMax, &b_jet_AntiKt4H1Tower_SamplingMax);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_fracSamplingMax", &jet_AntiKt4H1Tower_fracSamplingMax, &b_jet_AntiKt4H1Tower_fracSamplingMax);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_hecf", &jet_AntiKt4H1Tower_hecf, &b_jet_AntiKt4H1Tower_hecf);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_tgap3f", &jet_AntiKt4H1Tower_tgap3f, &b_jet_AntiKt4H1Tower_tgap3f);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_isGood", &jet_AntiKt4H1Tower_isGood, &b_jet_AntiKt4H1Tower_isGood);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_emfrac", &jet_AntiKt4H1Tower_emfrac, &b_jet_AntiKt4H1Tower_emfrac);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_GCWJES", &jet_AntiKt4H1Tower_GCWJES, &b_jet_AntiKt4H1Tower_GCWJES);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_EMJES", &jet_AntiKt4H1Tower_EMJES, &b_jet_AntiKt4H1Tower_EMJES);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_CB", &jet_AntiKt4H1Tower_CB, &b_jet_AntiKt4H1Tower_CB);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_emscale_E", &jet_AntiKt4H1Tower_emscale_E, &b_jet_AntiKt4H1Tower_emscale_E);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_emscale_pt", &jet_AntiKt4H1Tower_emscale_pt, &b_jet_AntiKt4H1Tower_emscale_pt);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_emscale_m", &jet_AntiKt4H1Tower_emscale_m, &b_jet_AntiKt4H1Tower_emscale_m);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_emscale_eta", &jet_AntiKt4H1Tower_emscale_eta, &b_jet_AntiKt4H1Tower_emscale_eta);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_emscale_phi", &jet_AntiKt4H1Tower_emscale_phi, &b_jet_AntiKt4H1Tower_emscale_phi);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_jvtxf", &jet_AntiKt4H1Tower_jvtxf, &b_jet_AntiKt4H1Tower_jvtxf);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_jvtx_x", &jet_AntiKt4H1Tower_jvtx_x, &b_jet_AntiKt4H1Tower_jvtx_x);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_jvtx_y", &jet_AntiKt4H1Tower_jvtx_y, &b_jet_AntiKt4H1Tower_jvtx_y);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_jvtx_z", &jet_AntiKt4H1Tower_jvtx_z, &b_jet_AntiKt4H1Tower_jvtx_z);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_PreSamplerB", &jet_AntiKt4H1Tower_e_PreSamplerB, &b_jet_AntiKt4H1Tower_e_PreSamplerB);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_EMB1", &jet_AntiKt4H1Tower_e_EMB1, &b_jet_AntiKt4H1Tower_e_EMB1);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_EMB2", &jet_AntiKt4H1Tower_e_EMB2, &b_jet_AntiKt4H1Tower_e_EMB2);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_EMB3", &jet_AntiKt4H1Tower_e_EMB3, &b_jet_AntiKt4H1Tower_e_EMB3);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_PreSamplerE", &jet_AntiKt4H1Tower_e_PreSamplerE, &b_jet_AntiKt4H1Tower_e_PreSamplerE);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_EME1", &jet_AntiKt4H1Tower_e_EME1, &b_jet_AntiKt4H1Tower_e_EME1);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_EME2", &jet_AntiKt4H1Tower_e_EME2, &b_jet_AntiKt4H1Tower_e_EME2);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_EME3", &jet_AntiKt4H1Tower_e_EME3, &b_jet_AntiKt4H1Tower_e_EME3);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_HEC0", &jet_AntiKt4H1Tower_e_HEC0, &b_jet_AntiKt4H1Tower_e_HEC0);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_HEC1", &jet_AntiKt4H1Tower_e_HEC1, &b_jet_AntiKt4H1Tower_e_HEC1);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_HEC2", &jet_AntiKt4H1Tower_e_HEC2, &b_jet_AntiKt4H1Tower_e_HEC2);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_HEC3", &jet_AntiKt4H1Tower_e_HEC3, &b_jet_AntiKt4H1Tower_e_HEC3);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_TileBar0", &jet_AntiKt4H1Tower_e_TileBar0, &b_jet_AntiKt4H1Tower_e_TileBar0);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_TileBar1", &jet_AntiKt4H1Tower_e_TileBar1, &b_jet_AntiKt4H1Tower_e_TileBar1);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_TileBar2", &jet_AntiKt4H1Tower_e_TileBar2, &b_jet_AntiKt4H1Tower_e_TileBar2);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_TileGap1", &jet_AntiKt4H1Tower_e_TileGap1, &b_jet_AntiKt4H1Tower_e_TileGap1);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_TileGap2", &jet_AntiKt4H1Tower_e_TileGap2, &b_jet_AntiKt4H1Tower_e_TileGap2);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_TileGap3", &jet_AntiKt4H1Tower_e_TileGap3, &b_jet_AntiKt4H1Tower_e_TileGap3);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_TileExt0", &jet_AntiKt4H1Tower_e_TileExt0, &b_jet_AntiKt4H1Tower_e_TileExt0);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_TileExt1", &jet_AntiKt4H1Tower_e_TileExt1, &b_jet_AntiKt4H1Tower_e_TileExt1);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_TileExt2", &jet_AntiKt4H1Tower_e_TileExt2, &b_jet_AntiKt4H1Tower_e_TileExt2);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_FCAL0", &jet_AntiKt4H1Tower_e_FCAL0, &b_jet_AntiKt4H1Tower_e_FCAL0);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_FCAL1", &jet_AntiKt4H1Tower_e_FCAL1, &b_jet_AntiKt4H1Tower_e_FCAL1);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_e_FCAL2", &jet_AntiKt4H1Tower_e_FCAL2, &b_jet_AntiKt4H1Tower_e_FCAL2);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_Nconst", &jet_AntiKt4H1Tower_Nconst, &b_jet_AntiKt4H1Tower_Nconst);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_ptconst_emscale", &jet_AntiKt4H1Tower_ptconst_emscale, &b_jet_AntiKt4H1Tower_ptconst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_econst_emscale", &jet_AntiKt4H1Tower_econst_emscale, &b_jet_AntiKt4H1Tower_econst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_etaconst_emscale", &jet_AntiKt4H1Tower_etaconst_emscale, &b_jet_AntiKt4H1Tower_etaconst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_phiconst_emscale", &jet_AntiKt4H1Tower_phiconst_emscale, &b_jet_AntiKt4H1Tower_phiconst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_weightconst_emscale", &jet_AntiKt4H1Tower_weightconst_emscale, &b_jet_AntiKt4H1Tower_weightconst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_constscale_E", &jet_AntiKt4H1Tower_constscale_E, &b_jet_AntiKt4H1Tower_constscale_E);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_constscale_pt", &jet_AntiKt4H1Tower_constscale_pt, &b_jet_AntiKt4H1Tower_constscale_pt);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_constscale_m", &jet_AntiKt4H1Tower_constscale_m, &b_jet_AntiKt4H1Tower_constscale_m);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_constscale_eta", &jet_AntiKt4H1Tower_constscale_eta, &b_jet_AntiKt4H1Tower_constscale_eta);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_constscale_phi", &jet_AntiKt4H1Tower_constscale_phi, &b_jet_AntiKt4H1Tower_constscale_phi);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_ip2d_pu", &jet_AntiKt4H1Tower_flavor_component_ip2d_pu, &b_jet_AntiKt4H1Tower_flavor_component_ip2d_pu);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_ip2d_pb", &jet_AntiKt4H1Tower_flavor_component_ip2d_pb, &b_jet_AntiKt4H1Tower_flavor_component_ip2d_pb);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_ip2d_ntrk", &jet_AntiKt4H1Tower_flavor_component_ip2d_ntrk, &b_jet_AntiKt4H1Tower_flavor_component_ip2d_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_ip3d_pu", &jet_AntiKt4H1Tower_flavor_component_ip3d_pu, &b_jet_AntiKt4H1Tower_flavor_component_ip3d_pu);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_ip3d_pb", &jet_AntiKt4H1Tower_flavor_component_ip3d_pb, &b_jet_AntiKt4H1Tower_flavor_component_ip3d_pb);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_ip3d_ntrk", &jet_AntiKt4H1Tower_flavor_component_ip3d_ntrk, &b_jet_AntiKt4H1Tower_flavor_component_ip3d_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_sv1_pu", &jet_AntiKt4H1Tower_flavor_component_sv1_pu, &b_jet_AntiKt4H1Tower_flavor_component_sv1_pu);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_sv1_pb", &jet_AntiKt4H1Tower_flavor_component_sv1_pb, &b_jet_AntiKt4H1Tower_flavor_component_sv1_pb);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_sv2_pu", &jet_AntiKt4H1Tower_flavor_component_sv2_pu, &b_jet_AntiKt4H1Tower_flavor_component_sv2_pu);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_sv2_pb", &jet_AntiKt4H1Tower_flavor_component_sv2_pb, &b_jet_AntiKt4H1Tower_flavor_component_sv2_pb);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_svp_mass", &jet_AntiKt4H1Tower_flavor_component_svp_mass, &b_jet_AntiKt4H1Tower_flavor_component_svp_mass);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_svp_n2t", &jet_AntiKt4H1Tower_flavor_component_svp_n2t, &b_jet_AntiKt4H1Tower_flavor_component_svp_n2t);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_svp_svok", &jet_AntiKt4H1Tower_flavor_component_svp_svok, &b_jet_AntiKt4H1Tower_flavor_component_svp_svok);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_svp_ntrk", &jet_AntiKt4H1Tower_flavor_component_svp_ntrk, &b_jet_AntiKt4H1Tower_flavor_component_svp_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_svp_ntrkv", &jet_AntiKt4H1Tower_flavor_component_svp_ntrkv, &b_jet_AntiKt4H1Tower_flavor_component_svp_ntrkv);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_svp_ntrkj", &jet_AntiKt4H1Tower_flavor_component_svp_ntrkj, &b_jet_AntiKt4H1Tower_flavor_component_svp_ntrkj);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_svp_efrc", &jet_AntiKt4H1Tower_flavor_component_svp_efrc, &b_jet_AntiKt4H1Tower_flavor_component_svp_efrc);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_sv0p_mass", &jet_AntiKt4H1Tower_flavor_component_sv0p_mass, &b_jet_AntiKt4H1Tower_flavor_component_sv0p_mass);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_sv0p_n2t", &jet_AntiKt4H1Tower_flavor_component_sv0p_n2t, &b_jet_AntiKt4H1Tower_flavor_component_sv0p_n2t);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_sv0p_svok", &jet_AntiKt4H1Tower_flavor_component_sv0p_svok, &b_jet_AntiKt4H1Tower_flavor_component_sv0p_svok);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_sv0p_ntrk", &jet_AntiKt4H1Tower_flavor_component_sv0p_ntrk, &b_jet_AntiKt4H1Tower_flavor_component_sv0p_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_sv0p_ntrkv", &jet_AntiKt4H1Tower_flavor_component_sv0p_ntrkv, &b_jet_AntiKt4H1Tower_flavor_component_sv0p_ntrkv);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_sv0p_ntrkj", &jet_AntiKt4H1Tower_flavor_component_sv0p_ntrkj, &b_jet_AntiKt4H1Tower_flavor_component_sv0p_ntrkj);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_sv0p_efrc", &jet_AntiKt4H1Tower_flavor_component_sv0p_efrc, &b_jet_AntiKt4H1Tower_flavor_component_sv0p_efrc);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_jfit_pu", &jet_AntiKt4H1Tower_flavor_component_jfit_pu, &b_jet_AntiKt4H1Tower_flavor_component_jfit_pu);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_jfit_pb", &jet_AntiKt4H1Tower_flavor_component_jfit_pb, &b_jet_AntiKt4H1Tower_flavor_component_jfit_pb);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_jfit_nvtxnt", &jet_AntiKt4H1Tower_flavor_component_jfit_nvtxnt, &b_jet_AntiKt4H1Tower_flavor_component_jfit_nvtxnt);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_jfit_nvtx1t", &jet_AntiKt4H1Tower_flavor_component_jfit_nvtx1t, &b_jet_AntiKt4H1Tower_flavor_component_jfit_nvtx1t);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_jfit_ntrk", &jet_AntiKt4H1Tower_flavor_component_jfit_ntrk, &b_jet_AntiKt4H1Tower_flavor_component_jfit_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_jfit_efrc", &jet_AntiKt4H1Tower_flavor_component_jfit_efrc, &b_jet_AntiKt4H1Tower_flavor_component_jfit_efrc);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_jfit_mass", &jet_AntiKt4H1Tower_flavor_component_jfit_mass, &b_jet_AntiKt4H1Tower_flavor_component_jfit_mass);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_component_jfit_sig3d", &jet_AntiKt4H1Tower_flavor_component_jfit_sig3d, &b_jet_AntiKt4H1Tower_flavor_component_jfit_sig3d);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight", &jet_AntiKt4H1Tower_flavor_weight, &b_jet_AntiKt4H1Tower_flavor_weight);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_TrackCounting2D", &jet_AntiKt4H1Tower_flavor_weight_TrackCounting2D, &b_jet_AntiKt4H1Tower_flavor_weight_TrackCounting2D);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_JetProb", &jet_AntiKt4H1Tower_flavor_weight_JetProb, &b_jet_AntiKt4H1Tower_flavor_weight_JetProb);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_IP1D", &jet_AntiKt4H1Tower_flavor_weight_IP1D, &b_jet_AntiKt4H1Tower_flavor_weight_IP1D);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_IP2D", &jet_AntiKt4H1Tower_flavor_weight_IP2D, &b_jet_AntiKt4H1Tower_flavor_weight_IP2D);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_IP3D", &jet_AntiKt4H1Tower_flavor_weight_IP3D, &b_jet_AntiKt4H1Tower_flavor_weight_IP3D);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_SV0", &jet_AntiKt4H1Tower_flavor_weight_SV0, &b_jet_AntiKt4H1Tower_flavor_weight_SV0);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_SV1", &jet_AntiKt4H1Tower_flavor_weight_SV1, &b_jet_AntiKt4H1Tower_flavor_weight_SV1);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_SV2", &jet_AntiKt4H1Tower_flavor_weight_SV2, &b_jet_AntiKt4H1Tower_flavor_weight_SV2);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_JetFitterTag", &jet_AntiKt4H1Tower_flavor_weight_JetFitterTag, &b_jet_AntiKt4H1Tower_flavor_weight_JetFitterTag);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_JetFitterCOMB", &jet_AntiKt4H1Tower_flavor_weight_JetFitterCOMB, &b_jet_AntiKt4H1Tower_flavor_weight_JetFitterCOMB);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_JetFitterTagNN", &jet_AntiKt4H1Tower_flavor_weight_JetFitterTagNN, &b_jet_AntiKt4H1Tower_flavor_weight_JetFitterTagNN);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_JetFitterCOMBNN", &jet_AntiKt4H1Tower_flavor_weight_JetFitterCOMBNN, &b_jet_AntiKt4H1Tower_flavor_weight_JetFitterCOMBNN);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_SoftMuonTag", &jet_AntiKt4H1Tower_flavor_weight_SoftMuonTag, &b_jet_AntiKt4H1Tower_flavor_weight_SoftMuonTag);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_flavor_weight_SoftElectronTag", &jet_AntiKt4H1Tower_flavor_weight_SoftElectronTag, &b_jet_AntiKt4H1Tower_flavor_weight_SoftElectronTag);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_el_dr", &jet_AntiKt4H1Tower_el_dr, &b_jet_AntiKt4H1Tower_el_dr);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_el_matched", &jet_AntiKt4H1Tower_el_matched, &b_jet_AntiKt4H1Tower_el_matched);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_mu_dr", &jet_AntiKt4H1Tower_mu_dr, &b_jet_AntiKt4H1Tower_mu_dr);
   fChain->SetBranchAddress("jet_AntiKt4H1Tower_mu_matched", &jet_AntiKt4H1Tower_mu_matched, &b_jet_AntiKt4H1Tower_mu_matched);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_n", &jet_AntiKt4H1Topo_n, &b_jet_AntiKt4H1Topo_n);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_E", &jet_AntiKt4H1Topo_E, &b_jet_AntiKt4H1Topo_E);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_pt", &jet_AntiKt4H1Topo_pt, &b_jet_AntiKt4H1Topo_pt);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_m", &jet_AntiKt4H1Topo_m, &b_jet_AntiKt4H1Topo_m);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_eta", &jet_AntiKt4H1Topo_eta, &b_jet_AntiKt4H1Topo_eta);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_phi", &jet_AntiKt4H1Topo_phi, &b_jet_AntiKt4H1Topo_phi);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_EtaPhys", &jet_AntiKt4H1Topo_EtaPhys, &b_jet_AntiKt4H1Topo_EtaPhys);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_PhiPhys", &jet_AntiKt4H1Topo_PhiPhys, &b_jet_AntiKt4H1Topo_PhiPhys);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_MPhys", &jet_AntiKt4H1Topo_MPhys, &b_jet_AntiKt4H1Topo_MPhys);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_WIDTH", &jet_AntiKt4H1Topo_WIDTH, &b_jet_AntiKt4H1Topo_WIDTH);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_n90", &jet_AntiKt4H1Topo_n90, &b_jet_AntiKt4H1Topo_n90);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_Timing", &jet_AntiKt4H1Topo_Timing, &b_jet_AntiKt4H1Topo_Timing);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_LArQuality", &jet_AntiKt4H1Topo_LArQuality, &b_jet_AntiKt4H1Topo_LArQuality);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_nTrk", &jet_AntiKt4H1Topo_nTrk, &b_jet_AntiKt4H1Topo_nTrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_sumPtTrk", &jet_AntiKt4H1Topo_sumPtTrk, &b_jet_AntiKt4H1Topo_sumPtTrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_OriginIndex", &jet_AntiKt4H1Topo_OriginIndex, &b_jet_AntiKt4H1Topo_OriginIndex);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_HECQuality", &jet_AntiKt4H1Topo_HECQuality, &b_jet_AntiKt4H1Topo_HECQuality);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_NegativeE", &jet_AntiKt4H1Topo_NegativeE, &b_jet_AntiKt4H1Topo_NegativeE);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_BCH_CORR_CELL", &jet_AntiKt4H1Topo_BCH_CORR_CELL, &b_jet_AntiKt4H1Topo_BCH_CORR_CELL);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_BCH_CORR_DOTX", &jet_AntiKt4H1Topo_BCH_CORR_DOTX, &b_jet_AntiKt4H1Topo_BCH_CORR_DOTX);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_BCH_CORR_JET", &jet_AntiKt4H1Topo_BCH_CORR_JET, &b_jet_AntiKt4H1Topo_BCH_CORR_JET);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_BCH_CORR_JET_FORCELL", &jet_AntiKt4H1Topo_BCH_CORR_JET_FORCELL, &b_jet_AntiKt4H1Topo_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_ENG_BAD_CELLS", &jet_AntiKt4H1Topo_ENG_BAD_CELLS, &b_jet_AntiKt4H1Topo_ENG_BAD_CELLS);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_N_BAD_CELLS", &jet_AntiKt4H1Topo_N_BAD_CELLS, &b_jet_AntiKt4H1Topo_N_BAD_CELLS);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_N_BAD_CELLS_CORR", &jet_AntiKt4H1Topo_N_BAD_CELLS_CORR, &b_jet_AntiKt4H1Topo_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_BAD_CELLS_CORR_E", &jet_AntiKt4H1Topo_BAD_CELLS_CORR_E, &b_jet_AntiKt4H1Topo_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_SamplingMax", &jet_AntiKt4H1Topo_SamplingMax, &b_jet_AntiKt4H1Topo_SamplingMax);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_fracSamplingMax", &jet_AntiKt4H1Topo_fracSamplingMax, &b_jet_AntiKt4H1Topo_fracSamplingMax);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_hecf", &jet_AntiKt4H1Topo_hecf, &b_jet_AntiKt4H1Topo_hecf);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_tgap3f", &jet_AntiKt4H1Topo_tgap3f, &b_jet_AntiKt4H1Topo_tgap3f);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_isGood", &jet_AntiKt4H1Topo_isGood, &b_jet_AntiKt4H1Topo_isGood);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_emfrac", &jet_AntiKt4H1Topo_emfrac, &b_jet_AntiKt4H1Topo_emfrac);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_GCWJES", &jet_AntiKt4H1Topo_GCWJES, &b_jet_AntiKt4H1Topo_GCWJES);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_EMJES", &jet_AntiKt4H1Topo_EMJES, &b_jet_AntiKt4H1Topo_EMJES);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_CB", &jet_AntiKt4H1Topo_CB, &b_jet_AntiKt4H1Topo_CB);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_emscale_E", &jet_AntiKt4H1Topo_emscale_E, &b_jet_AntiKt4H1Topo_emscale_E);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_emscale_pt", &jet_AntiKt4H1Topo_emscale_pt, &b_jet_AntiKt4H1Topo_emscale_pt);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_emscale_m", &jet_AntiKt4H1Topo_emscale_m, &b_jet_AntiKt4H1Topo_emscale_m);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_emscale_eta", &jet_AntiKt4H1Topo_emscale_eta, &b_jet_AntiKt4H1Topo_emscale_eta);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_emscale_phi", &jet_AntiKt4H1Topo_emscale_phi, &b_jet_AntiKt4H1Topo_emscale_phi);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_jvtxf", &jet_AntiKt4H1Topo_jvtxf, &b_jet_AntiKt4H1Topo_jvtxf);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_jvtx_x", &jet_AntiKt4H1Topo_jvtx_x, &b_jet_AntiKt4H1Topo_jvtx_x);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_jvtx_y", &jet_AntiKt4H1Topo_jvtx_y, &b_jet_AntiKt4H1Topo_jvtx_y);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_jvtx_z", &jet_AntiKt4H1Topo_jvtx_z, &b_jet_AntiKt4H1Topo_jvtx_z);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_PreSamplerB", &jet_AntiKt4H1Topo_e_PreSamplerB, &b_jet_AntiKt4H1Topo_e_PreSamplerB);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_EMB1", &jet_AntiKt4H1Topo_e_EMB1, &b_jet_AntiKt4H1Topo_e_EMB1);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_EMB2", &jet_AntiKt4H1Topo_e_EMB2, &b_jet_AntiKt4H1Topo_e_EMB2);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_EMB3", &jet_AntiKt4H1Topo_e_EMB3, &b_jet_AntiKt4H1Topo_e_EMB3);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_PreSamplerE", &jet_AntiKt4H1Topo_e_PreSamplerE, &b_jet_AntiKt4H1Topo_e_PreSamplerE);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_EME1", &jet_AntiKt4H1Topo_e_EME1, &b_jet_AntiKt4H1Topo_e_EME1);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_EME2", &jet_AntiKt4H1Topo_e_EME2, &b_jet_AntiKt4H1Topo_e_EME2);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_EME3", &jet_AntiKt4H1Topo_e_EME3, &b_jet_AntiKt4H1Topo_e_EME3);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_HEC0", &jet_AntiKt4H1Topo_e_HEC0, &b_jet_AntiKt4H1Topo_e_HEC0);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_HEC1", &jet_AntiKt4H1Topo_e_HEC1, &b_jet_AntiKt4H1Topo_e_HEC1);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_HEC2", &jet_AntiKt4H1Topo_e_HEC2, &b_jet_AntiKt4H1Topo_e_HEC2);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_HEC3", &jet_AntiKt4H1Topo_e_HEC3, &b_jet_AntiKt4H1Topo_e_HEC3);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_TileBar0", &jet_AntiKt4H1Topo_e_TileBar0, &b_jet_AntiKt4H1Topo_e_TileBar0);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_TileBar1", &jet_AntiKt4H1Topo_e_TileBar1, &b_jet_AntiKt4H1Topo_e_TileBar1);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_TileBar2", &jet_AntiKt4H1Topo_e_TileBar2, &b_jet_AntiKt4H1Topo_e_TileBar2);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_TileGap1", &jet_AntiKt4H1Topo_e_TileGap1, &b_jet_AntiKt4H1Topo_e_TileGap1);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_TileGap2", &jet_AntiKt4H1Topo_e_TileGap2, &b_jet_AntiKt4H1Topo_e_TileGap2);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_TileGap3", &jet_AntiKt4H1Topo_e_TileGap3, &b_jet_AntiKt4H1Topo_e_TileGap3);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_TileExt0", &jet_AntiKt4H1Topo_e_TileExt0, &b_jet_AntiKt4H1Topo_e_TileExt0);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_TileExt1", &jet_AntiKt4H1Topo_e_TileExt1, &b_jet_AntiKt4H1Topo_e_TileExt1);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_TileExt2", &jet_AntiKt4H1Topo_e_TileExt2, &b_jet_AntiKt4H1Topo_e_TileExt2);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_FCAL0", &jet_AntiKt4H1Topo_e_FCAL0, &b_jet_AntiKt4H1Topo_e_FCAL0);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_FCAL1", &jet_AntiKt4H1Topo_e_FCAL1, &b_jet_AntiKt4H1Topo_e_FCAL1);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_e_FCAL2", &jet_AntiKt4H1Topo_e_FCAL2, &b_jet_AntiKt4H1Topo_e_FCAL2);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_Nconst", &jet_AntiKt4H1Topo_Nconst, &b_jet_AntiKt4H1Topo_Nconst);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_ptconst_emscale", &jet_AntiKt4H1Topo_ptconst_emscale, &b_jet_AntiKt4H1Topo_ptconst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_econst_emscale", &jet_AntiKt4H1Topo_econst_emscale, &b_jet_AntiKt4H1Topo_econst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_etaconst_emscale", &jet_AntiKt4H1Topo_etaconst_emscale, &b_jet_AntiKt4H1Topo_etaconst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_phiconst_emscale", &jet_AntiKt4H1Topo_phiconst_emscale, &b_jet_AntiKt4H1Topo_phiconst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_weightconst_emscale", &jet_AntiKt4H1Topo_weightconst_emscale, &b_jet_AntiKt4H1Topo_weightconst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_constscale_E", &jet_AntiKt4H1Topo_constscale_E, &b_jet_AntiKt4H1Topo_constscale_E);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_constscale_pt", &jet_AntiKt4H1Topo_constscale_pt, &b_jet_AntiKt4H1Topo_constscale_pt);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_constscale_m", &jet_AntiKt4H1Topo_constscale_m, &b_jet_AntiKt4H1Topo_constscale_m);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_constscale_eta", &jet_AntiKt4H1Topo_constscale_eta, &b_jet_AntiKt4H1Topo_constscale_eta);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_constscale_phi", &jet_AntiKt4H1Topo_constscale_phi, &b_jet_AntiKt4H1Topo_constscale_phi);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_ip2d_pu", &jet_AntiKt4H1Topo_flavor_component_ip2d_pu, &b_jet_AntiKt4H1Topo_flavor_component_ip2d_pu);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_ip2d_pb", &jet_AntiKt4H1Topo_flavor_component_ip2d_pb, &b_jet_AntiKt4H1Topo_flavor_component_ip2d_pb);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_ip2d_ntrk", &jet_AntiKt4H1Topo_flavor_component_ip2d_ntrk, &b_jet_AntiKt4H1Topo_flavor_component_ip2d_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_ip3d_pu", &jet_AntiKt4H1Topo_flavor_component_ip3d_pu, &b_jet_AntiKt4H1Topo_flavor_component_ip3d_pu);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_ip3d_pb", &jet_AntiKt4H1Topo_flavor_component_ip3d_pb, &b_jet_AntiKt4H1Topo_flavor_component_ip3d_pb);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_ip3d_ntrk", &jet_AntiKt4H1Topo_flavor_component_ip3d_ntrk, &b_jet_AntiKt4H1Topo_flavor_component_ip3d_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_sv1_pu", &jet_AntiKt4H1Topo_flavor_component_sv1_pu, &b_jet_AntiKt4H1Topo_flavor_component_sv1_pu);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_sv1_pb", &jet_AntiKt4H1Topo_flavor_component_sv1_pb, &b_jet_AntiKt4H1Topo_flavor_component_sv1_pb);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_sv2_pu", &jet_AntiKt4H1Topo_flavor_component_sv2_pu, &b_jet_AntiKt4H1Topo_flavor_component_sv2_pu);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_sv2_pb", &jet_AntiKt4H1Topo_flavor_component_sv2_pb, &b_jet_AntiKt4H1Topo_flavor_component_sv2_pb);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_svp_mass", &jet_AntiKt4H1Topo_flavor_component_svp_mass, &b_jet_AntiKt4H1Topo_flavor_component_svp_mass);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_svp_n2t", &jet_AntiKt4H1Topo_flavor_component_svp_n2t, &b_jet_AntiKt4H1Topo_flavor_component_svp_n2t);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_svp_svok", &jet_AntiKt4H1Topo_flavor_component_svp_svok, &b_jet_AntiKt4H1Topo_flavor_component_svp_svok);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_svp_ntrk", &jet_AntiKt4H1Topo_flavor_component_svp_ntrk, &b_jet_AntiKt4H1Topo_flavor_component_svp_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_svp_ntrkv", &jet_AntiKt4H1Topo_flavor_component_svp_ntrkv, &b_jet_AntiKt4H1Topo_flavor_component_svp_ntrkv);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_svp_ntrkj", &jet_AntiKt4H1Topo_flavor_component_svp_ntrkj, &b_jet_AntiKt4H1Topo_flavor_component_svp_ntrkj);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_svp_efrc", &jet_AntiKt4H1Topo_flavor_component_svp_efrc, &b_jet_AntiKt4H1Topo_flavor_component_svp_efrc);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_sv0p_mass", &jet_AntiKt4H1Topo_flavor_component_sv0p_mass, &b_jet_AntiKt4H1Topo_flavor_component_sv0p_mass);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_sv0p_n2t", &jet_AntiKt4H1Topo_flavor_component_sv0p_n2t, &b_jet_AntiKt4H1Topo_flavor_component_sv0p_n2t);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_sv0p_svok", &jet_AntiKt4H1Topo_flavor_component_sv0p_svok, &b_jet_AntiKt4H1Topo_flavor_component_sv0p_svok);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_sv0p_ntrk", &jet_AntiKt4H1Topo_flavor_component_sv0p_ntrk, &b_jet_AntiKt4H1Topo_flavor_component_sv0p_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_sv0p_ntrkv", &jet_AntiKt4H1Topo_flavor_component_sv0p_ntrkv, &b_jet_AntiKt4H1Topo_flavor_component_sv0p_ntrkv);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_sv0p_ntrkj", &jet_AntiKt4H1Topo_flavor_component_sv0p_ntrkj, &b_jet_AntiKt4H1Topo_flavor_component_sv0p_ntrkj);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_sv0p_efrc", &jet_AntiKt4H1Topo_flavor_component_sv0p_efrc, &b_jet_AntiKt4H1Topo_flavor_component_sv0p_efrc);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_jfit_pu", &jet_AntiKt4H1Topo_flavor_component_jfit_pu, &b_jet_AntiKt4H1Topo_flavor_component_jfit_pu);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_jfit_pb", &jet_AntiKt4H1Topo_flavor_component_jfit_pb, &b_jet_AntiKt4H1Topo_flavor_component_jfit_pb);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_jfit_nvtxnt", &jet_AntiKt4H1Topo_flavor_component_jfit_nvtxnt, &b_jet_AntiKt4H1Topo_flavor_component_jfit_nvtxnt);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_jfit_nvtx1t", &jet_AntiKt4H1Topo_flavor_component_jfit_nvtx1t, &b_jet_AntiKt4H1Topo_flavor_component_jfit_nvtx1t);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_jfit_ntrk", &jet_AntiKt4H1Topo_flavor_component_jfit_ntrk, &b_jet_AntiKt4H1Topo_flavor_component_jfit_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_jfit_efrc", &jet_AntiKt4H1Topo_flavor_component_jfit_efrc, &b_jet_AntiKt4H1Topo_flavor_component_jfit_efrc);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_jfit_mass", &jet_AntiKt4H1Topo_flavor_component_jfit_mass, &b_jet_AntiKt4H1Topo_flavor_component_jfit_mass);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_component_jfit_sig3d", &jet_AntiKt4H1Topo_flavor_component_jfit_sig3d, &b_jet_AntiKt4H1Topo_flavor_component_jfit_sig3d);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight", &jet_AntiKt4H1Topo_flavor_weight, &b_jet_AntiKt4H1Topo_flavor_weight);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_TrackCounting2D", &jet_AntiKt4H1Topo_flavor_weight_TrackCounting2D, &b_jet_AntiKt4H1Topo_flavor_weight_TrackCounting2D);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_JetProb", &jet_AntiKt4H1Topo_flavor_weight_JetProb, &b_jet_AntiKt4H1Topo_flavor_weight_JetProb);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_IP1D", &jet_AntiKt4H1Topo_flavor_weight_IP1D, &b_jet_AntiKt4H1Topo_flavor_weight_IP1D);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_IP2D", &jet_AntiKt4H1Topo_flavor_weight_IP2D, &b_jet_AntiKt4H1Topo_flavor_weight_IP2D);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_IP3D", &jet_AntiKt4H1Topo_flavor_weight_IP3D, &b_jet_AntiKt4H1Topo_flavor_weight_IP3D);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_SV0", &jet_AntiKt4H1Topo_flavor_weight_SV0, &b_jet_AntiKt4H1Topo_flavor_weight_SV0);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_SV1", &jet_AntiKt4H1Topo_flavor_weight_SV1, &b_jet_AntiKt4H1Topo_flavor_weight_SV1);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_SV2", &jet_AntiKt4H1Topo_flavor_weight_SV2, &b_jet_AntiKt4H1Topo_flavor_weight_SV2);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_JetFitterTag", &jet_AntiKt4H1Topo_flavor_weight_JetFitterTag, &b_jet_AntiKt4H1Topo_flavor_weight_JetFitterTag);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_JetFitterCOMB", &jet_AntiKt4H1Topo_flavor_weight_JetFitterCOMB, &b_jet_AntiKt4H1Topo_flavor_weight_JetFitterCOMB);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_JetFitterTagNN", &jet_AntiKt4H1Topo_flavor_weight_JetFitterTagNN, &b_jet_AntiKt4H1Topo_flavor_weight_JetFitterTagNN);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_JetFitterCOMBNN", &jet_AntiKt4H1Topo_flavor_weight_JetFitterCOMBNN, &b_jet_AntiKt4H1Topo_flavor_weight_JetFitterCOMBNN);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_SoftMuonTag", &jet_AntiKt4H1Topo_flavor_weight_SoftMuonTag, &b_jet_AntiKt4H1Topo_flavor_weight_SoftMuonTag);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_flavor_weight_SoftElectronTag", &jet_AntiKt4H1Topo_flavor_weight_SoftElectronTag, &b_jet_AntiKt4H1Topo_flavor_weight_SoftElectronTag);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_el_dr", &jet_AntiKt4H1Topo_el_dr, &b_jet_AntiKt4H1Topo_el_dr);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_el_matched", &jet_AntiKt4H1Topo_el_matched, &b_jet_AntiKt4H1Topo_el_matched);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_mu_dr", &jet_AntiKt4H1Topo_mu_dr, &b_jet_AntiKt4H1Topo_mu_dr);
   fChain->SetBranchAddress("jet_AntiKt4H1Topo_mu_matched", &jet_AntiKt4H1Topo_mu_matched, &b_jet_AntiKt4H1Topo_mu_matched);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_n", &jet_AntiKt4TopoEMJES_n, &b_jet_AntiKt4TopoEMJES_n);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_E", &jet_AntiKt4TopoEMJES_E, &b_jet_AntiKt4TopoEMJES_E);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_pt", &jet_AntiKt4TopoEMJES_pt, &b_jet_AntiKt4TopoEMJES_pt);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_m", &jet_AntiKt4TopoEMJES_m, &b_jet_AntiKt4TopoEMJES_m);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_eta", &jet_AntiKt4TopoEMJES_eta, &b_jet_AntiKt4TopoEMJES_eta);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_phi", &jet_AntiKt4TopoEMJES_phi, &b_jet_AntiKt4TopoEMJES_phi);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_EtaPhys", &jet_AntiKt4TopoEMJES_EtaPhys, &b_jet_AntiKt4TopoEMJES_EtaPhys);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_PhiPhys", &jet_AntiKt4TopoEMJES_PhiPhys, &b_jet_AntiKt4TopoEMJES_PhiPhys);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_MPhys", &jet_AntiKt4TopoEMJES_MPhys, &b_jet_AntiKt4TopoEMJES_MPhys);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_WIDTH", &jet_AntiKt4TopoEMJES_WIDTH, &b_jet_AntiKt4TopoEMJES_WIDTH);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_n90", &jet_AntiKt4TopoEMJES_n90, &b_jet_AntiKt4TopoEMJES_n90);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_Timing", &jet_AntiKt4TopoEMJES_Timing, &b_jet_AntiKt4TopoEMJES_Timing);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_LArQuality", &jet_AntiKt4TopoEMJES_LArQuality, &b_jet_AntiKt4TopoEMJES_LArQuality);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_nTrk", &jet_AntiKt4TopoEMJES_nTrk, &b_jet_AntiKt4TopoEMJES_nTrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_sumPtTrk", &jet_AntiKt4TopoEMJES_sumPtTrk, &b_jet_AntiKt4TopoEMJES_sumPtTrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_OriginIndex", &jet_AntiKt4TopoEMJES_OriginIndex, &b_jet_AntiKt4TopoEMJES_OriginIndex);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_HECQuality", &jet_AntiKt4TopoEMJES_HECQuality, &b_jet_AntiKt4TopoEMJES_HECQuality);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_NegativeE", &jet_AntiKt4TopoEMJES_NegativeE, &b_jet_AntiKt4TopoEMJES_NegativeE);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_BCH_CORR_CELL", &jet_AntiKt4TopoEMJES_BCH_CORR_CELL, &b_jet_AntiKt4TopoEMJES_BCH_CORR_CELL);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_BCH_CORR_DOTX", &jet_AntiKt4TopoEMJES_BCH_CORR_DOTX, &b_jet_AntiKt4TopoEMJES_BCH_CORR_DOTX);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_BCH_CORR_JET", &jet_AntiKt4TopoEMJES_BCH_CORR_JET, &b_jet_AntiKt4TopoEMJES_BCH_CORR_JET);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_BCH_CORR_JET_FORCELL", &jet_AntiKt4TopoEMJES_BCH_CORR_JET_FORCELL, &b_jet_AntiKt4TopoEMJES_BCH_CORR_JET_FORCELL);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_ENG_BAD_CELLS", &jet_AntiKt4TopoEMJES_ENG_BAD_CELLS, &b_jet_AntiKt4TopoEMJES_ENG_BAD_CELLS);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_N_BAD_CELLS", &jet_AntiKt4TopoEMJES_N_BAD_CELLS, &b_jet_AntiKt4TopoEMJES_N_BAD_CELLS);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_N_BAD_CELLS_CORR", &jet_AntiKt4TopoEMJES_N_BAD_CELLS_CORR, &b_jet_AntiKt4TopoEMJES_N_BAD_CELLS_CORR);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_BAD_CELLS_CORR_E", &jet_AntiKt4TopoEMJES_BAD_CELLS_CORR_E, &b_jet_AntiKt4TopoEMJES_BAD_CELLS_CORR_E);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_SamplingMax", &jet_AntiKt4TopoEMJES_SamplingMax, &b_jet_AntiKt4TopoEMJES_SamplingMax);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_fracSamplingMax", &jet_AntiKt4TopoEMJES_fracSamplingMax, &b_jet_AntiKt4TopoEMJES_fracSamplingMax);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_hecf", &jet_AntiKt4TopoEMJES_hecf, &b_jet_AntiKt4TopoEMJES_hecf);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_tgap3f", &jet_AntiKt4TopoEMJES_tgap3f, &b_jet_AntiKt4TopoEMJES_tgap3f);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_isGood", &jet_AntiKt4TopoEMJES_isGood, &b_jet_AntiKt4TopoEMJES_isGood);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_emfrac", &jet_AntiKt4TopoEMJES_emfrac, &b_jet_AntiKt4TopoEMJES_emfrac);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_GCWJES", &jet_AntiKt4TopoEMJES_GCWJES, &b_jet_AntiKt4TopoEMJES_GCWJES);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_EMJES", &jet_AntiKt4TopoEMJES_EMJES, &b_jet_AntiKt4TopoEMJES_EMJES);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_CB", &jet_AntiKt4TopoEMJES_CB, &b_jet_AntiKt4TopoEMJES_CB);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_emscale_E", &jet_AntiKt4TopoEMJES_emscale_E, &b_jet_AntiKt4TopoEMJES_emscale_E);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_emscale_pt", &jet_AntiKt4TopoEMJES_emscale_pt, &b_jet_AntiKt4TopoEMJES_emscale_pt);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_emscale_m", &jet_AntiKt4TopoEMJES_emscale_m, &b_jet_AntiKt4TopoEMJES_emscale_m);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_emscale_eta", &jet_AntiKt4TopoEMJES_emscale_eta, &b_jet_AntiKt4TopoEMJES_emscale_eta);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_emscale_phi", &jet_AntiKt4TopoEMJES_emscale_phi, &b_jet_AntiKt4TopoEMJES_emscale_phi);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_jvtxf", &jet_AntiKt4TopoEMJES_jvtxf, &b_jet_AntiKt4TopoEMJES_jvtxf);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_jvtx_x", &jet_AntiKt4TopoEMJES_jvtx_x, &b_jet_AntiKt4TopoEMJES_jvtx_x);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_jvtx_y", &jet_AntiKt4TopoEMJES_jvtx_y, &b_jet_AntiKt4TopoEMJES_jvtx_y);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_jvtx_z", &jet_AntiKt4TopoEMJES_jvtx_z, &b_jet_AntiKt4TopoEMJES_jvtx_z);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_PreSamplerB", &jet_AntiKt4TopoEMJES_e_PreSamplerB, &b_jet_AntiKt4TopoEMJES_e_PreSamplerB);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_EMB1", &jet_AntiKt4TopoEMJES_e_EMB1, &b_jet_AntiKt4TopoEMJES_e_EMB1);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_EMB2", &jet_AntiKt4TopoEMJES_e_EMB2, &b_jet_AntiKt4TopoEMJES_e_EMB2);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_EMB3", &jet_AntiKt4TopoEMJES_e_EMB3, &b_jet_AntiKt4TopoEMJES_e_EMB3);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_PreSamplerE", &jet_AntiKt4TopoEMJES_e_PreSamplerE, &b_jet_AntiKt4TopoEMJES_e_PreSamplerE);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_EME1", &jet_AntiKt4TopoEMJES_e_EME1, &b_jet_AntiKt4TopoEMJES_e_EME1);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_EME2", &jet_AntiKt4TopoEMJES_e_EME2, &b_jet_AntiKt4TopoEMJES_e_EME2);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_EME3", &jet_AntiKt4TopoEMJES_e_EME3, &b_jet_AntiKt4TopoEMJES_e_EME3);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_HEC0", &jet_AntiKt4TopoEMJES_e_HEC0, &b_jet_AntiKt4TopoEMJES_e_HEC0);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_HEC1", &jet_AntiKt4TopoEMJES_e_HEC1, &b_jet_AntiKt4TopoEMJES_e_HEC1);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_HEC2", &jet_AntiKt4TopoEMJES_e_HEC2, &b_jet_AntiKt4TopoEMJES_e_HEC2);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_HEC3", &jet_AntiKt4TopoEMJES_e_HEC3, &b_jet_AntiKt4TopoEMJES_e_HEC3);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_TileBar0", &jet_AntiKt4TopoEMJES_e_TileBar0, &b_jet_AntiKt4TopoEMJES_e_TileBar0);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_TileBar1", &jet_AntiKt4TopoEMJES_e_TileBar1, &b_jet_AntiKt4TopoEMJES_e_TileBar1);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_TileBar2", &jet_AntiKt4TopoEMJES_e_TileBar2, &b_jet_AntiKt4TopoEMJES_e_TileBar2);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_TileGap1", &jet_AntiKt4TopoEMJES_e_TileGap1, &b_jet_AntiKt4TopoEMJES_e_TileGap1);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_TileGap2", &jet_AntiKt4TopoEMJES_e_TileGap2, &b_jet_AntiKt4TopoEMJES_e_TileGap2);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_TileGap3", &jet_AntiKt4TopoEMJES_e_TileGap3, &b_jet_AntiKt4TopoEMJES_e_TileGap3);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_TileExt0", &jet_AntiKt4TopoEMJES_e_TileExt0, &b_jet_AntiKt4TopoEMJES_e_TileExt0);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_TileExt1", &jet_AntiKt4TopoEMJES_e_TileExt1, &b_jet_AntiKt4TopoEMJES_e_TileExt1);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_TileExt2", &jet_AntiKt4TopoEMJES_e_TileExt2, &b_jet_AntiKt4TopoEMJES_e_TileExt2);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_FCAL0", &jet_AntiKt4TopoEMJES_e_FCAL0, &b_jet_AntiKt4TopoEMJES_e_FCAL0);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_FCAL1", &jet_AntiKt4TopoEMJES_e_FCAL1, &b_jet_AntiKt4TopoEMJES_e_FCAL1);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_e_FCAL2", &jet_AntiKt4TopoEMJES_e_FCAL2, &b_jet_AntiKt4TopoEMJES_e_FCAL2);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_Nconst", &jet_AntiKt4TopoEMJES_Nconst, &b_jet_AntiKt4TopoEMJES_Nconst);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_ptconst_emscale", &jet_AntiKt4TopoEMJES_ptconst_emscale, &b_jet_AntiKt4TopoEMJES_ptconst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_econst_emscale", &jet_AntiKt4TopoEMJES_econst_emscale, &b_jet_AntiKt4TopoEMJES_econst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_etaconst_emscale", &jet_AntiKt4TopoEMJES_etaconst_emscale, &b_jet_AntiKt4TopoEMJES_etaconst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_phiconst_emscale", &jet_AntiKt4TopoEMJES_phiconst_emscale, &b_jet_AntiKt4TopoEMJES_phiconst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_weightconst_emscale", &jet_AntiKt4TopoEMJES_weightconst_emscale, &b_jet_AntiKt4TopoEMJES_weightconst_emscale);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_constscale_E", &jet_AntiKt4TopoEMJES_constscale_E, &b_jet_AntiKt4TopoEMJES_constscale_E);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_constscale_pt", &jet_AntiKt4TopoEMJES_constscale_pt, &b_jet_AntiKt4TopoEMJES_constscale_pt);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_constscale_m", &jet_AntiKt4TopoEMJES_constscale_m, &b_jet_AntiKt4TopoEMJES_constscale_m);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_constscale_eta", &jet_AntiKt4TopoEMJES_constscale_eta, &b_jet_AntiKt4TopoEMJES_constscale_eta);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_constscale_phi", &jet_AntiKt4TopoEMJES_constscale_phi, &b_jet_AntiKt4TopoEMJES_constscale_phi);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_ip2d_pu", &jet_AntiKt4TopoEMJES_flavor_component_ip2d_pu, &b_jet_AntiKt4TopoEMJES_flavor_component_ip2d_pu);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_ip2d_pb", &jet_AntiKt4TopoEMJES_flavor_component_ip2d_pb, &b_jet_AntiKt4TopoEMJES_flavor_component_ip2d_pb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_ip2d_ntrk", &jet_AntiKt4TopoEMJES_flavor_component_ip2d_ntrk, &b_jet_AntiKt4TopoEMJES_flavor_component_ip2d_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_ip3d_pu", &jet_AntiKt4TopoEMJES_flavor_component_ip3d_pu, &b_jet_AntiKt4TopoEMJES_flavor_component_ip3d_pu);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_ip3d_pb", &jet_AntiKt4TopoEMJES_flavor_component_ip3d_pb, &b_jet_AntiKt4TopoEMJES_flavor_component_ip3d_pb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_ip3d_ntrk", &jet_AntiKt4TopoEMJES_flavor_component_ip3d_ntrk, &b_jet_AntiKt4TopoEMJES_flavor_component_ip3d_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_sv1_pu", &jet_AntiKt4TopoEMJES_flavor_component_sv1_pu, &b_jet_AntiKt4TopoEMJES_flavor_component_sv1_pu);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_sv1_pb", &jet_AntiKt4TopoEMJES_flavor_component_sv1_pb, &b_jet_AntiKt4TopoEMJES_flavor_component_sv1_pb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_sv2_pu", &jet_AntiKt4TopoEMJES_flavor_component_sv2_pu, &b_jet_AntiKt4TopoEMJES_flavor_component_sv2_pu);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_sv2_pb", &jet_AntiKt4TopoEMJES_flavor_component_sv2_pb, &b_jet_AntiKt4TopoEMJES_flavor_component_sv2_pb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_svp_mass", &jet_AntiKt4TopoEMJES_flavor_component_svp_mass, &b_jet_AntiKt4TopoEMJES_flavor_component_svp_mass);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_svp_n2t", &jet_AntiKt4TopoEMJES_flavor_component_svp_n2t, &b_jet_AntiKt4TopoEMJES_flavor_component_svp_n2t);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_svp_svok", &jet_AntiKt4TopoEMJES_flavor_component_svp_svok, &b_jet_AntiKt4TopoEMJES_flavor_component_svp_svok);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_svp_ntrk", &jet_AntiKt4TopoEMJES_flavor_component_svp_ntrk, &b_jet_AntiKt4TopoEMJES_flavor_component_svp_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_svp_ntrkv", &jet_AntiKt4TopoEMJES_flavor_component_svp_ntrkv, &b_jet_AntiKt4TopoEMJES_flavor_component_svp_ntrkv);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_svp_ntrkj", &jet_AntiKt4TopoEMJES_flavor_component_svp_ntrkj, &b_jet_AntiKt4TopoEMJES_flavor_component_svp_ntrkj);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_svp_efrc", &jet_AntiKt4TopoEMJES_flavor_component_svp_efrc, &b_jet_AntiKt4TopoEMJES_flavor_component_svp_efrc);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_sv0p_mass", &jet_AntiKt4TopoEMJES_flavor_component_sv0p_mass, &b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_mass);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_sv0p_n2t", &jet_AntiKt4TopoEMJES_flavor_component_sv0p_n2t, &b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_n2t);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_sv0p_svok", &jet_AntiKt4TopoEMJES_flavor_component_sv0p_svok, &b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_svok);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrk", &jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrk, &b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrkv", &jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrkv, &b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrkv);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrkj", &jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrkj, &b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_ntrkj);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_sv0p_efrc", &jet_AntiKt4TopoEMJES_flavor_component_sv0p_efrc, &b_jet_AntiKt4TopoEMJES_flavor_component_sv0p_efrc);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_jfit_pu", &jet_AntiKt4TopoEMJES_flavor_component_jfit_pu, &b_jet_AntiKt4TopoEMJES_flavor_component_jfit_pu);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_jfit_pb", &jet_AntiKt4TopoEMJES_flavor_component_jfit_pb, &b_jet_AntiKt4TopoEMJES_flavor_component_jfit_pb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_jfit_nvtxnt", &jet_AntiKt4TopoEMJES_flavor_component_jfit_nvtxnt, &b_jet_AntiKt4TopoEMJES_flavor_component_jfit_nvtxnt);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_jfit_nvtx1t", &jet_AntiKt4TopoEMJES_flavor_component_jfit_nvtx1t, &b_jet_AntiKt4TopoEMJES_flavor_component_jfit_nvtx1t);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_jfit_ntrk", &jet_AntiKt4TopoEMJES_flavor_component_jfit_ntrk, &b_jet_AntiKt4TopoEMJES_flavor_component_jfit_ntrk);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_jfit_efrc", &jet_AntiKt4TopoEMJES_flavor_component_jfit_efrc, &b_jet_AntiKt4TopoEMJES_flavor_component_jfit_efrc);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_jfit_mass", &jet_AntiKt4TopoEMJES_flavor_component_jfit_mass, &b_jet_AntiKt4TopoEMJES_flavor_component_jfit_mass);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_component_jfit_sig3d", &jet_AntiKt4TopoEMJES_flavor_component_jfit_sig3d, &b_jet_AntiKt4TopoEMJES_flavor_component_jfit_sig3d);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight", &jet_AntiKt4TopoEMJES_flavor_weight, &b_jet_AntiKt4TopoEMJES_flavor_weight);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_TrackCounting2D", &jet_AntiKt4TopoEMJES_flavor_weight_TrackCounting2D, &b_jet_AntiKt4TopoEMJES_flavor_weight_TrackCounting2D);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_JetProb", &jet_AntiKt4TopoEMJES_flavor_weight_JetProb, &b_jet_AntiKt4TopoEMJES_flavor_weight_JetProb);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_IP1D", &jet_AntiKt4TopoEMJES_flavor_weight_IP1D, &b_jet_AntiKt4TopoEMJES_flavor_weight_IP1D);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_IP2D", &jet_AntiKt4TopoEMJES_flavor_weight_IP2D, &b_jet_AntiKt4TopoEMJES_flavor_weight_IP2D);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_IP3D", &jet_AntiKt4TopoEMJES_flavor_weight_IP3D, &b_jet_AntiKt4TopoEMJES_flavor_weight_IP3D);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_SV0", &jet_AntiKt4TopoEMJES_flavor_weight_SV0, &b_jet_AntiKt4TopoEMJES_flavor_weight_SV0);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_SV1", &jet_AntiKt4TopoEMJES_flavor_weight_SV1, &b_jet_AntiKt4TopoEMJES_flavor_weight_SV1);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_SV2", &jet_AntiKt4TopoEMJES_flavor_weight_SV2, &b_jet_AntiKt4TopoEMJES_flavor_weight_SV2);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_JetFitterTag", &jet_AntiKt4TopoEMJES_flavor_weight_JetFitterTag, &b_jet_AntiKt4TopoEMJES_flavor_weight_JetFitterTag);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_JetFitterCOMB", &jet_AntiKt4TopoEMJES_flavor_weight_JetFitterCOMB, &b_jet_AntiKt4TopoEMJES_flavor_weight_JetFitterCOMB);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_JetFitterTagNN", &jet_AntiKt4TopoEMJES_flavor_weight_JetFitterTagNN, &b_jet_AntiKt4TopoEMJES_flavor_weight_JetFitterTagNN);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_JetFitterCOMBNN", &jet_AntiKt4TopoEMJES_flavor_weight_JetFitterCOMBNN, &b_jet_AntiKt4TopoEMJES_flavor_weight_JetFitterCOMBNN);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_SoftMuonTag", &jet_AntiKt4TopoEMJES_flavor_weight_SoftMuonTag, &b_jet_AntiKt4TopoEMJES_flavor_weight_SoftMuonTag);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_flavor_weight_SoftElectronTag", &jet_AntiKt4TopoEMJES_flavor_weight_SoftElectronTag, &b_jet_AntiKt4TopoEMJES_flavor_weight_SoftElectronTag);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_el_dr", &jet_AntiKt4TopoEMJES_el_dr, &b_jet_AntiKt4TopoEMJES_el_dr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_el_matched", &jet_AntiKt4TopoEMJES_el_matched, &b_jet_AntiKt4TopoEMJES_el_matched);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_mu_dr", &jet_AntiKt4TopoEMJES_mu_dr, &b_jet_AntiKt4TopoEMJES_mu_dr);
   fChain->SetBranchAddress("jet_AntiKt4TopoEMJES_mu_matched", &jet_AntiKt4TopoEMJES_mu_matched, &b_jet_AntiKt4TopoEMJES_mu_matched);
   fChain->SetBranchAddress("mbtime_timeDiff", &mbtime_timeDiff, &b_mbtime_timeDiff);
   fChain->SetBranchAddress("mbtime_timeA", &mbtime_timeA, &b_mbtime_timeA);
   fChain->SetBranchAddress("mbtime_timeC", &mbtime_timeC, &b_mbtime_timeC);
   fChain->SetBranchAddress("mbtime_countA", &mbtime_countA, &b_mbtime_countA);
   fChain->SetBranchAddress("mbtime_countC", &mbtime_countC, &b_mbtime_countC);
   fChain->SetBranchAddress("collcand_passMBTSTime", &collcand_passMBTSTime, &b_collcand_passMBTSTime);
   fChain->SetBranchAddress("collcand_passCaloTime", &collcand_passCaloTime, &b_collcand_passCaloTime);
   fChain->SetBranchAddress("collcand_passTrigger", &collcand_passTrigger, &b_collcand_passTrigger);
   fChain->SetBranchAddress("collcand_pass", &collcand_pass, &b_collcand_pass);
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
   fChain->SetBranchAddress("SkimDecision_name", &SkimDecision_name, &b_SkimDecision_name);
   fChain->SetBranchAddress("SkimDecision_accepted", &SkimDecision_accepted, &b_SkimDecision_accepted);
   fChain->SetBranchAddress("ti_staco_topo_MET_etx", &ti_staco_topo_MET_etx, &b_ti_staco_topo_MET_etx);
   fChain->SetBranchAddress("ti_staco_topo_MET_ety", &ti_staco_topo_MET_ety, &b_ti_staco_topo_MET_ety);
   fChain->SetBranchAddress("ti_staco_topo_MET_sumet", &ti_staco_topo_MET_sumet, &b_ti_staco_topo_MET_sumet);
   fChain->SetBranchAddress("ti_staco_topo_MET_et", &ti_staco_topo_MET_et, &b_ti_staco_topo_MET_et);
   fChain->SetBranchAddress("ti_staco_topo_MET_phi", &ti_staco_topo_MET_phi, &b_ti_staco_topo_MET_phi);
   fChain->SetBranchAddress("ti_staco_topo_Jet_n", &ti_staco_topo_Jet_n, &b_ti_staco_topo_Jet_n);
   fChain->SetBranchAddress("ti_staco_topo_Jet_use", &ti_staco_topo_Jet_use, &b_ti_staco_topo_Jet_use);
   fChain->SetBranchAddress("ti_staco_topo_Jet_index", &ti_staco_topo_Jet_index, &b_ti_staco_topo_Jet_index);
   fChain->SetBranchAddress("ti_staco_topo_Jet_overlap_jetn", &ti_staco_topo_Jet_overlap_jetn, &b_ti_staco_topo_Jet_overlap_jetn);
   fChain->SetBranchAddress("ti_staco_topo_Jet_overlap_jetindex", &ti_staco_topo_Jet_overlap_jetindex, &b_ti_staco_topo_Jet_overlap_jetindex);
   fChain->SetBranchAddress("ti_staco_topo_Jet_overlap_mun", &ti_staco_topo_Jet_overlap_mun, &b_ti_staco_topo_Jet_overlap_mun);
   fChain->SetBranchAddress("ti_staco_topo_Jet_overlap_muindex", &ti_staco_topo_Jet_overlap_muindex, &b_ti_staco_topo_Jet_overlap_muindex);
   fChain->SetBranchAddress("ti_staco_topo_Jet_overlap_taun", &ti_staco_topo_Jet_overlap_taun, &b_ti_staco_topo_Jet_overlap_taun);
   fChain->SetBranchAddress("ti_staco_topo_Jet_overlap_tauindex", &ti_staco_topo_Jet_overlap_tauindex, &b_ti_staco_topo_Jet_overlap_tauindex);
   fChain->SetBranchAddress("ti_staco_topo_Mu_n", &ti_staco_topo_Mu_n, &b_ti_staco_topo_Mu_n);
   fChain->SetBranchAddress("ti_staco_topo_Mu_use", &ti_staco_topo_Mu_use, &b_ti_staco_topo_Mu_use);
   fChain->SetBranchAddress("ti_staco_topo_Mu_index", &ti_staco_topo_Mu_index, &b_ti_staco_topo_Mu_index);
   fChain->SetBranchAddress("ti_staco_topo_Mu_overlap_jetn", &ti_staco_topo_Mu_overlap_jetn, &b_ti_staco_topo_Mu_overlap_jetn);
   fChain->SetBranchAddress("ti_staco_topo_Mu_overlap_jetindex", &ti_staco_topo_Mu_overlap_jetindex, &b_ti_staco_topo_Mu_overlap_jetindex);
   fChain->SetBranchAddress("ti_staco_topo_Mu_overlap_mun", &ti_staco_topo_Mu_overlap_mun, &b_ti_staco_topo_Mu_overlap_mun);
   fChain->SetBranchAddress("ti_staco_topo_Mu_overlap_muindex", &ti_staco_topo_Mu_overlap_muindex, &b_ti_staco_topo_Mu_overlap_muindex);
   fChain->SetBranchAddress("ti_staco_topo_Mu_overlap_taun", &ti_staco_topo_Mu_overlap_taun, &b_ti_staco_topo_Mu_overlap_taun);
   fChain->SetBranchAddress("ti_staco_topo_Mu_overlap_tauindex", &ti_staco_topo_Mu_overlap_tauindex, &b_ti_staco_topo_Mu_overlap_tauindex);
   fChain->SetBranchAddress("ti_staco_topo_El_n", &ti_staco_topo_El_n, &b_ti_staco_topo_El_n);
   fChain->SetBranchAddress("ti_staco_topo_El_use", &ti_staco_topo_El_use, &b_ti_staco_topo_El_use);
   fChain->SetBranchAddress("ti_staco_topo_El_index", &ti_staco_topo_El_index, &b_ti_staco_topo_El_index);
   fChain->SetBranchAddress("ti_staco_topo_El_overlap_jetn", &ti_staco_topo_El_overlap_jetn, &b_ti_staco_topo_El_overlap_jetn);
   fChain->SetBranchAddress("ti_staco_topo_El_overlap_jetindex", &ti_staco_topo_El_overlap_jetindex, &b_ti_staco_topo_El_overlap_jetindex);
   fChain->SetBranchAddress("ti_staco_topo_El_overlap_mun", &ti_staco_topo_El_overlap_mun, &b_ti_staco_topo_El_overlap_mun);
   fChain->SetBranchAddress("ti_staco_topo_El_overlap_muindex", &ti_staco_topo_El_overlap_muindex, &b_ti_staco_topo_El_overlap_muindex);
   fChain->SetBranchAddress("ti_staco_topo_El_overlap_taun", &ti_staco_topo_El_overlap_taun, &b_ti_staco_topo_El_overlap_taun);
   fChain->SetBranchAddress("ti_staco_topo_El_overlap_tauindex", &ti_staco_topo_El_overlap_tauindex, &b_ti_staco_topo_El_overlap_tauindex);
   fChain->SetBranchAddress("ti_staco_tower_MET_etx", &ti_staco_tower_MET_etx, &b_ti_staco_tower_MET_etx);
   fChain->SetBranchAddress("ti_staco_tower_MET_ety", &ti_staco_tower_MET_ety, &b_ti_staco_tower_MET_ety);
   fChain->SetBranchAddress("ti_staco_tower_MET_sumet", &ti_staco_tower_MET_sumet, &b_ti_staco_tower_MET_sumet);
   fChain->SetBranchAddress("ti_staco_tower_MET_et", &ti_staco_tower_MET_et, &b_ti_staco_tower_MET_et);
   fChain->SetBranchAddress("ti_staco_tower_MET_phi", &ti_staco_tower_MET_phi, &b_ti_staco_tower_MET_phi);
   fChain->SetBranchAddress("ti_staco_tower_Jet_n", &ti_staco_tower_Jet_n, &b_ti_staco_tower_Jet_n);
   fChain->SetBranchAddress("ti_staco_tower_Jet_use", &ti_staco_tower_Jet_use, &b_ti_staco_tower_Jet_use);
   fChain->SetBranchAddress("ti_staco_tower_Jet_index", &ti_staco_tower_Jet_index, &b_ti_staco_tower_Jet_index);
   fChain->SetBranchAddress("ti_staco_tower_Jet_overlap_jetn", &ti_staco_tower_Jet_overlap_jetn, &b_ti_staco_tower_Jet_overlap_jetn);
   fChain->SetBranchAddress("ti_staco_tower_Jet_overlap_jetindex", &ti_staco_tower_Jet_overlap_jetindex, &b_ti_staco_tower_Jet_overlap_jetindex);
   fChain->SetBranchAddress("ti_staco_tower_Jet_overlap_mun", &ti_staco_tower_Jet_overlap_mun, &b_ti_staco_tower_Jet_overlap_mun);
   fChain->SetBranchAddress("ti_staco_tower_Jet_overlap_muindex", &ti_staco_tower_Jet_overlap_muindex, &b_ti_staco_tower_Jet_overlap_muindex);
   fChain->SetBranchAddress("ti_staco_tower_Jet_overlap_taun", &ti_staco_tower_Jet_overlap_taun, &b_ti_staco_tower_Jet_overlap_taun);
   fChain->SetBranchAddress("ti_staco_tower_Jet_overlap_tauindex", &ti_staco_tower_Jet_overlap_tauindex, &b_ti_staco_tower_Jet_overlap_tauindex);
   fChain->SetBranchAddress("ti_staco_tower_Mu_n", &ti_staco_tower_Mu_n, &b_ti_staco_tower_Mu_n);
   fChain->SetBranchAddress("ti_staco_tower_Mu_use", &ti_staco_tower_Mu_use, &b_ti_staco_tower_Mu_use);
   fChain->SetBranchAddress("ti_staco_tower_Mu_index", &ti_staco_tower_Mu_index, &b_ti_staco_tower_Mu_index);
   fChain->SetBranchAddress("ti_staco_tower_Mu_overlap_jetn", &ti_staco_tower_Mu_overlap_jetn, &b_ti_staco_tower_Mu_overlap_jetn);
   fChain->SetBranchAddress("ti_staco_tower_Mu_overlap_jetindex", &ti_staco_tower_Mu_overlap_jetindex, &b_ti_staco_tower_Mu_overlap_jetindex);
   fChain->SetBranchAddress("ti_staco_tower_Mu_overlap_mun", &ti_staco_tower_Mu_overlap_mun, &b_ti_staco_tower_Mu_overlap_mun);
   fChain->SetBranchAddress("ti_staco_tower_Mu_overlap_muindex", &ti_staco_tower_Mu_overlap_muindex, &b_ti_staco_tower_Mu_overlap_muindex);
   fChain->SetBranchAddress("ti_staco_tower_Mu_overlap_taun", &ti_staco_tower_Mu_overlap_taun, &b_ti_staco_tower_Mu_overlap_taun);
   fChain->SetBranchAddress("ti_staco_tower_Mu_overlap_tauindex", &ti_staco_tower_Mu_overlap_tauindex, &b_ti_staco_tower_Mu_overlap_tauindex);
   fChain->SetBranchAddress("ti_staco_tower_El_n", &ti_staco_tower_El_n, &b_ti_staco_tower_El_n);
   fChain->SetBranchAddress("ti_staco_tower_El_use", &ti_staco_tower_El_use, &b_ti_staco_tower_El_use);
   fChain->SetBranchAddress("ti_staco_tower_El_index", &ti_staco_tower_El_index, &b_ti_staco_tower_El_index);
   fChain->SetBranchAddress("ti_staco_tower_El_overlap_jetn", &ti_staco_tower_El_overlap_jetn, &b_ti_staco_tower_El_overlap_jetn);
   fChain->SetBranchAddress("ti_staco_tower_El_overlap_jetindex", &ti_staco_tower_El_overlap_jetindex, &b_ti_staco_tower_El_overlap_jetindex);
   fChain->SetBranchAddress("ti_staco_tower_El_overlap_mun", &ti_staco_tower_El_overlap_mun, &b_ti_staco_tower_El_overlap_mun);
   fChain->SetBranchAddress("ti_staco_tower_El_overlap_muindex", &ti_staco_tower_El_overlap_muindex, &b_ti_staco_tower_El_overlap_muindex);
   fChain->SetBranchAddress("ti_staco_tower_El_overlap_taun", &ti_staco_tower_El_overlap_taun, &b_ti_staco_tower_El_overlap_taun);
   fChain->SetBranchAddress("ti_staco_tower_El_overlap_tauindex", &ti_staco_tower_El_overlap_tauindex, &b_ti_staco_tower_El_overlap_tauindex);
   fChain->SetBranchAddress("MET_Goodness_CalClusForwBackw_pass", &MET_Goodness_CalClusForwBackw_pass, &b_MET_Goodness_CalClusForwBackw_pass);
   fChain->SetBranchAddress("MET_Goodness_CalClusUpDown_pass", &MET_Goodness_CalClusUpDown_pass, &b_MET_Goodness_CalClusUpDown_pass);
   fChain->SetBranchAddress("MET_Goodness_Calo_countA", &MET_Goodness_Calo_countA, &b_MET_Goodness_Calo_countA);
   fChain->SetBranchAddress("MET_Goodness_Calo_countC", &MET_Goodness_Calo_countC, &b_MET_Goodness_Calo_countC);
   fChain->SetBranchAddress("MET_Goodness_Calo_pass", &MET_Goodness_Calo_pass, &b_MET_Goodness_Calo_pass);
   fChain->SetBranchAddress("MET_Goodness_IsCollisionCandidate", &MET_Goodness_IsCollisionCandidate, &b_MET_Goodness_IsCollisionCandidate);
   fChain->SetBranchAddress("MET_Goodness_MBTS_countA", &MET_Goodness_MBTS_countA, &b_MET_Goodness_MBTS_countA);
   fChain->SetBranchAddress("MET_Goodness_MBTS_countC", &MET_Goodness_MBTS_countC, &b_MET_Goodness_MBTS_countC);
   fChain->SetBranchAddress("MET_Goodness_MBTS_pass", &MET_Goodness_MBTS_pass, &b_MET_Goodness_MBTS_pass);
   fChain->SetBranchAddress("MET_Goodness_MuonSp0Hits", &MET_Goodness_MuonSp0Hits, &b_MET_Goodness_MuonSp0Hits);
   fChain->SetBranchAddress("MET_Goodness_MuonSp1Hits", &MET_Goodness_MuonSp1Hits, &b_MET_Goodness_MuonSp1Hits);
   fChain->SetBranchAddress("MET_Goodness_MuonSpTotHits", &MET_Goodness_MuonSpTotHits, &b_MET_Goodness_MuonSpTotHits);
   fChain->SetBranchAddress("MET_Goodness_N_Jets", &MET_Goodness_N_Jets, &b_MET_Goodness_N_Jets);
   fChain->SetBranchAddress("MET_Goodness_OkayLB", &MET_Goodness_OkayLB, &b_MET_Goodness_OkayLB);
   fChain->SetBranchAddress("MET_Goodness_CalClusForwBackw_timeDiff", &MET_Goodness_CalClusForwBackw_timeDiff, &b_MET_Goodness_CalClusForwBackw_timeDiff);
   fChain->SetBranchAddress("MET_Goodness_CalClusUpDown_timeDiff", &MET_Goodness_CalClusUpDown_timeDiff, &b_MET_Goodness_CalClusUpDown_timeDiff);
   fChain->SetBranchAddress("MET_Goodness_CalClus_InTimeFraction", &MET_Goodness_CalClus_InTimeFraction, &b_MET_Goodness_CalClus_InTimeFraction);
   fChain->SetBranchAddress("MET_Goodness_CalClus_OutTimeEnergy", &MET_Goodness_CalClus_OutTimeEnergy, &b_MET_Goodness_CalClus_OutTimeEnergy);
   fChain->SetBranchAddress("MET_Goodness_CalClus_eventTime", &MET_Goodness_CalClus_eventTime, &b_MET_Goodness_CalClus_eventTime);
   fChain->SetBranchAddress("MET_Goodness_CalClus_ootEnergy10", &MET_Goodness_CalClus_ootEnergy10, &b_MET_Goodness_CalClus_ootEnergy10);
   fChain->SetBranchAddress("MET_Goodness_CalClus_ootEnergy15", &MET_Goodness_CalClus_ootEnergy15, &b_MET_Goodness_CalClus_ootEnergy15);
   fChain->SetBranchAddress("MET_Goodness_CalClus_ootEnergy20", &MET_Goodness_CalClus_ootEnergy20, &b_MET_Goodness_CalClus_ootEnergy20);
   fChain->SetBranchAddress("MET_Goodness_CalClus_ootEnergy25", &MET_Goodness_CalClus_ootEnergy25, &b_MET_Goodness_CalClus_ootEnergy25);
   fChain->SetBranchAddress("MET_Goodness_CalClus_ootFraction10", &MET_Goodness_CalClus_ootFraction10, &b_MET_Goodness_CalClus_ootFraction10);
   fChain->SetBranchAddress("MET_Goodness_CalClus_ootFraction15", &MET_Goodness_CalClus_ootFraction15, &b_MET_Goodness_CalClus_ootFraction15);
   fChain->SetBranchAddress("MET_Goodness_CalClus_ootFraction20", &MET_Goodness_CalClus_ootFraction20, &b_MET_Goodness_CalClus_ootFraction20);
   fChain->SetBranchAddress("MET_Goodness_CalClus_ootFraction25", &MET_Goodness_CalClus_ootFraction25, &b_MET_Goodness_CalClus_ootFraction25);
   fChain->SetBranchAddress("MET_Goodness_CalClus_timeA", &MET_Goodness_CalClus_timeA, &b_MET_Goodness_CalClus_timeA);
   fChain->SetBranchAddress("MET_Goodness_CalClus_timeC", &MET_Goodness_CalClus_timeC, &b_MET_Goodness_CalClus_timeC);
   fChain->SetBranchAddress("MET_Goodness_Calo_timeA", &MET_Goodness_Calo_timeA, &b_MET_Goodness_Calo_timeA);
   fChain->SetBranchAddress("MET_Goodness_Calo_timeC", &MET_Goodness_Calo_timeC, &b_MET_Goodness_Calo_timeC);
   fChain->SetBranchAddress("MET_Goodness_Calo_timeDiff", &MET_Goodness_Calo_timeDiff, &b_MET_Goodness_Calo_timeDiff);
   fChain->SetBranchAddress("MET_Goodness_DeltaTrackTopo", &MET_Goodness_DeltaTrackTopo, &b_MET_Goodness_DeltaTrackTopo);
   fChain->SetBranchAddress("MET_Goodness_EtoverRootSigmaEt", &MET_Goodness_EtoverRootSigmaEt, &b_MET_Goodness_EtoverRootSigmaEt);
   fChain->SetBranchAddress("MET_Goodness_EventEMFraction", &MET_Goodness_EventEMFraction, &b_MET_Goodness_EventEMFraction);
   fChain->SetBranchAddress("MET_Goodness_LArNoisyROSummary", &MET_Goodness_LArNoisyROSummary, &b_MET_Goodness_LArNoisyROSummary);
   fChain->SetBranchAddress("MET_Goodness_MBTS_timeA", &MET_Goodness_MBTS_timeA, &b_MET_Goodness_MBTS_timeA);
   fChain->SetBranchAddress("MET_Goodness_MBTS_timeC", &MET_Goodness_MBTS_timeC, &b_MET_Goodness_MBTS_timeC);
   fChain->SetBranchAddress("MET_Goodness_MBTS_timeDiff", &MET_Goodness_MBTS_timeDiff, &b_MET_Goodness_MBTS_timeDiff);
   fChain->SetBranchAddress("MET_Goodness_MuonSp0Eta", &MET_Goodness_MuonSp0Eta, &b_MET_Goodness_MuonSp0Eta);
   fChain->SetBranchAddress("MET_Goodness_MuonSp0Phi", &MET_Goodness_MuonSp0Phi, &b_MET_Goodness_MuonSp0Phi);
   fChain->SetBranchAddress("MET_Goodness_MuonSp1Eta", &MET_Goodness_MuonSp1Eta, &b_MET_Goodness_MuonSp1Eta);
   fChain->SetBranchAddress("MET_Goodness_MuonSp1Phi", &MET_Goodness_MuonSp1Phi, &b_MET_Goodness_MuonSp1Phi);
   fChain->SetBranchAddress("MET_Goodness_MuonTRTTiming", &MET_Goodness_MuonTRTTiming, &b_MET_Goodness_MuonTRTTiming);
   fChain->SetBranchAddress("MET_Goodness_BCH_CORR_CELL_Jet", &MET_Goodness_BCH_CORR_CELL_Jet, &b_MET_Goodness_BCH_CORR_CELL_Jet);
   fChain->SetBranchAddress("MET_Goodness_BCH_CORR_JET", &MET_Goodness_BCH_CORR_JET, &b_MET_Goodness_BCH_CORR_JET);
   fChain->SetBranchAddress("MET_Goodness_BCH_CORR_JET_FORCELL_Jet", &MET_Goodness_BCH_CORR_JET_FORCELL_Jet, &b_MET_Goodness_BCH_CORR_JET_FORCELL_Jet);
   fChain->SetBranchAddress("MET_Goodness_ChargeFraction_Jet", &MET_Goodness_ChargeFraction_Jet, &b_MET_Goodness_ChargeFraction_Jet);
   fChain->SetBranchAddress("MET_Goodness_DeltaEt_JetAlgs_Jet", &MET_Goodness_DeltaEt_JetAlgs_Jet, &b_MET_Goodness_DeltaEt_JetAlgs_Jet);
   fChain->SetBranchAddress("MET_Goodness_DeltaEta_JetAlgs_Jet", &MET_Goodness_DeltaEta_JetAlgs_Jet, &b_MET_Goodness_DeltaEta_JetAlgs_Jet);
   fChain->SetBranchAddress("MET_Goodness_DeltaPhi_JetAlgs_Jet", &MET_Goodness_DeltaPhi_JetAlgs_Jet, &b_MET_Goodness_DeltaPhi_JetAlgs_Jet);
   fChain->SetBranchAddress("MET_Goodness_DeltaPhi_MET_Jet", &MET_Goodness_DeltaPhi_MET_Jet, &b_MET_Goodness_DeltaPhi_MET_Jet);
   fChain->SetBranchAddress("MET_Goodness_ECal_Jet", &MET_Goodness_ECal_Jet, &b_MET_Goodness_ECal_Jet);
   fChain->SetBranchAddress("MET_Goodness_EMFraction_Jet", &MET_Goodness_EMFraction_Jet, &b_MET_Goodness_EMFraction_Jet);
   fChain->SetBranchAddress("MET_Goodness_E_BadCellsCorr_Jet", &MET_Goodness_E_BadCellsCorr_Jet, &b_MET_Goodness_E_BadCellsCorr_Jet);
   fChain->SetBranchAddress("MET_Goodness_E_BadCells_Jet", &MET_Goodness_E_BadCells_Jet, &b_MET_Goodness_E_BadCells_Jet);
   fChain->SetBranchAddress("MET_Goodness_Eta_Jet", &MET_Goodness_Eta_Jet, &b_MET_Goodness_Eta_Jet);
   fChain->SetBranchAddress("MET_Goodness_HECf_Jet", &MET_Goodness_HECf_Jet, &b_MET_Goodness_HECf_Jet);
   fChain->SetBranchAddress("MET_Goodness_LArQuality_Jet", &MET_Goodness_LArQuality_Jet, &b_MET_Goodness_LArQuality_Jet);
   fChain->SetBranchAddress("MET_Goodness_Phi_Jet", &MET_Goodness_Phi_Jet, &b_MET_Goodness_Phi_Jet);
   fChain->SetBranchAddress("MET_Goodness_PtCal_Jet", &MET_Goodness_PtCal_Jet, &b_MET_Goodness_PtCal_Jet);
   fChain->SetBranchAddress("MET_Goodness_QualityFrac_Jet", &MET_Goodness_QualityFrac_Jet, &b_MET_Goodness_QualityFrac_Jet);
   fChain->SetBranchAddress("MET_Goodness_SamplingFracCryo_Jet", &MET_Goodness_SamplingFracCryo_Jet, &b_MET_Goodness_SamplingFracCryo_Jet);
   fChain->SetBranchAddress("MET_Goodness_SamplingFracEM_Jet", &MET_Goodness_SamplingFracEM_Jet, &b_MET_Goodness_SamplingFracEM_Jet);
   fChain->SetBranchAddress("MET_Goodness_SamplingFracFCAL_Jet", &MET_Goodness_SamplingFracFCAL_Jet, &b_MET_Goodness_SamplingFracFCAL_Jet);
   fChain->SetBranchAddress("MET_Goodness_SamplingFracGap_Jet", &MET_Goodness_SamplingFracGap_Jet, &b_MET_Goodness_SamplingFracGap_Jet);
   fChain->SetBranchAddress("MET_Goodness_SamplingFracHEC3_Jet", &MET_Goodness_SamplingFracHEC3_Jet, &b_MET_Goodness_SamplingFracHEC3_Jet);
   fChain->SetBranchAddress("MET_Goodness_SamplingFracHEC_Jet", &MET_Goodness_SamplingFracHEC_Jet, &b_MET_Goodness_SamplingFracHEC_Jet);
   fChain->SetBranchAddress("MET_Goodness_SamplingFracMax_Jet", &MET_Goodness_SamplingFracMax_Jet, &b_MET_Goodness_SamplingFracMax_Jet);
   fChain->SetBranchAddress("MET_Goodness_SamplingFracPS_Jet", &MET_Goodness_SamplingFracPS_Jet, &b_MET_Goodness_SamplingFracPS_Jet);
   fChain->SetBranchAddress("MET_Goodness_SamplingFracTile10_Jet", &MET_Goodness_SamplingFracTile10_Jet, &b_MET_Goodness_SamplingFracTile10_Jet);
   fChain->SetBranchAddress("MET_Goodness_SamplingFracTile2_Jet", &MET_Goodness_SamplingFracTile2_Jet, &b_MET_Goodness_SamplingFracTile2_Jet);
   fChain->SetBranchAddress("MET_Goodness_SamplingFracTile_Jet", &MET_Goodness_SamplingFracTile_Jet, &b_MET_Goodness_SamplingFracTile_Jet);
   fChain->SetBranchAddress("MET_Goodness_TileQuality_Jet", &MET_Goodness_TileQuality_Jet, &b_MET_Goodness_TileQuality_Jet);
   fChain->SetBranchAddress("MET_Goodness_Timing_Jet", &MET_Goodness_Timing_Jet, &b_MET_Goodness_Timing_Jet);
   fChain->SetBranchAddress("MET_Goodness_ootE25_Jet", &MET_Goodness_ootE25_Jet, &b_MET_Goodness_ootE25_Jet);
   fChain->SetBranchAddress("MET_Goodness_ootE50_Jet", &MET_Goodness_ootE50_Jet, &b_MET_Goodness_ootE50_Jet);
   fChain->SetBranchAddress("MET_Goodness_ootE75_Jet", &MET_Goodness_ootE75_Jet, &b_MET_Goodness_ootE75_Jet);
   fChain->SetBranchAddress("MET_Goodness_tileGap3F_Jet", &MET_Goodness_tileGap3F_Jet, &b_MET_Goodness_tileGap3F_Jet);
   fChain->SetBranchAddress("MET_Goodness_N90Cells_Jet", &MET_Goodness_N90Cells_Jet, &b_MET_Goodness_N90Cells_Jet);
   fChain->SetBranchAddress("MET_Goodness_N90Constituents_Jet", &MET_Goodness_N90Constituents_Jet, &b_MET_Goodness_N90Constituents_Jet);
   fChain->SetBranchAddress("MET_Goodness_NConstituents_Jet", &MET_Goodness_NConstituents_Jet, &b_MET_Goodness_NConstituents_Jet);
   fChain->SetBranchAddress("MET_Goodness_N_BadCellsCorr_Jet", &MET_Goodness_N_BadCellsCorr_Jet, &b_MET_Goodness_N_BadCellsCorr_Jet);
   fChain->SetBranchAddress("MET_Goodness_N_BadCells_Jet", &MET_Goodness_N_BadCells_Jet, &b_MET_Goodness_N_BadCells_Jet);
   fChain->SetBranchAddress("MET_Goodness_NumTracks_Jet", &MET_Goodness_NumTracks_Jet, &b_MET_Goodness_NumTracks_Jet);
   fChain->SetBranchAddress("MET_Goodness_SamplingMaxID_Jet", &MET_Goodness_SamplingMaxID_Jet, &b_MET_Goodness_SamplingMaxID_Jet);
   fChain->SetBranchAddress("MET_Goodness_isBad_Jet", &MET_Goodness_isBad_Jet, &b_MET_Goodness_isBad_Jet);
   fChain->SetBranchAddress("MET_Goodness_isGood_Jet", &MET_Goodness_isGood_Jet, &b_MET_Goodness_isGood_Jet);
   fChain->SetBranchAddress("MET_Goodness_isUgly_Jet", &MET_Goodness_isUgly_Jet, &b_MET_Goodness_isUgly_Jet);
   fChain->SetBranchAddress("MET_Goodness_All", &MET_Goodness_All, &b_MET_Goodness_All);
   fChain->SetBranchAddress("MET_Goodness_JetCleaning", &MET_Goodness_JetCleaning, &b_MET_Goodness_JetCleaning);
   fChain->SetBranchAddress("MET_Goodness_BitMask", &MET_Goodness_BitMask, &b_MET_Goodness_BitMask);
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
