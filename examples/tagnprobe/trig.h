//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Dec 13 15:47:43 2010 by ROOT version 5.26/00
// from TChain susy/
//////////////////////////////////////////////////////////

#ifndef trig_h
#define trig_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH1.h>
#include <vector>

using namespace std;

class trig {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
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
   Bool_t          EF_2MUL1_j40_HV;
   Bool_t          EF_2j10;
   Bool_t          EF_2j10_deta3_5;
   Bool_t          EF_2j10_deta5;
   Bool_t          EF_2j20;
   Bool_t          EF_2j20_deta3_5;
   Bool_t          EF_2j40;
   Bool_t          EF_2j40_deta3_5;
   Bool_t          EF_2mu10;
   Bool_t          EF_2mu4;
   Bool_t          EF_2mu4_DiMu;
   Bool_t          EF_2mu4_DiMu_SiTrk;
   Bool_t          EF_2mu4_DiMu_noOS;
   Bool_t          EF_2mu4_DiMu_noOS_passL2;
   Bool_t          EF_2mu4_DiMu_noVtx_noOS;
   Bool_t          EF_2mu4_DiMu_noVtx_noOS_passL2;
   Bool_t          EF_2mu4_MSonly;
   Bool_t          EF_2mu6;
   Bool_t          EF_2mu6_DiMu;
   Bool_t          EF_2mu6_DiMu_noVtx_noOS;
   Bool_t          EF_3j20;
   Bool_t          EF_EFInsideOut_FS_MB2;
   Bool_t          EF_EFTRTOnly_FS_MB2;
   Bool_t          EF_FJ18;
   Bool_t          EF_FJ18_larcalib;
   Bool_t          EF_FJ3;
   Bool_t          EF_FJ3_larcalib;
   Bool_t          EF_L1ItemStreamer_L1_2EM2;
   Bool_t          EF_L1ItemStreamer_L1_2EM3;
   Bool_t          EF_L1ItemStreamer_L1_2EM4;
   Bool_t          EF_L1ItemStreamer_L1_2EM5;
   Bool_t          EF_L1ItemStreamer_L1_2EM5I;
   Bool_t          EF_L1ItemStreamer_L1_2FJ18;
   Bool_t          EF_L1ItemStreamer_L1_2FJ3;
   Bool_t          EF_L1ItemStreamer_L1_2J10;
   Bool_t          EF_L1ItemStreamer_L1_2J10_win6;
   Bool_t          EF_L1ItemStreamer_L1_2J15;
   Bool_t          EF_L1ItemStreamer_L1_2J5;
   Bool_t          EF_L1ItemStreamer_L1_2MU0;
   Bool_t          EF_L1ItemStreamer_L1_2MU0_MU6;
   Bool_t          EF_L1ItemStreamer_L1_2MU10;
   Bool_t          EF_L1ItemStreamer_L1_2MU6;
   Bool_t          EF_L1ItemStreamer_L1_2TAU5;
   Bool_t          EF_L1ItemStreamer_L1_2TAU6;
   Bool_t          EF_L1ItemStreamer_L1_2TAU6I;
   Bool_t          EF_L1ItemStreamer_L1_3J10;
   Bool_t          EF_L1ItemStreamer_L1_BCM_AtoC;
   Bool_t          EF_L1ItemStreamer_L1_BCM_AtoC_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_BCM_CtoA;
   Bool_t          EF_L1ItemStreamer_L1_BCM_CtoA_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_BCM_HT;
   Bool_t          EF_L1ItemStreamer_L1_BCM_HT_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_BCM_MUL_1;
   Bool_t          EF_L1ItemStreamer_L1_BCM_MUL_1_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_BCM_MUL_2;
   Bool_t          EF_L1ItemStreamer_L1_BCM_MUL_2_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_BCM_MUL_3;
   Bool_t          EF_L1ItemStreamer_L1_BCM_MUL_3_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_BCM_MUL_4;
   Bool_t          EF_L1ItemStreamer_L1_BCM_MUL_4_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_BCM_MUL_5;
   Bool_t          EF_L1ItemStreamer_L1_BCM_MUL_5_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_BCM_MUL_6;
   Bool_t          EF_L1ItemStreamer_L1_BCM_MUL_6_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_BCM_Wide;
   Bool_t          EF_L1ItemStreamer_L1_BCM_Wide_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_BGRP0;
   Bool_t          EF_L1ItemStreamer_L1_BGRP1;
   Bool_t          EF_L1ItemStreamer_L1_BPTX0_BGRP0;
   Bool_t          EF_L1ItemStreamer_L1_BPTX0_BPTX1_BGRP0;
   Bool_t          EF_L1ItemStreamer_L1_BPTX1_BGRP0;
   Bool_t          EF_L1ItemStreamer_L1_EM10;
   Bool_t          EF_L1ItemStreamer_L1_EM10I;
   Bool_t          EF_L1ItemStreamer_L1_EM14;
   Bool_t          EF_L1ItemStreamer_L1_EM2;
   Bool_t          EF_L1ItemStreamer_L1_EM3;
   Bool_t          EF_L1ItemStreamer_L1_EM3_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_EM3_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_EM4;
   Bool_t          EF_L1ItemStreamer_L1_EM5;
   Bool_t          EF_L1ItemStreamer_L1_EM5I;
   Bool_t          EF_L1ItemStreamer_L1_FJ18;
   Bool_t          EF_L1ItemStreamer_L1_FJ3;
   Bool_t          EF_L1ItemStreamer_L1_FJ3_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_FJ3_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_J10;
   Bool_t          EF_L1ItemStreamer_L1_J10_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_J10_win6;
   Bool_t          EF_L1ItemStreamer_L1_J15;
   Bool_t          EF_L1ItemStreamer_L1_J15_LV;
   Bool_t          EF_L1ItemStreamer_L1_J15_MV;
   Bool_t          EF_L1ItemStreamer_L1_J15_NL;
   Bool_t          EF_L1ItemStreamer_L1_J30;
   Bool_t          EF_L1ItemStreamer_L1_J30_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_J5;
   Bool_t          EF_L1ItemStreamer_L1_J55;
   Bool_t          EF_L1ItemStreamer_L1_J5_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_J5_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_J75;
   Bool_t          EF_L1ItemStreamer_L1_JE120;
   Bool_t          EF_L1ItemStreamer_L1_JE280;
   Bool_t          EF_L1ItemStreamer_L1_L1A_Mon;
   Bool_t          EF_L1ItemStreamer_L1_LUCID;
   Bool_t          EF_L1ItemStreamer_L1_LUCID_A;
   Bool_t          EF_L1ItemStreamer_L1_LUCID_A_C;
   Bool_t          EF_L1ItemStreamer_L1_LUCID_A_C_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_LUCID_A_C_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_LUCID_A_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_LUCID_A_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_LUCID_C;
   Bool_t          EF_L1ItemStreamer_L1_LUCID_COMM;
   Bool_t          EF_L1ItemStreamer_L1_LUCID_COMM_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_LUCID_C_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_LUCID_C_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_LUCID_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA0;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA1;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA10;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA11;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA12;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA13;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA14;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA15;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA2;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA3;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA4;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA5;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA6;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA7;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA8;
   Bool_t          EF_L1ItemStreamer_L1_MBTSA9;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC0;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC1;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC10;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC11;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC12;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC13;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC14;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC15;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC2;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC3;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC4;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC5;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC6;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC7;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC8;
   Bool_t          EF_L1ItemStreamer_L1_MBTSC9;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_1;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_1_1;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_1_1_Col;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_1_1_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED1;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED2;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_1_Col;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_1_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED1;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED2;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_2;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_2_Col;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_2_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED1;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED2;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_4_4;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED1;
   Bool_t          EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED2;
   Bool_t          EF_L1ItemStreamer_L1_MU0;
   Bool_t          EF_L1ItemStreamer_L1_MU0_COMM;
   Bool_t          EF_L1ItemStreamer_L1_MU0_COMM_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_MU0_EM3;
   Bool_t          EF_L1ItemStreamer_L1_MU0_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_MU0_J5;
   Bool_t          EF_L1ItemStreamer_L1_MU0_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_MU10;
   Bool_t          EF_L1ItemStreamer_L1_MU10_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_MU15;
   Bool_t          EF_L1ItemStreamer_L1_MU20;
   Bool_t          EF_L1ItemStreamer_L1_MU6;
   Bool_t          EF_L1ItemStreamer_L1_MU6_EM3;
   Bool_t          EF_L1ItemStreamer_L1_MU6_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_MU6_J5;
   Bool_t          EF_L1ItemStreamer_L1_MU6_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_NIM_S9C0A20;
   Bool_t          EF_L1ItemStreamer_L1_NIM_S9C1C19;
   Bool_t          EF_L1ItemStreamer_L1_NIM_S9C1C20;
   Bool_t          EF_L1ItemStreamer_L1_RD0_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_RD0_FILLED;
   Bool_t          EF_L1ItemStreamer_L1_RD0_FIRSTEMPTY;
   Bool_t          EF_L1ItemStreamer_L1_RD0_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_RD1_FILLED;
   Bool_t          EF_L1ItemStreamer_L1_TAU11;
   Bool_t          EF_L1ItemStreamer_L1_TAU11I;
   Bool_t          EF_L1ItemStreamer_L1_TAU20;
   Bool_t          EF_L1ItemStreamer_L1_TAU30;
   Bool_t          EF_L1ItemStreamer_L1_TAU5;
   Bool_t          EF_L1ItemStreamer_L1_TAU5_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_TAU5_UNPAIRED;
   Bool_t          EF_L1ItemStreamer_L1_TAU6;
   Bool_t          EF_L1ItemStreamer_L1_TAU6I;
   Bool_t          EF_L1ItemStreamer_L1_TAU6_XE10;
   Bool_t          EF_L1ItemStreamer_L1_TAU8;
   Bool_t          EF_L1ItemStreamer_L1_TE10;
   Bool_t          EF_L1ItemStreamer_L1_TE100;
   Bool_t          EF_L1ItemStreamer_L1_TRT;
   Bool_t          EF_L1ItemStreamer_L1_XE10;
   Bool_t          EF_L1ItemStreamer_L1_XE15;
   Bool_t          EF_L1ItemStreamer_L1_XE20;
   Bool_t          EF_L1ItemStreamer_L1_XE30;
   Bool_t          EF_L1ItemStreamer_L1_ZDC;
   Bool_t          EF_L1ItemStreamer_L1_ZDC_A;
   Bool_t          EF_L1ItemStreamer_L1_ZDC_AND;
   Bool_t          EF_L1ItemStreamer_L1_ZDC_AND_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_ZDC_A_C;
   Bool_t          EF_L1ItemStreamer_L1_ZDC_A_C_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_ZDC_A_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_ZDC_C;
   Bool_t          EF_L1ItemStreamer_L1_ZDC_C_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_ZDC_EMPTY;
   Bool_t          EF_L1ItemStreamer_L1_ZDC_UNPAIRED;
   Bool_t          EF_L2IdScan_FS_MB2;
   Bool_t          EF_L2SiTrack_FS_MB2;
   Bool_t          EF_MU4_DiMu;
   Bool_t          EF_MU4_DiMu_FS;
   Bool_t          EF_MU4_DiMu_FS_noOS;
   Bool_t          EF_MU4_DiMu_FS_noOS_passL2;
   Bool_t          EF_MU4_DiMu_MG_FS;
   Bool_t          EF_MU4_DiMu_SiTrk_FS;
   Bool_t          EF_MU4_DiMu_noOS;
   Bool_t          EF_MU4_DiMu_noOS_passL2;
   Bool_t          EF_MU4_Trk_Jpsi;
   Bool_t          EF_MU4_Trk_Jpsi_FS;
   Bool_t          EF_MU4_Trk_Jpsi_loose;
   Bool_t          EF_MU4_Trk_Jpsi_loose_FS;
   Bool_t          EF_MU4_Trk_Jpsi_loose_FS_passL2;
   Bool_t          EF_MU4_Trk_Jpsi_loose_passL2;
   Bool_t          EF_MU4_Trk_Upsi_loose_FS;
   Bool_t          EF_MU4_Trk_Upsi_loose_FS_passL2;
   Bool_t          EF_MU6_DiMu;
   Bool_t          EF_MU6_DiMu_FS;
   Bool_t          EF_MU6_Jpsie5e3;
   Bool_t          EF_MU6_Jpsie5e3_FS;
   Bool_t          EF_MU6_Jpsie5e3_SiTrk_FS;
   Bool_t          EF_MU6_Trk_Jpsi_loose;
   Bool_t          EF_MU6_Trk_Jpsi_loose_FS;
   Bool_t          EF_MU6_Trk_Upsi_loose_FS;
   Bool_t          EF_PixelNoise;
   Bool_t          EF_SCTNoise;
   Bool_t          EF_SeededStreamerBCM_LUCID_ZDC;
   Bool_t          EF_SeededStreamerCosmicCalo;
   Bool_t          EF_SeededStreamerCosmicCaloEM;
   Bool_t          EF_SeededStreamerCosmicMuons;
   Bool_t          EF_SeededStreamerL1Calo;
   Bool_t          EF_SeededStreamerL1CaloEM;
   Bool_t          EF_SeededStreamerL1CaloJet;
   Bool_t          EF_SeededStreamerL1CaloTau;
   Bool_t          EF_SeededStreamerMBTS;
   Bool_t          EF_SeededStreamerMinBias;
   Bool_t          EF_SeededStreamerMuonswBeam;
   Bool_t          EF_SeededStreamerRNDM;
   Bool_t          EF_SeededStreamerWarmStart;
   Bool_t          EF_SeededStreamerZeroBias;
   Bool_t          EF_TileCalib_cis;
   Bool_t          EF_TileCalib_laser;
   Bool_t          EF_TileMon;
   Bool_t          EF_cost_monitor;
   Bool_t          EF_e10_loose;
   Bool_t          EF_e10_loose_passEF;
   Bool_t          EF_e10_loose_passL2;
   Bool_t          EF_e10_medium;
   Bool_t          EF_e20_loose_NoIDTrkCut;
   Bool_t          EF_e3_NoCut;
   Bool_t          EF_e3_NoCut_IdScan;
   Bool_t          EF_e3_NoCut_TRT;
   Bool_t          EF_e5_NoCut;
   Bool_t          EF_e5_NoCut_FwdBackTrk;
   Bool_t          EF_e5_NoCut_IdScan;
   Bool_t          EF_e5_NoCut_SiTrk;
   Bool_t          EF_e5_NoCut_TRT;
   Bool_t          EF_e5_NoCut_cells;
   Bool_t          EF_e5_loose;
   Bool_t          EF_e5_loose_IdScan;
   Bool_t          EF_e5_loose_NoIDTrkCut;
   Bool_t          EF_e5_loose_TRT;
   Bool_t          EF_e5_medium;
   Bool_t          EF_e5_medium_IdScan;
   Bool_t          EF_e5_medium_TRT;
   Bool_t          EF_g10_loose;
   Bool_t          EF_g10_loose_larcalib;
   Bool_t          EF_g3_nocut;
   Bool_t          EF_g3_nocut_larcalib;
   Bool_t          EF_g5_loose;
   Bool_t          EF_g5_loose_larcalib;
   Bool_t          EF_g5_nocut;
   Bool_t          EF_j10;
   Bool_t          EF_j10_c4;
   Bool_t          EF_j10_larcalib;
   Bool_t          EF_j10_noise;
   Bool_t          EF_j140;
   Bool_t          EF_j20;
   Bool_t          EF_j200;
   Bool_t          EF_j20_c4;
   Bool_t          EF_j20_noise;
   Bool_t          EF_j30_L1TAU_HV;
   Bool_t          EF_j30_Trackless_HV;
   Bool_t          EF_j40;
   Bool_t          EF_j80;
   Bool_t          EF_j80_larcalib;
   Bool_t          EF_mbBcm;
   Bool_t          EF_mbLucid;
   Bool_t          EF_mbMbts_1;
   Bool_t          EF_mbMbts_1_1;
   Bool_t          EF_mbMbts_1_1_NoCut_Time;
   Bool_t          EF_mbMbts_1_NoCut_Time;
   Bool_t          EF_mbMbts_1_NoCut_Time_unpaired;
   Bool_t          EF_mbMbts_2;
   Bool_t          EF_mbMbts_2_NoCut_Time;
   Bool_t          EF_mbRmMbts_1;
   Bool_t          EF_mbRmMbts_1_1;
   Bool_t          EF_mbRmMbts_1_1_NoCut_Time;
   Bool_t          EF_mbRmMbts_1_NoCut_Time;
   Bool_t          EF_mbRmMbts_1_NoCut_Time_unpaired;
   Bool_t          EF_mbRmMbts_1_unpaired;
   Bool_t          EF_mbRmMbts_2;
   Bool_t          EF_mbRmMbts_2_NoCut_Time;
   Bool_t          EF_mbRndm;
   Bool_t          EF_mbSpTrk;
   Bool_t          EF_mbSpTrk_cosmic;
   Bool_t          EF_mbSpTrk_unpaired;
   Bool_t          EF_mbSp_fwd;
   Bool_t          EF_mbSp_oneD;
   Bool_t          EF_mbTrtTrk;
   Bool_t          EF_mbTrtTrk_unpaired;
   Bool_t          EF_mbZdc;
   Bool_t          EF_mb_BM_calib;
   Bool_t          EF_mb_LD_calib;
   Bool_t          EF_mb_M1_calib;
   Bool_t          EF_mb_M1_calib_unpaired;
   Bool_t          EF_mb_M2_calib;
   Bool_t          EF_mb_M2_calib_unpaired;
   Bool_t          EF_mb_MU;
   Bool_t          EF_mb_RM_calib;
   Bool_t          EF_mb_RM_calib_cosmic;
   Bool_t          EF_mb_RM_calib_unpaired;
   Bool_t          EF_mb_ZC_calib;
   Bool_t          EF_mu10;
   Bool_t          EF_mu10_MG;
   Bool_t          EF_mu10_MSonly;
   Bool_t          EF_mu10_NoIDTrkCut;
   Bool_t          EF_mu10_SiTrk;
   Bool_t          EF_mu10_passHLT;
   Bool_t          EF_mu10i_loose;
   Bool_t          EF_mu13;
   Bool_t          EF_mu15;
   Bool_t          EF_mu20;
   Bool_t          EF_mu20_MSonly;
   Bool_t          EF_mu20_passHLT;
   Bool_t          EF_mu4;
   Bool_t          EF_mu4_DiMu;
   Bool_t          EF_mu4_DiMu_FS;
   Bool_t          EF_mu4_DiMu_FS_noOS;
   Bool_t          EF_mu4_L2MSonly_EFFS_passL2;
   Bool_t          EF_mu4_MB2_noL2_EFFS;
   Bool_t          EF_mu4_MG;
   Bool_t          EF_mu4_MSonly;
   Bool_t          EF_mu4_MSonly_EFFS_passL2;
   Bool_t          EF_mu4_MSonly_Trk_Jpsi_loose;
   Bool_t          EF_mu4_MSonly_Trk_Upsi_loose_FS;
   Bool_t          EF_mu4_NoIDTrkCut;
   Bool_t          EF_mu4_SiTrk;
   Bool_t          EF_mu4_Trk_Jpsi_loose;
   Bool_t          EF_mu4_Trk_Upsi_loose_FS;
   Bool_t          EF_mu4_mu6;
   Bool_t          EF_mu4_passHLT;
   Bool_t          EF_mu4_tile;
   Bool_t          EF_mu4_tile_SiTrk;
   Bool_t          EF_mu4_trod;
   Bool_t          EF_mu4_trod_SiTrk;
   Bool_t          EF_mu4mu6_DiMu;
   Bool_t          EF_mu6;
   Bool_t          EF_mu6_DiMu;
   Bool_t          EF_mu6_DiMu_FS;
   Bool_t          EF_mu6_DiMu_FS_noOS;
   Bool_t          EF_mu6_Jpsie5e3;
   Bool_t          EF_mu6_MG;
   Bool_t          EF_mu6_MSonly;
   Bool_t          EF_mu6_SiTrk;
   Bool_t          EF_mu6_Trk_Jpsi_loose;
   Bool_t          EF_mu6_Trk_Jpsi_loose_FS;
   Bool_t          EF_mu6_Trk_Upsi_loose_FS;
   Bool_t          EF_mu6_passHLT;
   Bool_t          EF_te100;
   Bool_t          EF_trk9_loose;
   Bool_t          EF_vtxbeamspot_FSTracks;
   Bool_t          EF_vtxbeamspot_FSTracks_SiTrk;
   Bool_t          EF_xe20;
   Bool_t          EF_xe20_FEB;
   Bool_t          EF_xe20_allCells;
   Bool_t          EF_xe30_allL1;
   Bool_t          EF_xe30_allL1_FEB;
   Bool_t          EF_xe30_allL1_allCells;
   Bool_t          EF_xe30_unbiased;
   Bool_t          EF_xe30_unbiased_FEB;
   Bool_t          EF_xe30_unbiased_allCells;
   Bool_t          L1_2EM2;
   Bool_t          L1_2EM3;
   Bool_t          L1_2EM4;
   Bool_t          L1_2EM5;
   Bool_t          L1_2EM5I;
   Bool_t          L1_2FJ18;
   Bool_t          L1_2FJ3;
   Bool_t          L1_2J10;
   Bool_t          L1_2J10_win6;
   Bool_t          L1_2J15;
   Bool_t          L1_2J5;
   Bool_t          L1_2MU0;
   Bool_t          L1_2MU0_MU6;
   Bool_t          L1_2MU10;
   Bool_t          L1_2MU6;
   Bool_t          L1_2TAU5;
   Bool_t          L1_2TAU6;
   Bool_t          L1_2TAU6I;
   Bool_t          L1_3J10;
   Bool_t          L1_BCM_AtoC;
   Bool_t          L1_BCM_AtoC_EMPTY;
   Bool_t          L1_BCM_CtoA;
   Bool_t          L1_BCM_CtoA_EMPTY;
   Bool_t          L1_BCM_HT;
   Bool_t          L1_BCM_HT_EMPTY;
   Bool_t          L1_BCM_MUL_1;
   Bool_t          L1_BCM_MUL_1_EMPTY;
   Bool_t          L1_BCM_MUL_2;
   Bool_t          L1_BCM_MUL_2_EMPTY;
   Bool_t          L1_BCM_MUL_3;
   Bool_t          L1_BCM_MUL_3_EMPTY;
   Bool_t          L1_BCM_MUL_4;
   Bool_t          L1_BCM_MUL_4_EMPTY;
   Bool_t          L1_BCM_MUL_5;
   Bool_t          L1_BCM_MUL_5_EMPTY;
   Bool_t          L1_BCM_MUL_6;
   Bool_t          L1_BCM_MUL_6_EMPTY;
   Bool_t          L1_BCM_Wide;
   Bool_t          L1_BCM_Wide_EMPTY;
   Bool_t          L1_BGRP0;
   Bool_t          L1_BGRP1;
   Bool_t          L1_BPTX0_BGRP0;
   Bool_t          L1_BPTX0_BPTX1_BGRP0;
   Bool_t          L1_BPTX1_BGRP0;
   Bool_t          L1_CALREQ1;
   Bool_t          L1_CALREQ2;
   Bool_t          L1_EM10;
   Bool_t          L1_EM10I;
   Bool_t          L1_EM14;
   Bool_t          L1_EM2;
   Bool_t          L1_EM3;
   Bool_t          L1_EM3_EMPTY;
   Bool_t          L1_EM3_UNPAIRED;
   Bool_t          L1_EM4;
   Bool_t          L1_EM5;
   Bool_t          L1_EM5I;
   Bool_t          L1_FJ18;
   Bool_t          L1_FJ3;
   Bool_t          L1_FJ3_EMPTY;
   Bool_t          L1_FJ3_UNPAIRED;
   Bool_t          L1_J10;
   Bool_t          L1_J10_EMPTY;
   Bool_t          L1_J10_win6;
   Bool_t          L1_J15;
   Bool_t          L1_J15_LV;
   Bool_t          L1_J15_MV;
   Bool_t          L1_J15_NL;
   Bool_t          L1_J30;
   Bool_t          L1_J30_EMPTY;
   Bool_t          L1_J5;
   Bool_t          L1_J55;
   Bool_t          L1_J5_EMPTY;
   Bool_t          L1_J5_UNPAIRED;
   Bool_t          L1_J75;
   Bool_t          L1_JE120;
   Bool_t          L1_JE280;
   Bool_t          L1_L1A_Mon;
   Bool_t          L1_LUCID;
   Bool_t          L1_LUCID_A;
   Bool_t          L1_LUCID_A_C;
   Bool_t          L1_LUCID_A_C_EMPTY;
   Bool_t          L1_LUCID_A_C_UNPAIRED;
   Bool_t          L1_LUCID_A_EMPTY;
   Bool_t          L1_LUCID_A_UNPAIRED;
   Bool_t          L1_LUCID_C;
   Bool_t          L1_LUCID_COMM;
   Bool_t          L1_LUCID_COMM_EMPTY;
   Bool_t          L1_LUCID_C_EMPTY;
   Bool_t          L1_LUCID_C_UNPAIRED;
   Bool_t          L1_LUCID_EMPTY;
   Bool_t          L1_MBTSA0;
   Bool_t          L1_MBTSA1;
   Bool_t          L1_MBTSA10;
   Bool_t          L1_MBTSA11;
   Bool_t          L1_MBTSA12;
   Bool_t          L1_MBTSA13;
   Bool_t          L1_MBTSA14;
   Bool_t          L1_MBTSA15;
   Bool_t          L1_MBTSA2;
   Bool_t          L1_MBTSA3;
   Bool_t          L1_MBTSA4;
   Bool_t          L1_MBTSA5;
   Bool_t          L1_MBTSA6;
   Bool_t          L1_MBTSA7;
   Bool_t          L1_MBTSA8;
   Bool_t          L1_MBTSA9;
   Bool_t          L1_MBTSC0;
   Bool_t          L1_MBTSC1;
   Bool_t          L1_MBTSC10;
   Bool_t          L1_MBTSC11;
   Bool_t          L1_MBTSC12;
   Bool_t          L1_MBTSC13;
   Bool_t          L1_MBTSC14;
   Bool_t          L1_MBTSC15;
   Bool_t          L1_MBTSC2;
   Bool_t          L1_MBTSC3;
   Bool_t          L1_MBTSC4;
   Bool_t          L1_MBTSC5;
   Bool_t          L1_MBTSC6;
   Bool_t          L1_MBTSC7;
   Bool_t          L1_MBTSC8;
   Bool_t          L1_MBTSC9;
   Bool_t          L1_MBTS_1;
   Bool_t          L1_MBTS_1_1;
   Bool_t          L1_MBTS_1_1_Col;
   Bool_t          L1_MBTS_1_1_EMPTY;
   Bool_t          L1_MBTS_1_1_UNPAIRED;
   Bool_t          L1_MBTS_1_1_UNPAIRED1;
   Bool_t          L1_MBTS_1_1_UNPAIRED2;
   Bool_t          L1_MBTS_1_Col;
   Bool_t          L1_MBTS_1_EMPTY;
   Bool_t          L1_MBTS_1_UNPAIRED;
   Bool_t          L1_MBTS_1_UNPAIRED1;
   Bool_t          L1_MBTS_1_UNPAIRED2;
   Bool_t          L1_MBTS_2;
   Bool_t          L1_MBTS_2_Col;
   Bool_t          L1_MBTS_2_EMPTY;
   Bool_t          L1_MBTS_2_UNPAIRED;
   Bool_t          L1_MBTS_2_UNPAIRED1;
   Bool_t          L1_MBTS_2_UNPAIRED2;
   Bool_t          L1_MBTS_4_4;
   Bool_t          L1_MBTS_4_4_UNPAIRED;
   Bool_t          L1_MBTS_4_4_UNPAIRED1;
   Bool_t          L1_MBTS_4_4_UNPAIRED2;
   Bool_t          L1_MU0;
   Bool_t          L1_MU0_COMM;
   Bool_t          L1_MU0_COMM_EMPTY;
   Bool_t          L1_MU0_COMM_UNPAIRED;
   Bool_t          L1_MU0_EM3;
   Bool_t          L1_MU0_EMPTY;
   Bool_t          L1_MU0_J5;
   Bool_t          L1_MU0_UNPAIRED;
   Bool_t          L1_MU10;
   Bool_t          L1_MU10_EMPTY;
   Bool_t          L1_MU15;
   Bool_t          L1_MU20;
   Bool_t          L1_MU6;
   Bool_t          L1_MU6_EM3;
   Bool_t          L1_MU6_EMPTY;
   Bool_t          L1_MU6_J5;
   Bool_t          L1_MU6_UNPAIRED;
   Bool_t          L1_NIM_S9C0A20;
   Bool_t          L1_NIM_S9C1C19;
   Bool_t          L1_NIM_S9C1C20;
   Bool_t          L1_RD0_EMPTY;
   Bool_t          L1_RD0_FILLED;
   Bool_t          L1_RD0_FIRSTEMPTY;
   Bool_t          L1_RD0_UNPAIRED;
   Bool_t          L1_RD1_FILLED;
   Bool_t          L1_TAU11;
   Bool_t          L1_TAU11I;
   Bool_t          L1_TAU20;
   Bool_t          L1_TAU30;
   Bool_t          L1_TAU5;
   Bool_t          L1_TAU5_EMPTY;
   Bool_t          L1_TAU5_UNPAIRED;
   Bool_t          L1_TAU6;
   Bool_t          L1_TAU6I;
   Bool_t          L1_TAU6_XE10;
   Bool_t          L1_TAU8;
   Bool_t          L1_TE10;
   Bool_t          L1_TE100;
   Bool_t          L1_TRT;
   Bool_t          L1_XE10;
   Bool_t          L1_XE15;
   Bool_t          L1_XE20;
   Bool_t          L1_XE30;
   Bool_t          L1_ZDC;
   Bool_t          L1_ZDC_A;
   Bool_t          L1_ZDC_AND;
   Bool_t          L1_ZDC_AND_EMPTY;
   Bool_t          L1_ZDC_A_C;
   Bool_t          L1_ZDC_A_C_EMPTY;
   Bool_t          L1_ZDC_A_EMPTY;
   Bool_t          L1_ZDC_C;
   Bool_t          L1_ZDC_C_EMPTY;
   Bool_t          L1_ZDC_EMPTY;
   Bool_t          L1_ZDC_UNPAIRED;
   Bool_t          L2_2MUL1_j40_HV;
   Bool_t          L2_2j15;
   Bool_t          L2_2j15_deta3_5;
   Bool_t          L2_2j30;
   Bool_t          L2_2j30_deta3_5;
   Bool_t          L2_2j7;
   Bool_t          L2_2j7_deta3_5;
   Bool_t          L2_2j7_deta5;
   Bool_t          L2_2mu10;
   Bool_t          L2_2mu4;
   Bool_t          L2_2mu4_DiMu;
   Bool_t          L2_2mu4_DiMu_SiTrk;
   Bool_t          L2_2mu4_DiMu_noOS;
   Bool_t          L2_2mu4_DiMu_noOS_passL2;
   Bool_t          L2_2mu4_DiMu_noVtx_noOS;
   Bool_t          L2_2mu4_DiMu_noVtx_noOS_passL2;
   Bool_t          L2_2mu4_MSonly;
   Bool_t          L2_2mu6;
   Bool_t          L2_2mu6_DiMu;
   Bool_t          L2_2mu6_DiMu_noVtx_noOS;
   Bool_t          L2_3j15;
   Bool_t          L2_EFInsideOut_FS_MB2;
   Bool_t          L2_EFTRTOnly_FS_MB2;
   Bool_t          L2_FJ18;
   Bool_t          L2_FJ3;
   Bool_t          L2_L1ItemStreamer_L1_2EM2;
   Bool_t          L2_L1ItemStreamer_L1_2EM3;
   Bool_t          L2_L1ItemStreamer_L1_2EM4;
   Bool_t          L2_L1ItemStreamer_L1_2EM5;
   Bool_t          L2_L1ItemStreamer_L1_2EM5I;
   Bool_t          L2_L1ItemStreamer_L1_2FJ18;
   Bool_t          L2_L1ItemStreamer_L1_2FJ3;
   Bool_t          L2_L1ItemStreamer_L1_2J10;
   Bool_t          L2_L1ItemStreamer_L1_2J10_win6;
   Bool_t          L2_L1ItemStreamer_L1_2J15;
   Bool_t          L2_L1ItemStreamer_L1_2J5;
   Bool_t          L2_L1ItemStreamer_L1_2MU0;
   Bool_t          L2_L1ItemStreamer_L1_2MU0_MU6;
   Bool_t          L2_L1ItemStreamer_L1_2MU10;
   Bool_t          L2_L1ItemStreamer_L1_2MU6;
   Bool_t          L2_L1ItemStreamer_L1_2TAU5;
   Bool_t          L2_L1ItemStreamer_L1_2TAU6;
   Bool_t          L2_L1ItemStreamer_L1_2TAU6I;
   Bool_t          L2_L1ItemStreamer_L1_3J10;
   Bool_t          L2_L1ItemStreamer_L1_BCM_AtoC;
   Bool_t          L2_L1ItemStreamer_L1_BCM_AtoC_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_BCM_CtoA;
   Bool_t          L2_L1ItemStreamer_L1_BCM_CtoA_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_BCM_HT;
   Bool_t          L2_L1ItemStreamer_L1_BCM_HT_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_BCM_MUL_1;
   Bool_t          L2_L1ItemStreamer_L1_BCM_MUL_1_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_BCM_MUL_2;
   Bool_t          L2_L1ItemStreamer_L1_BCM_MUL_2_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_BCM_MUL_3;
   Bool_t          L2_L1ItemStreamer_L1_BCM_MUL_3_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_BCM_MUL_4;
   Bool_t          L2_L1ItemStreamer_L1_BCM_MUL_4_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_BCM_MUL_5;
   Bool_t          L2_L1ItemStreamer_L1_BCM_MUL_5_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_BCM_MUL_6;
   Bool_t          L2_L1ItemStreamer_L1_BCM_MUL_6_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_BCM_Wide;
   Bool_t          L2_L1ItemStreamer_L1_BCM_Wide_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_BGRP0;
   Bool_t          L2_L1ItemStreamer_L1_BGRP1;
   Bool_t          L2_L1ItemStreamer_L1_BPTX0_BGRP0;
   Bool_t          L2_L1ItemStreamer_L1_BPTX0_BPTX1_BGRP0;
   Bool_t          L2_L1ItemStreamer_L1_BPTX1_BGRP0;
   Bool_t          L2_L1ItemStreamer_L1_EM10;
   Bool_t          L2_L1ItemStreamer_L1_EM10I;
   Bool_t          L2_L1ItemStreamer_L1_EM14;
   Bool_t          L2_L1ItemStreamer_L1_EM2;
   Bool_t          L2_L1ItemStreamer_L1_EM3;
   Bool_t          L2_L1ItemStreamer_L1_EM3_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_EM3_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_EM4;
   Bool_t          L2_L1ItemStreamer_L1_EM5;
   Bool_t          L2_L1ItemStreamer_L1_EM5I;
   Bool_t          L2_L1ItemStreamer_L1_FJ18;
   Bool_t          L2_L1ItemStreamer_L1_FJ3;
   Bool_t          L2_L1ItemStreamer_L1_FJ3_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_FJ3_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_J10;
   Bool_t          L2_L1ItemStreamer_L1_J10_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_J10_win6;
   Bool_t          L2_L1ItemStreamer_L1_J15;
   Bool_t          L2_L1ItemStreamer_L1_J15_LV;
   Bool_t          L2_L1ItemStreamer_L1_J15_MV;
   Bool_t          L2_L1ItemStreamer_L1_J15_NL;
   Bool_t          L2_L1ItemStreamer_L1_J30;
   Bool_t          L2_L1ItemStreamer_L1_J30_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_J5;
   Bool_t          L2_L1ItemStreamer_L1_J55;
   Bool_t          L2_L1ItemStreamer_L1_J5_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_J5_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_J75;
   Bool_t          L2_L1ItemStreamer_L1_JE120;
   Bool_t          L2_L1ItemStreamer_L1_JE280;
   Bool_t          L2_L1ItemStreamer_L1_L1A_Mon;
   Bool_t          L2_L1ItemStreamer_L1_LUCID;
   Bool_t          L2_L1ItemStreamer_L1_LUCID_A;
   Bool_t          L2_L1ItemStreamer_L1_LUCID_A_C;
   Bool_t          L2_L1ItemStreamer_L1_LUCID_A_C_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_LUCID_A_C_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_LUCID_A_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_LUCID_A_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_LUCID_C;
   Bool_t          L2_L1ItemStreamer_L1_LUCID_COMM;
   Bool_t          L2_L1ItemStreamer_L1_LUCID_COMM_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_LUCID_C_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_LUCID_C_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_LUCID_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA0;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA1;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA10;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA11;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA12;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA13;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA14;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA15;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA2;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA3;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA4;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA5;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA6;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA7;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA8;
   Bool_t          L2_L1ItemStreamer_L1_MBTSA9;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC0;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC1;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC10;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC11;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC12;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC13;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC14;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC15;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC2;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC3;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC4;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC5;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC6;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC7;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC8;
   Bool_t          L2_L1ItemStreamer_L1_MBTSC9;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_1;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_1_1;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_1_1_Col;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_1_1_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED1;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED2;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_1_Col;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_1_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED1;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED2;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_2;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_2_Col;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_2_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED1;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED2;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_4_4;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED1;
   Bool_t          L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED2;
   Bool_t          L2_L1ItemStreamer_L1_MU0;
   Bool_t          L2_L1ItemStreamer_L1_MU0_COMM;
   Bool_t          L2_L1ItemStreamer_L1_MU0_COMM_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_MU0_EM3;
   Bool_t          L2_L1ItemStreamer_L1_MU0_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_MU0_J5;
   Bool_t          L2_L1ItemStreamer_L1_MU0_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_MU10;
   Bool_t          L2_L1ItemStreamer_L1_MU10_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_MU15;
   Bool_t          L2_L1ItemStreamer_L1_MU20;
   Bool_t          L2_L1ItemStreamer_L1_MU6;
   Bool_t          L2_L1ItemStreamer_L1_MU6_EM3;
   Bool_t          L2_L1ItemStreamer_L1_MU6_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_MU6_J5;
   Bool_t          L2_L1ItemStreamer_L1_MU6_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_NIM_S9C0A20;
   Bool_t          L2_L1ItemStreamer_L1_NIM_S9C1C19;
   Bool_t          L2_L1ItemStreamer_L1_NIM_S9C1C20;
   Bool_t          L2_L1ItemStreamer_L1_RD0_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_RD0_FILLED;
   Bool_t          L2_L1ItemStreamer_L1_RD0_FIRSTEMPTY;
   Bool_t          L2_L1ItemStreamer_L1_RD0_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_RD1_FILLED;
   Bool_t          L2_L1ItemStreamer_L1_TAU11;
   Bool_t          L2_L1ItemStreamer_L1_TAU11I;
   Bool_t          L2_L1ItemStreamer_L1_TAU20;
   Bool_t          L2_L1ItemStreamer_L1_TAU30;
   Bool_t          L2_L1ItemStreamer_L1_TAU5;
   Bool_t          L2_L1ItemStreamer_L1_TAU5_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_TAU5_UNPAIRED;
   Bool_t          L2_L1ItemStreamer_L1_TAU6;
   Bool_t          L2_L1ItemStreamer_L1_TAU6I;
   Bool_t          L2_L1ItemStreamer_L1_TAU6_XE10;
   Bool_t          L2_L1ItemStreamer_L1_TAU8;
   Bool_t          L2_L1ItemStreamer_L1_TE10;
   Bool_t          L2_L1ItemStreamer_L1_TE100;
   Bool_t          L2_L1ItemStreamer_L1_TRT;
   Bool_t          L2_L1ItemStreamer_L1_XE10;
   Bool_t          L2_L1ItemStreamer_L1_XE15;
   Bool_t          L2_L1ItemStreamer_L1_XE20;
   Bool_t          L2_L1ItemStreamer_L1_XE30;
   Bool_t          L2_L1ItemStreamer_L1_ZDC;
   Bool_t          L2_L1ItemStreamer_L1_ZDC_A;
   Bool_t          L2_L1ItemStreamer_L1_ZDC_AND;
   Bool_t          L2_L1ItemStreamer_L1_ZDC_AND_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_ZDC_A_C;
   Bool_t          L2_L1ItemStreamer_L1_ZDC_A_C_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_ZDC_A_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_ZDC_C;
   Bool_t          L2_L1ItemStreamer_L1_ZDC_C_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_ZDC_EMPTY;
   Bool_t          L2_L1ItemStreamer_L1_ZDC_UNPAIRED;
   Bool_t          L2_L2IdScan_FS_MB2;
   Bool_t          L2_L2SiTrack_FS_MB2;
   Bool_t          L2_MU4_DiMu;
   Bool_t          L2_MU4_DiMu_FS;
   Bool_t          L2_MU4_DiMu_FS_noOS;
   Bool_t          L2_MU4_DiMu_FS_noOS_passL2;
   Bool_t          L2_MU4_DiMu_MG_FS;
   Bool_t          L2_MU4_DiMu_SiTrk_FS;
   Bool_t          L2_MU4_DiMu_noOS;
   Bool_t          L2_MU4_DiMu_noOS_passL2;
   Bool_t          L2_MU4_Trk_Jpsi;
   Bool_t          L2_MU4_Trk_Jpsi_FS;
   Bool_t          L2_MU4_Trk_Jpsi_loose;
   Bool_t          L2_MU4_Trk_Jpsi_loose_FS;
   Bool_t          L2_MU4_Trk_Jpsi_loose_FS_passL2;
   Bool_t          L2_MU4_Trk_Jpsi_loose_passL2;
   Bool_t          L2_MU4_Trk_Upsi_loose_FS;
   Bool_t          L2_MU4_Trk_Upsi_loose_FS_passL2;
   Bool_t          L2_MU6_DiMu;
   Bool_t          L2_MU6_DiMu_FS;
   Bool_t          L2_MU6_Jpsie5e3;
   Bool_t          L2_MU6_Jpsie5e3_FS;
   Bool_t          L2_MU6_Jpsie5e3_SiTrk_FS;
   Bool_t          L2_MU6_Trk_Jpsi_loose;
   Bool_t          L2_MU6_Trk_Jpsi_loose_FS;
   Bool_t          L2_MU6_Trk_Upsi_loose_FS;
   Bool_t          L2_PixelNoise;
   Bool_t          L2_SCTNoise;
   Bool_t          L2_SeededStreamerBCM_LUCID_ZDC;
   Bool_t          L2_SeededStreamerCosmicCalo;
   Bool_t          L2_SeededStreamerCosmicCaloEM;
   Bool_t          L2_SeededStreamerCosmicMuons;
   Bool_t          L2_SeededStreamerL1Calo;
   Bool_t          L2_SeededStreamerL1CaloEM;
   Bool_t          L2_SeededStreamerL1CaloJet;
   Bool_t          L2_SeededStreamerL1CaloTau;
   Bool_t          L2_SeededStreamerMBTS;
   Bool_t          L2_SeededStreamerMinBias;
   Bool_t          L2_SeededStreamerMuonswBeam;
   Bool_t          L2_SeededStreamerRNDM;
   Bool_t          L2_SeededStreamerWarmStart;
   Bool_t          L2_SeededStreamerZeroBias;
   Bool_t          L2_TileCalib_cis;
   Bool_t          L2_TileCalib_laser;
   Bool_t          L2_TileMon;
   Bool_t          L2_allID_IDCalib;
   Bool_t          L2_cost_monitor;
   Bool_t          L2_e10_loose;
   Bool_t          L2_e10_loose_passEF;
   Bool_t          L2_e10_loose_passL2;
   Bool_t          L2_e10_medium;
   Bool_t          L2_e20_loose_NoIDTrkCut;
   Bool_t          L2_e3_NoCut;
   Bool_t          L2_e3_NoCut_IdScan;
   Bool_t          L2_e3_NoCut_TRT;
   Bool_t          L2_e5_NoCut;
   Bool_t          L2_e5_NoCut_FwdBackTrk;
   Bool_t          L2_e5_NoCut_IdScan;
   Bool_t          L2_e5_NoCut_SiTrk;
   Bool_t          L2_e5_NoCut_TRT;
   Bool_t          L2_e5_NoCut_cells;
   Bool_t          L2_e5_loose;
   Bool_t          L2_e5_loose_IdScan;
   Bool_t          L2_e5_loose_NoIDTrkCut;
   Bool_t          L2_e5_loose_TRT;
   Bool_t          L2_e5_medium;
   Bool_t          L2_e5_medium_IdScan;
   Bool_t          L2_e5_medium_TRT;
   Bool_t          L2_g10_loose;
   Bool_t          L2_g3_nocut;
   Bool_t          L2_g5_loose;
   Bool_t          L2_g5_nocut;
   Bool_t          L2_j130;
   Bool_t          L2_j15;
   Bool_t          L2_j15_noise;
   Bool_t          L2_j20_Trackless_HV;
   Bool_t          L2_j30;
   Bool_t          L2_j30_L1TAU_HV;
   Bool_t          L2_j60;
   Bool_t          L2_j7;
   Bool_t          L2_j7_noise;
   Bool_t          L2_j90;
   Bool_t          L2_mbBcm;
   Bool_t          L2_mbLucid;
   Bool_t          L2_mbMbts_1;
   Bool_t          L2_mbMbts_1_1;
   Bool_t          L2_mbMbts_1_1_NoCut_Time;
   Bool_t          L2_mbMbts_1_NoCut_Time;
   Bool_t          L2_mbMbts_1_NoCut_Time_unpaired;
   Bool_t          L2_mbMbts_2;
   Bool_t          L2_mbMbts_2_NoCut_Time;
   Bool_t          L2_mbRmMbts_1;
   Bool_t          L2_mbRmMbts_1_1;
   Bool_t          L2_mbRmMbts_1_1_NoCut_Time;
   Bool_t          L2_mbRmMbts_1_NoCut_Time;
   Bool_t          L2_mbRmMbts_1_NoCut_Time_unpaired;
   Bool_t          L2_mbRmMbts_1_unpaired;
   Bool_t          L2_mbRmMbts_2;
   Bool_t          L2_mbRmMbts_2_NoCut_Time;
   Bool_t          L2_mbRndm;
   Bool_t          L2_mbSpTrk;
   Bool_t          L2_mbSpTrk_cosmic;
   Bool_t          L2_mbSpTrk_unpaired;
   Bool_t          L2_mbSp_fwd;
   Bool_t          L2_mbSp_oneD;
   Bool_t          L2_mbTrtTrk;
   Bool_t          L2_mbTrtTrk_unpaired;
   Bool_t          L2_mbZdc;
   Bool_t          L2_mb_BM_calib;
   Bool_t          L2_mb_LD_calib;
   Bool_t          L2_mb_M1_calib;
   Bool_t          L2_mb_M1_calib_unpaired;
   Bool_t          L2_mb_M2_calib;
   Bool_t          L2_mb_M2_calib_unpaired;
   Bool_t          L2_mb_MU;
   Bool_t          L2_mb_RM_calib;
   Bool_t          L2_mb_RM_calib_cosmic;
   Bool_t          L2_mb_RM_calib_unpaired;
   Bool_t          L2_mb_ZC_calib;
   Bool_t          L2_mu10;
   Bool_t          L2_mu10_MG;
   Bool_t          L2_mu10_MSonly;
   Bool_t          L2_mu10_NoIDTrkCut;
   Bool_t          L2_mu10_SiTrk;
   Bool_t          L2_mu10_passHLT;
   Bool_t          L2_mu10i_loose;
   Bool_t          L2_mu13;
   Bool_t          L2_mu15;
   Bool_t          L2_mu20;
   Bool_t          L2_mu20_MSonly;
   Bool_t          L2_mu20_passHLT;
   Bool_t          L2_mu4;
   Bool_t          L2_mu4_DiMu;
   Bool_t          L2_mu4_DiMu_FS;
   Bool_t          L2_mu4_DiMu_FS_noOS;
   Bool_t          L2_mu4_L2MSonly_EFFS_passL2;
   Bool_t          L2_mu4_MB2_noL2_EFFS;
   Bool_t          L2_mu4_MG;
   Bool_t          L2_mu4_MSonly;
   Bool_t          L2_mu4_MSonly_EFFS_passL2;
   Bool_t          L2_mu4_MSonly_Trk_Jpsi_loose;
   Bool_t          L2_mu4_MSonly_Trk_Upsi_loose_FS;
   Bool_t          L2_mu4_NoIDTrkCut;
   Bool_t          L2_mu4_SiTrk;
   Bool_t          L2_mu4_Trk_Jpsi_loose;
   Bool_t          L2_mu4_Trk_Upsi_loose_FS;
   Bool_t          L2_mu4_mu6;
   Bool_t          L2_mu4_passHLT;
   Bool_t          L2_mu4_tile;
   Bool_t          L2_mu4_tile_SiTrk;
   Bool_t          L2_mu4_trod;
   Bool_t          L2_mu4_trod_SiTrk;
   Bool_t          L2_mu4mu6_DiMu;
   Bool_t          L2_mu6;
   Bool_t          L2_mu6_DiMu;
   Bool_t          L2_mu6_DiMu_FS;
   Bool_t          L2_mu6_DiMu_FS_noOS;
   Bool_t          L2_mu6_Jpsie5e3;
   Bool_t          L2_mu6_MG;
   Bool_t          L2_mu6_MSonly;
   Bool_t          L2_mu6_SiTrk;
   Bool_t          L2_mu6_Trk_Jpsi_loose;
   Bool_t          L2_mu6_Trk_Jpsi_loose_FS;
   Bool_t          L2_mu6_Trk_Upsi_loose_FS;
   Bool_t          L2_mu6_passHLT;
   Bool_t          L2_te100;
   Bool_t          L2_trk2_FullScan_IDSCAN_IDCalib;
   Bool_t          L2_trk2_FullScan_SiTrk_IDCalib;
   Bool_t          L2_trk2_IDSCAN_IDCalib;
   Bool_t          L2_trk2_SiTrk_IDCalib;
   Bool_t          L2_trk2_eGamma_IDSCAN_IDCalib;
   Bool_t          L2_trk2_eGamma_SiTrk_IDCalib;
   Bool_t          L2_trk6_IDSCAN_IDCalib;
   Bool_t          L2_trk6_SiTrk_IDCalib;
   Bool_t          L2_trk9_Central_Tau_IDCalib;
   Bool_t          L2_trk9_Central_Tau_SiTrack_IDCalib;
   Bool_t          L2_trk9_Fwd_Tau_IDCalib;
   Bool_t          L2_trk9_Fwd_Tau_SiTrack_IDCalib;
   Bool_t          L2_trk9_loose;
   Bool_t          L2_vtxbeamspot_FSTracks;
   Bool_t          L2_vtxbeamspot_FSTracks_SiTrk;
   Bool_t          L2_vtxbeamspot_activeTE_SiTrk_peb;
   Bool_t          L2_vtxbeamspot_activeTE_peb;
   Bool_t          L2_vtxbeamspot_allTE_SiTrk_peb;
   Bool_t          L2_vtxbeamspot_allTE_peb;
   Bool_t          L2_xe15;
   Bool_t          L2_xe15_FEB;
   Bool_t          L2_xe15_allCells;
   Bool_t          L2_xe30_allL1;
   Bool_t          L2_xe30_allL1_FEB;
   Bool_t          L2_xe30_allL1_allCells;
   Bool_t          L2_xe30_unbiased;
   Bool_t          L2_xe30_unbiased_FEB;
   Bool_t          L2_xe30_unbiased_allCells;
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
   Int_t           cl_n;
   vector<float>   *cl_E;
   vector<float>   *cl_pt;
   vector<float>   *cl_m;
   vector<float>   *cl_eta;
   vector<float>   *cl_phi;
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
   Int_t           trig_L2_emcl_n;
   vector<unsigned int> *trig_L2_emcl_quality;
   vector<float>   *trig_L2_emcl_E;
   vector<float>   *trig_L2_emcl_Et;
   vector<float>   *trig_L2_emcl_eta;
   vector<float>   *trig_L2_emcl_phi;
   vector<float>   *trig_L2_emcl_E237;
   vector<float>   *trig_L2_emcl_E277;
   vector<float>   *trig_L2_emcl_fracs1;
   vector<float>   *trig_L2_emcl_weta2;
   vector<float>   *trig_L2_emcl_Ehad1;
   vector<float>   *trig_L2_emcl_eta1;
   vector<float>   *trig_L2_emcl_emaxs1;
   vector<float>   *trig_L2_emcl_e2tsts1;
   Int_t           trig_L2_trk_idscan_eGamma_n;
   vector<int>     *trig_L2_trk_idscan_eGamma_algorithmId;
   vector<short>   *trig_L2_trk_idscan_eGamma_trackStatus;
   vector<float>   *trig_L2_trk_idscan_eGamma_chi2Ndof;
   vector<int>     *trig_L2_trk_idscan_eGamma_nStrawHits;
   vector<int>     *trig_L2_trk_idscan_eGamma_nHighThrHits;
   vector<int>     *trig_L2_trk_idscan_eGamma_nPixelSpacePoints;
   vector<int>     *trig_L2_trk_idscan_eGamma_nSCT_SpacePoints;
   vector<float>   *trig_L2_trk_idscan_eGamma_a0;
   vector<float>   *trig_L2_trk_idscan_eGamma_z0;
   vector<float>   *trig_L2_trk_idscan_eGamma_phi0;
   vector<float>   *trig_L2_trk_idscan_eGamma_eta;
   vector<float>   *trig_L2_trk_idscan_eGamma_pt;
   Int_t           trig_L2_trk_sitrack_eGamma_n;
   vector<int>     *trig_L2_trk_sitrack_eGamma_algorithmId;
   vector<short>   *trig_L2_trk_sitrack_eGamma_trackStatus;
   vector<float>   *trig_L2_trk_sitrack_eGamma_chi2Ndof;
   vector<int>     *trig_L2_trk_sitrack_eGamma_nStrawHits;
   vector<int>     *trig_L2_trk_sitrack_eGamma_nHighThrHits;
   vector<int>     *trig_L2_trk_sitrack_eGamma_nPixelSpacePoints;
   vector<int>     *trig_L2_trk_sitrack_eGamma_nSCT_SpacePoints;
   vector<float>   *trig_L2_trk_sitrack_eGamma_a0;
   vector<float>   *trig_L2_trk_sitrack_eGamma_z0;
   vector<float>   *trig_L2_trk_sitrack_eGamma_phi0;
   vector<float>   *trig_L2_trk_sitrack_eGamma_eta;
   vector<float>   *trig_L2_trk_sitrack_eGamma_pt;
   Int_t           trig_EF_emcl_n;
   vector<float>   *trig_EF_emcl_E;
   vector<float>   *trig_EF_emcl_pt;
   vector<float>   *trig_EF_emcl_m;
   vector<float>   *trig_EF_emcl_eta;
   vector<float>   *trig_EF_emcl_phi;
   vector<float>   *trig_EF_emcl_E_em;
   vector<float>   *trig_EF_emcl_E_had;
   vector<float>   *trig_EF_emcl_firstEdens;
   vector<float>   *trig_EF_emcl_cellmaxfrac;
   vector<float>   *trig_EF_emcl_longitudinal;
   vector<float>   *trig_EF_emcl_secondlambda;
   vector<float>   *trig_EF_emcl_lateral;
   vector<float>   *trig_EF_emcl_secondR;
   vector<float>   *trig_EF_emcl_centerlambda;
   vector<float>   *trig_EF_emcl_deltaTheta;
   vector<float>   *trig_EF_emcl_deltaPhi;
   vector<float>   *trig_EF_emcl_time;
   Int_t           trig_EF_emcl_slw_n;
   vector<float>   *trig_EF_emcl_slw_E;
   vector<float>   *trig_EF_emcl_slw_pt;
   vector<float>   *trig_EF_emcl_slw_m;
   vector<float>   *trig_EF_emcl_slw_eta;
   vector<float>   *trig_EF_emcl_slw_phi;
   vector<float>   *trig_EF_emcl_slw_E_em;
   vector<float>   *trig_EF_emcl_slw_E_had;
   vector<float>   *trig_EF_emcl_slw_firstEdens;
   vector<float>   *trig_EF_emcl_slw_cellmaxfrac;
   vector<float>   *trig_EF_emcl_slw_longitudinal;
   vector<float>   *trig_EF_emcl_slw_secondlambda;
   vector<float>   *trig_EF_emcl_slw_lateral;
   vector<float>   *trig_EF_emcl_slw_secondR;
   vector<float>   *trig_EF_emcl_slw_centerlambda;
   vector<float>   *trig_EF_emcl_slw_deltaTheta;
   vector<float>   *trig_EF_emcl_slw_deltaPhi;
   vector<float>   *trig_EF_emcl_slw_time;
   Int_t           trig_Nav_n;
   vector<short>   *trig_Nav_chain_ChainId;
   vector<vector<int> > *trig_Nav_chain_RoIType;
   vector<vector<int> > *trig_Nav_chain_RoIIndex;
   Int_t           trig_RoI_L2_e_n;
   vector<short>   *trig_RoI_L2_e_type;
   vector<short>   *trig_RoI_L2_e_lastStep;
   vector<int>     *trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgamma;
   vector<int>     *trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgammaStatus;
   vector<int>     *trig_RoI_L2_e_TrigEMCluster;
   vector<int>     *trig_RoI_L2_e_TrigEMClusterStatus;
   vector<int>     *trig_RoI_L2_e_EmTau_ROI;
   vector<int>     *trig_RoI_L2_e_EmTau_ROIStatus;
   vector<vector<int> > *trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGamma;
   vector<vector<int> > *trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGammaStatus;
   vector<vector<int> > *trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGamma;
   vector<vector<int> > *trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGammaStatus;
   vector<vector<int> > *trig_RoI_L2_e_TrigElectronContainer;
   vector<vector<int> > *trig_RoI_L2_e_TrigElectronContainerStatus;
   vector<vector<int> > *trig_RoI_L2_e_TrigPhotonContainer;
   vector<vector<int> > *trig_RoI_L2_e_TrigPhotonContainerStatus;
   Int_t           trig_RoI_EF_e_n;
   vector<short>   *trig_RoI_EF_e_type;
   vector<short>   *trig_RoI_EF_e_lastStep;
   vector<int>     *trig_RoI_EF_e_EmTau_ROI;
   vector<int>     *trig_RoI_EF_e_EmTau_ROIStatus;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_Electrons;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_Photons;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus;
   UInt_t          trig_DB_SMK;
   UInt_t          trig_DB_L1PSK;
   UInt_t          trig_DB_HLTPSK;
   vector<string>  *trig_L1_esum_thrNames;
   Float_t         trig_L1_esum_energyX;
   Float_t         trig_L1_esum_energyY;
   Float_t         trig_L1_esum_energyT;
   Bool_t          trig_L1_esum_overflowX;
   Bool_t          trig_L1_esum_overflowY;
   Bool_t          trig_L1_esum_overflowT;
   UInt_t          trig_L1_esum_RoIWord0;
   UInt_t          trig_L1_esum_RoIWord1;
   UInt_t          trig_L1_esum_RoIWord2;
   Int_t           trig_L1_jet_n;
   vector<vector<string> > *trig_L1_jet_thrNames;
   vector<vector<float> > *trig_L1_jet_thrValues;
   vector<unsigned int> *trig_L1_jet_thrPattern;
   vector<float>   *trig_L1_jet_et4x4;
   vector<float>   *trig_L1_jet_et6x6;
   vector<float>   *trig_L1_jet_et8x8;
   vector<unsigned int> *trig_L1_jet_RoIWord;
   vector<float>   *trig_L1_jet_E;
   vector<float>   *trig_L1_jet_pt;
   vector<float>   *trig_L1_jet_eta;
   vector<float>   *trig_L1_jet_phi;
   vector<string>  *trig_L1_jetet_thrNames;
   UInt_t          trig_L1_jetet_thrPattern;
   UInt_t          trig_L1_jetet_RoIWord;
   Int_t           trig_L1_mu_n;
   vector<float>   *trig_L1_mu_pt;
   vector<float>   *trig_L1_mu_eta;
   vector<float>   *trig_L1_mu_phi;
   vector<string>  *trig_L1_mu_thrName;
   vector<short>   *trig_L1_mu_thrNumber;
   vector<short>   *trig_L1_mu_RoINumber;
   vector<short>   *trig_L1_mu_sectorAddress;
   vector<int>     *trig_L1_mu_firstCandidate;
   vector<int>     *trig_L1_mu_moreCandInRoI;
   vector<int>     *trig_L1_mu_moreCandInSector;
   vector<short>   *trig_L1_mu_source;
   vector<short>   *trig_L1_mu_hemisphere;
   vector<unsigned int> *trig_L1_mu_RoIWord;
   Int_t           trig_L2_muonfeature_n;
   vector<float>   *trig_L2_muonfeature_pt;
   vector<float>   *trig_L2_muonfeature_eta;
   vector<float>   *trig_L2_muonfeature_phi;
   vector<float>   *trig_L2_muonfeature_dir_phi;
   vector<float>   *trig_L2_muonfeature_zeta;
   vector<float>   *trig_L2_muonfeature_dir_zeta;
   vector<float>   *trig_L2_muonfeature_radius;
   vector<float>   *trig_L2_muonfeature_beta;
   vector<float>   *trig_L2_muonfeature_br_radius;
   vector<float>   *trig_L2_muonfeature_br_sagitta;
   vector<float>   *trig_L2_muonfeature_ec_alpha;
   vector<float>   *trig_L2_muonfeature_ec_beta;
   vector<int>     *trig_L2_muonfeature_roiId;
   vector<int>     *trig_L2_muonfeature_saddress;
   vector<float>   *trig_L2_muonfeature_sp1_r;
   vector<float>   *trig_L2_muonfeature_sp1_z;
   vector<float>   *trig_L2_muonfeature_sp1_slope;
   vector<float>   *trig_L2_muonfeature_sp2_r;
   vector<float>   *trig_L2_muonfeature_sp2_z;
   vector<float>   *trig_L2_muonfeature_sp2_slope;
   vector<float>   *trig_L2_muonfeature_sp3_r;
   vector<float>   *trig_L2_muonfeature_sp3_z;
   vector<float>   *trig_L2_muonfeature_sp3_slope;
   vector<double>  *trig_L2_muonfeature_dq_var1;
   vector<double>  *trig_L2_muonfeature_dq_var2;
   vector<int>     *trig_L2_muonfeature_L2_2mu10;
   vector<int>     *trig_L2_muonfeature_L2_2mu4;
   vector<int>     *trig_L2_muonfeature_L2_2mu4_DiMu;
   vector<int>     *trig_L2_muonfeature_L2_2mu4_DiMu_SiTrk;
   vector<int>     *trig_L2_muonfeature_L2_2mu4_DiMu_noOS;
   vector<int>     *trig_L2_muonfeature_L2_2mu4_DiMu_noOS_passL2;
   vector<int>     *trig_L2_muonfeature_L2_2mu4_DiMu_noVtx_noOS;
   vector<int>     *trig_L2_muonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2;
   vector<int>     *trig_L2_muonfeature_L2_2mu4_MSonly;
   vector<int>     *trig_L2_muonfeature_L2_2mu6;
   vector<int>     *trig_L2_muonfeature_L2_2mu6_DiMu;
   vector<int>     *trig_L2_muonfeature_L2_2mu6_DiMu_noVtx_noOS;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU0;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU0_MU6;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU10;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU6;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_EM3;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_J5;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU10;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU15;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU20;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_EM3;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_J5;
   vector<int>     *trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED;
   vector<int>     *trig_L2_muonfeature_L2_mu10;
   vector<int>     *trig_L2_muonfeature_L2_mu10_MG;
   vector<int>     *trig_L2_muonfeature_L2_mu10_MSonly;
   vector<int>     *trig_L2_muonfeature_L2_mu10_NoIDTrkCut;
   vector<int>     *trig_L2_muonfeature_L2_mu10_SiTrk;
   vector<int>     *trig_L2_muonfeature_L2_mu10_passHLT;
   vector<int>     *trig_L2_muonfeature_L2_mu10i_loose;
   vector<int>     *trig_L2_muonfeature_L2_mu13;
   vector<int>     *trig_L2_muonfeature_L2_mu15;
   vector<int>     *trig_L2_muonfeature_L2_mu20;
   vector<int>     *trig_L2_muonfeature_L2_mu20_MSonly;
   vector<int>     *trig_L2_muonfeature_L2_mu20_passHLT;
   vector<int>     *trig_L2_muonfeature_L2_mu4;
   vector<int>     *trig_L2_muonfeature_L2_mu4_DiMu;
   vector<int>     *trig_L2_muonfeature_L2_mu4_DiMu_FS;
   vector<int>     *trig_L2_muonfeature_L2_mu4_DiMu_FS_noOS;
   vector<int>     *trig_L2_muonfeature_L2_mu4_L2MSonly_EFFS_passL2;
   vector<int>     *trig_L2_muonfeature_L2_mu4_MB2_noL2_EFFS;
   vector<int>     *trig_L2_muonfeature_L2_mu4_MG;
   vector<int>     *trig_L2_muonfeature_L2_mu4_MSonly;
   vector<int>     *trig_L2_muonfeature_L2_mu4_MSonly_EFFS_passL2;
   vector<int>     *trig_L2_muonfeature_L2_mu4_MSonly_Trk_Jpsi_loose;
   vector<int>     *trig_L2_muonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_muonfeature_L2_mu4_NoIDTrkCut;
   vector<int>     *trig_L2_muonfeature_L2_mu4_SiTrk;
   vector<int>     *trig_L2_muonfeature_L2_mu4_Trk_Jpsi_loose;
   vector<int>     *trig_L2_muonfeature_L2_mu4_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_muonfeature_L2_mu4_mu6;
   vector<int>     *trig_L2_muonfeature_L2_mu4_passHLT;
   vector<int>     *trig_L2_muonfeature_L2_mu4_tile;
   vector<int>     *trig_L2_muonfeature_L2_mu4_tile_SiTrk;
   vector<int>     *trig_L2_muonfeature_L2_mu4_trod;
   vector<int>     *trig_L2_muonfeature_L2_mu4_trod_SiTrk;
   vector<int>     *trig_L2_muonfeature_L2_mu4mu6_DiMu;
   vector<int>     *trig_L2_muonfeature_L2_mu6;
   vector<int>     *trig_L2_muonfeature_L2_mu6_DiMu;
   vector<int>     *trig_L2_muonfeature_L2_mu6_DiMu_FS;
   vector<int>     *trig_L2_muonfeature_L2_mu6_DiMu_FS_noOS;
   vector<int>     *trig_L2_muonfeature_L2_mu6_Jpsie5e3;
   vector<int>     *trig_L2_muonfeature_L2_mu6_MG;
   vector<int>     *trig_L2_muonfeature_L2_mu6_MSonly;
   vector<int>     *trig_L2_muonfeature_L2_mu6_SiTrk;
   vector<int>     *trig_L2_muonfeature_L2_mu6_Trk_Jpsi_loose;
   vector<int>     *trig_L2_muonfeature_L2_mu6_Trk_Jpsi_loose_FS;
   vector<int>     *trig_L2_muonfeature_L2_mu6_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_muonfeature_L2_mu6_passHLT;
   Int_t           trig_L2_combmuonfeature_n;
   vector<float>   *trig_L2_combmuonfeature_pt;
   vector<float>   *trig_L2_combmuonfeature_eta;
   vector<float>   *trig_L2_combmuonfeature_phi;
   vector<float>   *trig_L2_combmuonfeature_sigma_pt;
   vector<int>     *trig_L2_combmuonfeature_L2_2mu10;
   vector<int>     *trig_L2_combmuonfeature_L2_2mu4;
   vector<int>     *trig_L2_combmuonfeature_L2_2mu4_DiMu;
   vector<int>     *trig_L2_combmuonfeature_L2_2mu4_DiMu_SiTrk;
   vector<int>     *trig_L2_combmuonfeature_L2_2mu4_DiMu_noOS;
   vector<int>     *trig_L2_combmuonfeature_L2_2mu4_DiMu_noOS_passL2;
   vector<int>     *trig_L2_combmuonfeature_L2_2mu4_DiMu_noVtx_noOS;
   vector<int>     *trig_L2_combmuonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2;
   vector<int>     *trig_L2_combmuonfeature_L2_2mu4_MSonly;
   vector<int>     *trig_L2_combmuonfeature_L2_2mu6;
   vector<int>     *trig_L2_combmuonfeature_L2_2mu6_DiMu;
   vector<int>     *trig_L2_combmuonfeature_L2_2mu6_DiMu_noVtx_noOS;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU0;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU0_MU6;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU10;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU6;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_EM3;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_J5;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU10;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU15;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU20;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_EM3;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_J5;
   vector<int>     *trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED;
   vector<int>     *trig_L2_combmuonfeature_L2_mu10;
   vector<int>     *trig_L2_combmuonfeature_L2_mu10_MG;
   vector<int>     *trig_L2_combmuonfeature_L2_mu10_MSonly;
   vector<int>     *trig_L2_combmuonfeature_L2_mu10_NoIDTrkCut;
   vector<int>     *trig_L2_combmuonfeature_L2_mu10_SiTrk;
   vector<int>     *trig_L2_combmuonfeature_L2_mu10_passHLT;
   vector<int>     *trig_L2_combmuonfeature_L2_mu10i_loose;
   vector<int>     *trig_L2_combmuonfeature_L2_mu13;
   vector<int>     *trig_L2_combmuonfeature_L2_mu15;
   vector<int>     *trig_L2_combmuonfeature_L2_mu20;
   vector<int>     *trig_L2_combmuonfeature_L2_mu20_MSonly;
   vector<int>     *trig_L2_combmuonfeature_L2_mu20_passHLT;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_DiMu;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_DiMu_FS;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_DiMu_FS_noOS;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_L2MSonly_EFFS_passL2;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_MB2_noL2_EFFS;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_MG;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_MSonly;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_MSonly_EFFS_passL2;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_MSonly_Trk_Jpsi_loose;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_NoIDTrkCut;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_SiTrk;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_Trk_Jpsi_loose;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_mu6;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_passHLT;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_tile;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_tile_SiTrk;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_trod;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4_trod_SiTrk;
   vector<int>     *trig_L2_combmuonfeature_L2_mu4mu6_DiMu;
   vector<int>     *trig_L2_combmuonfeature_L2_mu6;
   vector<int>     *trig_L2_combmuonfeature_L2_mu6_DiMu;
   vector<int>     *trig_L2_combmuonfeature_L2_mu6_DiMu_FS;
   vector<int>     *trig_L2_combmuonfeature_L2_mu6_DiMu_FS_noOS;
   vector<int>     *trig_L2_combmuonfeature_L2_mu6_Jpsie5e3;
   vector<int>     *trig_L2_combmuonfeature_L2_mu6_MG;
   vector<int>     *trig_L2_combmuonfeature_L2_mu6_MSonly;
   vector<int>     *trig_L2_combmuonfeature_L2_mu6_SiTrk;
   vector<int>     *trig_L2_combmuonfeature_L2_mu6_Trk_Jpsi_loose;
   vector<int>     *trig_L2_combmuonfeature_L2_mu6_Trk_Jpsi_loose_FS;
   vector<int>     *trig_L2_combmuonfeature_L2_mu6_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_combmuonfeature_L2_mu6_passHLT;
   vector<int>     *trig_L2_combmuonfeature_mf_index;
   vector<int>     *trig_L2_combmuonfeature_idscantrk_index;
   vector<int>     *trig_L2_combmuonfeature_sitracktrk_index;
   Int_t           trig_L2_isomuonfeature_n;
   vector<float>   *trig_L2_isomuonfeature_pt;
   vector<float>   *trig_L2_isomuonfeature_eta;
   vector<float>   *trig_L2_isomuonfeature_phi;
   vector<float>   *trig_L2_isomuonfeature_EtInnerConeEC ;
   vector<float>   *trig_L2_isomuonfeature_EtOuterConeEC;
   vector<float>   *trig_L2_isomuonfeature_EtInnerConeHC;
   vector<float>   *trig_L2_isomuonfeature_EtOuterConeHC;
   vector<int>     *trig_L2_isomuonfeature_NTracksCone;
   vector<float>   *trig_L2_isomuonfeature_SumPtTracksCone;
   vector<float>   *trig_L2_isomuonfeature_PtMuTracksCone;
   vector<int>     *trig_L2_isomuonfeature_iso_strategy;
   vector<int>     *trig_L2_isomuonfeature_RoiIdMu ;
   vector<float>   *trig_L2_isomuonfeature_PtMu;
   vector<float>   *trig_L2_isomuonfeature_EtaMu;
   vector<float>   *trig_L2_isomuonfeature_PhiMu;
   vector<float>   *trig_L2_isomuonfeature_LArWeight;
   vector<float>   *trig_L2_isomuonfeature_TileWeight;
   vector<int>     *trig_L2_isomuonfeature_L2_2mu10;
   vector<int>     *trig_L2_isomuonfeature_L2_2mu4;
   vector<int>     *trig_L2_isomuonfeature_L2_2mu4_DiMu;
   vector<int>     *trig_L2_isomuonfeature_L2_2mu4_DiMu_SiTrk;
   vector<int>     *trig_L2_isomuonfeature_L2_2mu4_DiMu_noOS;
   vector<int>     *trig_L2_isomuonfeature_L2_2mu4_DiMu_noOS_passL2;
   vector<int>     *trig_L2_isomuonfeature_L2_2mu4_DiMu_noVtx_noOS;
   vector<int>     *trig_L2_isomuonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2;
   vector<int>     *trig_L2_isomuonfeature_L2_2mu4_MSonly;
   vector<int>     *trig_L2_isomuonfeature_L2_2mu6;
   vector<int>     *trig_L2_isomuonfeature_L2_2mu6_DiMu;
   vector<int>     *trig_L2_isomuonfeature_L2_2mu6_DiMu_noVtx_noOS;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU0;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU0_MU6;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU10;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU6;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_EM3;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_J5;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU10;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU15;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU20;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_EM3;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_J5;
   vector<int>     *trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED;
   vector<int>     *trig_L2_isomuonfeature_L2_mu10;
   vector<int>     *trig_L2_isomuonfeature_L2_mu10_MG;
   vector<int>     *trig_L2_isomuonfeature_L2_mu10_MSonly;
   vector<int>     *trig_L2_isomuonfeature_L2_mu10_NoIDTrkCut;
   vector<int>     *trig_L2_isomuonfeature_L2_mu10_SiTrk;
   vector<int>     *trig_L2_isomuonfeature_L2_mu10_passHLT;
   vector<int>     *trig_L2_isomuonfeature_L2_mu10i_loose;
   vector<int>     *trig_L2_isomuonfeature_L2_mu13;
   vector<int>     *trig_L2_isomuonfeature_L2_mu15;
   vector<int>     *trig_L2_isomuonfeature_L2_mu20;
   vector<int>     *trig_L2_isomuonfeature_L2_mu20_MSonly;
   vector<int>     *trig_L2_isomuonfeature_L2_mu20_passHLT;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_DiMu;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_DiMu_FS;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_DiMu_FS_noOS;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_L2MSonly_EFFS_passL2;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_MB2_noL2_EFFS;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_MG;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_MSonly;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_MSonly_EFFS_passL2;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_MSonly_Trk_Jpsi_loose;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_NoIDTrkCut;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_SiTrk;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_Trk_Jpsi_loose;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_mu6;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_passHLT;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_tile;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_tile_SiTrk;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_trod;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4_trod_SiTrk;
   vector<int>     *trig_L2_isomuonfeature_L2_mu4mu6_DiMu;
   vector<int>     *trig_L2_isomuonfeature_L2_mu6;
   vector<int>     *trig_L2_isomuonfeature_L2_mu6_DiMu;
   vector<int>     *trig_L2_isomuonfeature_L2_mu6_DiMu_FS;
   vector<int>     *trig_L2_isomuonfeature_L2_mu6_DiMu_FS_noOS;
   vector<int>     *trig_L2_isomuonfeature_L2_mu6_Jpsie5e3;
   vector<int>     *trig_L2_isomuonfeature_L2_mu6_MG;
   vector<int>     *trig_L2_isomuonfeature_L2_mu6_MSonly;
   vector<int>     *trig_L2_isomuonfeature_L2_mu6_SiTrk;
   vector<int>     *trig_L2_isomuonfeature_L2_mu6_Trk_Jpsi_loose;
   vector<int>     *trig_L2_isomuonfeature_L2_mu6_Trk_Jpsi_loose_FS;
   vector<int>     *trig_L2_isomuonfeature_L2_mu6_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_isomuonfeature_L2_mu6_passHLT;
   Int_t           trig_L2_tilemufeature_n;
   vector<float>   *trig_L2_tilemufeature_eta;
   vector<float>   *trig_L2_tilemufeature_phi;
   vector<vector<float> > *trig_L2_tilemufeature_enedep;
   vector<float>   *trig_L2_tilemufeature_quality;
   vector<int>     *trig_L2_tilemufeature_L2_2mu10;
   vector<int>     *trig_L2_tilemufeature_L2_2mu4;
   vector<int>     *trig_L2_tilemufeature_L2_2mu4_DiMu;
   vector<int>     *trig_L2_tilemufeature_L2_2mu4_DiMu_SiTrk;
   vector<int>     *trig_L2_tilemufeature_L2_2mu4_DiMu_noOS;
   vector<int>     *trig_L2_tilemufeature_L2_2mu4_DiMu_noOS_passL2;
   vector<int>     *trig_L2_tilemufeature_L2_2mu4_DiMu_noVtx_noOS;
   vector<int>     *trig_L2_tilemufeature_L2_2mu4_DiMu_noVtx_noOS_passL2;
   vector<int>     *trig_L2_tilemufeature_L2_2mu4_MSonly;
   vector<int>     *trig_L2_tilemufeature_L2_2mu6;
   vector<int>     *trig_L2_tilemufeature_L2_2mu6_DiMu;
   vector<int>     *trig_L2_tilemufeature_L2_2mu6_DiMu_noVtx_noOS;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU0;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU0_MU6;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU10;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU6;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_EM3;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_EMPTY;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_J5;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU10;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU10_EMPTY;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU15;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU20;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_EM3;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_EMPTY;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_J5;
   vector<int>     *trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED;
   vector<int>     *trig_L2_tilemufeature_L2_mu10;
   vector<int>     *trig_L2_tilemufeature_L2_mu10_MG;
   vector<int>     *trig_L2_tilemufeature_L2_mu10_MSonly;
   vector<int>     *trig_L2_tilemufeature_L2_mu10_NoIDTrkCut;
   vector<int>     *trig_L2_tilemufeature_L2_mu10_SiTrk;
   vector<int>     *trig_L2_tilemufeature_L2_mu10_passHLT;
   vector<int>     *trig_L2_tilemufeature_L2_mu10i_loose;
   vector<int>     *trig_L2_tilemufeature_L2_mu13;
   vector<int>     *trig_L2_tilemufeature_L2_mu15;
   vector<int>     *trig_L2_tilemufeature_L2_mu20;
   vector<int>     *trig_L2_tilemufeature_L2_mu20_MSonly;
   vector<int>     *trig_L2_tilemufeature_L2_mu20_passHLT;
   vector<int>     *trig_L2_tilemufeature_L2_mu4;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_DiMu;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_DiMu_FS;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_DiMu_FS_noOS;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_L2MSonly_EFFS_passL2;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_MB2_noL2_EFFS;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_MG;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_MSonly;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_MSonly_EFFS_passL2;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_MSonly_Trk_Jpsi_loose;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_MSonly_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_NoIDTrkCut;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_SiTrk;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_Trk_Jpsi_loose;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_mu6;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_passHLT;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_tile;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_tile_SiTrk;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_trod;
   vector<int>     *trig_L2_tilemufeature_L2_mu4_trod_SiTrk;
   vector<int>     *trig_L2_tilemufeature_L2_mu4mu6_DiMu;
   vector<int>     *trig_L2_tilemufeature_L2_mu6;
   vector<int>     *trig_L2_tilemufeature_L2_mu6_DiMu;
   vector<int>     *trig_L2_tilemufeature_L2_mu6_DiMu_FS;
   vector<int>     *trig_L2_tilemufeature_L2_mu6_DiMu_FS_noOS;
   vector<int>     *trig_L2_tilemufeature_L2_mu6_Jpsie5e3;
   vector<int>     *trig_L2_tilemufeature_L2_mu6_MG;
   vector<int>     *trig_L2_tilemufeature_L2_mu6_MSonly;
   vector<int>     *trig_L2_tilemufeature_L2_mu6_SiTrk;
   vector<int>     *trig_L2_tilemufeature_L2_mu6_Trk_Jpsi_loose;
   vector<int>     *trig_L2_tilemufeature_L2_mu6_Trk_Jpsi_loose_FS;
   vector<int>     *trig_L2_tilemufeature_L2_mu6_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_tilemufeature_L2_mu6_passHLT;
   Int_t           trig_L2_tiletrackmufeature_n;
   vector<float>   *trig_L2_tiletrackmufeature_pt;
   vector<float>   *trig_L2_tiletrackmufeature_eta;
   vector<float>   *trig_L2_tiletrackmufeature_phi;
   vector<float>   *trig_L2_tiletrackmufeature_PtTR_Trk;
   vector<float>   *trig_L2_tiletrackmufeature_EtaTR_Trk;
   vector<float>   *trig_L2_tiletrackmufeature_PhiTR_Trk;
   vector<int>     *trig_L2_tiletrackmufeature_Typ_IDTrk;
   vector<int>     *trig_L2_tiletrackmufeature_L2_2mu10;
   vector<int>     *trig_L2_tiletrackmufeature_L2_2mu4;
   vector<int>     *trig_L2_tiletrackmufeature_L2_2mu4_DiMu;
   vector<int>     *trig_L2_tiletrackmufeature_L2_2mu4_DiMu_SiTrk;
   vector<int>     *trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noOS;
   vector<int>     *trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noOS_passL2;
   vector<int>     *trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noVtx_noOS;
   vector<int>     *trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noVtx_noOS_passL2;
   vector<int>     *trig_L2_tiletrackmufeature_L2_2mu4_MSonly;
   vector<int>     *trig_L2_tiletrackmufeature_L2_2mu6;
   vector<int>     *trig_L2_tiletrackmufeature_L2_2mu6_DiMu;
   vector<int>     *trig_L2_tiletrackmufeature_L2_2mu6_DiMu_noVtx_noOS;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU0;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU0_MU6;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU10;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU6;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_EM3;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_EMPTY;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_J5;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU10;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU10_EMPTY;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU15;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU20;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_EM3;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_EMPTY;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_J5;
   vector<int>     *trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu10;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu10_MG;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu10_MSonly;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu10_NoIDTrkCut;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu10_SiTrk;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu10_passHLT;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu10i_loose;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu13;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu15;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu20;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu20_MSonly;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu20_passHLT;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_DiMu;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_DiMu_FS;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_DiMu_FS_noOS;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_L2MSonly_EFFS_passL2;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_MB2_noL2_EFFS;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_MG;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_MSonly;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_MSonly_EFFS_passL2;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_MSonly_Trk_Jpsi_loose;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_MSonly_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_NoIDTrkCut;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_SiTrk;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_Trk_Jpsi_loose;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_mu6;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_passHLT;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_tile;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_tile_SiTrk;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_trod;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4_trod_SiTrk;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu4mu6_DiMu;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu6;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu6_DiMu;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu6_DiMu_FS;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu6_DiMu_FS_noOS;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu6_Jpsie5e3;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu6_MG;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu6_MSonly;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu6_SiTrk;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu6_Trk_Jpsi_loose;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu6_Trk_Jpsi_loose_FS;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu6_Trk_Upsi_loose_FS;
   vector<int>     *trig_L2_tiletrackmufeature_L2_mu6_passHLT;
   vector<int>     *trig_L2_tiletrackmufeature_tilemu_index;
   vector<int>     *trig_L2_tiletrackmufeature_idtrk_algorithmId;
   vector<short>   *trig_L2_tiletrackmufeature_idtrk_trackStatus;
   vector<float>   *trig_L2_tiletrackmufeature_idtrk_chi2Ndof;
   vector<int>     *trig_L2_tiletrackmufeature_idtrk_nStrawHits;
   vector<int>     *trig_L2_tiletrackmufeature_idtrk_nHighThrHits;
   vector<int>     *trig_L2_tiletrackmufeature_idtrk_nPixelSpacePoints;
   vector<int>     *trig_L2_tiletrackmufeature_idtrk_nSCT_SpacePoints;
   vector<long>    *trig_L2_tiletrackmufeature_idtrk_hitPattern;
   vector<int>     *trig_L2_tiletrackmufeature_idtrk_nStraw;
   vector<int>     *trig_L2_tiletrackmufeature_idtrk_nStrawTime;
   vector<float>   *trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_a0;
   vector<float>   *trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_z0;
   vector<float>   *trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_phi0;
   vector<float>   *trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_eta;
   vector<float>   *trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_pt;
   vector<vector<float> > *trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_covariance;
   vector<int>     *trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_hasidtrkfitpar;
   vector<int>     *trig_L2_tiletrackmufeature_idtrk_hasidtrk;
   Int_t           trig_EF_trigmuonef_n;
   vector<int>     *trig_EF_trigmuonef_RoINum;
   vector<int>     *trig_EF_trigmuonef_NSegments;
   vector<int>     *trig_EF_trigmuonef_NMdtHits;
   vector<int>     *trig_EF_trigmuonef_NRpcHits;
   vector<int>     *trig_EF_trigmuonef_NTgcHits;
   vector<int>     *trig_EF_trigmuonef_NCscHits;
   vector<float>   *trig_EF_trigmuonef_EtaPreviousLevel;
   vector<float>   *trig_EF_trigmuonef_PhiPreviousLevel;
   vector<int>     *trig_EF_trigmuonef_track_n;
   vector<vector<int> > *trig_EF_trigmuonef_track_MuonType;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_pt;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_eta;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_phi;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_charge;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_d0;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_z0;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_chi2;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_chi2prob;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_posX;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_posY;
   vector<vector<float> > *trig_EF_trigmuonef_track_MS_posZ;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NRpcHitsPhi;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NTgcHitsPhi;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NCscHitsPhi;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NRpcHitsEta;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NTgcHitsEta;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NCscHitsEta;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_NMdtHits;
   vector<vector<int> > *trig_EF_trigmuonef_track_MS_hasMS;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_pt;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_eta;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_phi;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_charge;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_d0;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_z0;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_chi2;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_chi2prob;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_posX;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_posY;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_posZ;
   vector<vector<int> > *trig_EF_trigmuonef_track_SA_hasSA;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_pt;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_eta;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_phi;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_charge;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_d0;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_z0;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_chi2;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_chi2prob;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_posX;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_posY;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_posZ;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_matchChi2;
   vector<vector<int> > *trig_EF_trigmuonef_track_CB_NIdSctHits;
   vector<vector<int> > *trig_EF_trigmuonef_track_CB_NIdPixelHits;
   vector<vector<int> > *trig_EF_trigmuonef_track_CB_NTrtHits;
   vector<vector<int> > *trig_EF_trigmuonef_track_CB_hasCB;
   Int_t           trig_EF_trigmugirl_n;
   vector<int>     *trig_EF_trigmugirl_RoINum;
   vector<int>     *trig_EF_trigmugirl_NSegments;
   vector<int>     *trig_EF_trigmugirl_NMdtHits;
   vector<int>     *trig_EF_trigmugirl_NRpcHits;
   vector<int>     *trig_EF_trigmugirl_NTgcHits;
   vector<int>     *trig_EF_trigmugirl_NCscHits;
   vector<float>   *trig_EF_trigmugirl_EtaPreviousLevel;
   vector<float>   *trig_EF_trigmugirl_PhiPreviousLevel;
   vector<int>     *trig_EF_trigmugirl_track_n;
   vector<vector<int> > *trig_EF_trigmugirl_track_MuonType;
   vector<vector<float> > *trig_EF_trigmugirl_track_MS_pt;
   vector<vector<float> > *trig_EF_trigmugirl_track_MS_eta;
   vector<vector<float> > *trig_EF_trigmugirl_track_MS_phi;
   vector<vector<float> > *trig_EF_trigmugirl_track_MS_charge;
   vector<vector<float> > *trig_EF_trigmugirl_track_MS_d0;
   vector<vector<float> > *trig_EF_trigmugirl_track_MS_z0;
   vector<vector<float> > *trig_EF_trigmugirl_track_MS_chi2;
   vector<vector<float> > *trig_EF_trigmugirl_track_MS_chi2prob;
   vector<vector<float> > *trig_EF_trigmugirl_track_MS_posX;
   vector<vector<float> > *trig_EF_trigmugirl_track_MS_posY;
   vector<vector<float> > *trig_EF_trigmugirl_track_MS_posZ;
   vector<vector<int> > *trig_EF_trigmugirl_track_MS_NRpcHitsPhi;
   vector<vector<int> > *trig_EF_trigmugirl_track_MS_NTgcHitsPhi;
   vector<vector<int> > *trig_EF_trigmugirl_track_MS_NCscHitsPhi;
   vector<vector<int> > *trig_EF_trigmugirl_track_MS_NRpcHitsEta;
   vector<vector<int> > *trig_EF_trigmugirl_track_MS_NTgcHitsEta;
   vector<vector<int> > *trig_EF_trigmugirl_track_MS_NCscHitsEta;
   vector<vector<int> > *trig_EF_trigmugirl_track_MS_NMdtHits;
   vector<vector<int> > *trig_EF_trigmugirl_track_MS_hasMS;
   vector<vector<float> > *trig_EF_trigmugirl_track_SA_pt;
   vector<vector<float> > *trig_EF_trigmugirl_track_SA_eta;
   vector<vector<float> > *trig_EF_trigmugirl_track_SA_phi;
   vector<vector<float> > *trig_EF_trigmugirl_track_SA_charge;
   vector<vector<float> > *trig_EF_trigmugirl_track_SA_d0;
   vector<vector<float> > *trig_EF_trigmugirl_track_SA_z0;
   vector<vector<float> > *trig_EF_trigmugirl_track_SA_chi2;
   vector<vector<float> > *trig_EF_trigmugirl_track_SA_chi2prob;
   vector<vector<float> > *trig_EF_trigmugirl_track_SA_posX;
   vector<vector<float> > *trig_EF_trigmugirl_track_SA_posY;
   vector<vector<float> > *trig_EF_trigmugirl_track_SA_posZ;
   vector<vector<int> > *trig_EF_trigmugirl_track_SA_hasSA;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_pt;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_eta;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_phi;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_charge;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_d0;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_z0;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_chi2;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_chi2prob;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_posX;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_posY;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_posZ;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_matchChi2;
   vector<vector<int> > *trig_EF_trigmugirl_track_CB_NIdSctHits;
   vector<vector<int> > *trig_EF_trigmugirl_track_CB_NIdPixelHits;
   vector<vector<int> > *trig_EF_trigmugirl_track_CB_NTrtHits;
   vector<vector<int> > *trig_EF_trigmugirl_track_CB_hasCB;
   Int_t           trig_L2_sitrack_muon_n;
   vector<int>     *trig_L2_sitrack_muon_algorithmId;
   vector<short>   *trig_L2_sitrack_muon_trackStatus;
   vector<float>   *trig_L2_sitrack_muon_chi2Ndof;
   vector<int>     *trig_L2_sitrack_muon_nStrawHits;
   vector<int>     *trig_L2_sitrack_muon_nHighThrHits;
   vector<int>     *trig_L2_sitrack_muon_nPixelSpacePoints;
   vector<int>     *trig_L2_sitrack_muon_nSCT_SpacePoints;
   vector<long>    *trig_L2_sitrack_muon_hitPattern;
   vector<int>     *trig_L2_sitrack_muon_nStraw;
   vector<int>     *trig_L2_sitrack_muon_nStrawTime;
   vector<float>   *trig_L2_sitrack_muon_a0;
   vector<float>   *trig_L2_sitrack_muon_z0;
   vector<float>   *trig_L2_sitrack_muon_phi0;
   vector<float>   *trig_L2_sitrack_muon_eta;
   vector<float>   *trig_L2_sitrack_muon_pt;
   vector<vector<float> > *trig_L2_sitrack_muon_covariance;
   Int_t           trig_L2_idscan_muon_n;
   vector<int>     *trig_L2_idscan_muon_algorithmId;
   vector<short>   *trig_L2_idscan_muon_trackStatus;
   vector<float>   *trig_L2_idscan_muon_chi2Ndof;
   vector<int>     *trig_L2_idscan_muon_nStrawHits;
   vector<int>     *trig_L2_idscan_muon_nHighThrHits;
   vector<int>     *trig_L2_idscan_muon_nPixelSpacePoints;
   vector<int>     *trig_L2_idscan_muon_nSCT_SpacePoints;
   vector<long>    *trig_L2_idscan_muon_hitPattern;
   vector<int>     *trig_L2_idscan_muon_nStraw;
   vector<int>     *trig_L2_idscan_muon_nStrawTime;
   vector<float>   *trig_L2_idscan_muon_a0;
   vector<float>   *trig_L2_idscan_muon_z0;
   vector<float>   *trig_L2_idscan_muon_phi0;
   vector<float>   *trig_L2_idscan_muon_eta;
   vector<float>   *trig_L2_idscan_muon_pt;
   vector<vector<float> > *trig_L2_idscan_muon_covariance;
   Int_t           trig_L2_sitrack_isomuon_n;
   vector<int>     *trig_L2_sitrack_isomuon_algorithmId;
   vector<short>   *trig_L2_sitrack_isomuon_trackStatus;
   vector<float>   *trig_L2_sitrack_isomuon_chi2Ndof;
   vector<int>     *trig_L2_sitrack_isomuon_nStrawHits;
   vector<int>     *trig_L2_sitrack_isomuon_nHighThrHits;
   vector<int>     *trig_L2_sitrack_isomuon_nPixelSpacePoints;
   vector<int>     *trig_L2_sitrack_isomuon_nSCT_SpacePoints;
   vector<long>    *trig_L2_sitrack_isomuon_hitPattern;
   vector<int>     *trig_L2_sitrack_isomuon_nStraw;
   vector<int>     *trig_L2_sitrack_isomuon_nStrawTime;
   vector<float>   *trig_L2_sitrack_isomuon_a0;
   vector<float>   *trig_L2_sitrack_isomuon_z0;
   vector<float>   *trig_L2_sitrack_isomuon_phi0;
   vector<float>   *trig_L2_sitrack_isomuon_eta;
   vector<float>   *trig_L2_sitrack_isomuon_pt;
   vector<vector<float> > *trig_L2_sitrack_isomuon_covariance;
   Int_t           trig_L2_idscan_isomuon_n;
   vector<int>     *trig_L2_idscan_isomuon_algorithmId;
   vector<short>   *trig_L2_idscan_isomuon_trackStatus;
   vector<float>   *trig_L2_idscan_isomuon_chi2Ndof;
   vector<int>     *trig_L2_idscan_isomuon_nStrawHits;
   vector<int>     *trig_L2_idscan_isomuon_nHighThrHits;
   vector<int>     *trig_L2_idscan_isomuon_nPixelSpacePoints;
   vector<int>     *trig_L2_idscan_isomuon_nSCT_SpacePoints;
   vector<long>    *trig_L2_idscan_isomuon_hitPattern;
   vector<int>     *trig_L2_idscan_isomuon_nStraw;
   vector<int>     *trig_L2_idscan_isomuon_nStrawTime;
   vector<float>   *trig_L2_idscan_isomuon_a0;
   vector<float>   *trig_L2_idscan_isomuon_z0;
   vector<float>   *trig_L2_idscan_isomuon_phi0;
   vector<float>   *trig_L2_idscan_isomuon_eta;
   vector<float>   *trig_L2_idscan_isomuon_pt;
   vector<vector<float> > *trig_L2_idscan_isomuon_covariance;
   Int_t           trig_RoI_L2_mu_n;
   vector<short>   *trig_RoI_L2_mu_type;
   vector<short>   *trig_RoI_L2_mu_lastStep;
   vector<int>     *trig_RoI_L2_mu_MuonFeature;
   vector<int>     *trig_RoI_L2_mu_MuonFeatureStatus;
   vector<int>     *trig_RoI_L2_mu_MuonFeatureDetails;
   vector<int>     *trig_RoI_L2_mu_MuonFeatureDetailsStatus;
   vector<int>     *trig_RoI_L2_mu_CombinedMuonFeature;
   vector<int>     *trig_RoI_L2_mu_CombinedMuonFeatureStatus;
   vector<int>     *trig_RoI_L2_mu_IsoMuonFeature;
   vector<int>     *trig_RoI_L2_mu_IsoMuonFeatureStatus;
   vector<int>     *trig_RoI_L2_mu_Muon_ROI;
   vector<int>     *trig_RoI_L2_mu_Muon_ROIStatus;
   vector<vector<int> > *trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_Muon;
   vector<vector<int> > *trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_MuonStatus;
   vector<vector<int> > *trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_Muon;
   vector<vector<int> > *trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_MuonStatus;
   vector<vector<int> > *trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_muonIso;
   vector<vector<int> > *trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_muonIsoStatus;
   vector<vector<int> > *trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_muonIso;
   vector<vector<int> > *trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_muonIsoStatus;
   Int_t           trig_RoI_L2_TileMu_n;
   vector<short>   *trig_RoI_L2_TileMu_type;
   vector<short>   *trig_RoI_L2_TileMu_lastStep;
   vector<int>     *trig_RoI_L2_TileMu_TileMuFeature;
   vector<int>     *trig_RoI_L2_TileMu_TileMuFeatureStatus;
   vector<int>     *trig_RoI_L2_TileMu_TileTrackMuFeature;
   vector<int>     *trig_RoI_L2_TileMu_TileTrackMuFeatureStatus;
   vector<int>     *trig_RoI_L2_TileMu_Muon_ROI;
   vector<int>     *trig_RoI_L2_TileMu_Muon_ROIStatus;
   vector<vector<int> > *trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigSiTrack_Tile;
   vector<vector<int> > *trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigSiTrack_TileStatus;
   vector<vector<int> > *trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigIDSCAN_Tile;
   vector<vector<int> > *trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigIDSCAN_TileStatus;
   Int_t           trig_RoI_EF_mu_n;
   vector<short>   *trig_RoI_EF_mu_type;
   vector<short>   *trig_RoI_EF_mu_lastStep;
   vector<int>     *trig_RoI_EF_mu_Muon_ROI;
   vector<int>     *trig_RoI_EF_mu_Muon_ROIStatus;
   vector<vector<int> > *trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFID;
   vector<vector<int> > *trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFIDStatus;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainer;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirl;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirlStatus;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EF;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus;
   Int_t           trig_RoI_EF_TileMu_n;
   vector<short>   *trig_RoI_EF_TileMu_type;
   vector<short>   *trig_RoI_EF_TileMu_lastStep;
   vector<int>     *trig_RoI_EF_TileMu_Muon_ROI;
   vector<int>     *trig_RoI_EF_TileMu_Muon_ROIStatus;
   vector<vector<int> > *trig_RoI_EF_TileMu_TrigMuonEFContainer;
   vector<vector<int> > *trig_RoI_EF_TileMu_TrigMuonEFContainerStatus;
   vector<vector<int> > *trig_RoI_EF_TileMu_TrigMuonEFInfoContainer;
   vector<vector<int> > *trig_RoI_EF_TileMu_TrigMuonEFInfoContainerStatus;
   vector<vector<int> > *trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuGirl;
   vector<vector<int> > *trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuGirlStatus;
   vector<vector<int> > *trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuTagIMO_EF;
   vector<vector<int> > *trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus;
   Float_t         trig_L2_met_MEx;
   Float_t         trig_L2_met_MEy;
   Float_t         trig_L2_met_MEz;
   Float_t         trig_L2_met_sumEt;
   Float_t         trig_L2_met_sumE;
   Int_t           trig_L2_met_flag;
   vector<string>  *trig_L2_met_nameOfComponent;
   vector<float>   *trig_L2_met_MExComponent;
   vector<float>   *trig_L2_met_MEyComponent;
   vector<float>   *trig_L2_met_MEzComponent;
   vector<float>   *trig_L2_met_sumEtComponent;
   vector<float>   *trig_L2_met_sumEComponent;
   vector<float>   *trig_L2_met_componentCalib0;
   vector<float>   *trig_L2_met_componentCalib1;
   vector<short>   *trig_L2_met_sumOfSigns;
   vector<unsigned short> *trig_L2_met_usedChannels;
   vector<short>   *trig_L2_met_status;
   Int_t           trig_L2_jet_n;
   vector<double>  *trig_L2_jet_ehad0;
   vector<double>  *trig_L2_jet_eem0;
   vector<int>     *trig_L2_jet_L2_2j15;
   vector<int>     *trig_L2_jet_L2_2j30;
   vector<int>     *trig_L2_jet_L2_2j7;
   vector<int>     *trig_L2_jet_L2_3j15;
   vector<int>     *trig_L2_jet_L2_j130;
   vector<int>     *trig_L2_jet_L2_j15;
   vector<int>     *trig_L2_jet_L2_j30;
   vector<int>     *trig_L2_jet_L2_j60;
   vector<int>     *trig_L2_jet_L2_j7;
   vector<int>     *trig_L2_jet_L2_j90;
   vector<float>   *trig_L2_jet_E;
   vector<float>   *trig_L2_jet_pt;
   vector<float>   *trig_L2_jet_eta;
   vector<float>   *trig_L2_jet_phi;
   vector<unsigned int> *trig_L2_jet_RoIWord;
   Float_t         trig_EF_met_MEx;
   Float_t         trig_EF_met_MEy;
   Float_t         trig_EF_met_MEz;
   Float_t         trig_EF_met_sumEt;
   Float_t         trig_EF_met_sumE;
   Int_t           trig_EF_met_flag;
   vector<string>  *trig_EF_met_nameOfComponent;
   vector<float>   *trig_EF_met_MExComponent;
   vector<float>   *trig_EF_met_MEyComponent;
   vector<float>   *trig_EF_met_MEzComponent;
   vector<float>   *trig_EF_met_sumEtComponent;
   vector<float>   *trig_EF_met_sumEComponent;
   vector<float>   *trig_EF_met_componentCalib0;
   vector<float>   *trig_EF_met_componentCalib1;
   vector<short>   *trig_EF_met_sumOfSigns;
   vector<unsigned short> *trig_EF_met_usedChannels;
   vector<short>   *trig_EF_met_status;
   Int_t           trig_EF_jet_n;
   vector<float>   *trig_EF_jet_E;
   vector<float>   *trig_EF_jet_pt;
   vector<float>   *trig_EF_jet_m;
   vector<float>   *trig_EF_jet_eta;
   vector<float>   *trig_EF_jet_phi;
   vector<float>   *trig_EF_jet_EtaPhys;
   vector<float>   *trig_EF_jet_PhiPhys;
   vector<float>   *trig_EF_jet_MPhys;
   vector<float>   *trig_EF_jet_emscale_E;
   vector<float>   *trig_EF_jet_emscale_pt;
   vector<float>   *trig_EF_jet_emscale_m;
   vector<float>   *trig_EF_jet_emscale_eta;
   vector<float>   *trig_EF_jet_emscale_phi;
   vector<unsigned int> *trig_EF_jet_RoIword;
   vector<float>   *trig_EF_jet_mu_dr;
   vector<int>     *trig_EF_jet_mu_matched;
   Char_t          trig_bgCode;
   vector<string>  *SkimDecision_name;
   vector<int>     *SkimDecision_accepted;
   Int_t           ti_staco_topo_Jet_n;
   vector<int>     *ti_staco_topo_Jet_use;
   vector<int>     *ti_staco_topo_Jet_index;
   vector<int>     *ti_staco_topo_Jet_overlap_jetn;
   vector<vector<int> > *ti_staco_topo_Jet_overlap_jetindex;
   vector<int>     *ti_staco_topo_Jet_overlap_mun;
   vector<vector<int> > *ti_staco_topo_Jet_overlap_muindex;
   Int_t           ti_staco_topo_Mu_n;
   vector<int>     *ti_staco_topo_Mu_use;
   vector<int>     *ti_staco_topo_Mu_index;
   vector<int>     *ti_staco_topo_Mu_overlap_jetn;
   vector<vector<int> > *ti_staco_topo_Mu_overlap_jetindex;
   vector<int>     *ti_staco_topo_Mu_overlap_mun;
   vector<vector<int> > *ti_staco_topo_Mu_overlap_muindex;
   Int_t           ti_staco_topo_El_n;
   vector<int>     *ti_staco_topo_El_use;
   vector<int>     *ti_staco_topo_El_index;
   vector<int>     *ti_staco_topo_El_overlap_jetn;
   vector<vector<int> > *ti_staco_topo_El_overlap_jetindex;
   vector<int>     *ti_staco_topo_El_overlap_mun;
   vector<vector<int> > *ti_staco_topo_El_overlap_muindex;
   Int_t           ti_staco_tower_Jet_n;
   vector<int>     *ti_staco_tower_Jet_use;
   vector<int>     *ti_staco_tower_Jet_index;
   vector<int>     *ti_staco_tower_Jet_overlap_jetn;
   vector<vector<int> > *ti_staco_tower_Jet_overlap_jetindex;
   vector<int>     *ti_staco_tower_Jet_overlap_mun;
   vector<vector<int> > *ti_staco_tower_Jet_overlap_muindex;
   Int_t           ti_staco_tower_Mu_n;
   vector<int>     *ti_staco_tower_Mu_use;
   vector<int>     *ti_staco_tower_Mu_index;
   vector<int>     *ti_staco_tower_Mu_overlap_jetn;
   vector<vector<int> > *ti_staco_tower_Mu_overlap_jetindex;
   vector<int>     *ti_staco_tower_Mu_overlap_mun;
   vector<vector<int> > *ti_staco_tower_Mu_overlap_muindex;
   Int_t           ti_staco_tower_El_n;
   vector<int>     *ti_staco_tower_El_use;
   vector<int>     *ti_staco_tower_El_index;
   vector<int>     *ti_staco_tower_El_overlap_jetn;
   vector<vector<int> > *ti_staco_tower_El_overlap_jetindex;
   vector<int>     *ti_staco_tower_El_overlap_mun;
   vector<vector<int> > *ti_staco_tower_El_overlap_muindex;
   Int_t           ti_muid_topo_Jet_n;
   vector<int>     *ti_muid_topo_Jet_use;
   vector<int>     *ti_muid_topo_Jet_index;
   vector<int>     *ti_muid_topo_Jet_overlap_jetn;
   vector<vector<int> > *ti_muid_topo_Jet_overlap_jetindex;
   vector<int>     *ti_muid_topo_Jet_overlap_mun;
   vector<vector<int> > *ti_muid_topo_Jet_overlap_muindex;
   Int_t           ti_muid_topo_Mu_n;
   vector<int>     *ti_muid_topo_Mu_use;
   vector<int>     *ti_muid_topo_Mu_index;
   vector<int>     *ti_muid_topo_Mu_overlap_jetn;
   vector<vector<int> > *ti_muid_topo_Mu_overlap_jetindex;
   vector<int>     *ti_muid_topo_Mu_overlap_mun;
   vector<vector<int> > *ti_muid_topo_Mu_overlap_muindex;
   Int_t           ti_muid_topo_El_n;
   vector<int>     *ti_muid_topo_El_use;
   vector<int>     *ti_muid_topo_El_index;
   vector<int>     *ti_muid_topo_El_overlap_jetn;
   vector<vector<int> > *ti_muid_topo_El_overlap_jetindex;
   vector<int>     *ti_muid_topo_El_overlap_mun;
   vector<vector<int> > *ti_muid_topo_El_overlap_muindex;
   Int_t           ti_muid_tower_Jet_n;
   vector<int>     *ti_muid_tower_Jet_use;
   vector<int>     *ti_muid_tower_Jet_index;
   vector<int>     *ti_muid_tower_Jet_overlap_jetn;
   vector<vector<int> > *ti_muid_tower_Jet_overlap_jetindex;
   vector<int>     *ti_muid_tower_Jet_overlap_mun;
   vector<vector<int> > *ti_muid_tower_Jet_overlap_muindex;
   Int_t           ti_muid_tower_Mu_n;
   vector<int>     *ti_muid_tower_Mu_use;
   vector<int>     *ti_muid_tower_Mu_index;
   vector<int>     *ti_muid_tower_Mu_overlap_jetn;
   vector<vector<int> > *ti_muid_tower_Mu_overlap_jetindex;
   vector<int>     *ti_muid_tower_Mu_overlap_mun;
   vector<vector<int> > *ti_muid_tower_Mu_overlap_muindex;
   Int_t           ti_muid_tower_El_n;
   vector<int>     *ti_muid_tower_El_use;
   vector<int>     *ti_muid_tower_El_index;
   vector<int>     *ti_muid_tower_El_overlap_jetn;
   vector<vector<int> > *ti_muid_tower_El_overlap_jetindex;
   vector<int>     *ti_muid_tower_El_overlap_mun;
   vector<vector<int> > *ti_muid_tower_El_overlap_muindex;

   // List of branches
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
   TBranch        *b_EF_2MUL1_j40_HV;   //!
   TBranch        *b_EF_2j10;   //!
   TBranch        *b_EF_2j10_deta3_5;   //!
   TBranch        *b_EF_2j10_deta5;   //!
   TBranch        *b_EF_2j20;   //!
   TBranch        *b_EF_2j20_deta3_5;   //!
   TBranch        *b_EF_2j40;   //!
   TBranch        *b_EF_2j40_deta3_5;   //!
   TBranch        *b_EF_2mu10;   //!
   TBranch        *b_EF_2mu4;   //!
   TBranch        *b_EF_2mu4_DiMu;   //!
   TBranch        *b_EF_2mu4_DiMu_SiTrk;   //!
   TBranch        *b_EF_2mu4_DiMu_noOS;   //!
   TBranch        *b_EF_2mu4_DiMu_noOS_passL2;   //!
   TBranch        *b_EF_2mu4_DiMu_noVtx_noOS;   //!
   TBranch        *b_EF_2mu4_DiMu_noVtx_noOS_passL2;   //!
   TBranch        *b_EF_2mu4_MSonly;   //!
   TBranch        *b_EF_2mu6;   //!
   TBranch        *b_EF_2mu6_DiMu;   //!
   TBranch        *b_EF_2mu6_DiMu_noVtx_noOS;   //!
   TBranch        *b_EF_3j20;   //!
   TBranch        *b_EF_EFInsideOut_FS_MB2;   //!
   TBranch        *b_EF_EFTRTOnly_FS_MB2;   //!
   TBranch        *b_EF_FJ18;   //!
   TBranch        *b_EF_FJ18_larcalib;   //!
   TBranch        *b_EF_FJ3;   //!
   TBranch        *b_EF_FJ3_larcalib;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2EM2;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2EM3;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2EM4;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2EM5;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2EM5I;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2FJ18;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2FJ3;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2J10;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2J10_win6;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2J15;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2J5;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU0;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU0_MU6;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU10;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2MU6;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2TAU5;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2TAU6;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_2TAU6I;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_3J10;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_AtoC;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_AtoC_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_CtoA;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_CtoA_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_HT;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_HT_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_MUL_1;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_MUL_1_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_MUL_2;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_MUL_2_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_MUL_3;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_MUL_3_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_MUL_4;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_MUL_4_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_MUL_5;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_MUL_5_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_MUL_6;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_MUL_6_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_Wide;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BCM_Wide_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BGRP0;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BGRP1;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BPTX0_BGRP0;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BPTX0_BPTX1_BGRP0;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_BPTX1_BGRP0;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM10;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM10I;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM14;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM2;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM3;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM3_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM3_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM4;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM5;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_EM5I;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_FJ18;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_FJ3;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_FJ3_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_FJ3_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J10;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J10_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J10_win6;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J15;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J15_LV;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J15_MV;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J15_NL;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J30;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J30_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J5;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J55;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J5_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J5_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_J75;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_JE120;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_JE280;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_L1A_Mon;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_LUCID;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_LUCID_A;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_LUCID_A_C;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_LUCID_A_C_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_LUCID_A_C_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_LUCID_A_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_LUCID_A_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_LUCID_C;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_LUCID_COMM;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_LUCID_COMM_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_LUCID_C_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_LUCID_C_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_LUCID_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA0;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA1;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA10;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA11;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA12;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA13;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA14;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA15;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA2;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA3;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA4;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA5;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA6;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA7;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA8;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSA9;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC0;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC1;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC10;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC11;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC12;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC13;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC14;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC15;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC2;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC3;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC4;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC5;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC6;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC7;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC8;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTSC9;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_1;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_1_1;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_1_1_Col;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_1_1_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED1;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED2;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_1_Col;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_1_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED1;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED2;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_2;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_2_Col;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_2_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED1;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED2;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_4_4;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED1;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED2;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_COMM;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_COMM_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_EM3;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_J5;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU0_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU10;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU10_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU15;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU20;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU6;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU6_EM3;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU6_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU6_J5;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_MU6_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_NIM_S9C0A20;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_NIM_S9C1C19;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_NIM_S9C1C20;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_RD0_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_RD0_FILLED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_RD0_FIRSTEMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_RD0_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_RD1_FILLED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TAU11;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TAU11I;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TAU20;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TAU30;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TAU5;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TAU5_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TAU5_UNPAIRED;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TAU6;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TAU6I;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TAU6_XE10;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TAU8;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TE10;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TE100;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_TRT;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_XE10;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_XE15;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_XE20;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_XE30;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_ZDC;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_ZDC_A;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_ZDC_AND;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_ZDC_AND_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_ZDC_A_C;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_ZDC_A_C_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_ZDC_A_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_ZDC_C;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_ZDC_C_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_ZDC_EMPTY;   //!
   TBranch        *b_EF_L1ItemStreamer_L1_ZDC_UNPAIRED;   //!
   TBranch        *b_EF_L2IdScan_FS_MB2;   //!
   TBranch        *b_EF_L2SiTrack_FS_MB2;   //!
   TBranch        *b_EF_MU4_DiMu;   //!
   TBranch        *b_EF_MU4_DiMu_FS;   //!
   TBranch        *b_EF_MU4_DiMu_FS_noOS;   //!
   TBranch        *b_EF_MU4_DiMu_FS_noOS_passL2;   //!
   TBranch        *b_EF_MU4_DiMu_MG_FS;   //!
   TBranch        *b_EF_MU4_DiMu_SiTrk_FS;   //!
   TBranch        *b_EF_MU4_DiMu_noOS;   //!
   TBranch        *b_EF_MU4_DiMu_noOS_passL2;   //!
   TBranch        *b_EF_MU4_Trk_Jpsi;   //!
   TBranch        *b_EF_MU4_Trk_Jpsi_FS;   //!
   TBranch        *b_EF_MU4_Trk_Jpsi_loose;   //!
   TBranch        *b_EF_MU4_Trk_Jpsi_loose_FS;   //!
   TBranch        *b_EF_MU4_Trk_Jpsi_loose_FS_passL2;   //!
   TBranch        *b_EF_MU4_Trk_Jpsi_loose_passL2;   //!
   TBranch        *b_EF_MU4_Trk_Upsi_loose_FS;   //!
   TBranch        *b_EF_MU4_Trk_Upsi_loose_FS_passL2;   //!
   TBranch        *b_EF_MU6_DiMu;   //!
   TBranch        *b_EF_MU6_DiMu_FS;   //!
   TBranch        *b_EF_MU6_Jpsie5e3;   //!
   TBranch        *b_EF_MU6_Jpsie5e3_FS;   //!
   TBranch        *b_EF_MU6_Jpsie5e3_SiTrk_FS;   //!
   TBranch        *b_EF_MU6_Trk_Jpsi_loose;   //!
   TBranch        *b_EF_MU6_Trk_Jpsi_loose_FS;   //!
   TBranch        *b_EF_MU6_Trk_Upsi_loose_FS;   //!
   TBranch        *b_EF_PixelNoise;   //!
   TBranch        *b_EF_SCTNoise;   //!
   TBranch        *b_EF_SeededStreamerBCM_LUCID_ZDC;   //!
   TBranch        *b_EF_SeededStreamerCosmicCalo;   //!
   TBranch        *b_EF_SeededStreamerCosmicCaloEM;   //!
   TBranch        *b_EF_SeededStreamerCosmicMuons;   //!
   TBranch        *b_EF_SeededStreamerL1Calo;   //!
   TBranch        *b_EF_SeededStreamerL1CaloEM;   //!
   TBranch        *b_EF_SeededStreamerL1CaloJet;   //!
   TBranch        *b_EF_SeededStreamerL1CaloTau;   //!
   TBranch        *b_EF_SeededStreamerMBTS;   //!
   TBranch        *b_EF_SeededStreamerMinBias;   //!
   TBranch        *b_EF_SeededStreamerMuonswBeam;   //!
   TBranch        *b_EF_SeededStreamerRNDM;   //!
   TBranch        *b_EF_SeededStreamerWarmStart;   //!
   TBranch        *b_EF_SeededStreamerZeroBias;   //!
   TBranch        *b_EF_TileCalib_cis;   //!
   TBranch        *b_EF_TileCalib_laser;   //!
   TBranch        *b_EF_TileMon;   //!
   TBranch        *b_EF_cost_monitor;   //!
   TBranch        *b_EF_e10_loose;   //!
   TBranch        *b_EF_e10_loose_passEF;   //!
   TBranch        *b_EF_e10_loose_passL2;   //!
   TBranch        *b_EF_e10_medium;   //!
   TBranch        *b_EF_e20_loose_NoIDTrkCut;   //!
   TBranch        *b_EF_e3_NoCut;   //!
   TBranch        *b_EF_e3_NoCut_IdScan;   //!
   TBranch        *b_EF_e3_NoCut_TRT;   //!
   TBranch        *b_EF_e5_NoCut;   //!
   TBranch        *b_EF_e5_NoCut_FwdBackTrk;   //!
   TBranch        *b_EF_e5_NoCut_IdScan;   //!
   TBranch        *b_EF_e5_NoCut_SiTrk;   //!
   TBranch        *b_EF_e5_NoCut_TRT;   //!
   TBranch        *b_EF_e5_NoCut_cells;   //!
   TBranch        *b_EF_e5_loose;   //!
   TBranch        *b_EF_e5_loose_IdScan;   //!
   TBranch        *b_EF_e5_loose_NoIDTrkCut;   //!
   TBranch        *b_EF_e5_loose_TRT;   //!
   TBranch        *b_EF_e5_medium;   //!
   TBranch        *b_EF_e5_medium_IdScan;   //!
   TBranch        *b_EF_e5_medium_TRT;   //!
   TBranch        *b_EF_g10_loose;   //!
   TBranch        *b_EF_g10_loose_larcalib;   //!
   TBranch        *b_EF_g3_nocut;   //!
   TBranch        *b_EF_g3_nocut_larcalib;   //!
   TBranch        *b_EF_g5_loose;   //!
   TBranch        *b_EF_g5_loose_larcalib;   //!
   TBranch        *b_EF_g5_nocut;   //!
   TBranch        *b_EF_j10;   //!
   TBranch        *b_EF_j10_c4;   //!
   TBranch        *b_EF_j10_larcalib;   //!
   TBranch        *b_EF_j10_noise;   //!
   TBranch        *b_EF_j140;   //!
   TBranch        *b_EF_j20;   //!
   TBranch        *b_EF_j200;   //!
   TBranch        *b_EF_j20_c4;   //!
   TBranch        *b_EF_j20_noise;   //!
   TBranch        *b_EF_j30_L1TAU_HV;   //!
   TBranch        *b_EF_j30_Trackless_HV;   //!
   TBranch        *b_EF_j40;   //!
   TBranch        *b_EF_j80;   //!
   TBranch        *b_EF_j80_larcalib;   //!
   TBranch        *b_EF_mbBcm;   //!
   TBranch        *b_EF_mbLucid;   //!
   TBranch        *b_EF_mbMbts_1;   //!
   TBranch        *b_EF_mbMbts_1_1;   //!
   TBranch        *b_EF_mbMbts_1_1_NoCut_Time;   //!
   TBranch        *b_EF_mbMbts_1_NoCut_Time;   //!
   TBranch        *b_EF_mbMbts_1_NoCut_Time_unpaired;   //!
   TBranch        *b_EF_mbMbts_2;   //!
   TBranch        *b_EF_mbMbts_2_NoCut_Time;   //!
   TBranch        *b_EF_mbRmMbts_1;   //!
   TBranch        *b_EF_mbRmMbts_1_1;   //!
   TBranch        *b_EF_mbRmMbts_1_1_NoCut_Time;   //!
   TBranch        *b_EF_mbRmMbts_1_NoCut_Time;   //!
   TBranch        *b_EF_mbRmMbts_1_NoCut_Time_unpaired;   //!
   TBranch        *b_EF_mbRmMbts_1_unpaired;   //!
   TBranch        *b_EF_mbRmMbts_2;   //!
   TBranch        *b_EF_mbRmMbts_2_NoCut_Time;   //!
   TBranch        *b_EF_mbRndm;   //!
   TBranch        *b_EF_mbSpTrk;   //!
   TBranch        *b_EF_mbSpTrk_cosmic;   //!
   TBranch        *b_EF_mbSpTrk_unpaired;   //!
   TBranch        *b_EF_mbSp_fwd;   //!
   TBranch        *b_EF_mbSp_oneD;   //!
   TBranch        *b_EF_mbTrtTrk;   //!
   TBranch        *b_EF_mbTrtTrk_unpaired;   //!
   TBranch        *b_EF_mbZdc;   //!
   TBranch        *b_EF_mb_BM_calib;   //!
   TBranch        *b_EF_mb_LD_calib;   //!
   TBranch        *b_EF_mb_M1_calib;   //!
   TBranch        *b_EF_mb_M1_calib_unpaired;   //!
   TBranch        *b_EF_mb_M2_calib;   //!
   TBranch        *b_EF_mb_M2_calib_unpaired;   //!
   TBranch        *b_EF_mb_MU;   //!
   TBranch        *b_EF_mb_RM_calib;   //!
   TBranch        *b_EF_mb_RM_calib_cosmic;   //!
   TBranch        *b_EF_mb_RM_calib_unpaired;   //!
   TBranch        *b_EF_mb_ZC_calib;   //!
   TBranch        *b_EF_mu10;   //!
   TBranch        *b_EF_mu10_MG;   //!
   TBranch        *b_EF_mu10_MSonly;   //!
   TBranch        *b_EF_mu10_NoIDTrkCut;   //!
   TBranch        *b_EF_mu10_SiTrk;   //!
   TBranch        *b_EF_mu10_passHLT;   //!
   TBranch        *b_EF_mu10i_loose;   //!
   TBranch        *b_EF_mu13;   //!
   TBranch        *b_EF_mu15;   //!
   TBranch        *b_EF_mu20;   //!
   TBranch        *b_EF_mu20_MSonly;   //!
   TBranch        *b_EF_mu20_passHLT;   //!
   TBranch        *b_EF_mu4;   //!
   TBranch        *b_EF_mu4_DiMu;   //!
   TBranch        *b_EF_mu4_DiMu_FS;   //!
   TBranch        *b_EF_mu4_DiMu_FS_noOS;   //!
   TBranch        *b_EF_mu4_L2MSonly_EFFS_passL2;   //!
   TBranch        *b_EF_mu4_MB2_noL2_EFFS;   //!
   TBranch        *b_EF_mu4_MG;   //!
   TBranch        *b_EF_mu4_MSonly;   //!
   TBranch        *b_EF_mu4_MSonly_EFFS_passL2;   //!
   TBranch        *b_EF_mu4_MSonly_Trk_Jpsi_loose;   //!
   TBranch        *b_EF_mu4_MSonly_Trk_Upsi_loose_FS;   //!
   TBranch        *b_EF_mu4_NoIDTrkCut;   //!
   TBranch        *b_EF_mu4_SiTrk;   //!
   TBranch        *b_EF_mu4_Trk_Jpsi_loose;   //!
   TBranch        *b_EF_mu4_Trk_Upsi_loose_FS;   //!
   TBranch        *b_EF_mu4_mu6;   //!
   TBranch        *b_EF_mu4_passHLT;   //!
   TBranch        *b_EF_mu4_tile;   //!
   TBranch        *b_EF_mu4_tile_SiTrk;   //!
   TBranch        *b_EF_mu4_trod;   //!
   TBranch        *b_EF_mu4_trod_SiTrk;   //!
   TBranch        *b_EF_mu4mu6_DiMu;   //!
   TBranch        *b_EF_mu6;   //!
   TBranch        *b_EF_mu6_DiMu;   //!
   TBranch        *b_EF_mu6_DiMu_FS;   //!
   TBranch        *b_EF_mu6_DiMu_FS_noOS;   //!
   TBranch        *b_EF_mu6_Jpsie5e3;   //!
   TBranch        *b_EF_mu6_MG;   //!
   TBranch        *b_EF_mu6_MSonly;   //!
   TBranch        *b_EF_mu6_SiTrk;   //!
   TBranch        *b_EF_mu6_Trk_Jpsi_loose;   //!
   TBranch        *b_EF_mu6_Trk_Jpsi_loose_FS;   //!
   TBranch        *b_EF_mu6_Trk_Upsi_loose_FS;   //!
   TBranch        *b_EF_mu6_passHLT;   //!
   TBranch        *b_EF_te100;   //!
   TBranch        *b_EF_trk9_loose;   //!
   TBranch        *b_EF_vtxbeamspot_FSTracks;   //!
   TBranch        *b_EF_vtxbeamspot_FSTracks_SiTrk;   //!
   TBranch        *b_EF_xe20;   //!
   TBranch        *b_EF_xe20_FEB;   //!
   TBranch        *b_EF_xe20_allCells;   //!
   TBranch        *b_EF_xe30_allL1;   //!
   TBranch        *b_EF_xe30_allL1_FEB;   //!
   TBranch        *b_EF_xe30_allL1_allCells;   //!
   TBranch        *b_EF_xe30_unbiased;   //!
   TBranch        *b_EF_xe30_unbiased_FEB;   //!
   TBranch        *b_EF_xe30_unbiased_allCells;   //!
   TBranch        *b_L1_2EM2;   //!
   TBranch        *b_L1_2EM3;   //!
   TBranch        *b_L1_2EM4;   //!
   TBranch        *b_L1_2EM5;   //!
   TBranch        *b_L1_2EM5I;   //!
   TBranch        *b_L1_2FJ18;   //!
   TBranch        *b_L1_2FJ3;   //!
   TBranch        *b_L1_2J10;   //!
   TBranch        *b_L1_2J10_win6;   //!
   TBranch        *b_L1_2J15;   //!
   TBranch        *b_L1_2J5;   //!
   TBranch        *b_L1_2MU0;   //!
   TBranch        *b_L1_2MU0_MU6;   //!
   TBranch        *b_L1_2MU10;   //!
   TBranch        *b_L1_2MU6;   //!
   TBranch        *b_L1_2TAU5;   //!
   TBranch        *b_L1_2TAU6;   //!
   TBranch        *b_L1_2TAU6I;   //!
   TBranch        *b_L1_3J10;   //!
   TBranch        *b_L1_BCM_AtoC;   //!
   TBranch        *b_L1_BCM_AtoC_EMPTY;   //!
   TBranch        *b_L1_BCM_CtoA;   //!
   TBranch        *b_L1_BCM_CtoA_EMPTY;   //!
   TBranch        *b_L1_BCM_HT;   //!
   TBranch        *b_L1_BCM_HT_EMPTY;   //!
   TBranch        *b_L1_BCM_MUL_1;   //!
   TBranch        *b_L1_BCM_MUL_1_EMPTY;   //!
   TBranch        *b_L1_BCM_MUL_2;   //!
   TBranch        *b_L1_BCM_MUL_2_EMPTY;   //!
   TBranch        *b_L1_BCM_MUL_3;   //!
   TBranch        *b_L1_BCM_MUL_3_EMPTY;   //!
   TBranch        *b_L1_BCM_MUL_4;   //!
   TBranch        *b_L1_BCM_MUL_4_EMPTY;   //!
   TBranch        *b_L1_BCM_MUL_5;   //!
   TBranch        *b_L1_BCM_MUL_5_EMPTY;   //!
   TBranch        *b_L1_BCM_MUL_6;   //!
   TBranch        *b_L1_BCM_MUL_6_EMPTY;   //!
   TBranch        *b_L1_BCM_Wide;   //!
   TBranch        *b_L1_BCM_Wide_EMPTY;   //!
   TBranch        *b_L1_BGRP0;   //!
   TBranch        *b_L1_BGRP1;   //!
   TBranch        *b_L1_BPTX0_BGRP0;   //!
   TBranch        *b_L1_BPTX0_BPTX1_BGRP0;   //!
   TBranch        *b_L1_BPTX1_BGRP0;   //!
   TBranch        *b_L1_CALREQ1;   //!
   TBranch        *b_L1_CALREQ2;   //!
   TBranch        *b_L1_EM10;   //!
   TBranch        *b_L1_EM10I;   //!
   TBranch        *b_L1_EM14;   //!
   TBranch        *b_L1_EM2;   //!
   TBranch        *b_L1_EM3;   //!
   TBranch        *b_L1_EM3_EMPTY;   //!
   TBranch        *b_L1_EM3_UNPAIRED;   //!
   TBranch        *b_L1_EM4;   //!
   TBranch        *b_L1_EM5;   //!
   TBranch        *b_L1_EM5I;   //!
   TBranch        *b_L1_FJ18;   //!
   TBranch        *b_L1_FJ3;   //!
   TBranch        *b_L1_FJ3_EMPTY;   //!
   TBranch        *b_L1_FJ3_UNPAIRED;   //!
   TBranch        *b_L1_J10;   //!
   TBranch        *b_L1_J10_EMPTY;   //!
   TBranch        *b_L1_J10_win6;   //!
   TBranch        *b_L1_J15;   //!
   TBranch        *b_L1_J15_LV;   //!
   TBranch        *b_L1_J15_MV;   //!
   TBranch        *b_L1_J15_NL;   //!
   TBranch        *b_L1_J30;   //!
   TBranch        *b_L1_J30_EMPTY;   //!
   TBranch        *b_L1_J5;   //!
   TBranch        *b_L1_J55;   //!
   TBranch        *b_L1_J5_EMPTY;   //!
   TBranch        *b_L1_J5_UNPAIRED;   //!
   TBranch        *b_L1_J75;   //!
   TBranch        *b_L1_JE120;   //!
   TBranch        *b_L1_JE280;   //!
   TBranch        *b_L1_L1A_Mon;   //!
   TBranch        *b_L1_LUCID;   //!
   TBranch        *b_L1_LUCID_A;   //!
   TBranch        *b_L1_LUCID_A_C;   //!
   TBranch        *b_L1_LUCID_A_C_EMPTY;   //!
   TBranch        *b_L1_LUCID_A_C_UNPAIRED;   //!
   TBranch        *b_L1_LUCID_A_EMPTY;   //!
   TBranch        *b_L1_LUCID_A_UNPAIRED;   //!
   TBranch        *b_L1_LUCID_C;   //!
   TBranch        *b_L1_LUCID_COMM;   //!
   TBranch        *b_L1_LUCID_COMM_EMPTY;   //!
   TBranch        *b_L1_LUCID_C_EMPTY;   //!
   TBranch        *b_L1_LUCID_C_UNPAIRED;   //!
   TBranch        *b_L1_LUCID_EMPTY;   //!
   TBranch        *b_L1_MBTSA0;   //!
   TBranch        *b_L1_MBTSA1;   //!
   TBranch        *b_L1_MBTSA10;   //!
   TBranch        *b_L1_MBTSA11;   //!
   TBranch        *b_L1_MBTSA12;   //!
   TBranch        *b_L1_MBTSA13;   //!
   TBranch        *b_L1_MBTSA14;   //!
   TBranch        *b_L1_MBTSA15;   //!
   TBranch        *b_L1_MBTSA2;   //!
   TBranch        *b_L1_MBTSA3;   //!
   TBranch        *b_L1_MBTSA4;   //!
   TBranch        *b_L1_MBTSA5;   //!
   TBranch        *b_L1_MBTSA6;   //!
   TBranch        *b_L1_MBTSA7;   //!
   TBranch        *b_L1_MBTSA8;   //!
   TBranch        *b_L1_MBTSA9;   //!
   TBranch        *b_L1_MBTSC0;   //!
   TBranch        *b_L1_MBTSC1;   //!
   TBranch        *b_L1_MBTSC10;   //!
   TBranch        *b_L1_MBTSC11;   //!
   TBranch        *b_L1_MBTSC12;   //!
   TBranch        *b_L1_MBTSC13;   //!
   TBranch        *b_L1_MBTSC14;   //!
   TBranch        *b_L1_MBTSC15;   //!
   TBranch        *b_L1_MBTSC2;   //!
   TBranch        *b_L1_MBTSC3;   //!
   TBranch        *b_L1_MBTSC4;   //!
   TBranch        *b_L1_MBTSC5;   //!
   TBranch        *b_L1_MBTSC6;   //!
   TBranch        *b_L1_MBTSC7;   //!
   TBranch        *b_L1_MBTSC8;   //!
   TBranch        *b_L1_MBTSC9;   //!
   TBranch        *b_L1_MBTS_1;   //!
   TBranch        *b_L1_MBTS_1_1;   //!
   TBranch        *b_L1_MBTS_1_1_Col;   //!
   TBranch        *b_L1_MBTS_1_1_EMPTY;   //!
   TBranch        *b_L1_MBTS_1_1_UNPAIRED;   //!
   TBranch        *b_L1_MBTS_1_1_UNPAIRED1;   //!
   TBranch        *b_L1_MBTS_1_1_UNPAIRED2;   //!
   TBranch        *b_L1_MBTS_1_Col;   //!
   TBranch        *b_L1_MBTS_1_EMPTY;   //!
   TBranch        *b_L1_MBTS_1_UNPAIRED;   //!
   TBranch        *b_L1_MBTS_1_UNPAIRED1;   //!
   TBranch        *b_L1_MBTS_1_UNPAIRED2;   //!
   TBranch        *b_L1_MBTS_2;   //!
   TBranch        *b_L1_MBTS_2_Col;   //!
   TBranch        *b_L1_MBTS_2_EMPTY;   //!
   TBranch        *b_L1_MBTS_2_UNPAIRED;   //!
   TBranch        *b_L1_MBTS_2_UNPAIRED1;   //!
   TBranch        *b_L1_MBTS_2_UNPAIRED2;   //!
   TBranch        *b_L1_MBTS_4_4;   //!
   TBranch        *b_L1_MBTS_4_4_UNPAIRED;   //!
   TBranch        *b_L1_MBTS_4_4_UNPAIRED1;   //!
   TBranch        *b_L1_MBTS_4_4_UNPAIRED2;   //!
   TBranch        *b_L1_MU0;   //!
   TBranch        *b_L1_MU0_COMM;   //!
   TBranch        *b_L1_MU0_COMM_EMPTY;   //!
   TBranch        *b_L1_MU0_COMM_UNPAIRED;   //!
   TBranch        *b_L1_MU0_EM3;   //!
   TBranch        *b_L1_MU0_EMPTY;   //!
   TBranch        *b_L1_MU0_J5;   //!
   TBranch        *b_L1_MU0_UNPAIRED;   //!
   TBranch        *b_L1_MU10;   //!
   TBranch        *b_L1_MU10_EMPTY;   //!
   TBranch        *b_L1_MU15;   //!
   TBranch        *b_L1_MU20;   //!
   TBranch        *b_L1_MU6;   //!
   TBranch        *b_L1_MU6_EM3;   //!
   TBranch        *b_L1_MU6_EMPTY;   //!
   TBranch        *b_L1_MU6_J5;   //!
   TBranch        *b_L1_MU6_UNPAIRED;   //!
   TBranch        *b_L1_NIM_S9C0A20;   //!
   TBranch        *b_L1_NIM_S9C1C19;   //!
   TBranch        *b_L1_NIM_S9C1C20;   //!
   TBranch        *b_L1_RD0_EMPTY;   //!
   TBranch        *b_L1_RD0_FILLED;   //!
   TBranch        *b_L1_RD0_FIRSTEMPTY;   //!
   TBranch        *b_L1_RD0_UNPAIRED;   //!
   TBranch        *b_L1_RD1_FILLED;   //!
   TBranch        *b_L1_TAU11;   //!
   TBranch        *b_L1_TAU11I;   //!
   TBranch        *b_L1_TAU20;   //!
   TBranch        *b_L1_TAU30;   //!
   TBranch        *b_L1_TAU5;   //!
   TBranch        *b_L1_TAU5_EMPTY;   //!
   TBranch        *b_L1_TAU5_UNPAIRED;   //!
   TBranch        *b_L1_TAU6;   //!
   TBranch        *b_L1_TAU6I;   //!
   TBranch        *b_L1_TAU6_XE10;   //!
   TBranch        *b_L1_TAU8;   //!
   TBranch        *b_L1_TE10;   //!
   TBranch        *b_L1_TE100;   //!
   TBranch        *b_L1_TRT;   //!
   TBranch        *b_L1_XE10;   //!
   TBranch        *b_L1_XE15;   //!
   TBranch        *b_L1_XE20;   //!
   TBranch        *b_L1_XE30;   //!
   TBranch        *b_L1_ZDC;   //!
   TBranch        *b_L1_ZDC_A;   //!
   TBranch        *b_L1_ZDC_AND;   //!
   TBranch        *b_L1_ZDC_AND_EMPTY;   //!
   TBranch        *b_L1_ZDC_A_C;   //!
   TBranch        *b_L1_ZDC_A_C_EMPTY;   //!
   TBranch        *b_L1_ZDC_A_EMPTY;   //!
   TBranch        *b_L1_ZDC_C;   //!
   TBranch        *b_L1_ZDC_C_EMPTY;   //!
   TBranch        *b_L1_ZDC_EMPTY;   //!
   TBranch        *b_L1_ZDC_UNPAIRED;   //!
   TBranch        *b_L2_2MUL1_j40_HV;   //!
   TBranch        *b_L2_2j15;   //!
   TBranch        *b_L2_2j15_deta3_5;   //!
   TBranch        *b_L2_2j30;   //!
   TBranch        *b_L2_2j30_deta3_5;   //!
   TBranch        *b_L2_2j7;   //!
   TBranch        *b_L2_2j7_deta3_5;   //!
   TBranch        *b_L2_2j7_deta5;   //!
   TBranch        *b_L2_2mu10;   //!
   TBranch        *b_L2_2mu4;   //!
   TBranch        *b_L2_2mu4_DiMu;   //!
   TBranch        *b_L2_2mu4_DiMu_SiTrk;   //!
   TBranch        *b_L2_2mu4_DiMu_noOS;   //!
   TBranch        *b_L2_2mu4_DiMu_noOS_passL2;   //!
   TBranch        *b_L2_2mu4_DiMu_noVtx_noOS;   //!
   TBranch        *b_L2_2mu4_DiMu_noVtx_noOS_passL2;   //!
   TBranch        *b_L2_2mu4_MSonly;   //!
   TBranch        *b_L2_2mu6;   //!
   TBranch        *b_L2_2mu6_DiMu;   //!
   TBranch        *b_L2_2mu6_DiMu_noVtx_noOS;   //!
   TBranch        *b_L2_3j15;   //!
   TBranch        *b_L2_EFInsideOut_FS_MB2;   //!
   TBranch        *b_L2_EFTRTOnly_FS_MB2;   //!
   TBranch        *b_L2_FJ18;   //!
   TBranch        *b_L2_FJ3;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2EM2;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2EM3;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2EM4;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2EM5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2EM5I;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2FJ18;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2FJ3;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2J10;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2J10_win6;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2J15;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2J5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU0;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU0_MU6;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU10;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2MU6;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2TAU5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2TAU6;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_2TAU6I;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_3J10;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_AtoC;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_AtoC_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_CtoA;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_CtoA_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_HT;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_HT_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_MUL_1;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_MUL_1_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_MUL_2;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_MUL_2_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_MUL_3;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_MUL_3_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_MUL_4;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_MUL_4_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_MUL_5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_MUL_5_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_MUL_6;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_MUL_6_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_Wide;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BCM_Wide_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BGRP0;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BGRP1;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BPTX0_BGRP0;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BPTX0_BPTX1_BGRP0;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_BPTX1_BGRP0;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM10;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM10I;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM14;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM2;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM3;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM3_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM3_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM4;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_EM5I;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_FJ18;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_FJ3;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_FJ3_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_FJ3_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J10;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J10_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J10_win6;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J15;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J15_LV;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J15_MV;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J15_NL;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J30;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J30_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J55;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J5_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J5_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_J75;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_JE120;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_JE280;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_L1A_Mon;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_LUCID;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_LUCID_A;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_LUCID_A_C;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_LUCID_A_C_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_LUCID_A_C_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_LUCID_A_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_LUCID_A_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_LUCID_C;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_LUCID_COMM;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_LUCID_COMM_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_LUCID_C_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_LUCID_C_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_LUCID_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA0;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA1;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA10;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA11;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA12;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA13;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA14;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA15;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA2;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA3;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA4;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA6;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA7;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA8;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSA9;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC0;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC1;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC10;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC11;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC12;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC13;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC14;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC15;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC2;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC3;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC4;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC6;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC7;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC8;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTSC9;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_1;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_1_1;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_1_1_Col;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_1_1_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED1;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED2;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_1_Col;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_1_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED1;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED2;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_2;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_2_Col;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_2_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED1;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED2;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_4_4;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED1;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED2;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_COMM;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_EM3;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_J5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU0_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU10;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU10_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU15;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU20;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU6;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU6_EM3;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU6_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU6_J5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_MU6_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_NIM_S9C0A20;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_NIM_S9C1C19;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_NIM_S9C1C20;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_RD0_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_RD0_FILLED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_RD0_FIRSTEMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_RD0_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_RD1_FILLED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TAU11;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TAU11I;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TAU20;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TAU30;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TAU5;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TAU5_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TAU5_UNPAIRED;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TAU6;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TAU6I;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TAU6_XE10;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TAU8;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TE10;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TE100;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_TRT;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_XE10;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_XE15;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_XE20;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_XE30;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_ZDC;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_ZDC_A;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_ZDC_AND;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_ZDC_AND_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_ZDC_A_C;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_ZDC_A_C_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_ZDC_A_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_ZDC_C;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_ZDC_C_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_ZDC_EMPTY;   //!
   TBranch        *b_L2_L1ItemStreamer_L1_ZDC_UNPAIRED;   //!
   TBranch        *b_L2_L2IdScan_FS_MB2;   //!
   TBranch        *b_L2_L2SiTrack_FS_MB2;   //!
   TBranch        *b_L2_MU4_DiMu;   //!
   TBranch        *b_L2_MU4_DiMu_FS;   //!
   TBranch        *b_L2_MU4_DiMu_FS_noOS;   //!
   TBranch        *b_L2_MU4_DiMu_FS_noOS_passL2;   //!
   TBranch        *b_L2_MU4_DiMu_MG_FS;   //!
   TBranch        *b_L2_MU4_DiMu_SiTrk_FS;   //!
   TBranch        *b_L2_MU4_DiMu_noOS;   //!
   TBranch        *b_L2_MU4_DiMu_noOS_passL2;   //!
   TBranch        *b_L2_MU4_Trk_Jpsi;   //!
   TBranch        *b_L2_MU4_Trk_Jpsi_FS;   //!
   TBranch        *b_L2_MU4_Trk_Jpsi_loose;   //!
   TBranch        *b_L2_MU4_Trk_Jpsi_loose_FS;   //!
   TBranch        *b_L2_MU4_Trk_Jpsi_loose_FS_passL2;   //!
   TBranch        *b_L2_MU4_Trk_Jpsi_loose_passL2;   //!
   TBranch        *b_L2_MU4_Trk_Upsi_loose_FS;   //!
   TBranch        *b_L2_MU4_Trk_Upsi_loose_FS_passL2;   //!
   TBranch        *b_L2_MU6_DiMu;   //!
   TBranch        *b_L2_MU6_DiMu_FS;   //!
   TBranch        *b_L2_MU6_Jpsie5e3;   //!
   TBranch        *b_L2_MU6_Jpsie5e3_FS;   //!
   TBranch        *b_L2_MU6_Jpsie5e3_SiTrk_FS;   //!
   TBranch        *b_L2_MU6_Trk_Jpsi_loose;   //!
   TBranch        *b_L2_MU6_Trk_Jpsi_loose_FS;   //!
   TBranch        *b_L2_MU6_Trk_Upsi_loose_FS;   //!
   TBranch        *b_L2_PixelNoise;   //!
   TBranch        *b_L2_SCTNoise;   //!
   TBranch        *b_L2_SeededStreamerBCM_LUCID_ZDC;   //!
   TBranch        *b_L2_SeededStreamerCosmicCalo;   //!
   TBranch        *b_L2_SeededStreamerCosmicCaloEM;   //!
   TBranch        *b_L2_SeededStreamerCosmicMuons;   //!
   TBranch        *b_L2_SeededStreamerL1Calo;   //!
   TBranch        *b_L2_SeededStreamerL1CaloEM;   //!
   TBranch        *b_L2_SeededStreamerL1CaloJet;   //!
   TBranch        *b_L2_SeededStreamerL1CaloTau;   //!
   TBranch        *b_L2_SeededStreamerMBTS;   //!
   TBranch        *b_L2_SeededStreamerMinBias;   //!
   TBranch        *b_L2_SeededStreamerMuonswBeam;   //!
   TBranch        *b_L2_SeededStreamerRNDM;   //!
   TBranch        *b_L2_SeededStreamerWarmStart;   //!
   TBranch        *b_L2_SeededStreamerZeroBias;   //!
   TBranch        *b_L2_TileCalib_cis;   //!
   TBranch        *b_L2_TileCalib_laser;   //!
   TBranch        *b_L2_TileMon;   //!
   TBranch        *b_L2_allID_IDCalib;   //!
   TBranch        *b_L2_cost_monitor;   //!
   TBranch        *b_L2_e10_loose;   //!
   TBranch        *b_L2_e10_loose_passEF;   //!
   TBranch        *b_L2_e10_loose_passL2;   //!
   TBranch        *b_L2_e10_medium;   //!
   TBranch        *b_L2_e20_loose_NoIDTrkCut;   //!
   TBranch        *b_L2_e3_NoCut;   //!
   TBranch        *b_L2_e3_NoCut_IdScan;   //!
   TBranch        *b_L2_e3_NoCut_TRT;   //!
   TBranch        *b_L2_e5_NoCut;   //!
   TBranch        *b_L2_e5_NoCut_FwdBackTrk;   //!
   TBranch        *b_L2_e5_NoCut_IdScan;   //!
   TBranch        *b_L2_e5_NoCut_SiTrk;   //!
   TBranch        *b_L2_e5_NoCut_TRT;   //!
   TBranch        *b_L2_e5_NoCut_cells;   //!
   TBranch        *b_L2_e5_loose;   //!
   TBranch        *b_L2_e5_loose_IdScan;   //!
   TBranch        *b_L2_e5_loose_NoIDTrkCut;   //!
   TBranch        *b_L2_e5_loose_TRT;   //!
   TBranch        *b_L2_e5_medium;   //!
   TBranch        *b_L2_e5_medium_IdScan;   //!
   TBranch        *b_L2_e5_medium_TRT;   //!
   TBranch        *b_L2_g10_loose;   //!
   TBranch        *b_L2_g3_nocut;   //!
   TBranch        *b_L2_g5_loose;   //!
   TBranch        *b_L2_g5_nocut;   //!
   TBranch        *b_L2_j130;   //!
   TBranch        *b_L2_j15;   //!
   TBranch        *b_L2_j15_noise;   //!
   TBranch        *b_L2_j20_Trackless_HV;   //!
   TBranch        *b_L2_j30;   //!
   TBranch        *b_L2_j30_L1TAU_HV;   //!
   TBranch        *b_L2_j60;   //!
   TBranch        *b_L2_j7;   //!
   TBranch        *b_L2_j7_noise;   //!
   TBranch        *b_L2_j90;   //!
   TBranch        *b_L2_mbBcm;   //!
   TBranch        *b_L2_mbLucid;   //!
   TBranch        *b_L2_mbMbts_1;   //!
   TBranch        *b_L2_mbMbts_1_1;   //!
   TBranch        *b_L2_mbMbts_1_1_NoCut_Time;   //!
   TBranch        *b_L2_mbMbts_1_NoCut_Time;   //!
   TBranch        *b_L2_mbMbts_1_NoCut_Time_unpaired;   //!
   TBranch        *b_L2_mbMbts_2;   //!
   TBranch        *b_L2_mbMbts_2_NoCut_Time;   //!
   TBranch        *b_L2_mbRmMbts_1;   //!
   TBranch        *b_L2_mbRmMbts_1_1;   //!
   TBranch        *b_L2_mbRmMbts_1_1_NoCut_Time;   //!
   TBranch        *b_L2_mbRmMbts_1_NoCut_Time;   //!
   TBranch        *b_L2_mbRmMbts_1_NoCut_Time_unpaired;   //!
   TBranch        *b_L2_mbRmMbts_1_unpaired;   //!
   TBranch        *b_L2_mbRmMbts_2;   //!
   TBranch        *b_L2_mbRmMbts_2_NoCut_Time;   //!
   TBranch        *b_L2_mbRndm;   //!
   TBranch        *b_L2_mbSpTrk;   //!
   TBranch        *b_L2_mbSpTrk_cosmic;   //!
   TBranch        *b_L2_mbSpTrk_unpaired;   //!
   TBranch        *b_L2_mbSp_fwd;   //!
   TBranch        *b_L2_mbSp_oneD;   //!
   TBranch        *b_L2_mbTrtTrk;   //!
   TBranch        *b_L2_mbTrtTrk_unpaired;   //!
   TBranch        *b_L2_mbZdc;   //!
   TBranch        *b_L2_mb_BM_calib;   //!
   TBranch        *b_L2_mb_LD_calib;   //!
   TBranch        *b_L2_mb_M1_calib;   //!
   TBranch        *b_L2_mb_M1_calib_unpaired;   //!
   TBranch        *b_L2_mb_M2_calib;   //!
   TBranch        *b_L2_mb_M2_calib_unpaired;   //!
   TBranch        *b_L2_mb_MU;   //!
   TBranch        *b_L2_mb_RM_calib;   //!
   TBranch        *b_L2_mb_RM_calib_cosmic;   //!
   TBranch        *b_L2_mb_RM_calib_unpaired;   //!
   TBranch        *b_L2_mb_ZC_calib;   //!
   TBranch        *b_L2_mu10;   //!
   TBranch        *b_L2_mu10_MG;   //!
   TBranch        *b_L2_mu10_MSonly;   //!
   TBranch        *b_L2_mu10_NoIDTrkCut;   //!
   TBranch        *b_L2_mu10_SiTrk;   //!
   TBranch        *b_L2_mu10_passHLT;   //!
   TBranch        *b_L2_mu10i_loose;   //!
   TBranch        *b_L2_mu13;   //!
   TBranch        *b_L2_mu15;   //!
   TBranch        *b_L2_mu20;   //!
   TBranch        *b_L2_mu20_MSonly;   //!
   TBranch        *b_L2_mu20_passHLT;   //!
   TBranch        *b_L2_mu4;   //!
   TBranch        *b_L2_mu4_DiMu;   //!
   TBranch        *b_L2_mu4_DiMu_FS;   //!
   TBranch        *b_L2_mu4_DiMu_FS_noOS;   //!
   TBranch        *b_L2_mu4_L2MSonly_EFFS_passL2;   //!
   TBranch        *b_L2_mu4_MB2_noL2_EFFS;   //!
   TBranch        *b_L2_mu4_MG;   //!
   TBranch        *b_L2_mu4_MSonly;   //!
   TBranch        *b_L2_mu4_MSonly_EFFS_passL2;   //!
   TBranch        *b_L2_mu4_MSonly_Trk_Jpsi_loose;   //!
   TBranch        *b_L2_mu4_MSonly_Trk_Upsi_loose_FS;   //!
   TBranch        *b_L2_mu4_NoIDTrkCut;   //!
   TBranch        *b_L2_mu4_SiTrk;   //!
   TBranch        *b_L2_mu4_Trk_Jpsi_loose;   //!
   TBranch        *b_L2_mu4_Trk_Upsi_loose_FS;   //!
   TBranch        *b_L2_mu4_mu6;   //!
   TBranch        *b_L2_mu4_passHLT;   //!
   TBranch        *b_L2_mu4_tile;   //!
   TBranch        *b_L2_mu4_tile_SiTrk;   //!
   TBranch        *b_L2_mu4_trod;   //!
   TBranch        *b_L2_mu4_trod_SiTrk;   //!
   TBranch        *b_L2_mu4mu6_DiMu;   //!
   TBranch        *b_L2_mu6;   //!
   TBranch        *b_L2_mu6_DiMu;   //!
   TBranch        *b_L2_mu6_DiMu_FS;   //!
   TBranch        *b_L2_mu6_DiMu_FS_noOS;   //!
   TBranch        *b_L2_mu6_Jpsie5e3;   //!
   TBranch        *b_L2_mu6_MG;   //!
   TBranch        *b_L2_mu6_MSonly;   //!
   TBranch        *b_L2_mu6_SiTrk;   //!
   TBranch        *b_L2_mu6_Trk_Jpsi_loose;   //!
   TBranch        *b_L2_mu6_Trk_Jpsi_loose_FS;   //!
   TBranch        *b_L2_mu6_Trk_Upsi_loose_FS;   //!
   TBranch        *b_L2_mu6_passHLT;   //!
   TBranch        *b_L2_te100;   //!
   TBranch        *b_L2_trk2_FullScan_IDSCAN_IDCalib;   //!
   TBranch        *b_L2_trk2_FullScan_SiTrk_IDCalib;   //!
   TBranch        *b_L2_trk2_IDSCAN_IDCalib;   //!
   TBranch        *b_L2_trk2_SiTrk_IDCalib;   //!
   TBranch        *b_L2_trk2_eGamma_IDSCAN_IDCalib;   //!
   TBranch        *b_L2_trk2_eGamma_SiTrk_IDCalib;   //!
   TBranch        *b_L2_trk6_IDSCAN_IDCalib;   //!
   TBranch        *b_L2_trk6_SiTrk_IDCalib;   //!
   TBranch        *b_L2_trk9_Central_Tau_IDCalib;   //!
   TBranch        *b_L2_trk9_Central_Tau_SiTrack_IDCalib;   //!
   TBranch        *b_L2_trk9_Fwd_Tau_IDCalib;   //!
   TBranch        *b_L2_trk9_Fwd_Tau_SiTrack_IDCalib;   //!
   TBranch        *b_L2_trk9_loose;   //!
   TBranch        *b_L2_vtxbeamspot_FSTracks;   //!
   TBranch        *b_L2_vtxbeamspot_FSTracks_SiTrk;   //!
   TBranch        *b_L2_vtxbeamspot_activeTE_SiTrk_peb;   //!
   TBranch        *b_L2_vtxbeamspot_activeTE_peb;   //!
   TBranch        *b_L2_vtxbeamspot_allTE_SiTrk_peb;   //!
   TBranch        *b_L2_vtxbeamspot_allTE_peb;   //!
   TBranch        *b_L2_xe15;   //!
   TBranch        *b_L2_xe15_FEB;   //!
   TBranch        *b_L2_xe15_allCells;   //!
   TBranch        *b_L2_xe30_allL1;   //!
   TBranch        *b_L2_xe30_allL1_FEB;   //!
   TBranch        *b_L2_xe30_allL1_allCells;   //!
   TBranch        *b_L2_xe30_unbiased;   //!
   TBranch        *b_L2_xe30_unbiased_FEB;   //!
   TBranch        *b_L2_xe30_unbiased_allCells;   //!
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
   TBranch        *b_cl_n;   //!
   TBranch        *b_cl_E;   //!
   TBranch        *b_cl_pt;   //!
   TBranch        *b_cl_m;   //!
   TBranch        *b_cl_eta;   //!
   TBranch        *b_cl_phi;   //!
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
   TBranch        *b_trig_L2_emcl_n;   //!
   TBranch        *b_trig_L2_emcl_quality;   //!
   TBranch        *b_trig_L2_emcl_E;   //!
   TBranch        *b_trig_L2_emcl_Et;   //!
   TBranch        *b_trig_L2_emcl_eta;   //!
   TBranch        *b_trig_L2_emcl_phi;   //!
   TBranch        *b_trig_L2_emcl_E237;   //!
   TBranch        *b_trig_L2_emcl_E277;   //!
   TBranch        *b_trig_L2_emcl_fracs1;   //!
   TBranch        *b_trig_L2_emcl_weta2;   //!
   TBranch        *b_trig_L2_emcl_Ehad1;   //!
   TBranch        *b_trig_L2_emcl_eta1;   //!
   TBranch        *b_trig_L2_emcl_emaxs1;   //!
   TBranch        *b_trig_L2_emcl_e2tsts1;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_n;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_algorithmId;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_trackStatus;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_chi2Ndof;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_nStrawHits;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_nHighThrHits;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_nPixelSpacePoints;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_nSCT_SpacePoints;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_a0;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_z0;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_phi0;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_eta;   //!
   TBranch        *b_trig_L2_trk_idscan_eGamma_pt;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_n;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_algorithmId;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_trackStatus;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_chi2Ndof;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_nStrawHits;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_nHighThrHits;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_nPixelSpacePoints;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_nSCT_SpacePoints;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_a0;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_z0;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_phi0;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_eta;   //!
   TBranch        *b_trig_L2_trk_sitrack_eGamma_pt;   //!
   TBranch        *b_trig_EF_emcl_n;   //!
   TBranch        *b_trig_EF_emcl_E;   //!
   TBranch        *b_trig_EF_emcl_pt;   //!
   TBranch        *b_trig_EF_emcl_m;   //!
   TBranch        *b_trig_EF_emcl_eta;   //!
   TBranch        *b_trig_EF_emcl_phi;   //!
   TBranch        *b_trig_EF_emcl_E_em;   //!
   TBranch        *b_trig_EF_emcl_E_had;   //!
   TBranch        *b_trig_EF_emcl_firstEdens;   //!
   TBranch        *b_trig_EF_emcl_cellmaxfrac;   //!
   TBranch        *b_trig_EF_emcl_longitudinal;   //!
   TBranch        *b_trig_EF_emcl_secondlambda;   //!
   TBranch        *b_trig_EF_emcl_lateral;   //!
   TBranch        *b_trig_EF_emcl_secondR;   //!
   TBranch        *b_trig_EF_emcl_centerlambda;   //!
   TBranch        *b_trig_EF_emcl_deltaTheta;   //!
   TBranch        *b_trig_EF_emcl_deltaPhi;   //!
   TBranch        *b_trig_EF_emcl_time;   //!
   TBranch        *b_trig_EF_emcl_slw_n;   //!
   TBranch        *b_trig_EF_emcl_slw_E;   //!
   TBranch        *b_trig_EF_emcl_slw_pt;   //!
   TBranch        *b_trig_EF_emcl_slw_m;   //!
   TBranch        *b_trig_EF_emcl_slw_eta;   //!
   TBranch        *b_trig_EF_emcl_slw_phi;   //!
   TBranch        *b_trig_EF_emcl_slw_E_em;   //!
   TBranch        *b_trig_EF_emcl_slw_E_had;   //!
   TBranch        *b_trig_EF_emcl_slw_firstEdens;   //!
   TBranch        *b_trig_EF_emcl_slw_cellmaxfrac;   //!
   TBranch        *b_trig_EF_emcl_slw_longitudinal;   //!
   TBranch        *b_trig_EF_emcl_slw_secondlambda;   //!
   TBranch        *b_trig_EF_emcl_slw_lateral;   //!
   TBranch        *b_trig_EF_emcl_slw_secondR;   //!
   TBranch        *b_trig_EF_emcl_slw_centerlambda;   //!
   TBranch        *b_trig_EF_emcl_slw_deltaTheta;   //!
   TBranch        *b_trig_EF_emcl_slw_deltaPhi;   //!
   TBranch        *b_trig_EF_emcl_slw_time;   //!
   TBranch        *b_trig_Nav_n;   //!
   TBranch        *b_trig_Nav_chain_ChainId;   //!
   TBranch        *b_trig_Nav_chain_RoIType;   //!
   TBranch        *b_trig_Nav_chain_RoIIndex;   //!
   TBranch        *b_trig_RoI_L2_e_n;   //!
   TBranch        *b_trig_RoI_L2_e_type;   //!
   TBranch        *b_trig_RoI_L2_e_lastStep;   //!
   TBranch        *b_trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgamma;   //!
   TBranch        *b_trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgammaStatus;   //!
   TBranch        *b_trig_RoI_L2_e_TrigEMCluster;   //!
   TBranch        *b_trig_RoI_L2_e_TrigEMClusterStatus;   //!
   TBranch        *b_trig_RoI_L2_e_EmTau_ROI;   //!
   TBranch        *b_trig_RoI_L2_e_EmTau_ROIStatus;   //!
   TBranch        *b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGamma;   //!
   TBranch        *b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGammaStatus;   //!
   TBranch        *b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGamma;   //!
   TBranch        *b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGammaStatus;   //!
   TBranch        *b_trig_RoI_L2_e_TrigElectronContainer;   //!
   TBranch        *b_trig_RoI_L2_e_TrigElectronContainerStatus;   //!
   TBranch        *b_trig_RoI_L2_e_TrigPhotonContainer;   //!
   TBranch        *b_trig_RoI_L2_e_TrigPhotonContainerStatus;   //!
   TBranch        *b_trig_RoI_EF_e_n;   //!
   TBranch        *b_trig_RoI_EF_e_type;   //!
   TBranch        *b_trig_RoI_EF_e_lastStep;   //!
   TBranch        *b_trig_RoI_EF_e_EmTau_ROI;   //!
   TBranch        *b_trig_RoI_EF_e_EmTau_ROIStatus;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_Electrons;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_Photons;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus;   //!
   TBranch        *b_trig_DB_SMK;   //!
   TBranch        *b_trig_DB_L1PSK;   //!
   TBranch        *b_trig_DB_HLTPSK;   //!
   TBranch        *b_trig_L1_esum_thrNames;   //!
   TBranch        *b_trig_L1_esum_energyX;   //!
   TBranch        *b_trig_L1_esum_energyY;   //!
   TBranch        *b_trig_L1_esum_energyT;   //!
   TBranch        *b_trig_L1_esum_overflowX;   //!
   TBranch        *b_trig_L1_esum_overflowY;   //!
   TBranch        *b_trig_L1_esum_overflowT;   //!
   TBranch        *b_trig_L1_esum_RoIWord0;   //!
   TBranch        *b_trig_L1_esum_RoIWord1;   //!
   TBranch        *b_trig_L1_esum_RoIWord2;   //!
   TBranch        *b_trig_L1_jet_n;   //!
   TBranch        *b_trig_L1_jet_thrNames;   //!
   TBranch        *b_trig_L1_jet_thrValues;   //!
   TBranch        *b_trig_L1_jet_thrPattern;   //!
   TBranch        *b_trig_L1_jet_et4x4;   //!
   TBranch        *b_trig_L1_jet_et6x6;   //!
   TBranch        *b_trig_L1_jet_et8x8;   //!
   TBranch        *b_trig_L1_jet_RoIWord;   //!
   TBranch        *b_trig_L1_jet_E;   //!
   TBranch        *b_trig_L1_jet_pt;   //!
   TBranch        *b_trig_L1_jet_eta;   //!
   TBranch        *b_trig_L1_jet_phi;   //!
   TBranch        *b_trig_L1_jetet_thrNames;   //!
   TBranch        *b_trig_L1_jetet_thrPattern;   //!
   TBranch        *b_trig_L1_jetet_RoIWord;   //!
   TBranch        *b_trig_L1_mu_n;   //!
   TBranch        *b_trig_L1_mu_pt;   //!
   TBranch        *b_trig_L1_mu_eta;   //!
   TBranch        *b_trig_L1_mu_phi;   //!
   TBranch        *b_trig_L1_mu_thrName;   //!
   TBranch        *b_trig_L1_mu_thrNumber;   //!
   TBranch        *b_trig_L1_mu_RoINumber;   //!
   TBranch        *b_trig_L1_mu_sectorAddress;   //!
   TBranch        *b_trig_L1_mu_firstCandidate;   //!
   TBranch        *b_trig_L1_mu_moreCandInRoI;   //!
   TBranch        *b_trig_L1_mu_moreCandInSector;   //!
   TBranch        *b_trig_L1_mu_source;   //!
   TBranch        *b_trig_L1_mu_hemisphere;   //!
   TBranch        *b_trig_L1_mu_RoIWord;   //!
   TBranch        *b_trig_L2_muonfeature_n;   //!
   TBranch        *b_trig_L2_muonfeature_pt;   //!
   TBranch        *b_trig_L2_muonfeature_eta;   //!
   TBranch        *b_trig_L2_muonfeature_phi;   //!
   TBranch        *b_trig_L2_muonfeature_dir_phi;   //!
   TBranch        *b_trig_L2_muonfeature_zeta;   //!
   TBranch        *b_trig_L2_muonfeature_dir_zeta;   //!
   TBranch        *b_trig_L2_muonfeature_radius;   //!
   TBranch        *b_trig_L2_muonfeature_beta;   //!
   TBranch        *b_trig_L2_muonfeature_br_radius;   //!
   TBranch        *b_trig_L2_muonfeature_br_sagitta;   //!
   TBranch        *b_trig_L2_muonfeature_ec_alpha;   //!
   TBranch        *b_trig_L2_muonfeature_ec_beta;   //!
   TBranch        *b_trig_L2_muonfeature_roiId;   //!
   TBranch        *b_trig_L2_muonfeature_saddress;   //!
   TBranch        *b_trig_L2_muonfeature_sp1_r;   //!
   TBranch        *b_trig_L2_muonfeature_sp1_z;   //!
   TBranch        *b_trig_L2_muonfeature_sp1_slope;   //!
   TBranch        *b_trig_L2_muonfeature_sp2_r;   //!
   TBranch        *b_trig_L2_muonfeature_sp2_z;   //!
   TBranch        *b_trig_L2_muonfeature_sp2_slope;   //!
   TBranch        *b_trig_L2_muonfeature_sp3_r;   //!
   TBranch        *b_trig_L2_muonfeature_sp3_z;   //!
   TBranch        *b_trig_L2_muonfeature_sp3_slope;   //!
   TBranch        *b_trig_L2_muonfeature_dq_var1;   //!
   TBranch        *b_trig_L2_muonfeature_dq_var2;   //!
   TBranch        *b_trig_L2_muonfeature_L2_2mu10;   //!
   TBranch        *b_trig_L2_muonfeature_L2_2mu4;   //!
   TBranch        *b_trig_L2_muonfeature_L2_2mu4_DiMu;   //!
   TBranch        *b_trig_L2_muonfeature_L2_2mu4_DiMu_SiTrk;   //!
   TBranch        *b_trig_L2_muonfeature_L2_2mu4_DiMu_noOS;   //!
   TBranch        *b_trig_L2_muonfeature_L2_2mu4_DiMu_noOS_passL2;   //!
   TBranch        *b_trig_L2_muonfeature_L2_2mu4_DiMu_noVtx_noOS;   //!
   TBranch        *b_trig_L2_muonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2;   //!
   TBranch        *b_trig_L2_muonfeature_L2_2mu4_MSonly;   //!
   TBranch        *b_trig_L2_muonfeature_L2_2mu6;   //!
   TBranch        *b_trig_L2_muonfeature_L2_2mu6_DiMu;   //!
   TBranch        *b_trig_L2_muonfeature_L2_2mu6_DiMu_noVtx_noOS;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU0;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU0_MU6;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU10;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU6;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_EM3;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_J5;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU10;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU15;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU20;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_EM3;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_J5;   //!
   TBranch        *b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu10;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu10_MG;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu10_MSonly;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu10_NoIDTrkCut;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu10_SiTrk;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu10_passHLT;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu10i_loose;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu13;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu15;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu20;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu20_MSonly;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu20_passHLT;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_DiMu;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_DiMu_FS;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_DiMu_FS_noOS;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_L2MSonly_EFFS_passL2;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_MB2_noL2_EFFS;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_MG;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_MSonly;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_MSonly_EFFS_passL2;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_MSonly_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_NoIDTrkCut;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_SiTrk;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_mu6;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_passHLT;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_tile;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_tile_SiTrk;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_trod;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4_trod_SiTrk;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu4mu6_DiMu;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu6;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu6_DiMu;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu6_DiMu_FS;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu6_DiMu_FS_noOS;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu6_Jpsie5e3;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu6_MG;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu6_MSonly;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu6_SiTrk;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu6_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu6_Trk_Jpsi_loose_FS;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu6_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_muonfeature_L2_mu6_passHLT;   //!
   TBranch        *b_trig_L2_combmuonfeature_n;   //!
   TBranch        *b_trig_L2_combmuonfeature_pt;   //!
   TBranch        *b_trig_L2_combmuonfeature_eta;   //!
   TBranch        *b_trig_L2_combmuonfeature_phi;   //!
   TBranch        *b_trig_L2_combmuonfeature_sigma_pt;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_2mu10;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_2mu4;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_2mu4_DiMu;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_2mu4_DiMu_SiTrk;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_2mu4_DiMu_noOS;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_2mu4_DiMu_noOS_passL2;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_2mu4_DiMu_noVtx_noOS;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_2mu4_MSonly;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_2mu6;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_2mu6_DiMu;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_2mu6_DiMu_noVtx_noOS;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU0;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU0_MU6;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU10;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU6;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_EM3;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_J5;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU10;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU15;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU20;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_EM3;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_J5;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu10;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu10_MG;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu10_MSonly;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu10_NoIDTrkCut;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu10_SiTrk;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu10_passHLT;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu10i_loose;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu13;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu15;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu20;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu20_MSonly;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu20_passHLT;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_DiMu;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_DiMu_FS;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_DiMu_FS_noOS;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_L2MSonly_EFFS_passL2;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_MB2_noL2_EFFS;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_MG;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_MSonly;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_MSonly_EFFS_passL2;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_MSonly_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_NoIDTrkCut;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_SiTrk;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_mu6;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_passHLT;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_tile;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_tile_SiTrk;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_trod;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4_trod_SiTrk;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu4mu6_DiMu;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu6;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu6_DiMu;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu6_DiMu_FS;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu6_DiMu_FS_noOS;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu6_Jpsie5e3;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu6_MG;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu6_MSonly;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu6_SiTrk;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu6_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu6_Trk_Jpsi_loose_FS;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu6_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_combmuonfeature_L2_mu6_passHLT;   //!
   TBranch        *b_trig_L2_combmuonfeature_mf_index;   //!
   TBranch        *b_trig_L2_combmuonfeature_idscantrk_index;   //!
   TBranch        *b_trig_L2_combmuonfeature_sitracktrk_index;   //!
   TBranch        *b_trig_L2_isomuonfeature_n;   //!
   TBranch        *b_trig_L2_isomuonfeature_pt;   //!
   TBranch        *b_trig_L2_isomuonfeature_eta;   //!
   TBranch        *b_trig_L2_isomuonfeature_phi;   //!
   TBranch        *b_trig_L2_isomuonfeature_EtInnerConeEC ;   //!
   TBranch        *b_trig_L2_isomuonfeature_EtOuterConeEC;   //!
   TBranch        *b_trig_L2_isomuonfeature_EtInnerConeHC;   //!
   TBranch        *b_trig_L2_isomuonfeature_EtOuterConeHC;   //!
   TBranch        *b_trig_L2_isomuonfeature_NTracksCone;   //!
   TBranch        *b_trig_L2_isomuonfeature_SumPtTracksCone;   //!
   TBranch        *b_trig_L2_isomuonfeature_PtMuTracksCone;   //!
   TBranch        *b_trig_L2_isomuonfeature_iso_strategy;   //!
   TBranch        *b_trig_L2_isomuonfeature_RoiIdMu ;   //!
   TBranch        *b_trig_L2_isomuonfeature_PtMu;   //!
   TBranch        *b_trig_L2_isomuonfeature_EtaMu;   //!
   TBranch        *b_trig_L2_isomuonfeature_PhiMu;   //!
   TBranch        *b_trig_L2_isomuonfeature_LArWeight;   //!
   TBranch        *b_trig_L2_isomuonfeature_TileWeight;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_2mu10;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_2mu4;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_2mu4_DiMu;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_2mu4_DiMu_SiTrk;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_2mu4_DiMu_noOS;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_2mu4_DiMu_noOS_passL2;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_2mu4_DiMu_noVtx_noOS;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_2mu4_MSonly;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_2mu6;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_2mu6_DiMu;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_2mu6_DiMu_noVtx_noOS;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU0;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU0_MU6;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU10;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU6;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_EM3;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_J5;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU10;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU15;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU20;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_EM3;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_J5;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu10;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu10_MG;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu10_MSonly;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu10_NoIDTrkCut;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu10_SiTrk;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu10_passHLT;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu10i_loose;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu13;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu15;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu20;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu20_MSonly;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu20_passHLT;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_DiMu;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_DiMu_FS;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_DiMu_FS_noOS;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_L2MSonly_EFFS_passL2;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_MB2_noL2_EFFS;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_MG;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_MSonly;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_MSonly_EFFS_passL2;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_MSonly_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_NoIDTrkCut;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_SiTrk;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_mu6;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_passHLT;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_tile;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_tile_SiTrk;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_trod;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4_trod_SiTrk;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu4mu6_DiMu;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu6;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu6_DiMu;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu6_DiMu_FS;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu6_DiMu_FS_noOS;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu6_Jpsie5e3;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu6_MG;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu6_MSonly;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu6_SiTrk;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu6_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu6_Trk_Jpsi_loose_FS;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu6_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_isomuonfeature_L2_mu6_passHLT;   //!
   TBranch        *b_trig_L2_tilemufeature_n;   //!
   TBranch        *b_trig_L2_tilemufeature_eta;   //!
   TBranch        *b_trig_L2_tilemufeature_phi;   //!
   TBranch        *b_trig_L2_tilemufeature_enedep;   //!
   TBranch        *b_trig_L2_tilemufeature_quality;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_2mu10;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_2mu4;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_2mu4_DiMu;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_2mu4_DiMu_SiTrk;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_2mu4_DiMu_noOS;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_2mu4_DiMu_noOS_passL2;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_2mu4_DiMu_noVtx_noOS;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_2mu4_DiMu_noVtx_noOS_passL2;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_2mu4_MSonly;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_2mu6;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_2mu6_DiMu;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_2mu6_DiMu_noVtx_noOS;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU0;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU0_MU6;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU10;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU6;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_EM3;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_EMPTY;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_J5;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU10;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU10_EMPTY;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU15;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU20;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_EM3;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_EMPTY;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_J5;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu10;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu10_MG;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu10_MSonly;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu10_NoIDTrkCut;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu10_SiTrk;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu10_passHLT;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu10i_loose;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu13;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu15;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu20;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu20_MSonly;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu20_passHLT;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_DiMu;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_DiMu_FS;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_DiMu_FS_noOS;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_L2MSonly_EFFS_passL2;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_MB2_noL2_EFFS;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_MG;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_MSonly;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_MSonly_EFFS_passL2;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_MSonly_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_MSonly_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_NoIDTrkCut;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_SiTrk;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_mu6;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_passHLT;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_tile;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_tile_SiTrk;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_trod;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4_trod_SiTrk;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu4mu6_DiMu;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu6;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu6_DiMu;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu6_DiMu_FS;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu6_DiMu_FS_noOS;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu6_Jpsie5e3;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu6_MG;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu6_MSonly;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu6_SiTrk;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu6_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu6_Trk_Jpsi_loose_FS;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu6_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_tilemufeature_L2_mu6_passHLT;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_n;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_pt;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_eta;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_phi;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_PtTR_Trk;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_EtaTR_Trk;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_PhiTR_Trk;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_Typ_IDTrk;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_2mu10;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_2mu4;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_2mu4_DiMu;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_2mu4_DiMu_SiTrk;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noOS;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noOS_passL2;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noVtx_noOS;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noVtx_noOS_passL2;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_2mu4_MSonly;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_2mu6;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_2mu6_DiMu;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_2mu6_DiMu_noVtx_noOS;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU0;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU0_MU6;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU10;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU6;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_EM3;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_EMPTY;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_J5;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU10;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU10_EMPTY;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU15;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU20;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_EM3;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_EMPTY;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_J5;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu10;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu10_MG;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu10_MSonly;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu10_NoIDTrkCut;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu10_SiTrk;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu10_passHLT;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu10i_loose;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu13;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu15;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu20;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu20_MSonly;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu20_passHLT;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_DiMu;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_DiMu_FS;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_DiMu_FS_noOS;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_L2MSonly_EFFS_passL2;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_MB2_noL2_EFFS;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_MG;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_MSonly;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_MSonly_EFFS_passL2;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_MSonly_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_MSonly_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_NoIDTrkCut;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_SiTrk;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_mu6;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_passHLT;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_tile;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_tile_SiTrk;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_trod;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4_trod_SiTrk;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu4mu6_DiMu;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu6;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu6_DiMu;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu6_DiMu_FS;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu6_DiMu_FS_noOS;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu6_Jpsie5e3;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu6_MG;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu6_MSonly;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu6_SiTrk;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu6_Trk_Jpsi_loose;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu6_Trk_Jpsi_loose_FS;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu6_Trk_Upsi_loose_FS;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_L2_mu6_passHLT;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_tilemu_index;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_algorithmId;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_trackStatus;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_chi2Ndof;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_nStrawHits;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_nHighThrHits;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_nPixelSpacePoints;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_nSCT_SpacePoints;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_hitPattern;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_nStraw;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_nStrawTime;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_a0;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_z0;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_phi0;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_eta;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_pt;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_covariance;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_hasidtrkfitpar;   //!
   TBranch        *b_trig_L2_tiletrackmufeature_idtrk_hasidtrk;   //!
   TBranch        *b_trig_EF_trigmuonef_n;   //!
   TBranch        *b_trig_EF_trigmuonef_RoINum;   //!
   TBranch        *b_trig_EF_trigmuonef_NSegments;   //!
   TBranch        *b_trig_EF_trigmuonef_NMdtHits;   //!
   TBranch        *b_trig_EF_trigmuonef_NRpcHits;   //!
   TBranch        *b_trig_EF_trigmuonef_NTgcHits;   //!
   TBranch        *b_trig_EF_trigmuonef_NCscHits;   //!
   TBranch        *b_trig_EF_trigmuonef_EtaPreviousLevel;   //!
   TBranch        *b_trig_EF_trigmuonef_PhiPreviousLevel;   //!
   TBranch        *b_trig_EF_trigmuonef_track_n;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MuonType;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_pt;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_eta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_phi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_charge;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_d0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_z0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_chi2;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_chi2prob;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_posX;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_posY;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_posZ;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NRpcHitsPhi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NTgcHitsPhi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NCscHitsPhi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NRpcHitsEta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NTgcHitsEta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NCscHitsEta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_NMdtHits;   //!
   TBranch        *b_trig_EF_trigmuonef_track_MS_hasMS;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_pt;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_eta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_phi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_charge;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_d0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_z0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_chi2;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_chi2prob;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_posX;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_posY;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_posZ;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_hasSA;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_pt;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_eta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_phi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_charge;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_d0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_z0;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_chi2;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_chi2prob;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_posX;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_posY;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_posZ;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_matchChi2;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_NIdSctHits;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_NIdPixelHits;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_NTrtHits;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_hasCB;   //!
   TBranch        *b_trig_EF_trigmugirl_n;   //!
   TBranch        *b_trig_EF_trigmugirl_RoINum;   //!
   TBranch        *b_trig_EF_trigmugirl_NSegments;   //!
   TBranch        *b_trig_EF_trigmugirl_NMdtHits;   //!
   TBranch        *b_trig_EF_trigmugirl_NRpcHits;   //!
   TBranch        *b_trig_EF_trigmugirl_NTgcHits;   //!
   TBranch        *b_trig_EF_trigmugirl_NCscHits;   //!
   TBranch        *b_trig_EF_trigmugirl_EtaPreviousLevel;   //!
   TBranch        *b_trig_EF_trigmugirl_PhiPreviousLevel;   //!
   TBranch        *b_trig_EF_trigmugirl_track_n;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MuonType;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_pt;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_eta;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_phi;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_charge;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_d0;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_z0;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_chi2;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_chi2prob;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_posX;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_posY;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_posZ;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_NRpcHitsPhi;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_NTgcHitsPhi;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_NCscHitsPhi;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_NRpcHitsEta;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_NTgcHitsEta;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_NCscHitsEta;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_NMdtHits;   //!
   TBranch        *b_trig_EF_trigmugirl_track_MS_hasMS;   //!
   TBranch        *b_trig_EF_trigmugirl_track_SA_pt;   //!
   TBranch        *b_trig_EF_trigmugirl_track_SA_eta;   //!
   TBranch        *b_trig_EF_trigmugirl_track_SA_phi;   //!
   TBranch        *b_trig_EF_trigmugirl_track_SA_charge;   //!
   TBranch        *b_trig_EF_trigmugirl_track_SA_d0;   //!
   TBranch        *b_trig_EF_trigmugirl_track_SA_z0;   //!
   TBranch        *b_trig_EF_trigmugirl_track_SA_chi2;   //!
   TBranch        *b_trig_EF_trigmugirl_track_SA_chi2prob;   //!
   TBranch        *b_trig_EF_trigmugirl_track_SA_posX;   //!
   TBranch        *b_trig_EF_trigmugirl_track_SA_posY;   //!
   TBranch        *b_trig_EF_trigmugirl_track_SA_posZ;   //!
   TBranch        *b_trig_EF_trigmugirl_track_SA_hasSA;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_pt;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_eta;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_phi;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_charge;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_d0;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_z0;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_chi2;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_chi2prob;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_posX;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_posY;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_posZ;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_matchChi2;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_NIdSctHits;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_NIdPixelHits;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_NTrtHits;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_hasCB;   //!
   TBranch        *b_trig_L2_sitrack_muon_n;   //!
   TBranch        *b_trig_L2_sitrack_muon_algorithmId;   //!
   TBranch        *b_trig_L2_sitrack_muon_trackStatus;   //!
   TBranch        *b_trig_L2_sitrack_muon_chi2Ndof;   //!
   TBranch        *b_trig_L2_sitrack_muon_nStrawHits;   //!
   TBranch        *b_trig_L2_sitrack_muon_nHighThrHits;   //!
   TBranch        *b_trig_L2_sitrack_muon_nPixelSpacePoints;   //!
   TBranch        *b_trig_L2_sitrack_muon_nSCT_SpacePoints;   //!
   TBranch        *b_trig_L2_sitrack_muon_hitPattern;   //!
   TBranch        *b_trig_L2_sitrack_muon_nStraw;   //!
   TBranch        *b_trig_L2_sitrack_muon_nStrawTime;   //!
   TBranch        *b_trig_L2_sitrack_muon_a0;   //!
   TBranch        *b_trig_L2_sitrack_muon_z0;   //!
   TBranch        *b_trig_L2_sitrack_muon_phi0;   //!
   TBranch        *b_trig_L2_sitrack_muon_eta;   //!
   TBranch        *b_trig_L2_sitrack_muon_pt;   //!
   TBranch        *b_trig_L2_sitrack_muon_covariance;   //!
   TBranch        *b_trig_L2_idscan_muon_n;   //!
   TBranch        *b_trig_L2_idscan_muon_algorithmId;   //!
   TBranch        *b_trig_L2_idscan_muon_trackStatus;   //!
   TBranch        *b_trig_L2_idscan_muon_chi2Ndof;   //!
   TBranch        *b_trig_L2_idscan_muon_nStrawHits;   //!
   TBranch        *b_trig_L2_idscan_muon_nHighThrHits;   //!
   TBranch        *b_trig_L2_idscan_muon_nPixelSpacePoints;   //!
   TBranch        *b_trig_L2_idscan_muon_nSCT_SpacePoints;   //!
   TBranch        *b_trig_L2_idscan_muon_hitPattern;   //!
   TBranch        *b_trig_L2_idscan_muon_nStraw;   //!
   TBranch        *b_trig_L2_idscan_muon_nStrawTime;   //!
   TBranch        *b_trig_L2_idscan_muon_a0;   //!
   TBranch        *b_trig_L2_idscan_muon_z0;   //!
   TBranch        *b_trig_L2_idscan_muon_phi0;   //!
   TBranch        *b_trig_L2_idscan_muon_eta;   //!
   TBranch        *b_trig_L2_idscan_muon_pt;   //!
   TBranch        *b_trig_L2_idscan_muon_covariance;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_n;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_algorithmId;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_trackStatus;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_chi2Ndof;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_nStrawHits;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_nHighThrHits;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_nPixelSpacePoints;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_nSCT_SpacePoints;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_hitPattern;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_nStraw;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_nStrawTime;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_a0;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_z0;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_phi0;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_eta;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_pt;   //!
   TBranch        *b_trig_L2_sitrack_isomuon_covariance;   //!
   TBranch        *b_trig_L2_idscan_isomuon_n;   //!
   TBranch        *b_trig_L2_idscan_isomuon_algorithmId;   //!
   TBranch        *b_trig_L2_idscan_isomuon_trackStatus;   //!
   TBranch        *b_trig_L2_idscan_isomuon_chi2Ndof;   //!
   TBranch        *b_trig_L2_idscan_isomuon_nStrawHits;   //!
   TBranch        *b_trig_L2_idscan_isomuon_nHighThrHits;   //!
   TBranch        *b_trig_L2_idscan_isomuon_nPixelSpacePoints;   //!
   TBranch        *b_trig_L2_idscan_isomuon_nSCT_SpacePoints;   //!
   TBranch        *b_trig_L2_idscan_isomuon_hitPattern;   //!
   TBranch        *b_trig_L2_idscan_isomuon_nStraw;   //!
   TBranch        *b_trig_L2_idscan_isomuon_nStrawTime;   //!
   TBranch        *b_trig_L2_idscan_isomuon_a0;   //!
   TBranch        *b_trig_L2_idscan_isomuon_z0;   //!
   TBranch        *b_trig_L2_idscan_isomuon_phi0;   //!
   TBranch        *b_trig_L2_idscan_isomuon_eta;   //!
   TBranch        *b_trig_L2_idscan_isomuon_pt;   //!
   TBranch        *b_trig_L2_idscan_isomuon_covariance;   //!
   TBranch        *b_trig_RoI_L2_mu_n;   //!
   TBranch        *b_trig_RoI_L2_mu_type;   //!
   TBranch        *b_trig_RoI_L2_mu_lastStep;   //!
   TBranch        *b_trig_RoI_L2_mu_MuonFeature;   //!
   TBranch        *b_trig_RoI_L2_mu_MuonFeatureStatus;   //!
   TBranch        *b_trig_RoI_L2_mu_MuonFeatureDetails;   //!
   TBranch        *b_trig_RoI_L2_mu_MuonFeatureDetailsStatus;   //!
   TBranch        *b_trig_RoI_L2_mu_CombinedMuonFeature;   //!
   TBranch        *b_trig_RoI_L2_mu_CombinedMuonFeatureStatus;   //!
   TBranch        *b_trig_RoI_L2_mu_IsoMuonFeature;   //!
   TBranch        *b_trig_RoI_L2_mu_IsoMuonFeatureStatus;   //!
   TBranch        *b_trig_RoI_L2_mu_Muon_ROI;   //!
   TBranch        *b_trig_RoI_L2_mu_Muon_ROIStatus;   //!
   TBranch        *b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_Muon;   //!
   TBranch        *b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_MuonStatus;   //!
   TBranch        *b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_Muon;   //!
   TBranch        *b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_MuonStatus;   //!
   TBranch        *b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_muonIso;   //!
   TBranch        *b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_muonIsoStatus;   //!
   TBranch        *b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_muonIso;   //!
   TBranch        *b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_muonIsoStatus;   //!
   TBranch        *b_trig_RoI_L2_TileMu_n;   //!
   TBranch        *b_trig_RoI_L2_TileMu_type;   //!
   TBranch        *b_trig_RoI_L2_TileMu_lastStep;   //!
   TBranch        *b_trig_RoI_L2_TileMu_TileMuFeature;   //!
   TBranch        *b_trig_RoI_L2_TileMu_TileMuFeatureStatus;   //!
   TBranch        *b_trig_RoI_L2_TileMu_TileTrackMuFeature;   //!
   TBranch        *b_trig_RoI_L2_TileMu_TileTrackMuFeatureStatus;   //!
   TBranch        *b_trig_RoI_L2_TileMu_Muon_ROI;   //!
   TBranch        *b_trig_RoI_L2_TileMu_Muon_ROIStatus;   //!
   TBranch        *b_trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigSiTrack_Tile;   //!
   TBranch        *b_trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigSiTrack_TileStatus;   //!
   TBranch        *b_trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigIDSCAN_Tile;   //!
   TBranch        *b_trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigIDSCAN_TileStatus;   //!
   TBranch        *b_trig_RoI_EF_mu_n;   //!
   TBranch        *b_trig_RoI_EF_mu_type;   //!
   TBranch        *b_trig_RoI_EF_mu_lastStep;   //!
   TBranch        *b_trig_RoI_EF_mu_Muon_ROI;   //!
   TBranch        *b_trig_RoI_EF_mu_Muon_ROIStatus;   //!
   TBranch        *b_trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFID;   //!
   TBranch        *b_trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFIDStatus;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainer;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirl;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirlStatus;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EF;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus;   //!
   TBranch        *b_trig_RoI_EF_TileMu_n;   //!
   TBranch        *b_trig_RoI_EF_TileMu_type;   //!
   TBranch        *b_trig_RoI_EF_TileMu_lastStep;   //!
   TBranch        *b_trig_RoI_EF_TileMu_Muon_ROI;   //!
   TBranch        *b_trig_RoI_EF_TileMu_Muon_ROIStatus;   //!
   TBranch        *b_trig_RoI_EF_TileMu_TrigMuonEFContainer;   //!
   TBranch        *b_trig_RoI_EF_TileMu_TrigMuonEFContainerStatus;   //!
   TBranch        *b_trig_RoI_EF_TileMu_TrigMuonEFInfoContainer;   //!
   TBranch        *b_trig_RoI_EF_TileMu_TrigMuonEFInfoContainerStatus;   //!
   TBranch        *b_trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuGirl;   //!
   TBranch        *b_trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuGirlStatus;   //!
   TBranch        *b_trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuTagIMO_EF;   //!
   TBranch        *b_trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus;   //!
   TBranch        *b_trig_L2_met_MEx;   //!
   TBranch        *b_trig_L2_met_MEy;   //!
   TBranch        *b_trig_L2_met_MEz;   //!
   TBranch        *b_trig_L2_met_sumEt;   //!
   TBranch        *b_trig_L2_met_sumE;   //!
   TBranch        *b_trig_L2_met_flag;   //!
   TBranch        *b_trig_L2_met_nameOfComponent;   //!
   TBranch        *b_trig_L2_met_MExComponent;   //!
   TBranch        *b_trig_L2_met_MEyComponent;   //!
   TBranch        *b_trig_L2_met_MEzComponent;   //!
   TBranch        *b_trig_L2_met_sumEtComponent;   //!
   TBranch        *b_trig_L2_met_sumEComponent;   //!
   TBranch        *b_trig_L2_met_componentCalib0;   //!
   TBranch        *b_trig_L2_met_componentCalib1;   //!
   TBranch        *b_trig_L2_met_sumOfSigns;   //!
   TBranch        *b_trig_L2_met_usedChannels;   //!
   TBranch        *b_trig_L2_met_status;   //!
   TBranch        *b_trig_L2_jet_n;   //!
   TBranch        *b_trig_L2_jet_ehad0;   //!
   TBranch        *b_trig_L2_jet_eem0;   //!
   TBranch        *b_trig_L2_jet_L2_2j15;   //!
   TBranch        *b_trig_L2_jet_L2_2j30;   //!
   TBranch        *b_trig_L2_jet_L2_2j7;   //!
   TBranch        *b_trig_L2_jet_L2_3j15;   //!
   TBranch        *b_trig_L2_jet_L2_j130;   //!
   TBranch        *b_trig_L2_jet_L2_j15;   //!
   TBranch        *b_trig_L2_jet_L2_j30;   //!
   TBranch        *b_trig_L2_jet_L2_j60;   //!
   TBranch        *b_trig_L2_jet_L2_j7;   //!
   TBranch        *b_trig_L2_jet_L2_j90;   //!
   TBranch        *b_trig_L2_jet_E;   //!
   TBranch        *b_trig_L2_jet_pt;   //!
   TBranch        *b_trig_L2_jet_eta;   //!
   TBranch        *b_trig_L2_jet_phi;   //!
   TBranch        *b_trig_L2_jet_RoIWord;   //!
   TBranch        *b_trig_EF_met_MEx;   //!
   TBranch        *b_trig_EF_met_MEy;   //!
   TBranch        *b_trig_EF_met_MEz;   //!
   TBranch        *b_trig_EF_met_sumEt;   //!
   TBranch        *b_trig_EF_met_sumE;   //!
   TBranch        *b_trig_EF_met_flag;   //!
   TBranch        *b_trig_EF_met_nameOfComponent;   //!
   TBranch        *b_trig_EF_met_MExComponent;   //!
   TBranch        *b_trig_EF_met_MEyComponent;   //!
   TBranch        *b_trig_EF_met_MEzComponent;   //!
   TBranch        *b_trig_EF_met_sumEtComponent;   //!
   TBranch        *b_trig_EF_met_sumEComponent;   //!
   TBranch        *b_trig_EF_met_componentCalib0;   //!
   TBranch        *b_trig_EF_met_componentCalib1;   //!
   TBranch        *b_trig_EF_met_sumOfSigns;   //!
   TBranch        *b_trig_EF_met_usedChannels;   //!
   TBranch        *b_trig_EF_met_status;   //!
   TBranch        *b_trig_EF_jet_n;   //!
   TBranch        *b_trig_EF_jet_E;   //!
   TBranch        *b_trig_EF_jet_pt;   //!
   TBranch        *b_trig_EF_jet_m;   //!
   TBranch        *b_trig_EF_jet_eta;   //!
   TBranch        *b_trig_EF_jet_phi;   //!
   TBranch        *b_trig_EF_jet_EtaPhys;   //!
   TBranch        *b_trig_EF_jet_PhiPhys;   //!
   TBranch        *b_trig_EF_jet_MPhys;   //!
   TBranch        *b_trig_EF_jet_emscale_E;   //!
   TBranch        *b_trig_EF_jet_emscale_pt;   //!
   TBranch        *b_trig_EF_jet_emscale_m;   //!
   TBranch        *b_trig_EF_jet_emscale_eta;   //!
   TBranch        *b_trig_EF_jet_emscale_phi;   //!
   TBranch        *b_trig_EF_jet_RoIword;   //!
   TBranch        *b_trig_EF_jet_mu_dr;   //!
   TBranch        *b_trig_EF_jet_mu_matched;   //!
   TBranch        *b_trig_bgCode;   //!
   TBranch        *b_SkimDecision_name;   //!
   TBranch        *b_SkimDecision_accepted;   //!
   TBranch        *b_ti_staco_topo_Jet_n;   //!
   TBranch        *b_ti_staco_topo_Jet_use;   //!
   TBranch        *b_ti_staco_topo_Jet_index;   //!
   TBranch        *b_ti_staco_topo_Jet_overlap_jetn;   //!
   TBranch        *b_ti_staco_topo_Jet_overlap_jetindex;   //!
   TBranch        *b_ti_staco_topo_Jet_overlap_mun;   //!
   TBranch        *b_ti_staco_topo_Jet_overlap_muindex;   //!
   TBranch        *b_ti_staco_topo_Mu_n;   //!
   TBranch        *b_ti_staco_topo_Mu_use;   //!
   TBranch        *b_ti_staco_topo_Mu_index;   //!
   TBranch        *b_ti_staco_topo_Mu_overlap_jetn;   //!
   TBranch        *b_ti_staco_topo_Mu_overlap_jetindex;   //!
   TBranch        *b_ti_staco_topo_Mu_overlap_mun;   //!
   TBranch        *b_ti_staco_topo_Mu_overlap_muindex;   //!
   TBranch        *b_ti_staco_topo_El_n;   //!
   TBranch        *b_ti_staco_topo_El_use;   //!
   TBranch        *b_ti_staco_topo_El_index;   //!
   TBranch        *b_ti_staco_topo_El_overlap_jetn;   //!
   TBranch        *b_ti_staco_topo_El_overlap_jetindex;   //!
   TBranch        *b_ti_staco_topo_El_overlap_mun;   //!
   TBranch        *b_ti_staco_topo_El_overlap_muindex;   //!
   TBranch        *b_ti_staco_tower_Jet_n;   //!
   TBranch        *b_ti_staco_tower_Jet_use;   //!
   TBranch        *b_ti_staco_tower_Jet_index;   //!
   TBranch        *b_ti_staco_tower_Jet_overlap_jetn;   //!
   TBranch        *b_ti_staco_tower_Jet_overlap_jetindex;   //!
   TBranch        *b_ti_staco_tower_Jet_overlap_mun;   //!
   TBranch        *b_ti_staco_tower_Jet_overlap_muindex;   //!
   TBranch        *b_ti_staco_tower_Mu_n;   //!
   TBranch        *b_ti_staco_tower_Mu_use;   //!
   TBranch        *b_ti_staco_tower_Mu_index;   //!
   TBranch        *b_ti_staco_tower_Mu_overlap_jetn;   //!
   TBranch        *b_ti_staco_tower_Mu_overlap_jetindex;   //!
   TBranch        *b_ti_staco_tower_Mu_overlap_mun;   //!
   TBranch        *b_ti_staco_tower_Mu_overlap_muindex;   //!
   TBranch        *b_ti_staco_tower_El_n;   //!
   TBranch        *b_ti_staco_tower_El_use;   //!
   TBranch        *b_ti_staco_tower_El_index;   //!
   TBranch        *b_ti_staco_tower_El_overlap_jetn;   //!
   TBranch        *b_ti_staco_tower_El_overlap_jetindex;   //!
   TBranch        *b_ti_staco_tower_El_overlap_mun;   //!
   TBranch        *b_ti_staco_tower_El_overlap_muindex;   //!
   TBranch        *b_ti_muid_topo_Jet_n;   //!
   TBranch        *b_ti_muid_topo_Jet_use;   //!
   TBranch        *b_ti_muid_topo_Jet_index;   //!
   TBranch        *b_ti_muid_topo_Jet_overlap_jetn;   //!
   TBranch        *b_ti_muid_topo_Jet_overlap_jetindex;   //!
   TBranch        *b_ti_muid_topo_Jet_overlap_mun;   //!
   TBranch        *b_ti_muid_topo_Jet_overlap_muindex;   //!
   TBranch        *b_ti_muid_topo_Mu_n;   //!
   TBranch        *b_ti_muid_topo_Mu_use;   //!
   TBranch        *b_ti_muid_topo_Mu_index;   //!
   TBranch        *b_ti_muid_topo_Mu_overlap_jetn;   //!
   TBranch        *b_ti_muid_topo_Mu_overlap_jetindex;   //!
   TBranch        *b_ti_muid_topo_Mu_overlap_mun;   //!
   TBranch        *b_ti_muid_topo_Mu_overlap_muindex;   //!
   TBranch        *b_ti_muid_topo_El_n;   //!
   TBranch        *b_ti_muid_topo_El_use;   //!
   TBranch        *b_ti_muid_topo_El_index;   //!
   TBranch        *b_ti_muid_topo_El_overlap_jetn;   //!
   TBranch        *b_ti_muid_topo_El_overlap_jetindex;   //!
   TBranch        *b_ti_muid_topo_El_overlap_mun;   //!
   TBranch        *b_ti_muid_topo_El_overlap_muindex;   //!
   TBranch        *b_ti_muid_tower_Jet_n;   //!
   TBranch        *b_ti_muid_tower_Jet_use;   //!
   TBranch        *b_ti_muid_tower_Jet_index;   //!
   TBranch        *b_ti_muid_tower_Jet_overlap_jetn;   //!
   TBranch        *b_ti_muid_tower_Jet_overlap_jetindex;   //!
   TBranch        *b_ti_muid_tower_Jet_overlap_mun;   //!
   TBranch        *b_ti_muid_tower_Jet_overlap_muindex;   //!
   TBranch        *b_ti_muid_tower_Mu_n;   //!
   TBranch        *b_ti_muid_tower_Mu_use;   //!
   TBranch        *b_ti_muid_tower_Mu_index;   //!
   TBranch        *b_ti_muid_tower_Mu_overlap_jetn;   //!
   TBranch        *b_ti_muid_tower_Mu_overlap_jetindex;   //!
   TBranch        *b_ti_muid_tower_Mu_overlap_mun;   //!
   TBranch        *b_ti_muid_tower_Mu_overlap_muindex;   //!
   TBranch        *b_ti_muid_tower_El_n;   //!
   TBranch        *b_ti_muid_tower_El_use;   //!
   TBranch        *b_ti_muid_tower_El_index;   //!
   TBranch        *b_ti_muid_tower_El_overlap_jetn;   //!
   TBranch        *b_ti_muid_tower_El_overlap_jetindex;   //!
   TBranch        *b_ti_muid_tower_El_overlap_mun;   //!
   TBranch        *b_ti_muid_tower_El_overlap_muindex;   //!

   trig(TTree *tree=0);
   virtual ~trig();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);

   private:
  TH1D *all[3]; 
  TH1D *triggered[3]; 
  TH1D *efficiency[3]; 

  Bool_t trigga[3];
  string trigname[3];

  string sall[3]; 
  string striggered[3];
  string sefficiency[3];
  double cutsTrigger[3];


  //Color_t mycolors[3];


   int probe;
   int ntags;


};

#endif

#ifdef trig_cxx
trig::trig(TTree *tree)
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
      chain->Add("/PUC_data2/SUSY/RealData/D3PDV6.20/A/data10_7TeV.00152166.physics_MuonswBeam.merge.NTUP_SUSY.r1297_p161_p305_p308_tid200461_00/NTUP_SUSY.200461._000001.root.1/susy");
      chain->Add("/PUC_data2/SUSY/RealData/D3PDV6.20/A/data10_7TeV.00152166.physics_MuonswBeam.merge.NTUP_SUSY.r1297_p161_p305_p308_tid200461_00/NTUP_SUSY.200461._000002.root.1/susy");
      tree = chain;
#endif // SINGLE_TREE

   }
   Init(tree);
}

trig::~trig()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t trig::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t trig::LoadTree(Long64_t entry)
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

void trig::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
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
   cl_E = 0;
   cl_pt = 0;
   cl_m = 0;
   cl_eta = 0;
   cl_phi = 0;
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
   trig_L2_emcl_quality = 0;
   trig_L2_emcl_E = 0;
   trig_L2_emcl_Et = 0;
   trig_L2_emcl_eta = 0;
   trig_L2_emcl_phi = 0;
   trig_L2_emcl_E237 = 0;
   trig_L2_emcl_E277 = 0;
   trig_L2_emcl_fracs1 = 0;
   trig_L2_emcl_weta2 = 0;
   trig_L2_emcl_Ehad1 = 0;
   trig_L2_emcl_eta1 = 0;
   trig_L2_emcl_emaxs1 = 0;
   trig_L2_emcl_e2tsts1 = 0;
   trig_L2_trk_idscan_eGamma_algorithmId = 0;
   trig_L2_trk_idscan_eGamma_trackStatus = 0;
   trig_L2_trk_idscan_eGamma_chi2Ndof = 0;
   trig_L2_trk_idscan_eGamma_nStrawHits = 0;
   trig_L2_trk_idscan_eGamma_nHighThrHits = 0;
   trig_L2_trk_idscan_eGamma_nPixelSpacePoints = 0;
   trig_L2_trk_idscan_eGamma_nSCT_SpacePoints = 0;
   trig_L2_trk_idscan_eGamma_a0 = 0;
   trig_L2_trk_idscan_eGamma_z0 = 0;
   trig_L2_trk_idscan_eGamma_phi0 = 0;
   trig_L2_trk_idscan_eGamma_eta = 0;
   trig_L2_trk_idscan_eGamma_pt = 0;
   trig_L2_trk_sitrack_eGamma_algorithmId = 0;
   trig_L2_trk_sitrack_eGamma_trackStatus = 0;
   trig_L2_trk_sitrack_eGamma_chi2Ndof = 0;
   trig_L2_trk_sitrack_eGamma_nStrawHits = 0;
   trig_L2_trk_sitrack_eGamma_nHighThrHits = 0;
   trig_L2_trk_sitrack_eGamma_nPixelSpacePoints = 0;
   trig_L2_trk_sitrack_eGamma_nSCT_SpacePoints = 0;
   trig_L2_trk_sitrack_eGamma_a0 = 0;
   trig_L2_trk_sitrack_eGamma_z0 = 0;
   trig_L2_trk_sitrack_eGamma_phi0 = 0;
   trig_L2_trk_sitrack_eGamma_eta = 0;
   trig_L2_trk_sitrack_eGamma_pt = 0;
   trig_EF_emcl_E = 0;
   trig_EF_emcl_pt = 0;
   trig_EF_emcl_m = 0;
   trig_EF_emcl_eta = 0;
   trig_EF_emcl_phi = 0;
   trig_EF_emcl_E_em = 0;
   trig_EF_emcl_E_had = 0;
   trig_EF_emcl_firstEdens = 0;
   trig_EF_emcl_cellmaxfrac = 0;
   trig_EF_emcl_longitudinal = 0;
   trig_EF_emcl_secondlambda = 0;
   trig_EF_emcl_lateral = 0;
   trig_EF_emcl_secondR = 0;
   trig_EF_emcl_centerlambda = 0;
   trig_EF_emcl_deltaTheta = 0;
   trig_EF_emcl_deltaPhi = 0;
   trig_EF_emcl_time = 0;
   trig_EF_emcl_slw_E = 0;
   trig_EF_emcl_slw_pt = 0;
   trig_EF_emcl_slw_m = 0;
   trig_EF_emcl_slw_eta = 0;
   trig_EF_emcl_slw_phi = 0;
   trig_EF_emcl_slw_E_em = 0;
   trig_EF_emcl_slw_E_had = 0;
   trig_EF_emcl_slw_firstEdens = 0;
   trig_EF_emcl_slw_cellmaxfrac = 0;
   trig_EF_emcl_slw_longitudinal = 0;
   trig_EF_emcl_slw_secondlambda = 0;
   trig_EF_emcl_slw_lateral = 0;
   trig_EF_emcl_slw_secondR = 0;
   trig_EF_emcl_slw_centerlambda = 0;
   trig_EF_emcl_slw_deltaTheta = 0;
   trig_EF_emcl_slw_deltaPhi = 0;
   trig_EF_emcl_slw_time = 0;
   trig_Nav_chain_ChainId = 0;
   trig_Nav_chain_RoIType = 0;
   trig_Nav_chain_RoIIndex = 0;
   trig_RoI_L2_e_type = 0;
   trig_RoI_L2_e_lastStep = 0;
   trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgamma = 0;
   trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgammaStatus = 0;
   trig_RoI_L2_e_TrigEMCluster = 0;
   trig_RoI_L2_e_TrigEMClusterStatus = 0;
   trig_RoI_L2_e_EmTau_ROI = 0;
   trig_RoI_L2_e_EmTau_ROIStatus = 0;
   trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGamma = 0;
   trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGammaStatus = 0;
   trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGamma = 0;
   trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGammaStatus = 0;
   trig_RoI_L2_e_TrigElectronContainer = 0;
   trig_RoI_L2_e_TrigElectronContainerStatus = 0;
   trig_RoI_L2_e_TrigPhotonContainer = 0;
   trig_RoI_L2_e_TrigPhotonContainerStatus = 0;
   trig_RoI_EF_e_type = 0;
   trig_RoI_EF_e_lastStep = 0;
   trig_RoI_EF_e_EmTau_ROI = 0;
   trig_RoI_EF_e_EmTau_ROIStatus = 0;
   trig_RoI_EF_e_egammaContainer_egamma_Electrons = 0;
   trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus = 0;
   trig_RoI_EF_e_egammaContainer_egamma_Photons = 0;
   trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus = 0;
   trig_L1_esum_thrNames = 0;
   trig_L1_jet_thrNames = 0;
   trig_L1_jet_thrValues = 0;
   trig_L1_jet_thrPattern = 0;
   trig_L1_jet_et4x4 = 0;
   trig_L1_jet_et6x6 = 0;
   trig_L1_jet_et8x8 = 0;
   trig_L1_jet_RoIWord = 0;
   trig_L1_jet_E = 0;
   trig_L1_jet_pt = 0;
   trig_L1_jet_eta = 0;
   trig_L1_jet_phi = 0;
   trig_L1_jetet_thrNames = 0;
   trig_L1_mu_pt = 0;
   trig_L1_mu_eta = 0;
   trig_L1_mu_phi = 0;
   trig_L1_mu_thrName = 0;
   trig_L1_mu_thrNumber = 0;
   trig_L1_mu_RoINumber = 0;
   trig_L1_mu_sectorAddress = 0;
   trig_L1_mu_firstCandidate = 0;
   trig_L1_mu_moreCandInRoI = 0;
   trig_L1_mu_moreCandInSector = 0;
   trig_L1_mu_source = 0;
   trig_L1_mu_hemisphere = 0;
   trig_L1_mu_RoIWord = 0;
   trig_L2_muonfeature_pt = 0;
   trig_L2_muonfeature_eta = 0;
   trig_L2_muonfeature_phi = 0;
   trig_L2_muonfeature_dir_phi = 0;
   trig_L2_muonfeature_zeta = 0;
   trig_L2_muonfeature_dir_zeta = 0;
   trig_L2_muonfeature_radius = 0;
   trig_L2_muonfeature_beta = 0;
   trig_L2_muonfeature_br_radius = 0;
   trig_L2_muonfeature_br_sagitta = 0;
   trig_L2_muonfeature_ec_alpha = 0;
   trig_L2_muonfeature_ec_beta = 0;
   trig_L2_muonfeature_roiId = 0;
   trig_L2_muonfeature_saddress = 0;
   trig_L2_muonfeature_sp1_r = 0;
   trig_L2_muonfeature_sp1_z = 0;
   trig_L2_muonfeature_sp1_slope = 0;
   trig_L2_muonfeature_sp2_r = 0;
   trig_L2_muonfeature_sp2_z = 0;
   trig_L2_muonfeature_sp2_slope = 0;
   trig_L2_muonfeature_sp3_r = 0;
   trig_L2_muonfeature_sp3_z = 0;
   trig_L2_muonfeature_sp3_slope = 0;
   trig_L2_muonfeature_dq_var1 = 0;
   trig_L2_muonfeature_dq_var2 = 0;
   trig_L2_muonfeature_L2_2mu10 = 0;
   trig_L2_muonfeature_L2_2mu4 = 0;
   trig_L2_muonfeature_L2_2mu4_DiMu = 0;
   trig_L2_muonfeature_L2_2mu4_DiMu_SiTrk = 0;
   trig_L2_muonfeature_L2_2mu4_DiMu_noOS = 0;
   trig_L2_muonfeature_L2_2mu4_DiMu_noOS_passL2 = 0;
   trig_L2_muonfeature_L2_2mu4_DiMu_noVtx_noOS = 0;
   trig_L2_muonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2 = 0;
   trig_L2_muonfeature_L2_2mu4_MSonly = 0;
   trig_L2_muonfeature_L2_2mu6 = 0;
   trig_L2_muonfeature_L2_2mu6_DiMu = 0;
   trig_L2_muonfeature_L2_2mu6_DiMu_noVtx_noOS = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU0 = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU0_MU6 = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU10 = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU6 = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0 = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_EM3 = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_J5 = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU10 = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU15 = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU20 = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6 = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_EM3 = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_J5 = 0;
   trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED = 0;
   trig_L2_muonfeature_L2_mu10 = 0;
   trig_L2_muonfeature_L2_mu10_MG = 0;
   trig_L2_muonfeature_L2_mu10_MSonly = 0;
   trig_L2_muonfeature_L2_mu10_NoIDTrkCut = 0;
   trig_L2_muonfeature_L2_mu10_SiTrk = 0;
   trig_L2_muonfeature_L2_mu10_passHLT = 0;
   trig_L2_muonfeature_L2_mu10i_loose = 0;
   trig_L2_muonfeature_L2_mu13 = 0;
   trig_L2_muonfeature_L2_mu15 = 0;
   trig_L2_muonfeature_L2_mu20 = 0;
   trig_L2_muonfeature_L2_mu20_MSonly = 0;
   trig_L2_muonfeature_L2_mu20_passHLT = 0;
   trig_L2_muonfeature_L2_mu4 = 0;
   trig_L2_muonfeature_L2_mu4_DiMu = 0;
   trig_L2_muonfeature_L2_mu4_DiMu_FS = 0;
   trig_L2_muonfeature_L2_mu4_DiMu_FS_noOS = 0;
   trig_L2_muonfeature_L2_mu4_L2MSonly_EFFS_passL2 = 0;
   trig_L2_muonfeature_L2_mu4_MB2_noL2_EFFS = 0;
   trig_L2_muonfeature_L2_mu4_MG = 0;
   trig_L2_muonfeature_L2_mu4_MSonly = 0;
   trig_L2_muonfeature_L2_mu4_MSonly_EFFS_passL2 = 0;
   trig_L2_muonfeature_L2_mu4_MSonly_Trk_Jpsi_loose = 0;
   trig_L2_muonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS = 0;
   trig_L2_muonfeature_L2_mu4_NoIDTrkCut = 0;
   trig_L2_muonfeature_L2_mu4_SiTrk = 0;
   trig_L2_muonfeature_L2_mu4_Trk_Jpsi_loose = 0;
   trig_L2_muonfeature_L2_mu4_Trk_Upsi_loose_FS = 0;
   trig_L2_muonfeature_L2_mu4_mu6 = 0;
   trig_L2_muonfeature_L2_mu4_passHLT = 0;
   trig_L2_muonfeature_L2_mu4_tile = 0;
   trig_L2_muonfeature_L2_mu4_tile_SiTrk = 0;
   trig_L2_muonfeature_L2_mu4_trod = 0;
   trig_L2_muonfeature_L2_mu4_trod_SiTrk = 0;
   trig_L2_muonfeature_L2_mu4mu6_DiMu = 0;
   trig_L2_muonfeature_L2_mu6 = 0;
   trig_L2_muonfeature_L2_mu6_DiMu = 0;
   trig_L2_muonfeature_L2_mu6_DiMu_FS = 0;
   trig_L2_muonfeature_L2_mu6_DiMu_FS_noOS = 0;
   trig_L2_muonfeature_L2_mu6_Jpsie5e3 = 0;
   trig_L2_muonfeature_L2_mu6_MG = 0;
   trig_L2_muonfeature_L2_mu6_MSonly = 0;
   trig_L2_muonfeature_L2_mu6_SiTrk = 0;
   trig_L2_muonfeature_L2_mu6_Trk_Jpsi_loose = 0;
   trig_L2_muonfeature_L2_mu6_Trk_Jpsi_loose_FS = 0;
   trig_L2_muonfeature_L2_mu6_Trk_Upsi_loose_FS = 0;
   trig_L2_muonfeature_L2_mu6_passHLT = 0;
   trig_L2_combmuonfeature_pt = 0;
   trig_L2_combmuonfeature_eta = 0;
   trig_L2_combmuonfeature_phi = 0;
   trig_L2_combmuonfeature_sigma_pt = 0;
   trig_L2_combmuonfeature_L2_2mu10 = 0;
   trig_L2_combmuonfeature_L2_2mu4 = 0;
   trig_L2_combmuonfeature_L2_2mu4_DiMu = 0;
   trig_L2_combmuonfeature_L2_2mu4_DiMu_SiTrk = 0;
   trig_L2_combmuonfeature_L2_2mu4_DiMu_noOS = 0;
   trig_L2_combmuonfeature_L2_2mu4_DiMu_noOS_passL2 = 0;
   trig_L2_combmuonfeature_L2_2mu4_DiMu_noVtx_noOS = 0;
   trig_L2_combmuonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2 = 0;
   trig_L2_combmuonfeature_L2_2mu4_MSonly = 0;
   trig_L2_combmuonfeature_L2_2mu6 = 0;
   trig_L2_combmuonfeature_L2_2mu6_DiMu = 0;
   trig_L2_combmuonfeature_L2_2mu6_DiMu_noVtx_noOS = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU0 = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU0_MU6 = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU10 = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU6 = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0 = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_EM3 = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_J5 = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU10 = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU15 = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU20 = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6 = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_EM3 = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_J5 = 0;
   trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED = 0;
   trig_L2_combmuonfeature_L2_mu10 = 0;
   trig_L2_combmuonfeature_L2_mu10_MG = 0;
   trig_L2_combmuonfeature_L2_mu10_MSonly = 0;
   trig_L2_combmuonfeature_L2_mu10_NoIDTrkCut = 0;
   trig_L2_combmuonfeature_L2_mu10_SiTrk = 0;
   trig_L2_combmuonfeature_L2_mu10_passHLT = 0;
   trig_L2_combmuonfeature_L2_mu10i_loose = 0;
   trig_L2_combmuonfeature_L2_mu13 = 0;
   trig_L2_combmuonfeature_L2_mu15 = 0;
   trig_L2_combmuonfeature_L2_mu20 = 0;
   trig_L2_combmuonfeature_L2_mu20_MSonly = 0;
   trig_L2_combmuonfeature_L2_mu20_passHLT = 0;
   trig_L2_combmuonfeature_L2_mu4 = 0;
   trig_L2_combmuonfeature_L2_mu4_DiMu = 0;
   trig_L2_combmuonfeature_L2_mu4_DiMu_FS = 0;
   trig_L2_combmuonfeature_L2_mu4_DiMu_FS_noOS = 0;
   trig_L2_combmuonfeature_L2_mu4_L2MSonly_EFFS_passL2 = 0;
   trig_L2_combmuonfeature_L2_mu4_MB2_noL2_EFFS = 0;
   trig_L2_combmuonfeature_L2_mu4_MG = 0;
   trig_L2_combmuonfeature_L2_mu4_MSonly = 0;
   trig_L2_combmuonfeature_L2_mu4_MSonly_EFFS_passL2 = 0;
   trig_L2_combmuonfeature_L2_mu4_MSonly_Trk_Jpsi_loose = 0;
   trig_L2_combmuonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS = 0;
   trig_L2_combmuonfeature_L2_mu4_NoIDTrkCut = 0;
   trig_L2_combmuonfeature_L2_mu4_SiTrk = 0;
   trig_L2_combmuonfeature_L2_mu4_Trk_Jpsi_loose = 0;
   trig_L2_combmuonfeature_L2_mu4_Trk_Upsi_loose_FS = 0;
   trig_L2_combmuonfeature_L2_mu4_mu6 = 0;
   trig_L2_combmuonfeature_L2_mu4_passHLT = 0;
   trig_L2_combmuonfeature_L2_mu4_tile = 0;
   trig_L2_combmuonfeature_L2_mu4_tile_SiTrk = 0;
   trig_L2_combmuonfeature_L2_mu4_trod = 0;
   trig_L2_combmuonfeature_L2_mu4_trod_SiTrk = 0;
   trig_L2_combmuonfeature_L2_mu4mu6_DiMu = 0;
   trig_L2_combmuonfeature_L2_mu6 = 0;
   trig_L2_combmuonfeature_L2_mu6_DiMu = 0;
   trig_L2_combmuonfeature_L2_mu6_DiMu_FS = 0;
   trig_L2_combmuonfeature_L2_mu6_DiMu_FS_noOS = 0;
   trig_L2_combmuonfeature_L2_mu6_Jpsie5e3 = 0;
   trig_L2_combmuonfeature_L2_mu6_MG = 0;
   trig_L2_combmuonfeature_L2_mu6_MSonly = 0;
   trig_L2_combmuonfeature_L2_mu6_SiTrk = 0;
   trig_L2_combmuonfeature_L2_mu6_Trk_Jpsi_loose = 0;
   trig_L2_combmuonfeature_L2_mu6_Trk_Jpsi_loose_FS = 0;
   trig_L2_combmuonfeature_L2_mu6_Trk_Upsi_loose_FS = 0;
   trig_L2_combmuonfeature_L2_mu6_passHLT = 0;
   trig_L2_combmuonfeature_mf_index = 0;
   trig_L2_combmuonfeature_idscantrk_index = 0;
   trig_L2_combmuonfeature_sitracktrk_index = 0;
   trig_L2_isomuonfeature_pt = 0;
   trig_L2_isomuonfeature_eta = 0;
   trig_L2_isomuonfeature_phi = 0;
   trig_L2_isomuonfeature_EtInnerConeEC  = 0;
   trig_L2_isomuonfeature_EtOuterConeEC = 0;
   trig_L2_isomuonfeature_EtInnerConeHC = 0;
   trig_L2_isomuonfeature_EtOuterConeHC = 0;
   trig_L2_isomuonfeature_NTracksCone = 0;
   trig_L2_isomuonfeature_SumPtTracksCone = 0;
   trig_L2_isomuonfeature_PtMuTracksCone = 0;
   trig_L2_isomuonfeature_iso_strategy = 0;
   trig_L2_isomuonfeature_RoiIdMu  = 0;
   trig_L2_isomuonfeature_PtMu = 0;
   trig_L2_isomuonfeature_EtaMu = 0;
   trig_L2_isomuonfeature_PhiMu = 0;
   trig_L2_isomuonfeature_LArWeight = 0;
   trig_L2_isomuonfeature_TileWeight = 0;
   trig_L2_isomuonfeature_L2_2mu10 = 0;
   trig_L2_isomuonfeature_L2_2mu4 = 0;
   trig_L2_isomuonfeature_L2_2mu4_DiMu = 0;
   trig_L2_isomuonfeature_L2_2mu4_DiMu_SiTrk = 0;
   trig_L2_isomuonfeature_L2_2mu4_DiMu_noOS = 0;
   trig_L2_isomuonfeature_L2_2mu4_DiMu_noOS_passL2 = 0;
   trig_L2_isomuonfeature_L2_2mu4_DiMu_noVtx_noOS = 0;
   trig_L2_isomuonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2 = 0;
   trig_L2_isomuonfeature_L2_2mu4_MSonly = 0;
   trig_L2_isomuonfeature_L2_2mu6 = 0;
   trig_L2_isomuonfeature_L2_2mu6_DiMu = 0;
   trig_L2_isomuonfeature_L2_2mu6_DiMu_noVtx_noOS = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU0 = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU0_MU6 = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU10 = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU6 = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0 = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_EM3 = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_J5 = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU10 = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU15 = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU20 = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6 = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_EM3 = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_J5 = 0;
   trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED = 0;
   trig_L2_isomuonfeature_L2_mu10 = 0;
   trig_L2_isomuonfeature_L2_mu10_MG = 0;
   trig_L2_isomuonfeature_L2_mu10_MSonly = 0;
   trig_L2_isomuonfeature_L2_mu10_NoIDTrkCut = 0;
   trig_L2_isomuonfeature_L2_mu10_SiTrk = 0;
   trig_L2_isomuonfeature_L2_mu10_passHLT = 0;
   trig_L2_isomuonfeature_L2_mu10i_loose = 0;
   trig_L2_isomuonfeature_L2_mu13 = 0;
   trig_L2_isomuonfeature_L2_mu15 = 0;
   trig_L2_isomuonfeature_L2_mu20 = 0;
   trig_L2_isomuonfeature_L2_mu20_MSonly = 0;
   trig_L2_isomuonfeature_L2_mu20_passHLT = 0;
   trig_L2_isomuonfeature_L2_mu4 = 0;
   trig_L2_isomuonfeature_L2_mu4_DiMu = 0;
   trig_L2_isomuonfeature_L2_mu4_DiMu_FS = 0;
   trig_L2_isomuonfeature_L2_mu4_DiMu_FS_noOS = 0;
   trig_L2_isomuonfeature_L2_mu4_L2MSonly_EFFS_passL2 = 0;
   trig_L2_isomuonfeature_L2_mu4_MB2_noL2_EFFS = 0;
   trig_L2_isomuonfeature_L2_mu4_MG = 0;
   trig_L2_isomuonfeature_L2_mu4_MSonly = 0;
   trig_L2_isomuonfeature_L2_mu4_MSonly_EFFS_passL2 = 0;
   trig_L2_isomuonfeature_L2_mu4_MSonly_Trk_Jpsi_loose = 0;
   trig_L2_isomuonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS = 0;
   trig_L2_isomuonfeature_L2_mu4_NoIDTrkCut = 0;
   trig_L2_isomuonfeature_L2_mu4_SiTrk = 0;
   trig_L2_isomuonfeature_L2_mu4_Trk_Jpsi_loose = 0;
   trig_L2_isomuonfeature_L2_mu4_Trk_Upsi_loose_FS = 0;
   trig_L2_isomuonfeature_L2_mu4_mu6 = 0;
   trig_L2_isomuonfeature_L2_mu4_passHLT = 0;
   trig_L2_isomuonfeature_L2_mu4_tile = 0;
   trig_L2_isomuonfeature_L2_mu4_tile_SiTrk = 0;
   trig_L2_isomuonfeature_L2_mu4_trod = 0;
   trig_L2_isomuonfeature_L2_mu4_trod_SiTrk = 0;
   trig_L2_isomuonfeature_L2_mu4mu6_DiMu = 0;
   trig_L2_isomuonfeature_L2_mu6 = 0;
   trig_L2_isomuonfeature_L2_mu6_DiMu = 0;
   trig_L2_isomuonfeature_L2_mu6_DiMu_FS = 0;
   trig_L2_isomuonfeature_L2_mu6_DiMu_FS_noOS = 0;
   trig_L2_isomuonfeature_L2_mu6_Jpsie5e3 = 0;
   trig_L2_isomuonfeature_L2_mu6_MG = 0;
   trig_L2_isomuonfeature_L2_mu6_MSonly = 0;
   trig_L2_isomuonfeature_L2_mu6_SiTrk = 0;
   trig_L2_isomuonfeature_L2_mu6_Trk_Jpsi_loose = 0;
   trig_L2_isomuonfeature_L2_mu6_Trk_Jpsi_loose_FS = 0;
   trig_L2_isomuonfeature_L2_mu6_Trk_Upsi_loose_FS = 0;
   trig_L2_isomuonfeature_L2_mu6_passHLT = 0;
   trig_L2_tilemufeature_eta = 0;
   trig_L2_tilemufeature_phi = 0;
   trig_L2_tilemufeature_enedep = 0;
   trig_L2_tilemufeature_quality = 0;
   trig_L2_tilemufeature_L2_2mu10 = 0;
   trig_L2_tilemufeature_L2_2mu4 = 0;
   trig_L2_tilemufeature_L2_2mu4_DiMu = 0;
   trig_L2_tilemufeature_L2_2mu4_DiMu_SiTrk = 0;
   trig_L2_tilemufeature_L2_2mu4_DiMu_noOS = 0;
   trig_L2_tilemufeature_L2_2mu4_DiMu_noOS_passL2 = 0;
   trig_L2_tilemufeature_L2_2mu4_DiMu_noVtx_noOS = 0;
   trig_L2_tilemufeature_L2_2mu4_DiMu_noVtx_noOS_passL2 = 0;
   trig_L2_tilemufeature_L2_2mu4_MSonly = 0;
   trig_L2_tilemufeature_L2_2mu6 = 0;
   trig_L2_tilemufeature_L2_2mu6_DiMu = 0;
   trig_L2_tilemufeature_L2_2mu6_DiMu_noVtx_noOS = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU0 = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU0_MU6 = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU10 = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU6 = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0 = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_EM3 = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_EMPTY = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_J5 = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU10 = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU10_EMPTY = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU15 = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU20 = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6 = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_EM3 = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_EMPTY = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_J5 = 0;
   trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED = 0;
   trig_L2_tilemufeature_L2_mu10 = 0;
   trig_L2_tilemufeature_L2_mu10_MG = 0;
   trig_L2_tilemufeature_L2_mu10_MSonly = 0;
   trig_L2_tilemufeature_L2_mu10_NoIDTrkCut = 0;
   trig_L2_tilemufeature_L2_mu10_SiTrk = 0;
   trig_L2_tilemufeature_L2_mu10_passHLT = 0;
   trig_L2_tilemufeature_L2_mu10i_loose = 0;
   trig_L2_tilemufeature_L2_mu13 = 0;
   trig_L2_tilemufeature_L2_mu15 = 0;
   trig_L2_tilemufeature_L2_mu20 = 0;
   trig_L2_tilemufeature_L2_mu20_MSonly = 0;
   trig_L2_tilemufeature_L2_mu20_passHLT = 0;
   trig_L2_tilemufeature_L2_mu4 = 0;
   trig_L2_tilemufeature_L2_mu4_DiMu = 0;
   trig_L2_tilemufeature_L2_mu4_DiMu_FS = 0;
   trig_L2_tilemufeature_L2_mu4_DiMu_FS_noOS = 0;
   trig_L2_tilemufeature_L2_mu4_L2MSonly_EFFS_passL2 = 0;
   trig_L2_tilemufeature_L2_mu4_MB2_noL2_EFFS = 0;
   trig_L2_tilemufeature_L2_mu4_MG = 0;
   trig_L2_tilemufeature_L2_mu4_MSonly = 0;
   trig_L2_tilemufeature_L2_mu4_MSonly_EFFS_passL2 = 0;
   trig_L2_tilemufeature_L2_mu4_MSonly_Trk_Jpsi_loose = 0;
   trig_L2_tilemufeature_L2_mu4_MSonly_Trk_Upsi_loose_FS = 0;
   trig_L2_tilemufeature_L2_mu4_NoIDTrkCut = 0;
   trig_L2_tilemufeature_L2_mu4_SiTrk = 0;
   trig_L2_tilemufeature_L2_mu4_Trk_Jpsi_loose = 0;
   trig_L2_tilemufeature_L2_mu4_Trk_Upsi_loose_FS = 0;
   trig_L2_tilemufeature_L2_mu4_mu6 = 0;
   trig_L2_tilemufeature_L2_mu4_passHLT = 0;
   trig_L2_tilemufeature_L2_mu4_tile = 0;
   trig_L2_tilemufeature_L2_mu4_tile_SiTrk = 0;
   trig_L2_tilemufeature_L2_mu4_trod = 0;
   trig_L2_tilemufeature_L2_mu4_trod_SiTrk = 0;
   trig_L2_tilemufeature_L2_mu4mu6_DiMu = 0;
   trig_L2_tilemufeature_L2_mu6 = 0;
   trig_L2_tilemufeature_L2_mu6_DiMu = 0;
   trig_L2_tilemufeature_L2_mu6_DiMu_FS = 0;
   trig_L2_tilemufeature_L2_mu6_DiMu_FS_noOS = 0;
   trig_L2_tilemufeature_L2_mu6_Jpsie5e3 = 0;
   trig_L2_tilemufeature_L2_mu6_MG = 0;
   trig_L2_tilemufeature_L2_mu6_MSonly = 0;
   trig_L2_tilemufeature_L2_mu6_SiTrk = 0;
   trig_L2_tilemufeature_L2_mu6_Trk_Jpsi_loose = 0;
   trig_L2_tilemufeature_L2_mu6_Trk_Jpsi_loose_FS = 0;
   trig_L2_tilemufeature_L2_mu6_Trk_Upsi_loose_FS = 0;
   trig_L2_tilemufeature_L2_mu6_passHLT = 0;
   trig_L2_tiletrackmufeature_pt = 0;
   trig_L2_tiletrackmufeature_eta = 0;
   trig_L2_tiletrackmufeature_phi = 0;
   trig_L2_tiletrackmufeature_PtTR_Trk = 0;
   trig_L2_tiletrackmufeature_EtaTR_Trk = 0;
   trig_L2_tiletrackmufeature_PhiTR_Trk = 0;
   trig_L2_tiletrackmufeature_Typ_IDTrk = 0;
   trig_L2_tiletrackmufeature_L2_2mu10 = 0;
   trig_L2_tiletrackmufeature_L2_2mu4 = 0;
   trig_L2_tiletrackmufeature_L2_2mu4_DiMu = 0;
   trig_L2_tiletrackmufeature_L2_2mu4_DiMu_SiTrk = 0;
   trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noOS = 0;
   trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noOS_passL2 = 0;
   trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noVtx_noOS = 0;
   trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noVtx_noOS_passL2 = 0;
   trig_L2_tiletrackmufeature_L2_2mu4_MSonly = 0;
   trig_L2_tiletrackmufeature_L2_2mu6 = 0;
   trig_L2_tiletrackmufeature_L2_2mu6_DiMu = 0;
   trig_L2_tiletrackmufeature_L2_2mu6_DiMu_noVtx_noOS = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU0 = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU0_MU6 = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU10 = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU6 = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0 = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_EM3 = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_EMPTY = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_J5 = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU10 = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU10_EMPTY = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU15 = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU20 = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6 = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_EM3 = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_EMPTY = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_J5 = 0;
   trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED = 0;
   trig_L2_tiletrackmufeature_L2_mu10 = 0;
   trig_L2_tiletrackmufeature_L2_mu10_MG = 0;
   trig_L2_tiletrackmufeature_L2_mu10_MSonly = 0;
   trig_L2_tiletrackmufeature_L2_mu10_NoIDTrkCut = 0;
   trig_L2_tiletrackmufeature_L2_mu10_SiTrk = 0;
   trig_L2_tiletrackmufeature_L2_mu10_passHLT = 0;
   trig_L2_tiletrackmufeature_L2_mu10i_loose = 0;
   trig_L2_tiletrackmufeature_L2_mu13 = 0;
   trig_L2_tiletrackmufeature_L2_mu15 = 0;
   trig_L2_tiletrackmufeature_L2_mu20 = 0;
   trig_L2_tiletrackmufeature_L2_mu20_MSonly = 0;
   trig_L2_tiletrackmufeature_L2_mu20_passHLT = 0;
   trig_L2_tiletrackmufeature_L2_mu4 = 0;
   trig_L2_tiletrackmufeature_L2_mu4_DiMu = 0;
   trig_L2_tiletrackmufeature_L2_mu4_DiMu_FS = 0;
   trig_L2_tiletrackmufeature_L2_mu4_DiMu_FS_noOS = 0;
   trig_L2_tiletrackmufeature_L2_mu4_L2MSonly_EFFS_passL2 = 0;
   trig_L2_tiletrackmufeature_L2_mu4_MB2_noL2_EFFS = 0;
   trig_L2_tiletrackmufeature_L2_mu4_MG = 0;
   trig_L2_tiletrackmufeature_L2_mu4_MSonly = 0;
   trig_L2_tiletrackmufeature_L2_mu4_MSonly_EFFS_passL2 = 0;
   trig_L2_tiletrackmufeature_L2_mu4_MSonly_Trk_Jpsi_loose = 0;
   trig_L2_tiletrackmufeature_L2_mu4_MSonly_Trk_Upsi_loose_FS = 0;
   trig_L2_tiletrackmufeature_L2_mu4_NoIDTrkCut = 0;
   trig_L2_tiletrackmufeature_L2_mu4_SiTrk = 0;
   trig_L2_tiletrackmufeature_L2_mu4_Trk_Jpsi_loose = 0;
   trig_L2_tiletrackmufeature_L2_mu4_Trk_Upsi_loose_FS = 0;
   trig_L2_tiletrackmufeature_L2_mu4_mu6 = 0;
   trig_L2_tiletrackmufeature_L2_mu4_passHLT = 0;
   trig_L2_tiletrackmufeature_L2_mu4_tile = 0;
   trig_L2_tiletrackmufeature_L2_mu4_tile_SiTrk = 0;
   trig_L2_tiletrackmufeature_L2_mu4_trod = 0;
   trig_L2_tiletrackmufeature_L2_mu4_trod_SiTrk = 0;
   trig_L2_tiletrackmufeature_L2_mu4mu6_DiMu = 0;
   trig_L2_tiletrackmufeature_L2_mu6 = 0;
   trig_L2_tiletrackmufeature_L2_mu6_DiMu = 0;
   trig_L2_tiletrackmufeature_L2_mu6_DiMu_FS = 0;
   trig_L2_tiletrackmufeature_L2_mu6_DiMu_FS_noOS = 0;
   trig_L2_tiletrackmufeature_L2_mu6_Jpsie5e3 = 0;
   trig_L2_tiletrackmufeature_L2_mu6_MG = 0;
   trig_L2_tiletrackmufeature_L2_mu6_MSonly = 0;
   trig_L2_tiletrackmufeature_L2_mu6_SiTrk = 0;
   trig_L2_tiletrackmufeature_L2_mu6_Trk_Jpsi_loose = 0;
   trig_L2_tiletrackmufeature_L2_mu6_Trk_Jpsi_loose_FS = 0;
   trig_L2_tiletrackmufeature_L2_mu6_Trk_Upsi_loose_FS = 0;
   trig_L2_tiletrackmufeature_L2_mu6_passHLT = 0;
   trig_L2_tiletrackmufeature_tilemu_index = 0;
   trig_L2_tiletrackmufeature_idtrk_algorithmId = 0;
   trig_L2_tiletrackmufeature_idtrk_trackStatus = 0;
   trig_L2_tiletrackmufeature_idtrk_chi2Ndof = 0;
   trig_L2_tiletrackmufeature_idtrk_nStrawHits = 0;
   trig_L2_tiletrackmufeature_idtrk_nHighThrHits = 0;
   trig_L2_tiletrackmufeature_idtrk_nPixelSpacePoints = 0;
   trig_L2_tiletrackmufeature_idtrk_nSCT_SpacePoints = 0;
   trig_L2_tiletrackmufeature_idtrk_hitPattern = 0;
   trig_L2_tiletrackmufeature_idtrk_nStraw = 0;
   trig_L2_tiletrackmufeature_idtrk_nStrawTime = 0;
   trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_a0 = 0;
   trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_z0 = 0;
   trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_phi0 = 0;
   trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_eta = 0;
   trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_pt = 0;
   trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_covariance = 0;
   trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_hasidtrkfitpar = 0;
   trig_L2_tiletrackmufeature_idtrk_hasidtrk = 0;
   trig_EF_trigmuonef_RoINum = 0;
   trig_EF_trigmuonef_NSegments = 0;
   trig_EF_trigmuonef_NMdtHits = 0;
   trig_EF_trigmuonef_NRpcHits = 0;
   trig_EF_trigmuonef_NTgcHits = 0;
   trig_EF_trigmuonef_NCscHits = 0;
   trig_EF_trigmuonef_EtaPreviousLevel = 0;
   trig_EF_trigmuonef_PhiPreviousLevel = 0;
   trig_EF_trigmuonef_track_n = 0;
   trig_EF_trigmuonef_track_MuonType = 0;
   trig_EF_trigmuonef_track_MS_pt = 0;
   trig_EF_trigmuonef_track_MS_eta = 0;
   trig_EF_trigmuonef_track_MS_phi = 0;
   trig_EF_trigmuonef_track_MS_charge = 0;
   trig_EF_trigmuonef_track_MS_d0 = 0;
   trig_EF_trigmuonef_track_MS_z0 = 0;
   trig_EF_trigmuonef_track_MS_chi2 = 0;
   trig_EF_trigmuonef_track_MS_chi2prob = 0;
   trig_EF_trigmuonef_track_MS_posX = 0;
   trig_EF_trigmuonef_track_MS_posY = 0;
   trig_EF_trigmuonef_track_MS_posZ = 0;
   trig_EF_trigmuonef_track_MS_NRpcHitsPhi = 0;
   trig_EF_trigmuonef_track_MS_NTgcHitsPhi = 0;
   trig_EF_trigmuonef_track_MS_NCscHitsPhi = 0;
   trig_EF_trigmuonef_track_MS_NRpcHitsEta = 0;
   trig_EF_trigmuonef_track_MS_NTgcHitsEta = 0;
   trig_EF_trigmuonef_track_MS_NCscHitsEta = 0;
   trig_EF_trigmuonef_track_MS_NMdtHits = 0;
   trig_EF_trigmuonef_track_MS_hasMS = 0;
   trig_EF_trigmuonef_track_SA_pt = 0;
   trig_EF_trigmuonef_track_SA_eta = 0;
   trig_EF_trigmuonef_track_SA_phi = 0;
   trig_EF_trigmuonef_track_SA_charge = 0;
   trig_EF_trigmuonef_track_SA_d0 = 0;
   trig_EF_trigmuonef_track_SA_z0 = 0;
   trig_EF_trigmuonef_track_SA_chi2 = 0;
   trig_EF_trigmuonef_track_SA_chi2prob = 0;
   trig_EF_trigmuonef_track_SA_posX = 0;
   trig_EF_trigmuonef_track_SA_posY = 0;
   trig_EF_trigmuonef_track_SA_posZ = 0;
   trig_EF_trigmuonef_track_SA_hasSA = 0;
   trig_EF_trigmuonef_track_CB_pt = 0;
   trig_EF_trigmuonef_track_CB_eta = 0;
   trig_EF_trigmuonef_track_CB_phi = 0;
   trig_EF_trigmuonef_track_CB_charge = 0;
   trig_EF_trigmuonef_track_CB_d0 = 0;
   trig_EF_trigmuonef_track_CB_z0 = 0;
   trig_EF_trigmuonef_track_CB_chi2 = 0;
   trig_EF_trigmuonef_track_CB_chi2prob = 0;
   trig_EF_trigmuonef_track_CB_posX = 0;
   trig_EF_trigmuonef_track_CB_posY = 0;
   trig_EF_trigmuonef_track_CB_posZ = 0;
   trig_EF_trigmuonef_track_CB_matchChi2 = 0;
   trig_EF_trigmuonef_track_CB_NIdSctHits = 0;
   trig_EF_trigmuonef_track_CB_NIdPixelHits = 0;
   trig_EF_trigmuonef_track_CB_NTrtHits = 0;
   trig_EF_trigmuonef_track_CB_hasCB = 0;
   trig_EF_trigmugirl_RoINum = 0;
   trig_EF_trigmugirl_NSegments = 0;
   trig_EF_trigmugirl_NMdtHits = 0;
   trig_EF_trigmugirl_NRpcHits = 0;
   trig_EF_trigmugirl_NTgcHits = 0;
   trig_EF_trigmugirl_NCscHits = 0;
   trig_EF_trigmugirl_EtaPreviousLevel = 0;
   trig_EF_trigmugirl_PhiPreviousLevel = 0;
   trig_EF_trigmugirl_track_n = 0;
   trig_EF_trigmugirl_track_MuonType = 0;
   trig_EF_trigmugirl_track_MS_pt = 0;
   trig_EF_trigmugirl_track_MS_eta = 0;
   trig_EF_trigmugirl_track_MS_phi = 0;
   trig_EF_trigmugirl_track_MS_charge = 0;
   trig_EF_trigmugirl_track_MS_d0 = 0;
   trig_EF_trigmugirl_track_MS_z0 = 0;
   trig_EF_trigmugirl_track_MS_chi2 = 0;
   trig_EF_trigmugirl_track_MS_chi2prob = 0;
   trig_EF_trigmugirl_track_MS_posX = 0;
   trig_EF_trigmugirl_track_MS_posY = 0;
   trig_EF_trigmugirl_track_MS_posZ = 0;
   trig_EF_trigmugirl_track_MS_NRpcHitsPhi = 0;
   trig_EF_trigmugirl_track_MS_NTgcHitsPhi = 0;
   trig_EF_trigmugirl_track_MS_NCscHitsPhi = 0;
   trig_EF_trigmugirl_track_MS_NRpcHitsEta = 0;
   trig_EF_trigmugirl_track_MS_NTgcHitsEta = 0;
   trig_EF_trigmugirl_track_MS_NCscHitsEta = 0;
   trig_EF_trigmugirl_track_MS_NMdtHits = 0;
   trig_EF_trigmugirl_track_MS_hasMS = 0;
   trig_EF_trigmugirl_track_SA_pt = 0;
   trig_EF_trigmugirl_track_SA_eta = 0;
   trig_EF_trigmugirl_track_SA_phi = 0;
   trig_EF_trigmugirl_track_SA_charge = 0;
   trig_EF_trigmugirl_track_SA_d0 = 0;
   trig_EF_trigmugirl_track_SA_z0 = 0;
   trig_EF_trigmugirl_track_SA_chi2 = 0;
   trig_EF_trigmugirl_track_SA_chi2prob = 0;
   trig_EF_trigmugirl_track_SA_posX = 0;
   trig_EF_trigmugirl_track_SA_posY = 0;
   trig_EF_trigmugirl_track_SA_posZ = 0;
   trig_EF_trigmugirl_track_SA_hasSA = 0;
   trig_EF_trigmugirl_track_CB_pt = 0;
   trig_EF_trigmugirl_track_CB_eta = 0;
   trig_EF_trigmugirl_track_CB_phi = 0;
   trig_EF_trigmugirl_track_CB_charge = 0;
   trig_EF_trigmugirl_track_CB_d0 = 0;
   trig_EF_trigmugirl_track_CB_z0 = 0;
   trig_EF_trigmugirl_track_CB_chi2 = 0;
   trig_EF_trigmugirl_track_CB_chi2prob = 0;
   trig_EF_trigmugirl_track_CB_posX = 0;
   trig_EF_trigmugirl_track_CB_posY = 0;
   trig_EF_trigmugirl_track_CB_posZ = 0;
   trig_EF_trigmugirl_track_CB_matchChi2 = 0;
   trig_EF_trigmugirl_track_CB_NIdSctHits = 0;
   trig_EF_trigmugirl_track_CB_NIdPixelHits = 0;
   trig_EF_trigmugirl_track_CB_NTrtHits = 0;
   trig_EF_trigmugirl_track_CB_hasCB = 0;
   trig_L2_sitrack_muon_algorithmId = 0;
   trig_L2_sitrack_muon_trackStatus = 0;
   trig_L2_sitrack_muon_chi2Ndof = 0;
   trig_L2_sitrack_muon_nStrawHits = 0;
   trig_L2_sitrack_muon_nHighThrHits = 0;
   trig_L2_sitrack_muon_nPixelSpacePoints = 0;
   trig_L2_sitrack_muon_nSCT_SpacePoints = 0;
   trig_L2_sitrack_muon_hitPattern = 0;
   trig_L2_sitrack_muon_nStraw = 0;
   trig_L2_sitrack_muon_nStrawTime = 0;
   trig_L2_sitrack_muon_a0 = 0;
   trig_L2_sitrack_muon_z0 = 0;
   trig_L2_sitrack_muon_phi0 = 0;
   trig_L2_sitrack_muon_eta = 0;
   trig_L2_sitrack_muon_pt = 0;
   trig_L2_sitrack_muon_covariance = 0;
   trig_L2_idscan_muon_algorithmId = 0;
   trig_L2_idscan_muon_trackStatus = 0;
   trig_L2_idscan_muon_chi2Ndof = 0;
   trig_L2_idscan_muon_nStrawHits = 0;
   trig_L2_idscan_muon_nHighThrHits = 0;
   trig_L2_idscan_muon_nPixelSpacePoints = 0;
   trig_L2_idscan_muon_nSCT_SpacePoints = 0;
   trig_L2_idscan_muon_hitPattern = 0;
   trig_L2_idscan_muon_nStraw = 0;
   trig_L2_idscan_muon_nStrawTime = 0;
   trig_L2_idscan_muon_a0 = 0;
   trig_L2_idscan_muon_z0 = 0;
   trig_L2_idscan_muon_phi0 = 0;
   trig_L2_idscan_muon_eta = 0;
   trig_L2_idscan_muon_pt = 0;
   trig_L2_idscan_muon_covariance = 0;
   trig_L2_sitrack_isomuon_algorithmId = 0;
   trig_L2_sitrack_isomuon_trackStatus = 0;
   trig_L2_sitrack_isomuon_chi2Ndof = 0;
   trig_L2_sitrack_isomuon_nStrawHits = 0;
   trig_L2_sitrack_isomuon_nHighThrHits = 0;
   trig_L2_sitrack_isomuon_nPixelSpacePoints = 0;
   trig_L2_sitrack_isomuon_nSCT_SpacePoints = 0;
   trig_L2_sitrack_isomuon_hitPattern = 0;
   trig_L2_sitrack_isomuon_nStraw = 0;
   trig_L2_sitrack_isomuon_nStrawTime = 0;
   trig_L2_sitrack_isomuon_a0 = 0;
   trig_L2_sitrack_isomuon_z0 = 0;
   trig_L2_sitrack_isomuon_phi0 = 0;
   trig_L2_sitrack_isomuon_eta = 0;
   trig_L2_sitrack_isomuon_pt = 0;
   trig_L2_sitrack_isomuon_covariance = 0;
   trig_L2_idscan_isomuon_algorithmId = 0;
   trig_L2_idscan_isomuon_trackStatus = 0;
   trig_L2_idscan_isomuon_chi2Ndof = 0;
   trig_L2_idscan_isomuon_nStrawHits = 0;
   trig_L2_idscan_isomuon_nHighThrHits = 0;
   trig_L2_idscan_isomuon_nPixelSpacePoints = 0;
   trig_L2_idscan_isomuon_nSCT_SpacePoints = 0;
   trig_L2_idscan_isomuon_hitPattern = 0;
   trig_L2_idscan_isomuon_nStraw = 0;
   trig_L2_idscan_isomuon_nStrawTime = 0;
   trig_L2_idscan_isomuon_a0 = 0;
   trig_L2_idscan_isomuon_z0 = 0;
   trig_L2_idscan_isomuon_phi0 = 0;
   trig_L2_idscan_isomuon_eta = 0;
   trig_L2_idscan_isomuon_pt = 0;
   trig_L2_idscan_isomuon_covariance = 0;
   trig_RoI_L2_mu_type = 0;
   trig_RoI_L2_mu_lastStep = 0;
   trig_RoI_L2_mu_MuonFeature = 0;
   trig_RoI_L2_mu_MuonFeatureStatus = 0;
   trig_RoI_L2_mu_MuonFeatureDetails = 0;
   trig_RoI_L2_mu_MuonFeatureDetailsStatus = 0;
   trig_RoI_L2_mu_CombinedMuonFeature = 0;
   trig_RoI_L2_mu_CombinedMuonFeatureStatus = 0;
   trig_RoI_L2_mu_IsoMuonFeature = 0;
   trig_RoI_L2_mu_IsoMuonFeatureStatus = 0;
   trig_RoI_L2_mu_Muon_ROI = 0;
   trig_RoI_L2_mu_Muon_ROIStatus = 0;
   trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_Muon = 0;
   trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_MuonStatus = 0;
   trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_Muon = 0;
   trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_MuonStatus = 0;
   trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_muonIso = 0;
   trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_muonIsoStatus = 0;
   trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_muonIso = 0;
   trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_muonIsoStatus = 0;
   trig_RoI_L2_TileMu_type = 0;
   trig_RoI_L2_TileMu_lastStep = 0;
   trig_RoI_L2_TileMu_TileMuFeature = 0;
   trig_RoI_L2_TileMu_TileMuFeatureStatus = 0;
   trig_RoI_L2_TileMu_TileTrackMuFeature = 0;
   trig_RoI_L2_TileMu_TileTrackMuFeatureStatus = 0;
   trig_RoI_L2_TileMu_Muon_ROI = 0;
   trig_RoI_L2_TileMu_Muon_ROIStatus = 0;
   trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigSiTrack_Tile = 0;
   trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigSiTrack_TileStatus = 0;
   trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigIDSCAN_Tile = 0;
   trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigIDSCAN_TileStatus = 0;
   trig_RoI_EF_mu_type = 0;
   trig_RoI_EF_mu_lastStep = 0;
   trig_RoI_EF_mu_Muon_ROI = 0;
   trig_RoI_EF_mu_Muon_ROIStatus = 0;
   trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFID = 0;
   trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFIDStatus = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainer = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirl = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirlStatus = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EF = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus = 0;
   trig_RoI_EF_TileMu_type = 0;
   trig_RoI_EF_TileMu_lastStep = 0;
   trig_RoI_EF_TileMu_Muon_ROI = 0;
   trig_RoI_EF_TileMu_Muon_ROIStatus = 0;
   trig_RoI_EF_TileMu_TrigMuonEFContainer = 0;
   trig_RoI_EF_TileMu_TrigMuonEFContainerStatus = 0;
   trig_RoI_EF_TileMu_TrigMuonEFInfoContainer = 0;
   trig_RoI_EF_TileMu_TrigMuonEFInfoContainerStatus = 0;
   trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuGirl = 0;
   trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuGirlStatus = 0;
   trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuTagIMO_EF = 0;
   trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus = 0;
   trig_L2_met_nameOfComponent = 0;
   trig_L2_met_MExComponent = 0;
   trig_L2_met_MEyComponent = 0;
   trig_L2_met_MEzComponent = 0;
   trig_L2_met_sumEtComponent = 0;
   trig_L2_met_sumEComponent = 0;
   trig_L2_met_componentCalib0 = 0;
   trig_L2_met_componentCalib1 = 0;
   trig_L2_met_sumOfSigns = 0;
   trig_L2_met_usedChannels = 0;
   trig_L2_met_status = 0;
   trig_L2_jet_ehad0 = 0;
   trig_L2_jet_eem0 = 0;
   trig_L2_jet_L2_2j15 = 0;
   trig_L2_jet_L2_2j30 = 0;
   trig_L2_jet_L2_2j7 = 0;
   trig_L2_jet_L2_3j15 = 0;
   trig_L2_jet_L2_j130 = 0;
   trig_L2_jet_L2_j15 = 0;
   trig_L2_jet_L2_j30 = 0;
   trig_L2_jet_L2_j60 = 0;
   trig_L2_jet_L2_j7 = 0;
   trig_L2_jet_L2_j90 = 0;
   trig_L2_jet_E = 0;
   trig_L2_jet_pt = 0;
   trig_L2_jet_eta = 0;
   trig_L2_jet_phi = 0;
   trig_L2_jet_RoIWord = 0;
   trig_EF_met_nameOfComponent = 0;
   trig_EF_met_MExComponent = 0;
   trig_EF_met_MEyComponent = 0;
   trig_EF_met_MEzComponent = 0;
   trig_EF_met_sumEtComponent = 0;
   trig_EF_met_sumEComponent = 0;
   trig_EF_met_componentCalib0 = 0;
   trig_EF_met_componentCalib1 = 0;
   trig_EF_met_sumOfSigns = 0;
   trig_EF_met_usedChannels = 0;
   trig_EF_met_status = 0;
   trig_EF_jet_E = 0;
   trig_EF_jet_pt = 0;
   trig_EF_jet_m = 0;
   trig_EF_jet_eta = 0;
   trig_EF_jet_phi = 0;
   trig_EF_jet_EtaPhys = 0;
   trig_EF_jet_PhiPhys = 0;
   trig_EF_jet_MPhys = 0;
   trig_EF_jet_emscale_E = 0;
   trig_EF_jet_emscale_pt = 0;
   trig_EF_jet_emscale_m = 0;
   trig_EF_jet_emscale_eta = 0;
   trig_EF_jet_emscale_phi = 0;
   trig_EF_jet_RoIword = 0;
   trig_EF_jet_mu_dr = 0;
   trig_EF_jet_mu_matched = 0;
   SkimDecision_name = 0;
   SkimDecision_accepted = 0;
   ti_staco_topo_Jet_use = 0;
   ti_staco_topo_Jet_index = 0;
   ti_staco_topo_Jet_overlap_jetn = 0;
   ti_staco_topo_Jet_overlap_jetindex = 0;
   ti_staco_topo_Jet_overlap_mun = 0;
   ti_staco_topo_Jet_overlap_muindex = 0;
   ti_staco_topo_Mu_use = 0;
   ti_staco_topo_Mu_index = 0;
   ti_staco_topo_Mu_overlap_jetn = 0;
   ti_staco_topo_Mu_overlap_jetindex = 0;
   ti_staco_topo_Mu_overlap_mun = 0;
   ti_staco_topo_Mu_overlap_muindex = 0;
   ti_staco_topo_El_use = 0;
   ti_staco_topo_El_index = 0;
   ti_staco_topo_El_overlap_jetn = 0;
   ti_staco_topo_El_overlap_jetindex = 0;
   ti_staco_topo_El_overlap_mun = 0;
   ti_staco_topo_El_overlap_muindex = 0;
   ti_staco_tower_Jet_use = 0;
   ti_staco_tower_Jet_index = 0;
   ti_staco_tower_Jet_overlap_jetn = 0;
   ti_staco_tower_Jet_overlap_jetindex = 0;
   ti_staco_tower_Jet_overlap_mun = 0;
   ti_staco_tower_Jet_overlap_muindex = 0;
   ti_staco_tower_Mu_use = 0;
   ti_staco_tower_Mu_index = 0;
   ti_staco_tower_Mu_overlap_jetn = 0;
   ti_staco_tower_Mu_overlap_jetindex = 0;
   ti_staco_tower_Mu_overlap_mun = 0;
   ti_staco_tower_Mu_overlap_muindex = 0;
   ti_staco_tower_El_use = 0;
   ti_staco_tower_El_index = 0;
   ti_staco_tower_El_overlap_jetn = 0;
   ti_staco_tower_El_overlap_jetindex = 0;
   ti_staco_tower_El_overlap_mun = 0;
   ti_staco_tower_El_overlap_muindex = 0;
   ti_muid_topo_Jet_use = 0;
   ti_muid_topo_Jet_index = 0;
   ti_muid_topo_Jet_overlap_jetn = 0;
   ti_muid_topo_Jet_overlap_jetindex = 0;
   ti_muid_topo_Jet_overlap_mun = 0;
   ti_muid_topo_Jet_overlap_muindex = 0;
   ti_muid_topo_Mu_use = 0;
   ti_muid_topo_Mu_index = 0;
   ti_muid_topo_Mu_overlap_jetn = 0;
   ti_muid_topo_Mu_overlap_jetindex = 0;
   ti_muid_topo_Mu_overlap_mun = 0;
   ti_muid_topo_Mu_overlap_muindex = 0;
   ti_muid_topo_El_use = 0;
   ti_muid_topo_El_index = 0;
   ti_muid_topo_El_overlap_jetn = 0;
   ti_muid_topo_El_overlap_jetindex = 0;
   ti_muid_topo_El_overlap_mun = 0;
   ti_muid_topo_El_overlap_muindex = 0;
   ti_muid_tower_Jet_use = 0;
   ti_muid_tower_Jet_index = 0;
   ti_muid_tower_Jet_overlap_jetn = 0;
   ti_muid_tower_Jet_overlap_jetindex = 0;
   ti_muid_tower_Jet_overlap_mun = 0;
   ti_muid_tower_Jet_overlap_muindex = 0;
   ti_muid_tower_Mu_use = 0;
   ti_muid_tower_Mu_index = 0;
   ti_muid_tower_Mu_overlap_jetn = 0;
   ti_muid_tower_Mu_overlap_jetindex = 0;
   ti_muid_tower_Mu_overlap_mun = 0;
   ti_muid_tower_Mu_overlap_muindex = 0;
   ti_muid_tower_El_use = 0;
   ti_muid_tower_El_index = 0;
   ti_muid_tower_El_overlap_jetn = 0;
   ti_muid_tower_El_overlap_jetindex = 0;
   ti_muid_tower_El_overlap_mun = 0;
   ti_muid_tower_El_overlap_muindex = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

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
   fChain->SetBranchAddress("EF_2MUL1_j40_HV", &EF_2MUL1_j40_HV, &b_EF_2MUL1_j40_HV);
   fChain->SetBranchAddress("EF_2j10", &EF_2j10, &b_EF_2j10);
   fChain->SetBranchAddress("EF_2j10_deta3_5", &EF_2j10_deta3_5, &b_EF_2j10_deta3_5);
   fChain->SetBranchAddress("EF_2j10_deta5", &EF_2j10_deta5, &b_EF_2j10_deta5);
   fChain->SetBranchAddress("EF_2j20", &EF_2j20, &b_EF_2j20);
   fChain->SetBranchAddress("EF_2j20_deta3_5", &EF_2j20_deta3_5, &b_EF_2j20_deta3_5);
   fChain->SetBranchAddress("EF_2j40", &EF_2j40, &b_EF_2j40);
   fChain->SetBranchAddress("EF_2j40_deta3_5", &EF_2j40_deta3_5, &b_EF_2j40_deta3_5);
   fChain->SetBranchAddress("EF_2mu10", &EF_2mu10, &b_EF_2mu10);
   fChain->SetBranchAddress("EF_2mu4", &EF_2mu4, &b_EF_2mu4);
   fChain->SetBranchAddress("EF_2mu4_DiMu", &EF_2mu4_DiMu, &b_EF_2mu4_DiMu);
   fChain->SetBranchAddress("EF_2mu4_DiMu_SiTrk", &EF_2mu4_DiMu_SiTrk, &b_EF_2mu4_DiMu_SiTrk);
   fChain->SetBranchAddress("EF_2mu4_DiMu_noOS", &EF_2mu4_DiMu_noOS, &b_EF_2mu4_DiMu_noOS);
   fChain->SetBranchAddress("EF_2mu4_DiMu_noOS_passL2", &EF_2mu4_DiMu_noOS_passL2, &b_EF_2mu4_DiMu_noOS_passL2);
   fChain->SetBranchAddress("EF_2mu4_DiMu_noVtx_noOS", &EF_2mu4_DiMu_noVtx_noOS, &b_EF_2mu4_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("EF_2mu4_DiMu_noVtx_noOS_passL2", &EF_2mu4_DiMu_noVtx_noOS_passL2, &b_EF_2mu4_DiMu_noVtx_noOS_passL2);
   fChain->SetBranchAddress("EF_2mu4_MSonly", &EF_2mu4_MSonly, &b_EF_2mu4_MSonly);
   fChain->SetBranchAddress("EF_2mu6", &EF_2mu6, &b_EF_2mu6);
   fChain->SetBranchAddress("EF_2mu6_DiMu", &EF_2mu6_DiMu, &b_EF_2mu6_DiMu);
   fChain->SetBranchAddress("EF_2mu6_DiMu_noVtx_noOS", &EF_2mu6_DiMu_noVtx_noOS, &b_EF_2mu6_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("EF_3j20", &EF_3j20, &b_EF_3j20);
   fChain->SetBranchAddress("EF_EFInsideOut_FS_MB2", &EF_EFInsideOut_FS_MB2, &b_EF_EFInsideOut_FS_MB2);
   fChain->SetBranchAddress("EF_EFTRTOnly_FS_MB2", &EF_EFTRTOnly_FS_MB2, &b_EF_EFTRTOnly_FS_MB2);
   fChain->SetBranchAddress("EF_FJ18", &EF_FJ18, &b_EF_FJ18);
   fChain->SetBranchAddress("EF_FJ18_larcalib", &EF_FJ18_larcalib, &b_EF_FJ18_larcalib);
   fChain->SetBranchAddress("EF_FJ3", &EF_FJ3, &b_EF_FJ3);
   fChain->SetBranchAddress("EF_FJ3_larcalib", &EF_FJ3_larcalib, &b_EF_FJ3_larcalib);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2EM2", &EF_L1ItemStreamer_L1_2EM2, &b_EF_L1ItemStreamer_L1_2EM2);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2EM3", &EF_L1ItemStreamer_L1_2EM3, &b_EF_L1ItemStreamer_L1_2EM3);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2EM4", &EF_L1ItemStreamer_L1_2EM4, &b_EF_L1ItemStreamer_L1_2EM4);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2EM5", &EF_L1ItemStreamer_L1_2EM5, &b_EF_L1ItemStreamer_L1_2EM5);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2EM5I", &EF_L1ItemStreamer_L1_2EM5I, &b_EF_L1ItemStreamer_L1_2EM5I);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2FJ18", &EF_L1ItemStreamer_L1_2FJ18, &b_EF_L1ItemStreamer_L1_2FJ18);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2FJ3", &EF_L1ItemStreamer_L1_2FJ3, &b_EF_L1ItemStreamer_L1_2FJ3);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2J10", &EF_L1ItemStreamer_L1_2J10, &b_EF_L1ItemStreamer_L1_2J10);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2J10_win6", &EF_L1ItemStreamer_L1_2J10_win6, &b_EF_L1ItemStreamer_L1_2J10_win6);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2J15", &EF_L1ItemStreamer_L1_2J15, &b_EF_L1ItemStreamer_L1_2J15);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2J5", &EF_L1ItemStreamer_L1_2J5, &b_EF_L1ItemStreamer_L1_2J5);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU0", &EF_L1ItemStreamer_L1_2MU0, &b_EF_L1ItemStreamer_L1_2MU0);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU0_MU6", &EF_L1ItemStreamer_L1_2MU0_MU6, &b_EF_L1ItemStreamer_L1_2MU0_MU6);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU10", &EF_L1ItemStreamer_L1_2MU10, &b_EF_L1ItemStreamer_L1_2MU10);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2MU6", &EF_L1ItemStreamer_L1_2MU6, &b_EF_L1ItemStreamer_L1_2MU6);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2TAU5", &EF_L1ItemStreamer_L1_2TAU5, &b_EF_L1ItemStreamer_L1_2TAU5);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2TAU6", &EF_L1ItemStreamer_L1_2TAU6, &b_EF_L1ItemStreamer_L1_2TAU6);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_2TAU6I", &EF_L1ItemStreamer_L1_2TAU6I, &b_EF_L1ItemStreamer_L1_2TAU6I);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_3J10", &EF_L1ItemStreamer_L1_3J10, &b_EF_L1ItemStreamer_L1_3J10);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_AtoC", &EF_L1ItemStreamer_L1_BCM_AtoC, &b_EF_L1ItemStreamer_L1_BCM_AtoC);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_AtoC_EMPTY", &EF_L1ItemStreamer_L1_BCM_AtoC_EMPTY, &b_EF_L1ItemStreamer_L1_BCM_AtoC_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_CtoA", &EF_L1ItemStreamer_L1_BCM_CtoA, &b_EF_L1ItemStreamer_L1_BCM_CtoA);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_CtoA_EMPTY", &EF_L1ItemStreamer_L1_BCM_CtoA_EMPTY, &b_EF_L1ItemStreamer_L1_BCM_CtoA_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_HT", &EF_L1ItemStreamer_L1_BCM_HT, &b_EF_L1ItemStreamer_L1_BCM_HT);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_HT_EMPTY", &EF_L1ItemStreamer_L1_BCM_HT_EMPTY, &b_EF_L1ItemStreamer_L1_BCM_HT_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_MUL_1", &EF_L1ItemStreamer_L1_BCM_MUL_1, &b_EF_L1ItemStreamer_L1_BCM_MUL_1);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_MUL_1_EMPTY", &EF_L1ItemStreamer_L1_BCM_MUL_1_EMPTY, &b_EF_L1ItemStreamer_L1_BCM_MUL_1_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_MUL_2", &EF_L1ItemStreamer_L1_BCM_MUL_2, &b_EF_L1ItemStreamer_L1_BCM_MUL_2);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_MUL_2_EMPTY", &EF_L1ItemStreamer_L1_BCM_MUL_2_EMPTY, &b_EF_L1ItemStreamer_L1_BCM_MUL_2_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_MUL_3", &EF_L1ItemStreamer_L1_BCM_MUL_3, &b_EF_L1ItemStreamer_L1_BCM_MUL_3);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_MUL_3_EMPTY", &EF_L1ItemStreamer_L1_BCM_MUL_3_EMPTY, &b_EF_L1ItemStreamer_L1_BCM_MUL_3_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_MUL_4", &EF_L1ItemStreamer_L1_BCM_MUL_4, &b_EF_L1ItemStreamer_L1_BCM_MUL_4);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_MUL_4_EMPTY", &EF_L1ItemStreamer_L1_BCM_MUL_4_EMPTY, &b_EF_L1ItemStreamer_L1_BCM_MUL_4_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_MUL_5", &EF_L1ItemStreamer_L1_BCM_MUL_5, &b_EF_L1ItemStreamer_L1_BCM_MUL_5);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_MUL_5_EMPTY", &EF_L1ItemStreamer_L1_BCM_MUL_5_EMPTY, &b_EF_L1ItemStreamer_L1_BCM_MUL_5_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_MUL_6", &EF_L1ItemStreamer_L1_BCM_MUL_6, &b_EF_L1ItemStreamer_L1_BCM_MUL_6);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_MUL_6_EMPTY", &EF_L1ItemStreamer_L1_BCM_MUL_6_EMPTY, &b_EF_L1ItemStreamer_L1_BCM_MUL_6_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_Wide", &EF_L1ItemStreamer_L1_BCM_Wide, &b_EF_L1ItemStreamer_L1_BCM_Wide);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BCM_Wide_EMPTY", &EF_L1ItemStreamer_L1_BCM_Wide_EMPTY, &b_EF_L1ItemStreamer_L1_BCM_Wide_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BGRP0", &EF_L1ItemStreamer_L1_BGRP0, &b_EF_L1ItemStreamer_L1_BGRP0);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BGRP1", &EF_L1ItemStreamer_L1_BGRP1, &b_EF_L1ItemStreamer_L1_BGRP1);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BPTX0_BGRP0", &EF_L1ItemStreamer_L1_BPTX0_BGRP0, &b_EF_L1ItemStreamer_L1_BPTX0_BGRP0);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BPTX0_BPTX1_BGRP0", &EF_L1ItemStreamer_L1_BPTX0_BPTX1_BGRP0, &b_EF_L1ItemStreamer_L1_BPTX0_BPTX1_BGRP0);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_BPTX1_BGRP0", &EF_L1ItemStreamer_L1_BPTX1_BGRP0, &b_EF_L1ItemStreamer_L1_BPTX1_BGRP0);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM10", &EF_L1ItemStreamer_L1_EM10, &b_EF_L1ItemStreamer_L1_EM10);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM10I", &EF_L1ItemStreamer_L1_EM10I, &b_EF_L1ItemStreamer_L1_EM10I);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM14", &EF_L1ItemStreamer_L1_EM14, &b_EF_L1ItemStreamer_L1_EM14);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM2", &EF_L1ItemStreamer_L1_EM2, &b_EF_L1ItemStreamer_L1_EM2);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM3", &EF_L1ItemStreamer_L1_EM3, &b_EF_L1ItemStreamer_L1_EM3);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM3_EMPTY", &EF_L1ItemStreamer_L1_EM3_EMPTY, &b_EF_L1ItemStreamer_L1_EM3_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM3_UNPAIRED", &EF_L1ItemStreamer_L1_EM3_UNPAIRED, &b_EF_L1ItemStreamer_L1_EM3_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM4", &EF_L1ItemStreamer_L1_EM4, &b_EF_L1ItemStreamer_L1_EM4);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM5", &EF_L1ItemStreamer_L1_EM5, &b_EF_L1ItemStreamer_L1_EM5);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_EM5I", &EF_L1ItemStreamer_L1_EM5I, &b_EF_L1ItemStreamer_L1_EM5I);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_FJ18", &EF_L1ItemStreamer_L1_FJ18, &b_EF_L1ItemStreamer_L1_FJ18);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_FJ3", &EF_L1ItemStreamer_L1_FJ3, &b_EF_L1ItemStreamer_L1_FJ3);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_FJ3_EMPTY", &EF_L1ItemStreamer_L1_FJ3_EMPTY, &b_EF_L1ItemStreamer_L1_FJ3_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_FJ3_UNPAIRED", &EF_L1ItemStreamer_L1_FJ3_UNPAIRED, &b_EF_L1ItemStreamer_L1_FJ3_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J10", &EF_L1ItemStreamer_L1_J10, &b_EF_L1ItemStreamer_L1_J10);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J10_EMPTY", &EF_L1ItemStreamer_L1_J10_EMPTY, &b_EF_L1ItemStreamer_L1_J10_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J10_win6", &EF_L1ItemStreamer_L1_J10_win6, &b_EF_L1ItemStreamer_L1_J10_win6);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J15", &EF_L1ItemStreamer_L1_J15, &b_EF_L1ItemStreamer_L1_J15);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J15_LV", &EF_L1ItemStreamer_L1_J15_LV, &b_EF_L1ItemStreamer_L1_J15_LV);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J15_MV", &EF_L1ItemStreamer_L1_J15_MV, &b_EF_L1ItemStreamer_L1_J15_MV);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J15_NL", &EF_L1ItemStreamer_L1_J15_NL, &b_EF_L1ItemStreamer_L1_J15_NL);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J30", &EF_L1ItemStreamer_L1_J30, &b_EF_L1ItemStreamer_L1_J30);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J30_EMPTY", &EF_L1ItemStreamer_L1_J30_EMPTY, &b_EF_L1ItemStreamer_L1_J30_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J5", &EF_L1ItemStreamer_L1_J5, &b_EF_L1ItemStreamer_L1_J5);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J55", &EF_L1ItemStreamer_L1_J55, &b_EF_L1ItemStreamer_L1_J55);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J5_EMPTY", &EF_L1ItemStreamer_L1_J5_EMPTY, &b_EF_L1ItemStreamer_L1_J5_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J5_UNPAIRED", &EF_L1ItemStreamer_L1_J5_UNPAIRED, &b_EF_L1ItemStreamer_L1_J5_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_J75", &EF_L1ItemStreamer_L1_J75, &b_EF_L1ItemStreamer_L1_J75);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_JE120", &EF_L1ItemStreamer_L1_JE120, &b_EF_L1ItemStreamer_L1_JE120);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_JE280", &EF_L1ItemStreamer_L1_JE280, &b_EF_L1ItemStreamer_L1_JE280);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_L1A_Mon", &EF_L1ItemStreamer_L1_L1A_Mon, &b_EF_L1ItemStreamer_L1_L1A_Mon);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_LUCID", &EF_L1ItemStreamer_L1_LUCID, &b_EF_L1ItemStreamer_L1_LUCID);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_LUCID_A", &EF_L1ItemStreamer_L1_LUCID_A, &b_EF_L1ItemStreamer_L1_LUCID_A);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_LUCID_A_C", &EF_L1ItemStreamer_L1_LUCID_A_C, &b_EF_L1ItemStreamer_L1_LUCID_A_C);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_LUCID_A_C_EMPTY", &EF_L1ItemStreamer_L1_LUCID_A_C_EMPTY, &b_EF_L1ItemStreamer_L1_LUCID_A_C_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_LUCID_A_C_UNPAIRED", &EF_L1ItemStreamer_L1_LUCID_A_C_UNPAIRED, &b_EF_L1ItemStreamer_L1_LUCID_A_C_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_LUCID_A_EMPTY", &EF_L1ItemStreamer_L1_LUCID_A_EMPTY, &b_EF_L1ItemStreamer_L1_LUCID_A_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_LUCID_A_UNPAIRED", &EF_L1ItemStreamer_L1_LUCID_A_UNPAIRED, &b_EF_L1ItemStreamer_L1_LUCID_A_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_LUCID_C", &EF_L1ItemStreamer_L1_LUCID_C, &b_EF_L1ItemStreamer_L1_LUCID_C);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_LUCID_COMM", &EF_L1ItemStreamer_L1_LUCID_COMM, &b_EF_L1ItemStreamer_L1_LUCID_COMM);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_LUCID_COMM_EMPTY", &EF_L1ItemStreamer_L1_LUCID_COMM_EMPTY, &b_EF_L1ItemStreamer_L1_LUCID_COMM_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_LUCID_C_EMPTY", &EF_L1ItemStreamer_L1_LUCID_C_EMPTY, &b_EF_L1ItemStreamer_L1_LUCID_C_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_LUCID_C_UNPAIRED", &EF_L1ItemStreamer_L1_LUCID_C_UNPAIRED, &b_EF_L1ItemStreamer_L1_LUCID_C_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_LUCID_EMPTY", &EF_L1ItemStreamer_L1_LUCID_EMPTY, &b_EF_L1ItemStreamer_L1_LUCID_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA0", &EF_L1ItemStreamer_L1_MBTSA0, &b_EF_L1ItemStreamer_L1_MBTSA0);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA1", &EF_L1ItemStreamer_L1_MBTSA1, &b_EF_L1ItemStreamer_L1_MBTSA1);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA10", &EF_L1ItemStreamer_L1_MBTSA10, &b_EF_L1ItemStreamer_L1_MBTSA10);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA11", &EF_L1ItemStreamer_L1_MBTSA11, &b_EF_L1ItemStreamer_L1_MBTSA11);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA12", &EF_L1ItemStreamer_L1_MBTSA12, &b_EF_L1ItemStreamer_L1_MBTSA12);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA13", &EF_L1ItemStreamer_L1_MBTSA13, &b_EF_L1ItemStreamer_L1_MBTSA13);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA14", &EF_L1ItemStreamer_L1_MBTSA14, &b_EF_L1ItemStreamer_L1_MBTSA14);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA15", &EF_L1ItemStreamer_L1_MBTSA15, &b_EF_L1ItemStreamer_L1_MBTSA15);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA2", &EF_L1ItemStreamer_L1_MBTSA2, &b_EF_L1ItemStreamer_L1_MBTSA2);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA3", &EF_L1ItemStreamer_L1_MBTSA3, &b_EF_L1ItemStreamer_L1_MBTSA3);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA4", &EF_L1ItemStreamer_L1_MBTSA4, &b_EF_L1ItemStreamer_L1_MBTSA4);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA5", &EF_L1ItemStreamer_L1_MBTSA5, &b_EF_L1ItemStreamer_L1_MBTSA5);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA6", &EF_L1ItemStreamer_L1_MBTSA6, &b_EF_L1ItemStreamer_L1_MBTSA6);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA7", &EF_L1ItemStreamer_L1_MBTSA7, &b_EF_L1ItemStreamer_L1_MBTSA7);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA8", &EF_L1ItemStreamer_L1_MBTSA8, &b_EF_L1ItemStreamer_L1_MBTSA8);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSA9", &EF_L1ItemStreamer_L1_MBTSA9, &b_EF_L1ItemStreamer_L1_MBTSA9);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC0", &EF_L1ItemStreamer_L1_MBTSC0, &b_EF_L1ItemStreamer_L1_MBTSC0);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC1", &EF_L1ItemStreamer_L1_MBTSC1, &b_EF_L1ItemStreamer_L1_MBTSC1);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC10", &EF_L1ItemStreamer_L1_MBTSC10, &b_EF_L1ItemStreamer_L1_MBTSC10);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC11", &EF_L1ItemStreamer_L1_MBTSC11, &b_EF_L1ItemStreamer_L1_MBTSC11);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC12", &EF_L1ItemStreamer_L1_MBTSC12, &b_EF_L1ItemStreamer_L1_MBTSC12);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC13", &EF_L1ItemStreamer_L1_MBTSC13, &b_EF_L1ItemStreamer_L1_MBTSC13);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC14", &EF_L1ItemStreamer_L1_MBTSC14, &b_EF_L1ItemStreamer_L1_MBTSC14);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC15", &EF_L1ItemStreamer_L1_MBTSC15, &b_EF_L1ItemStreamer_L1_MBTSC15);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC2", &EF_L1ItemStreamer_L1_MBTSC2, &b_EF_L1ItemStreamer_L1_MBTSC2);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC3", &EF_L1ItemStreamer_L1_MBTSC3, &b_EF_L1ItemStreamer_L1_MBTSC3);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC4", &EF_L1ItemStreamer_L1_MBTSC4, &b_EF_L1ItemStreamer_L1_MBTSC4);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC5", &EF_L1ItemStreamer_L1_MBTSC5, &b_EF_L1ItemStreamer_L1_MBTSC5);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC6", &EF_L1ItemStreamer_L1_MBTSC6, &b_EF_L1ItemStreamer_L1_MBTSC6);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC7", &EF_L1ItemStreamer_L1_MBTSC7, &b_EF_L1ItemStreamer_L1_MBTSC7);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC8", &EF_L1ItemStreamer_L1_MBTSC8, &b_EF_L1ItemStreamer_L1_MBTSC8);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTSC9", &EF_L1ItemStreamer_L1_MBTSC9, &b_EF_L1ItemStreamer_L1_MBTSC9);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_1", &EF_L1ItemStreamer_L1_MBTS_1, &b_EF_L1ItemStreamer_L1_MBTS_1);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_1_1", &EF_L1ItemStreamer_L1_MBTS_1_1, &b_EF_L1ItemStreamer_L1_MBTS_1_1);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_1_1_Col", &EF_L1ItemStreamer_L1_MBTS_1_1_Col, &b_EF_L1ItemStreamer_L1_MBTS_1_1_Col);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_1_1_EMPTY", &EF_L1ItemStreamer_L1_MBTS_1_1_EMPTY, &b_EF_L1ItemStreamer_L1_MBTS_1_1_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED", &EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED, &b_EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED1", &EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED1, &b_EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED1);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED2", &EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED2, &b_EF_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED2);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_1_Col", &EF_L1ItemStreamer_L1_MBTS_1_Col, &b_EF_L1ItemStreamer_L1_MBTS_1_Col);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_1_EMPTY", &EF_L1ItemStreamer_L1_MBTS_1_EMPTY, &b_EF_L1ItemStreamer_L1_MBTS_1_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED", &EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED, &b_EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED1", &EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED1, &b_EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED1);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED2", &EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED2, &b_EF_L1ItemStreamer_L1_MBTS_1_UNPAIRED2);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_2", &EF_L1ItemStreamer_L1_MBTS_2, &b_EF_L1ItemStreamer_L1_MBTS_2);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_2_Col", &EF_L1ItemStreamer_L1_MBTS_2_Col, &b_EF_L1ItemStreamer_L1_MBTS_2_Col);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_2_EMPTY", &EF_L1ItemStreamer_L1_MBTS_2_EMPTY, &b_EF_L1ItemStreamer_L1_MBTS_2_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED", &EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED, &b_EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED1", &EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED1, &b_EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED1);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED2", &EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED2, &b_EF_L1ItemStreamer_L1_MBTS_2_UNPAIRED2);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_4_4", &EF_L1ItemStreamer_L1_MBTS_4_4, &b_EF_L1ItemStreamer_L1_MBTS_4_4);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED", &EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED, &b_EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED1", &EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED1, &b_EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED1);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED2", &EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED2, &b_EF_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED2);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0", &EF_L1ItemStreamer_L1_MU0, &b_EF_L1ItemStreamer_L1_MU0);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_COMM", &EF_L1ItemStreamer_L1_MU0_COMM, &b_EF_L1ItemStreamer_L1_MU0_COMM);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_COMM_EMPTY", &EF_L1ItemStreamer_L1_MU0_COMM_EMPTY, &b_EF_L1ItemStreamer_L1_MU0_COMM_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_COMM_UNPAIRED", &EF_L1ItemStreamer_L1_MU0_COMM_UNPAIRED, &b_EF_L1ItemStreamer_L1_MU0_COMM_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_EM3", &EF_L1ItemStreamer_L1_MU0_EM3, &b_EF_L1ItemStreamer_L1_MU0_EM3);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_EMPTY", &EF_L1ItemStreamer_L1_MU0_EMPTY, &b_EF_L1ItemStreamer_L1_MU0_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_J5", &EF_L1ItemStreamer_L1_MU0_J5, &b_EF_L1ItemStreamer_L1_MU0_J5);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU0_UNPAIRED", &EF_L1ItemStreamer_L1_MU0_UNPAIRED, &b_EF_L1ItemStreamer_L1_MU0_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU10", &EF_L1ItemStreamer_L1_MU10, &b_EF_L1ItemStreamer_L1_MU10);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU10_EMPTY", &EF_L1ItemStreamer_L1_MU10_EMPTY, &b_EF_L1ItemStreamer_L1_MU10_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU15", &EF_L1ItemStreamer_L1_MU15, &b_EF_L1ItemStreamer_L1_MU15);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU20", &EF_L1ItemStreamer_L1_MU20, &b_EF_L1ItemStreamer_L1_MU20);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU6", &EF_L1ItemStreamer_L1_MU6, &b_EF_L1ItemStreamer_L1_MU6);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU6_EM3", &EF_L1ItemStreamer_L1_MU6_EM3, &b_EF_L1ItemStreamer_L1_MU6_EM3);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU6_EMPTY", &EF_L1ItemStreamer_L1_MU6_EMPTY, &b_EF_L1ItemStreamer_L1_MU6_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU6_J5", &EF_L1ItemStreamer_L1_MU6_J5, &b_EF_L1ItemStreamer_L1_MU6_J5);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_MU6_UNPAIRED", &EF_L1ItemStreamer_L1_MU6_UNPAIRED, &b_EF_L1ItemStreamer_L1_MU6_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_NIM_S9C0A20", &EF_L1ItemStreamer_L1_NIM_S9C0A20, &b_EF_L1ItemStreamer_L1_NIM_S9C0A20);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_NIM_S9C1C19", &EF_L1ItemStreamer_L1_NIM_S9C1C19, &b_EF_L1ItemStreamer_L1_NIM_S9C1C19);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_NIM_S9C1C20", &EF_L1ItemStreamer_L1_NIM_S9C1C20, &b_EF_L1ItemStreamer_L1_NIM_S9C1C20);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_RD0_EMPTY", &EF_L1ItemStreamer_L1_RD0_EMPTY, &b_EF_L1ItemStreamer_L1_RD0_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_RD0_FILLED", &EF_L1ItemStreamer_L1_RD0_FILLED, &b_EF_L1ItemStreamer_L1_RD0_FILLED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_RD0_FIRSTEMPTY", &EF_L1ItemStreamer_L1_RD0_FIRSTEMPTY, &b_EF_L1ItemStreamer_L1_RD0_FIRSTEMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_RD0_UNPAIRED", &EF_L1ItemStreamer_L1_RD0_UNPAIRED, &b_EF_L1ItemStreamer_L1_RD0_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_RD1_FILLED", &EF_L1ItemStreamer_L1_RD1_FILLED, &b_EF_L1ItemStreamer_L1_RD1_FILLED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TAU11", &EF_L1ItemStreamer_L1_TAU11, &b_EF_L1ItemStreamer_L1_TAU11);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TAU11I", &EF_L1ItemStreamer_L1_TAU11I, &b_EF_L1ItemStreamer_L1_TAU11I);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TAU20", &EF_L1ItemStreamer_L1_TAU20, &b_EF_L1ItemStreamer_L1_TAU20);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TAU30", &EF_L1ItemStreamer_L1_TAU30, &b_EF_L1ItemStreamer_L1_TAU30);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TAU5", &EF_L1ItemStreamer_L1_TAU5, &b_EF_L1ItemStreamer_L1_TAU5);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TAU5_EMPTY", &EF_L1ItemStreamer_L1_TAU5_EMPTY, &b_EF_L1ItemStreamer_L1_TAU5_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TAU5_UNPAIRED", &EF_L1ItemStreamer_L1_TAU5_UNPAIRED, &b_EF_L1ItemStreamer_L1_TAU5_UNPAIRED);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TAU6", &EF_L1ItemStreamer_L1_TAU6, &b_EF_L1ItemStreamer_L1_TAU6);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TAU6I", &EF_L1ItemStreamer_L1_TAU6I, &b_EF_L1ItemStreamer_L1_TAU6I);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TAU6_XE10", &EF_L1ItemStreamer_L1_TAU6_XE10, &b_EF_L1ItemStreamer_L1_TAU6_XE10);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TAU8", &EF_L1ItemStreamer_L1_TAU8, &b_EF_L1ItemStreamer_L1_TAU8);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TE10", &EF_L1ItemStreamer_L1_TE10, &b_EF_L1ItemStreamer_L1_TE10);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TE100", &EF_L1ItemStreamer_L1_TE100, &b_EF_L1ItemStreamer_L1_TE100);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_TRT", &EF_L1ItemStreamer_L1_TRT, &b_EF_L1ItemStreamer_L1_TRT);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_XE10", &EF_L1ItemStreamer_L1_XE10, &b_EF_L1ItemStreamer_L1_XE10);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_XE15", &EF_L1ItemStreamer_L1_XE15, &b_EF_L1ItemStreamer_L1_XE15);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_XE20", &EF_L1ItemStreamer_L1_XE20, &b_EF_L1ItemStreamer_L1_XE20);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_XE30", &EF_L1ItemStreamer_L1_XE30, &b_EF_L1ItemStreamer_L1_XE30);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_ZDC", &EF_L1ItemStreamer_L1_ZDC, &b_EF_L1ItemStreamer_L1_ZDC);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_ZDC_A", &EF_L1ItemStreamer_L1_ZDC_A, &b_EF_L1ItemStreamer_L1_ZDC_A);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_ZDC_AND", &EF_L1ItemStreamer_L1_ZDC_AND, &b_EF_L1ItemStreamer_L1_ZDC_AND);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_ZDC_AND_EMPTY", &EF_L1ItemStreamer_L1_ZDC_AND_EMPTY, &b_EF_L1ItemStreamer_L1_ZDC_AND_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_ZDC_A_C", &EF_L1ItemStreamer_L1_ZDC_A_C, &b_EF_L1ItemStreamer_L1_ZDC_A_C);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_ZDC_A_C_EMPTY", &EF_L1ItemStreamer_L1_ZDC_A_C_EMPTY, &b_EF_L1ItemStreamer_L1_ZDC_A_C_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_ZDC_A_EMPTY", &EF_L1ItemStreamer_L1_ZDC_A_EMPTY, &b_EF_L1ItemStreamer_L1_ZDC_A_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_ZDC_C", &EF_L1ItemStreamer_L1_ZDC_C, &b_EF_L1ItemStreamer_L1_ZDC_C);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_ZDC_C_EMPTY", &EF_L1ItemStreamer_L1_ZDC_C_EMPTY, &b_EF_L1ItemStreamer_L1_ZDC_C_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_ZDC_EMPTY", &EF_L1ItemStreamer_L1_ZDC_EMPTY, &b_EF_L1ItemStreamer_L1_ZDC_EMPTY);
   fChain->SetBranchAddress("EF_L1ItemStreamer_L1_ZDC_UNPAIRED", &EF_L1ItemStreamer_L1_ZDC_UNPAIRED, &b_EF_L1ItemStreamer_L1_ZDC_UNPAIRED);
   fChain->SetBranchAddress("EF_L2IdScan_FS_MB2", &EF_L2IdScan_FS_MB2, &b_EF_L2IdScan_FS_MB2);
   fChain->SetBranchAddress("EF_L2SiTrack_FS_MB2", &EF_L2SiTrack_FS_MB2, &b_EF_L2SiTrack_FS_MB2);
   fChain->SetBranchAddress("EF_MU4_DiMu", &EF_MU4_DiMu, &b_EF_MU4_DiMu);
   fChain->SetBranchAddress("EF_MU4_DiMu_FS", &EF_MU4_DiMu_FS, &b_EF_MU4_DiMu_FS);
   fChain->SetBranchAddress("EF_MU4_DiMu_FS_noOS", &EF_MU4_DiMu_FS_noOS, &b_EF_MU4_DiMu_FS_noOS);
   fChain->SetBranchAddress("EF_MU4_DiMu_FS_noOS_passL2", &EF_MU4_DiMu_FS_noOS_passL2, &b_EF_MU4_DiMu_FS_noOS_passL2);
   fChain->SetBranchAddress("EF_MU4_DiMu_MG_FS", &EF_MU4_DiMu_MG_FS, &b_EF_MU4_DiMu_MG_FS);
   fChain->SetBranchAddress("EF_MU4_DiMu_SiTrk_FS", &EF_MU4_DiMu_SiTrk_FS, &b_EF_MU4_DiMu_SiTrk_FS);
   fChain->SetBranchAddress("EF_MU4_DiMu_noOS", &EF_MU4_DiMu_noOS, &b_EF_MU4_DiMu_noOS);
   fChain->SetBranchAddress("EF_MU4_DiMu_noOS_passL2", &EF_MU4_DiMu_noOS_passL2, &b_EF_MU4_DiMu_noOS_passL2);
   fChain->SetBranchAddress("EF_MU4_Trk_Jpsi", &EF_MU4_Trk_Jpsi, &b_EF_MU4_Trk_Jpsi);
   fChain->SetBranchAddress("EF_MU4_Trk_Jpsi_FS", &EF_MU4_Trk_Jpsi_FS, &b_EF_MU4_Trk_Jpsi_FS);
   fChain->SetBranchAddress("EF_MU4_Trk_Jpsi_loose", &EF_MU4_Trk_Jpsi_loose, &b_EF_MU4_Trk_Jpsi_loose);
   fChain->SetBranchAddress("EF_MU4_Trk_Jpsi_loose_FS", &EF_MU4_Trk_Jpsi_loose_FS, &b_EF_MU4_Trk_Jpsi_loose_FS);
   fChain->SetBranchAddress("EF_MU4_Trk_Jpsi_loose_FS_passL2", &EF_MU4_Trk_Jpsi_loose_FS_passL2, &b_EF_MU4_Trk_Jpsi_loose_FS_passL2);
   fChain->SetBranchAddress("EF_MU4_Trk_Jpsi_loose_passL2", &EF_MU4_Trk_Jpsi_loose_passL2, &b_EF_MU4_Trk_Jpsi_loose_passL2);
   fChain->SetBranchAddress("EF_MU4_Trk_Upsi_loose_FS", &EF_MU4_Trk_Upsi_loose_FS, &b_EF_MU4_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("EF_MU4_Trk_Upsi_loose_FS_passL2", &EF_MU4_Trk_Upsi_loose_FS_passL2, &b_EF_MU4_Trk_Upsi_loose_FS_passL2);
   fChain->SetBranchAddress("EF_MU6_DiMu", &EF_MU6_DiMu, &b_EF_MU6_DiMu);
   fChain->SetBranchAddress("EF_MU6_DiMu_FS", &EF_MU6_DiMu_FS, &b_EF_MU6_DiMu_FS);
   fChain->SetBranchAddress("EF_MU6_Jpsie5e3", &EF_MU6_Jpsie5e3, &b_EF_MU6_Jpsie5e3);
   fChain->SetBranchAddress("EF_MU6_Jpsie5e3_FS", &EF_MU6_Jpsie5e3_FS, &b_EF_MU6_Jpsie5e3_FS);
   fChain->SetBranchAddress("EF_MU6_Jpsie5e3_SiTrk_FS", &EF_MU6_Jpsie5e3_SiTrk_FS, &b_EF_MU6_Jpsie5e3_SiTrk_FS);
   fChain->SetBranchAddress("EF_MU6_Trk_Jpsi_loose", &EF_MU6_Trk_Jpsi_loose, &b_EF_MU6_Trk_Jpsi_loose);
   fChain->SetBranchAddress("EF_MU6_Trk_Jpsi_loose_FS", &EF_MU6_Trk_Jpsi_loose_FS, &b_EF_MU6_Trk_Jpsi_loose_FS);
   fChain->SetBranchAddress("EF_MU6_Trk_Upsi_loose_FS", &EF_MU6_Trk_Upsi_loose_FS, &b_EF_MU6_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("EF_PixelNoise", &EF_PixelNoise, &b_EF_PixelNoise);
   fChain->SetBranchAddress("EF_SCTNoise", &EF_SCTNoise, &b_EF_SCTNoise);
   fChain->SetBranchAddress("EF_SeededStreamerBCM_LUCID_ZDC", &EF_SeededStreamerBCM_LUCID_ZDC, &b_EF_SeededStreamerBCM_LUCID_ZDC);
   fChain->SetBranchAddress("EF_SeededStreamerCosmicCalo", &EF_SeededStreamerCosmicCalo, &b_EF_SeededStreamerCosmicCalo);
   fChain->SetBranchAddress("EF_SeededStreamerCosmicCaloEM", &EF_SeededStreamerCosmicCaloEM, &b_EF_SeededStreamerCosmicCaloEM);
   fChain->SetBranchAddress("EF_SeededStreamerCosmicMuons", &EF_SeededStreamerCosmicMuons, &b_EF_SeededStreamerCosmicMuons);
   fChain->SetBranchAddress("EF_SeededStreamerL1Calo", &EF_SeededStreamerL1Calo, &b_EF_SeededStreamerL1Calo);
   fChain->SetBranchAddress("EF_SeededStreamerL1CaloEM", &EF_SeededStreamerL1CaloEM, &b_EF_SeededStreamerL1CaloEM);
   fChain->SetBranchAddress("EF_SeededStreamerL1CaloJet", &EF_SeededStreamerL1CaloJet, &b_EF_SeededStreamerL1CaloJet);
   fChain->SetBranchAddress("EF_SeededStreamerL1CaloTau", &EF_SeededStreamerL1CaloTau, &b_EF_SeededStreamerL1CaloTau);
   fChain->SetBranchAddress("EF_SeededStreamerMBTS", &EF_SeededStreamerMBTS, &b_EF_SeededStreamerMBTS);
   fChain->SetBranchAddress("EF_SeededStreamerMinBias", &EF_SeededStreamerMinBias, &b_EF_SeededStreamerMinBias);
   fChain->SetBranchAddress("EF_SeededStreamerMuonswBeam", &EF_SeededStreamerMuonswBeam, &b_EF_SeededStreamerMuonswBeam);
   fChain->SetBranchAddress("EF_SeededStreamerRNDM", &EF_SeededStreamerRNDM, &b_EF_SeededStreamerRNDM);
   fChain->SetBranchAddress("EF_SeededStreamerWarmStart", &EF_SeededStreamerWarmStart, &b_EF_SeededStreamerWarmStart);
   fChain->SetBranchAddress("EF_SeededStreamerZeroBias", &EF_SeededStreamerZeroBias, &b_EF_SeededStreamerZeroBias);
   fChain->SetBranchAddress("EF_TileCalib_cis", &EF_TileCalib_cis, &b_EF_TileCalib_cis);
   fChain->SetBranchAddress("EF_TileCalib_laser", &EF_TileCalib_laser, &b_EF_TileCalib_laser);
   fChain->SetBranchAddress("EF_TileMon", &EF_TileMon, &b_EF_TileMon);
   fChain->SetBranchAddress("EF_cost_monitor", &EF_cost_monitor, &b_EF_cost_monitor);
   fChain->SetBranchAddress("EF_e10_loose", &EF_e10_loose, &b_EF_e10_loose);
   fChain->SetBranchAddress("EF_e10_loose_passEF", &EF_e10_loose_passEF, &b_EF_e10_loose_passEF);
   fChain->SetBranchAddress("EF_e10_loose_passL2", &EF_e10_loose_passL2, &b_EF_e10_loose_passL2);
   fChain->SetBranchAddress("EF_e10_medium", &EF_e10_medium, &b_EF_e10_medium);
   fChain->SetBranchAddress("EF_e20_loose_NoIDTrkCut", &EF_e20_loose_NoIDTrkCut, &b_EF_e20_loose_NoIDTrkCut);
   fChain->SetBranchAddress("EF_e3_NoCut", &EF_e3_NoCut, &b_EF_e3_NoCut);
   fChain->SetBranchAddress("EF_e3_NoCut_IdScan", &EF_e3_NoCut_IdScan, &b_EF_e3_NoCut_IdScan);
   fChain->SetBranchAddress("EF_e3_NoCut_TRT", &EF_e3_NoCut_TRT, &b_EF_e3_NoCut_TRT);
   fChain->SetBranchAddress("EF_e5_NoCut", &EF_e5_NoCut, &b_EF_e5_NoCut);
   fChain->SetBranchAddress("EF_e5_NoCut_FwdBackTrk", &EF_e5_NoCut_FwdBackTrk, &b_EF_e5_NoCut_FwdBackTrk);
   fChain->SetBranchAddress("EF_e5_NoCut_IdScan", &EF_e5_NoCut_IdScan, &b_EF_e5_NoCut_IdScan);
   fChain->SetBranchAddress("EF_e5_NoCut_SiTrk", &EF_e5_NoCut_SiTrk, &b_EF_e5_NoCut_SiTrk);
   fChain->SetBranchAddress("EF_e5_NoCut_TRT", &EF_e5_NoCut_TRT, &b_EF_e5_NoCut_TRT);
   fChain->SetBranchAddress("EF_e5_NoCut_cells", &EF_e5_NoCut_cells, &b_EF_e5_NoCut_cells);
   fChain->SetBranchAddress("EF_e5_loose", &EF_e5_loose, &b_EF_e5_loose);
   fChain->SetBranchAddress("EF_e5_loose_IdScan", &EF_e5_loose_IdScan, &b_EF_e5_loose_IdScan);
   fChain->SetBranchAddress("EF_e5_loose_NoIDTrkCut", &EF_e5_loose_NoIDTrkCut, &b_EF_e5_loose_NoIDTrkCut);
   fChain->SetBranchAddress("EF_e5_loose_TRT", &EF_e5_loose_TRT, &b_EF_e5_loose_TRT);
   fChain->SetBranchAddress("EF_e5_medium", &EF_e5_medium, &b_EF_e5_medium);
   fChain->SetBranchAddress("EF_e5_medium_IdScan", &EF_e5_medium_IdScan, &b_EF_e5_medium_IdScan);
   fChain->SetBranchAddress("EF_e5_medium_TRT", &EF_e5_medium_TRT, &b_EF_e5_medium_TRT);
   fChain->SetBranchAddress("EF_g10_loose", &EF_g10_loose, &b_EF_g10_loose);
   fChain->SetBranchAddress("EF_g10_loose_larcalib", &EF_g10_loose_larcalib, &b_EF_g10_loose_larcalib);
   fChain->SetBranchAddress("EF_g3_nocut", &EF_g3_nocut, &b_EF_g3_nocut);
   fChain->SetBranchAddress("EF_g3_nocut_larcalib", &EF_g3_nocut_larcalib, &b_EF_g3_nocut_larcalib);
   fChain->SetBranchAddress("EF_g5_loose", &EF_g5_loose, &b_EF_g5_loose);
   fChain->SetBranchAddress("EF_g5_loose_larcalib", &EF_g5_loose_larcalib, &b_EF_g5_loose_larcalib);
   fChain->SetBranchAddress("EF_g5_nocut", &EF_g5_nocut, &b_EF_g5_nocut);
   fChain->SetBranchAddress("EF_j10", &EF_j10, &b_EF_j10);
   fChain->SetBranchAddress("EF_j10_c4", &EF_j10_c4, &b_EF_j10_c4);
   fChain->SetBranchAddress("EF_j10_larcalib", &EF_j10_larcalib, &b_EF_j10_larcalib);
   fChain->SetBranchAddress("EF_j10_noise", &EF_j10_noise, &b_EF_j10_noise);
   fChain->SetBranchAddress("EF_j140", &EF_j140, &b_EF_j140);
   fChain->SetBranchAddress("EF_j20", &EF_j20, &b_EF_j20);
   fChain->SetBranchAddress("EF_j200", &EF_j200, &b_EF_j200);
   fChain->SetBranchAddress("EF_j20_c4", &EF_j20_c4, &b_EF_j20_c4);
   fChain->SetBranchAddress("EF_j20_noise", &EF_j20_noise, &b_EF_j20_noise);
   fChain->SetBranchAddress("EF_j30_L1TAU_HV", &EF_j30_L1TAU_HV, &b_EF_j30_L1TAU_HV);
   fChain->SetBranchAddress("EF_j30_Trackless_HV", &EF_j30_Trackless_HV, &b_EF_j30_Trackless_HV);
   fChain->SetBranchAddress("EF_j40", &EF_j40, &b_EF_j40);
   fChain->SetBranchAddress("EF_j80", &EF_j80, &b_EF_j80);
   fChain->SetBranchAddress("EF_j80_larcalib", &EF_j80_larcalib, &b_EF_j80_larcalib);
   fChain->SetBranchAddress("EF_mbBcm", &EF_mbBcm, &b_EF_mbBcm);
   fChain->SetBranchAddress("EF_mbLucid", &EF_mbLucid, &b_EF_mbLucid);
   fChain->SetBranchAddress("EF_mbMbts_1", &EF_mbMbts_1, &b_EF_mbMbts_1);
   fChain->SetBranchAddress("EF_mbMbts_1_1", &EF_mbMbts_1_1, &b_EF_mbMbts_1_1);
   fChain->SetBranchAddress("EF_mbMbts_1_1_NoCut_Time", &EF_mbMbts_1_1_NoCut_Time, &b_EF_mbMbts_1_1_NoCut_Time);
   fChain->SetBranchAddress("EF_mbMbts_1_NoCut_Time", &EF_mbMbts_1_NoCut_Time, &b_EF_mbMbts_1_NoCut_Time);
   fChain->SetBranchAddress("EF_mbMbts_1_NoCut_Time_unpaired", &EF_mbMbts_1_NoCut_Time_unpaired, &b_EF_mbMbts_1_NoCut_Time_unpaired);
   fChain->SetBranchAddress("EF_mbMbts_2", &EF_mbMbts_2, &b_EF_mbMbts_2);
   fChain->SetBranchAddress("EF_mbMbts_2_NoCut_Time", &EF_mbMbts_2_NoCut_Time, &b_EF_mbMbts_2_NoCut_Time);
   fChain->SetBranchAddress("EF_mbRmMbts_1", &EF_mbRmMbts_1, &b_EF_mbRmMbts_1);
   fChain->SetBranchAddress("EF_mbRmMbts_1_1", &EF_mbRmMbts_1_1, &b_EF_mbRmMbts_1_1);
   fChain->SetBranchAddress("EF_mbRmMbts_1_1_NoCut_Time", &EF_mbRmMbts_1_1_NoCut_Time, &b_EF_mbRmMbts_1_1_NoCut_Time);
   fChain->SetBranchAddress("EF_mbRmMbts_1_NoCut_Time", &EF_mbRmMbts_1_NoCut_Time, &b_EF_mbRmMbts_1_NoCut_Time);
   fChain->SetBranchAddress("EF_mbRmMbts_1_NoCut_Time_unpaired", &EF_mbRmMbts_1_NoCut_Time_unpaired, &b_EF_mbRmMbts_1_NoCut_Time_unpaired);
   fChain->SetBranchAddress("EF_mbRmMbts_1_unpaired", &EF_mbRmMbts_1_unpaired, &b_EF_mbRmMbts_1_unpaired);
   fChain->SetBranchAddress("EF_mbRmMbts_2", &EF_mbRmMbts_2, &b_EF_mbRmMbts_2);
   fChain->SetBranchAddress("EF_mbRmMbts_2_NoCut_Time", &EF_mbRmMbts_2_NoCut_Time, &b_EF_mbRmMbts_2_NoCut_Time);
   fChain->SetBranchAddress("EF_mbRndm", &EF_mbRndm, &b_EF_mbRndm);
   fChain->SetBranchAddress("EF_mbSpTrk", &EF_mbSpTrk, &b_EF_mbSpTrk);
   fChain->SetBranchAddress("EF_mbSpTrk_cosmic", &EF_mbSpTrk_cosmic, &b_EF_mbSpTrk_cosmic);
   fChain->SetBranchAddress("EF_mbSpTrk_unpaired", &EF_mbSpTrk_unpaired, &b_EF_mbSpTrk_unpaired);
   fChain->SetBranchAddress("EF_mbSp_fwd", &EF_mbSp_fwd, &b_EF_mbSp_fwd);
   fChain->SetBranchAddress("EF_mbSp_oneD", &EF_mbSp_oneD, &b_EF_mbSp_oneD);
   fChain->SetBranchAddress("EF_mbTrtTrk", &EF_mbTrtTrk, &b_EF_mbTrtTrk);
   fChain->SetBranchAddress("EF_mbTrtTrk_unpaired", &EF_mbTrtTrk_unpaired, &b_EF_mbTrtTrk_unpaired);
   fChain->SetBranchAddress("EF_mbZdc", &EF_mbZdc, &b_EF_mbZdc);
   fChain->SetBranchAddress("EF_mb_BM_calib", &EF_mb_BM_calib, &b_EF_mb_BM_calib);
   fChain->SetBranchAddress("EF_mb_LD_calib", &EF_mb_LD_calib, &b_EF_mb_LD_calib);
   fChain->SetBranchAddress("EF_mb_M1_calib", &EF_mb_M1_calib, &b_EF_mb_M1_calib);
   fChain->SetBranchAddress("EF_mb_M1_calib_unpaired", &EF_mb_M1_calib_unpaired, &b_EF_mb_M1_calib_unpaired);
   fChain->SetBranchAddress("EF_mb_M2_calib", &EF_mb_M2_calib, &b_EF_mb_M2_calib);
   fChain->SetBranchAddress("EF_mb_M2_calib_unpaired", &EF_mb_M2_calib_unpaired, &b_EF_mb_M2_calib_unpaired);
   fChain->SetBranchAddress("EF_mb_MU", &EF_mb_MU, &b_EF_mb_MU);
   fChain->SetBranchAddress("EF_mb_RM_calib", &EF_mb_RM_calib, &b_EF_mb_RM_calib);
   fChain->SetBranchAddress("EF_mb_RM_calib_cosmic", &EF_mb_RM_calib_cosmic, &b_EF_mb_RM_calib_cosmic);
   fChain->SetBranchAddress("EF_mb_RM_calib_unpaired", &EF_mb_RM_calib_unpaired, &b_EF_mb_RM_calib_unpaired);
   fChain->SetBranchAddress("EF_mb_ZC_calib", &EF_mb_ZC_calib, &b_EF_mb_ZC_calib);
   fChain->SetBranchAddress("EF_mu10", &EF_mu10, &b_EF_mu10);
   fChain->SetBranchAddress("EF_mu10_MG", &EF_mu10_MG, &b_EF_mu10_MG);
   fChain->SetBranchAddress("EF_mu10_MSonly", &EF_mu10_MSonly, &b_EF_mu10_MSonly);
   fChain->SetBranchAddress("EF_mu10_NoIDTrkCut", &EF_mu10_NoIDTrkCut, &b_EF_mu10_NoIDTrkCut);
   fChain->SetBranchAddress("EF_mu10_SiTrk", &EF_mu10_SiTrk, &b_EF_mu10_SiTrk);
   fChain->SetBranchAddress("EF_mu10_passHLT", &EF_mu10_passHLT, &b_EF_mu10_passHLT);
   fChain->SetBranchAddress("EF_mu10i_loose", &EF_mu10i_loose, &b_EF_mu10i_loose);
   fChain->SetBranchAddress("EF_mu13", &EF_mu13, &b_EF_mu13);
   fChain->SetBranchAddress("EF_mu15", &EF_mu15, &b_EF_mu15);
   fChain->SetBranchAddress("EF_mu20", &EF_mu20, &b_EF_mu20);
   fChain->SetBranchAddress("EF_mu20_MSonly", &EF_mu20_MSonly, &b_EF_mu20_MSonly);
   fChain->SetBranchAddress("EF_mu20_passHLT", &EF_mu20_passHLT, &b_EF_mu20_passHLT);
   fChain->SetBranchAddress("EF_mu4", &EF_mu4, &b_EF_mu4);
   fChain->SetBranchAddress("EF_mu4_DiMu", &EF_mu4_DiMu, &b_EF_mu4_DiMu);
   fChain->SetBranchAddress("EF_mu4_DiMu_FS", &EF_mu4_DiMu_FS, &b_EF_mu4_DiMu_FS);
   fChain->SetBranchAddress("EF_mu4_DiMu_FS_noOS", &EF_mu4_DiMu_FS_noOS, &b_EF_mu4_DiMu_FS_noOS);
   fChain->SetBranchAddress("EF_mu4_L2MSonly_EFFS_passL2", &EF_mu4_L2MSonly_EFFS_passL2, &b_EF_mu4_L2MSonly_EFFS_passL2);
   fChain->SetBranchAddress("EF_mu4_MB2_noL2_EFFS", &EF_mu4_MB2_noL2_EFFS, &b_EF_mu4_MB2_noL2_EFFS);
   fChain->SetBranchAddress("EF_mu4_MG", &EF_mu4_MG, &b_EF_mu4_MG);
   fChain->SetBranchAddress("EF_mu4_MSonly", &EF_mu4_MSonly, &b_EF_mu4_MSonly);
   fChain->SetBranchAddress("EF_mu4_MSonly_EFFS_passL2", &EF_mu4_MSonly_EFFS_passL2, &b_EF_mu4_MSonly_EFFS_passL2);
   fChain->SetBranchAddress("EF_mu4_MSonly_Trk_Jpsi_loose", &EF_mu4_MSonly_Trk_Jpsi_loose, &b_EF_mu4_MSonly_Trk_Jpsi_loose);
   fChain->SetBranchAddress("EF_mu4_MSonly_Trk_Upsi_loose_FS", &EF_mu4_MSonly_Trk_Upsi_loose_FS, &b_EF_mu4_MSonly_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("EF_mu4_NoIDTrkCut", &EF_mu4_NoIDTrkCut, &b_EF_mu4_NoIDTrkCut);
   fChain->SetBranchAddress("EF_mu4_SiTrk", &EF_mu4_SiTrk, &b_EF_mu4_SiTrk);
   fChain->SetBranchAddress("EF_mu4_Trk_Jpsi_loose", &EF_mu4_Trk_Jpsi_loose, &b_EF_mu4_Trk_Jpsi_loose);
   fChain->SetBranchAddress("EF_mu4_Trk_Upsi_loose_FS", &EF_mu4_Trk_Upsi_loose_FS, &b_EF_mu4_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("EF_mu4_mu6", &EF_mu4_mu6, &b_EF_mu4_mu6);
   fChain->SetBranchAddress("EF_mu4_passHLT", &EF_mu4_passHLT, &b_EF_mu4_passHLT);
   fChain->SetBranchAddress("EF_mu4_tile", &EF_mu4_tile, &b_EF_mu4_tile);
   fChain->SetBranchAddress("EF_mu4_tile_SiTrk", &EF_mu4_tile_SiTrk, &b_EF_mu4_tile_SiTrk);
   fChain->SetBranchAddress("EF_mu4_trod", &EF_mu4_trod, &b_EF_mu4_trod);
   fChain->SetBranchAddress("EF_mu4_trod_SiTrk", &EF_mu4_trod_SiTrk, &b_EF_mu4_trod_SiTrk);
   fChain->SetBranchAddress("EF_mu4mu6_DiMu", &EF_mu4mu6_DiMu, &b_EF_mu4mu6_DiMu);
   fChain->SetBranchAddress("EF_mu6", &EF_mu6, &b_EF_mu6);
   fChain->SetBranchAddress("EF_mu6_DiMu", &EF_mu6_DiMu, &b_EF_mu6_DiMu);
   fChain->SetBranchAddress("EF_mu6_DiMu_FS", &EF_mu6_DiMu_FS, &b_EF_mu6_DiMu_FS);
   fChain->SetBranchAddress("EF_mu6_DiMu_FS_noOS", &EF_mu6_DiMu_FS_noOS, &b_EF_mu6_DiMu_FS_noOS);
   fChain->SetBranchAddress("EF_mu6_Jpsie5e3", &EF_mu6_Jpsie5e3, &b_EF_mu6_Jpsie5e3);
   fChain->SetBranchAddress("EF_mu6_MG", &EF_mu6_MG, &b_EF_mu6_MG);
   fChain->SetBranchAddress("EF_mu6_MSonly", &EF_mu6_MSonly, &b_EF_mu6_MSonly);
   fChain->SetBranchAddress("EF_mu6_SiTrk", &EF_mu6_SiTrk, &b_EF_mu6_SiTrk);
   fChain->SetBranchAddress("EF_mu6_Trk_Jpsi_loose", &EF_mu6_Trk_Jpsi_loose, &b_EF_mu6_Trk_Jpsi_loose);
   fChain->SetBranchAddress("EF_mu6_Trk_Jpsi_loose_FS", &EF_mu6_Trk_Jpsi_loose_FS, &b_EF_mu6_Trk_Jpsi_loose_FS);
   fChain->SetBranchAddress("EF_mu6_Trk_Upsi_loose_FS", &EF_mu6_Trk_Upsi_loose_FS, &b_EF_mu6_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("EF_mu6_passHLT", &EF_mu6_passHLT, &b_EF_mu6_passHLT);
   fChain->SetBranchAddress("EF_te100", &EF_te100, &b_EF_te100);
   fChain->SetBranchAddress("EF_trk9_loose", &EF_trk9_loose, &b_EF_trk9_loose);
   fChain->SetBranchAddress("EF_vtxbeamspot_FSTracks", &EF_vtxbeamspot_FSTracks, &b_EF_vtxbeamspot_FSTracks);
   fChain->SetBranchAddress("EF_vtxbeamspot_FSTracks_SiTrk", &EF_vtxbeamspot_FSTracks_SiTrk, &b_EF_vtxbeamspot_FSTracks_SiTrk);
   fChain->SetBranchAddress("EF_xe20", &EF_xe20, &b_EF_xe20);
   fChain->SetBranchAddress("EF_xe20_FEB", &EF_xe20_FEB, &b_EF_xe20_FEB);
   fChain->SetBranchAddress("EF_xe20_allCells", &EF_xe20_allCells, &b_EF_xe20_allCells);
   fChain->SetBranchAddress("EF_xe30_allL1", &EF_xe30_allL1, &b_EF_xe30_allL1);
   fChain->SetBranchAddress("EF_xe30_allL1_FEB", &EF_xe30_allL1_FEB, &b_EF_xe30_allL1_FEB);
   fChain->SetBranchAddress("EF_xe30_allL1_allCells", &EF_xe30_allL1_allCells, &b_EF_xe30_allL1_allCells);
   fChain->SetBranchAddress("EF_xe30_unbiased", &EF_xe30_unbiased, &b_EF_xe30_unbiased);
   fChain->SetBranchAddress("EF_xe30_unbiased_FEB", &EF_xe30_unbiased_FEB, &b_EF_xe30_unbiased_FEB);
   fChain->SetBranchAddress("EF_xe30_unbiased_allCells", &EF_xe30_unbiased_allCells, &b_EF_xe30_unbiased_allCells);
   fChain->SetBranchAddress("L1_2EM2", &L1_2EM2, &b_L1_2EM2);
   fChain->SetBranchAddress("L1_2EM3", &L1_2EM3, &b_L1_2EM3);
   fChain->SetBranchAddress("L1_2EM4", &L1_2EM4, &b_L1_2EM4);
   fChain->SetBranchAddress("L1_2EM5", &L1_2EM5, &b_L1_2EM5);
   fChain->SetBranchAddress("L1_2EM5I", &L1_2EM5I, &b_L1_2EM5I);
   fChain->SetBranchAddress("L1_2FJ18", &L1_2FJ18, &b_L1_2FJ18);
   fChain->SetBranchAddress("L1_2FJ3", &L1_2FJ3, &b_L1_2FJ3);
   fChain->SetBranchAddress("L1_2J10", &L1_2J10, &b_L1_2J10);
   fChain->SetBranchAddress("L1_2J10_win6", &L1_2J10_win6, &b_L1_2J10_win6);
   fChain->SetBranchAddress("L1_2J15", &L1_2J15, &b_L1_2J15);
   fChain->SetBranchAddress("L1_2J5", &L1_2J5, &b_L1_2J5);
   fChain->SetBranchAddress("L1_2MU0", &L1_2MU0, &b_L1_2MU0);
   fChain->SetBranchAddress("L1_2MU0_MU6", &L1_2MU0_MU6, &b_L1_2MU0_MU6);
   fChain->SetBranchAddress("L1_2MU10", &L1_2MU10, &b_L1_2MU10);
   fChain->SetBranchAddress("L1_2MU6", &L1_2MU6, &b_L1_2MU6);
   fChain->SetBranchAddress("L1_2TAU5", &L1_2TAU5, &b_L1_2TAU5);
   fChain->SetBranchAddress("L1_2TAU6", &L1_2TAU6, &b_L1_2TAU6);
   fChain->SetBranchAddress("L1_2TAU6I", &L1_2TAU6I, &b_L1_2TAU6I);
   fChain->SetBranchAddress("L1_3J10", &L1_3J10, &b_L1_3J10);
   fChain->SetBranchAddress("L1_BCM_AtoC", &L1_BCM_AtoC, &b_L1_BCM_AtoC);
   fChain->SetBranchAddress("L1_BCM_AtoC_EMPTY", &L1_BCM_AtoC_EMPTY, &b_L1_BCM_AtoC_EMPTY);
   fChain->SetBranchAddress("L1_BCM_CtoA", &L1_BCM_CtoA, &b_L1_BCM_CtoA);
   fChain->SetBranchAddress("L1_BCM_CtoA_EMPTY", &L1_BCM_CtoA_EMPTY, &b_L1_BCM_CtoA_EMPTY);
   fChain->SetBranchAddress("L1_BCM_HT", &L1_BCM_HT, &b_L1_BCM_HT);
   fChain->SetBranchAddress("L1_BCM_HT_EMPTY", &L1_BCM_HT_EMPTY, &b_L1_BCM_HT_EMPTY);
   fChain->SetBranchAddress("L1_BCM_MUL_1", &L1_BCM_MUL_1, &b_L1_BCM_MUL_1);
   fChain->SetBranchAddress("L1_BCM_MUL_1_EMPTY", &L1_BCM_MUL_1_EMPTY, &b_L1_BCM_MUL_1_EMPTY);
   fChain->SetBranchAddress("L1_BCM_MUL_2", &L1_BCM_MUL_2, &b_L1_BCM_MUL_2);
   fChain->SetBranchAddress("L1_BCM_MUL_2_EMPTY", &L1_BCM_MUL_2_EMPTY, &b_L1_BCM_MUL_2_EMPTY);
   fChain->SetBranchAddress("L1_BCM_MUL_3", &L1_BCM_MUL_3, &b_L1_BCM_MUL_3);
   fChain->SetBranchAddress("L1_BCM_MUL_3_EMPTY", &L1_BCM_MUL_3_EMPTY, &b_L1_BCM_MUL_3_EMPTY);
   fChain->SetBranchAddress("L1_BCM_MUL_4", &L1_BCM_MUL_4, &b_L1_BCM_MUL_4);
   fChain->SetBranchAddress("L1_BCM_MUL_4_EMPTY", &L1_BCM_MUL_4_EMPTY, &b_L1_BCM_MUL_4_EMPTY);
   fChain->SetBranchAddress("L1_BCM_MUL_5", &L1_BCM_MUL_5, &b_L1_BCM_MUL_5);
   fChain->SetBranchAddress("L1_BCM_MUL_5_EMPTY", &L1_BCM_MUL_5_EMPTY, &b_L1_BCM_MUL_5_EMPTY);
   fChain->SetBranchAddress("L1_BCM_MUL_6", &L1_BCM_MUL_6, &b_L1_BCM_MUL_6);
   fChain->SetBranchAddress("L1_BCM_MUL_6_EMPTY", &L1_BCM_MUL_6_EMPTY, &b_L1_BCM_MUL_6_EMPTY);
   fChain->SetBranchAddress("L1_BCM_Wide", &L1_BCM_Wide, &b_L1_BCM_Wide);
   fChain->SetBranchAddress("L1_BCM_Wide_EMPTY", &L1_BCM_Wide_EMPTY, &b_L1_BCM_Wide_EMPTY);
   fChain->SetBranchAddress("L1_BGRP0", &L1_BGRP0, &b_L1_BGRP0);
   fChain->SetBranchAddress("L1_BGRP1", &L1_BGRP1, &b_L1_BGRP1);
   fChain->SetBranchAddress("L1_BPTX0_BGRP0", &L1_BPTX0_BGRP0, &b_L1_BPTX0_BGRP0);
   fChain->SetBranchAddress("L1_BPTX0_BPTX1_BGRP0", &L1_BPTX0_BPTX1_BGRP0, &b_L1_BPTX0_BPTX1_BGRP0);
   fChain->SetBranchAddress("L1_BPTX1_BGRP0", &L1_BPTX1_BGRP0, &b_L1_BPTX1_BGRP0);
   fChain->SetBranchAddress("L1_CALREQ1", &L1_CALREQ1, &b_L1_CALREQ1);
   fChain->SetBranchAddress("L1_CALREQ2", &L1_CALREQ2, &b_L1_CALREQ2);
   fChain->SetBranchAddress("L1_EM10", &L1_EM10, &b_L1_EM10);
   fChain->SetBranchAddress("L1_EM10I", &L1_EM10I, &b_L1_EM10I);
   fChain->SetBranchAddress("L1_EM14", &L1_EM14, &b_L1_EM14);
   fChain->SetBranchAddress("L1_EM2", &L1_EM2, &b_L1_EM2);
   fChain->SetBranchAddress("L1_EM3", &L1_EM3, &b_L1_EM3);
   fChain->SetBranchAddress("L1_EM3_EMPTY", &L1_EM3_EMPTY, &b_L1_EM3_EMPTY);
   fChain->SetBranchAddress("L1_EM3_UNPAIRED", &L1_EM3_UNPAIRED, &b_L1_EM3_UNPAIRED);
   fChain->SetBranchAddress("L1_EM4", &L1_EM4, &b_L1_EM4);
   fChain->SetBranchAddress("L1_EM5", &L1_EM5, &b_L1_EM5);
   fChain->SetBranchAddress("L1_EM5I", &L1_EM5I, &b_L1_EM5I);
   fChain->SetBranchAddress("L1_FJ18", &L1_FJ18, &b_L1_FJ18);
   fChain->SetBranchAddress("L1_FJ3", &L1_FJ3, &b_L1_FJ3);
   fChain->SetBranchAddress("L1_FJ3_EMPTY", &L1_FJ3_EMPTY, &b_L1_FJ3_EMPTY);
   fChain->SetBranchAddress("L1_FJ3_UNPAIRED", &L1_FJ3_UNPAIRED, &b_L1_FJ3_UNPAIRED);
   fChain->SetBranchAddress("L1_J10", &L1_J10, &b_L1_J10);
   fChain->SetBranchAddress("L1_J10_EMPTY", &L1_J10_EMPTY, &b_L1_J10_EMPTY);
   fChain->SetBranchAddress("L1_J10_win6", &L1_J10_win6, &b_L1_J10_win6);
   fChain->SetBranchAddress("L1_J15", &L1_J15, &b_L1_J15);
   fChain->SetBranchAddress("L1_J15_LV", &L1_J15_LV, &b_L1_J15_LV);
   fChain->SetBranchAddress("L1_J15_MV", &L1_J15_MV, &b_L1_J15_MV);
   fChain->SetBranchAddress("L1_J15_NL", &L1_J15_NL, &b_L1_J15_NL);
   fChain->SetBranchAddress("L1_J30", &L1_J30, &b_L1_J30);
   fChain->SetBranchAddress("L1_J30_EMPTY", &L1_J30_EMPTY, &b_L1_J30_EMPTY);
   fChain->SetBranchAddress("L1_J5", &L1_J5, &b_L1_J5);
   fChain->SetBranchAddress("L1_J55", &L1_J55, &b_L1_J55);
   fChain->SetBranchAddress("L1_J5_EMPTY", &L1_J5_EMPTY, &b_L1_J5_EMPTY);
   fChain->SetBranchAddress("L1_J5_UNPAIRED", &L1_J5_UNPAIRED, &b_L1_J5_UNPAIRED);
   fChain->SetBranchAddress("L1_J75", &L1_J75, &b_L1_J75);
   fChain->SetBranchAddress("L1_JE120", &L1_JE120, &b_L1_JE120);
   fChain->SetBranchAddress("L1_JE280", &L1_JE280, &b_L1_JE280);
   fChain->SetBranchAddress("L1_L1A_Mon", &L1_L1A_Mon, &b_L1_L1A_Mon);
   fChain->SetBranchAddress("L1_LUCID", &L1_LUCID, &b_L1_LUCID);
   fChain->SetBranchAddress("L1_LUCID_A", &L1_LUCID_A, &b_L1_LUCID_A);
   fChain->SetBranchAddress("L1_LUCID_A_C", &L1_LUCID_A_C, &b_L1_LUCID_A_C);
   fChain->SetBranchAddress("L1_LUCID_A_C_EMPTY", &L1_LUCID_A_C_EMPTY, &b_L1_LUCID_A_C_EMPTY);
   fChain->SetBranchAddress("L1_LUCID_A_C_UNPAIRED", &L1_LUCID_A_C_UNPAIRED, &b_L1_LUCID_A_C_UNPAIRED);
   fChain->SetBranchAddress("L1_LUCID_A_EMPTY", &L1_LUCID_A_EMPTY, &b_L1_LUCID_A_EMPTY);
   fChain->SetBranchAddress("L1_LUCID_A_UNPAIRED", &L1_LUCID_A_UNPAIRED, &b_L1_LUCID_A_UNPAIRED);
   fChain->SetBranchAddress("L1_LUCID_C", &L1_LUCID_C, &b_L1_LUCID_C);
   fChain->SetBranchAddress("L1_LUCID_COMM", &L1_LUCID_COMM, &b_L1_LUCID_COMM);
   fChain->SetBranchAddress("L1_LUCID_COMM_EMPTY", &L1_LUCID_COMM_EMPTY, &b_L1_LUCID_COMM_EMPTY);
   fChain->SetBranchAddress("L1_LUCID_C_EMPTY", &L1_LUCID_C_EMPTY, &b_L1_LUCID_C_EMPTY);
   fChain->SetBranchAddress("L1_LUCID_C_UNPAIRED", &L1_LUCID_C_UNPAIRED, &b_L1_LUCID_C_UNPAIRED);
   fChain->SetBranchAddress("L1_LUCID_EMPTY", &L1_LUCID_EMPTY, &b_L1_LUCID_EMPTY);
   fChain->SetBranchAddress("L1_MBTSA0", &L1_MBTSA0, &b_L1_MBTSA0);
   fChain->SetBranchAddress("L1_MBTSA1", &L1_MBTSA1, &b_L1_MBTSA1);
   fChain->SetBranchAddress("L1_MBTSA10", &L1_MBTSA10, &b_L1_MBTSA10);
   fChain->SetBranchAddress("L1_MBTSA11", &L1_MBTSA11, &b_L1_MBTSA11);
   fChain->SetBranchAddress("L1_MBTSA12", &L1_MBTSA12, &b_L1_MBTSA12);
   fChain->SetBranchAddress("L1_MBTSA13", &L1_MBTSA13, &b_L1_MBTSA13);
   fChain->SetBranchAddress("L1_MBTSA14", &L1_MBTSA14, &b_L1_MBTSA14);
   fChain->SetBranchAddress("L1_MBTSA15", &L1_MBTSA15, &b_L1_MBTSA15);
   fChain->SetBranchAddress("L1_MBTSA2", &L1_MBTSA2, &b_L1_MBTSA2);
   fChain->SetBranchAddress("L1_MBTSA3", &L1_MBTSA3, &b_L1_MBTSA3);
   fChain->SetBranchAddress("L1_MBTSA4", &L1_MBTSA4, &b_L1_MBTSA4);
   fChain->SetBranchAddress("L1_MBTSA5", &L1_MBTSA5, &b_L1_MBTSA5);
   fChain->SetBranchAddress("L1_MBTSA6", &L1_MBTSA6, &b_L1_MBTSA6);
   fChain->SetBranchAddress("L1_MBTSA7", &L1_MBTSA7, &b_L1_MBTSA7);
   fChain->SetBranchAddress("L1_MBTSA8", &L1_MBTSA8, &b_L1_MBTSA8);
   fChain->SetBranchAddress("L1_MBTSA9", &L1_MBTSA9, &b_L1_MBTSA9);
   fChain->SetBranchAddress("L1_MBTSC0", &L1_MBTSC0, &b_L1_MBTSC0);
   fChain->SetBranchAddress("L1_MBTSC1", &L1_MBTSC1, &b_L1_MBTSC1);
   fChain->SetBranchAddress("L1_MBTSC10", &L1_MBTSC10, &b_L1_MBTSC10);
   fChain->SetBranchAddress("L1_MBTSC11", &L1_MBTSC11, &b_L1_MBTSC11);
   fChain->SetBranchAddress("L1_MBTSC12", &L1_MBTSC12, &b_L1_MBTSC12);
   fChain->SetBranchAddress("L1_MBTSC13", &L1_MBTSC13, &b_L1_MBTSC13);
   fChain->SetBranchAddress("L1_MBTSC14", &L1_MBTSC14, &b_L1_MBTSC14);
   fChain->SetBranchAddress("L1_MBTSC15", &L1_MBTSC15, &b_L1_MBTSC15);
   fChain->SetBranchAddress("L1_MBTSC2", &L1_MBTSC2, &b_L1_MBTSC2);
   fChain->SetBranchAddress("L1_MBTSC3", &L1_MBTSC3, &b_L1_MBTSC3);
   fChain->SetBranchAddress("L1_MBTSC4", &L1_MBTSC4, &b_L1_MBTSC4);
   fChain->SetBranchAddress("L1_MBTSC5", &L1_MBTSC5, &b_L1_MBTSC5);
   fChain->SetBranchAddress("L1_MBTSC6", &L1_MBTSC6, &b_L1_MBTSC6);
   fChain->SetBranchAddress("L1_MBTSC7", &L1_MBTSC7, &b_L1_MBTSC7);
   fChain->SetBranchAddress("L1_MBTSC8", &L1_MBTSC8, &b_L1_MBTSC8);
   fChain->SetBranchAddress("L1_MBTSC9", &L1_MBTSC9, &b_L1_MBTSC9);
   fChain->SetBranchAddress("L1_MBTS_1", &L1_MBTS_1, &b_L1_MBTS_1);
   fChain->SetBranchAddress("L1_MBTS_1_1", &L1_MBTS_1_1, &b_L1_MBTS_1_1);
   fChain->SetBranchAddress("L1_MBTS_1_1_Col", &L1_MBTS_1_1_Col, &b_L1_MBTS_1_1_Col);
   fChain->SetBranchAddress("L1_MBTS_1_1_EMPTY", &L1_MBTS_1_1_EMPTY, &b_L1_MBTS_1_1_EMPTY);
   fChain->SetBranchAddress("L1_MBTS_1_1_UNPAIRED", &L1_MBTS_1_1_UNPAIRED, &b_L1_MBTS_1_1_UNPAIRED);
   fChain->SetBranchAddress("L1_MBTS_1_1_UNPAIRED1", &L1_MBTS_1_1_UNPAIRED1, &b_L1_MBTS_1_1_UNPAIRED1);
   fChain->SetBranchAddress("L1_MBTS_1_1_UNPAIRED2", &L1_MBTS_1_1_UNPAIRED2, &b_L1_MBTS_1_1_UNPAIRED2);
   fChain->SetBranchAddress("L1_MBTS_1_Col", &L1_MBTS_1_Col, &b_L1_MBTS_1_Col);
   fChain->SetBranchAddress("L1_MBTS_1_EMPTY", &L1_MBTS_1_EMPTY, &b_L1_MBTS_1_EMPTY);
   fChain->SetBranchAddress("L1_MBTS_1_UNPAIRED", &L1_MBTS_1_UNPAIRED, &b_L1_MBTS_1_UNPAIRED);
   fChain->SetBranchAddress("L1_MBTS_1_UNPAIRED1", &L1_MBTS_1_UNPAIRED1, &b_L1_MBTS_1_UNPAIRED1);
   fChain->SetBranchAddress("L1_MBTS_1_UNPAIRED2", &L1_MBTS_1_UNPAIRED2, &b_L1_MBTS_1_UNPAIRED2);
   fChain->SetBranchAddress("L1_MBTS_2", &L1_MBTS_2, &b_L1_MBTS_2);
   fChain->SetBranchAddress("L1_MBTS_2_Col", &L1_MBTS_2_Col, &b_L1_MBTS_2_Col);
   fChain->SetBranchAddress("L1_MBTS_2_EMPTY", &L1_MBTS_2_EMPTY, &b_L1_MBTS_2_EMPTY);
   fChain->SetBranchAddress("L1_MBTS_2_UNPAIRED", &L1_MBTS_2_UNPAIRED, &b_L1_MBTS_2_UNPAIRED);
   fChain->SetBranchAddress("L1_MBTS_2_UNPAIRED1", &L1_MBTS_2_UNPAIRED1, &b_L1_MBTS_2_UNPAIRED1);
   fChain->SetBranchAddress("L1_MBTS_2_UNPAIRED2", &L1_MBTS_2_UNPAIRED2, &b_L1_MBTS_2_UNPAIRED2);
   fChain->SetBranchAddress("L1_MBTS_4_4", &L1_MBTS_4_4, &b_L1_MBTS_4_4);
   fChain->SetBranchAddress("L1_MBTS_4_4_UNPAIRED", &L1_MBTS_4_4_UNPAIRED, &b_L1_MBTS_4_4_UNPAIRED);
   fChain->SetBranchAddress("L1_MBTS_4_4_UNPAIRED1", &L1_MBTS_4_4_UNPAIRED1, &b_L1_MBTS_4_4_UNPAIRED1);
   fChain->SetBranchAddress("L1_MBTS_4_4_UNPAIRED2", &L1_MBTS_4_4_UNPAIRED2, &b_L1_MBTS_4_4_UNPAIRED2);
   fChain->SetBranchAddress("L1_MU0", &L1_MU0, &b_L1_MU0);
   fChain->SetBranchAddress("L1_MU0_COMM", &L1_MU0_COMM, &b_L1_MU0_COMM);
   fChain->SetBranchAddress("L1_MU0_COMM_EMPTY", &L1_MU0_COMM_EMPTY, &b_L1_MU0_COMM_EMPTY);
   fChain->SetBranchAddress("L1_MU0_COMM_UNPAIRED", &L1_MU0_COMM_UNPAIRED, &b_L1_MU0_COMM_UNPAIRED);
   fChain->SetBranchAddress("L1_MU0_EM3", &L1_MU0_EM3, &b_L1_MU0_EM3);
   fChain->SetBranchAddress("L1_MU0_EMPTY", &L1_MU0_EMPTY, &b_L1_MU0_EMPTY);
   fChain->SetBranchAddress("L1_MU0_J5", &L1_MU0_J5, &b_L1_MU0_J5);
   fChain->SetBranchAddress("L1_MU0_UNPAIRED", &L1_MU0_UNPAIRED, &b_L1_MU0_UNPAIRED);
   fChain->SetBranchAddress("L1_MU10", &L1_MU10, &b_L1_MU10);
   fChain->SetBranchAddress("L1_MU10_EMPTY", &L1_MU10_EMPTY, &b_L1_MU10_EMPTY);
   fChain->SetBranchAddress("L1_MU15", &L1_MU15, &b_L1_MU15);
   fChain->SetBranchAddress("L1_MU20", &L1_MU20, &b_L1_MU20);
   fChain->SetBranchAddress("L1_MU6", &L1_MU6, &b_L1_MU6);
   fChain->SetBranchAddress("L1_MU6_EM3", &L1_MU6_EM3, &b_L1_MU6_EM3);
   fChain->SetBranchAddress("L1_MU6_EMPTY", &L1_MU6_EMPTY, &b_L1_MU6_EMPTY);
   fChain->SetBranchAddress("L1_MU6_J5", &L1_MU6_J5, &b_L1_MU6_J5);
   fChain->SetBranchAddress("L1_MU6_UNPAIRED", &L1_MU6_UNPAIRED, &b_L1_MU6_UNPAIRED);
   fChain->SetBranchAddress("L1_NIM_S9C0A20", &L1_NIM_S9C0A20, &b_L1_NIM_S9C0A20);
   fChain->SetBranchAddress("L1_NIM_S9C1C19", &L1_NIM_S9C1C19, &b_L1_NIM_S9C1C19);
   fChain->SetBranchAddress("L1_NIM_S9C1C20", &L1_NIM_S9C1C20, &b_L1_NIM_S9C1C20);
   fChain->SetBranchAddress("L1_RD0_EMPTY", &L1_RD0_EMPTY, &b_L1_RD0_EMPTY);
   fChain->SetBranchAddress("L1_RD0_FILLED", &L1_RD0_FILLED, &b_L1_RD0_FILLED);
   fChain->SetBranchAddress("L1_RD0_FIRSTEMPTY", &L1_RD0_FIRSTEMPTY, &b_L1_RD0_FIRSTEMPTY);
   fChain->SetBranchAddress("L1_RD0_UNPAIRED", &L1_RD0_UNPAIRED, &b_L1_RD0_UNPAIRED);
   fChain->SetBranchAddress("L1_RD1_FILLED", &L1_RD1_FILLED, &b_L1_RD1_FILLED);
   fChain->SetBranchAddress("L1_TAU11", &L1_TAU11, &b_L1_TAU11);
   fChain->SetBranchAddress("L1_TAU11I", &L1_TAU11I, &b_L1_TAU11I);
   fChain->SetBranchAddress("L1_TAU20", &L1_TAU20, &b_L1_TAU20);
   fChain->SetBranchAddress("L1_TAU30", &L1_TAU30, &b_L1_TAU30);
   fChain->SetBranchAddress("L1_TAU5", &L1_TAU5, &b_L1_TAU5);
   fChain->SetBranchAddress("L1_TAU5_EMPTY", &L1_TAU5_EMPTY, &b_L1_TAU5_EMPTY);
   fChain->SetBranchAddress("L1_TAU5_UNPAIRED", &L1_TAU5_UNPAIRED, &b_L1_TAU5_UNPAIRED);
   fChain->SetBranchAddress("L1_TAU6", &L1_TAU6, &b_L1_TAU6);
   fChain->SetBranchAddress("L1_TAU6I", &L1_TAU6I, &b_L1_TAU6I);
   fChain->SetBranchAddress("L1_TAU6_XE10", &L1_TAU6_XE10, &b_L1_TAU6_XE10);
   fChain->SetBranchAddress("L1_TAU8", &L1_TAU8, &b_L1_TAU8);
   fChain->SetBranchAddress("L1_TE10", &L1_TE10, &b_L1_TE10);
   fChain->SetBranchAddress("L1_TE100", &L1_TE100, &b_L1_TE100);
   fChain->SetBranchAddress("L1_TRT", &L1_TRT, &b_L1_TRT);
   fChain->SetBranchAddress("L1_XE10", &L1_XE10, &b_L1_XE10);
   fChain->SetBranchAddress("L1_XE15", &L1_XE15, &b_L1_XE15);
   fChain->SetBranchAddress("L1_XE20", &L1_XE20, &b_L1_XE20);
   fChain->SetBranchAddress("L1_XE30", &L1_XE30, &b_L1_XE30);
   fChain->SetBranchAddress("L1_ZDC", &L1_ZDC, &b_L1_ZDC);
   fChain->SetBranchAddress("L1_ZDC_A", &L1_ZDC_A, &b_L1_ZDC_A);
   fChain->SetBranchAddress("L1_ZDC_AND", &L1_ZDC_AND, &b_L1_ZDC_AND);
   fChain->SetBranchAddress("L1_ZDC_AND_EMPTY", &L1_ZDC_AND_EMPTY, &b_L1_ZDC_AND_EMPTY);
   fChain->SetBranchAddress("L1_ZDC_A_C", &L1_ZDC_A_C, &b_L1_ZDC_A_C);
   fChain->SetBranchAddress("L1_ZDC_A_C_EMPTY", &L1_ZDC_A_C_EMPTY, &b_L1_ZDC_A_C_EMPTY);
   fChain->SetBranchAddress("L1_ZDC_A_EMPTY", &L1_ZDC_A_EMPTY, &b_L1_ZDC_A_EMPTY);
   fChain->SetBranchAddress("L1_ZDC_C", &L1_ZDC_C, &b_L1_ZDC_C);
   fChain->SetBranchAddress("L1_ZDC_C_EMPTY", &L1_ZDC_C_EMPTY, &b_L1_ZDC_C_EMPTY);
   fChain->SetBranchAddress("L1_ZDC_EMPTY", &L1_ZDC_EMPTY, &b_L1_ZDC_EMPTY);
   fChain->SetBranchAddress("L1_ZDC_UNPAIRED", &L1_ZDC_UNPAIRED, &b_L1_ZDC_UNPAIRED);
   fChain->SetBranchAddress("L2_2MUL1_j40_HV", &L2_2MUL1_j40_HV, &b_L2_2MUL1_j40_HV);
   fChain->SetBranchAddress("L2_2j15", &L2_2j15, &b_L2_2j15);
   fChain->SetBranchAddress("L2_2j15_deta3_5", &L2_2j15_deta3_5, &b_L2_2j15_deta3_5);
   fChain->SetBranchAddress("L2_2j30", &L2_2j30, &b_L2_2j30);
   fChain->SetBranchAddress("L2_2j30_deta3_5", &L2_2j30_deta3_5, &b_L2_2j30_deta3_5);
   fChain->SetBranchAddress("L2_2j7", &L2_2j7, &b_L2_2j7);
   fChain->SetBranchAddress("L2_2j7_deta3_5", &L2_2j7_deta3_5, &b_L2_2j7_deta3_5);
   fChain->SetBranchAddress("L2_2j7_deta5", &L2_2j7_deta5, &b_L2_2j7_deta5);
   fChain->SetBranchAddress("L2_2mu10", &L2_2mu10, &b_L2_2mu10);
   fChain->SetBranchAddress("L2_2mu4", &L2_2mu4, &b_L2_2mu4);
   fChain->SetBranchAddress("L2_2mu4_DiMu", &L2_2mu4_DiMu, &b_L2_2mu4_DiMu);
   fChain->SetBranchAddress("L2_2mu4_DiMu_SiTrk", &L2_2mu4_DiMu_SiTrk, &b_L2_2mu4_DiMu_SiTrk);
   fChain->SetBranchAddress("L2_2mu4_DiMu_noOS", &L2_2mu4_DiMu_noOS, &b_L2_2mu4_DiMu_noOS);
   fChain->SetBranchAddress("L2_2mu4_DiMu_noOS_passL2", &L2_2mu4_DiMu_noOS_passL2, &b_L2_2mu4_DiMu_noOS_passL2);
   fChain->SetBranchAddress("L2_2mu4_DiMu_noVtx_noOS", &L2_2mu4_DiMu_noVtx_noOS, &b_L2_2mu4_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("L2_2mu4_DiMu_noVtx_noOS_passL2", &L2_2mu4_DiMu_noVtx_noOS_passL2, &b_L2_2mu4_DiMu_noVtx_noOS_passL2);
   fChain->SetBranchAddress("L2_2mu4_MSonly", &L2_2mu4_MSonly, &b_L2_2mu4_MSonly);
   fChain->SetBranchAddress("L2_2mu6", &L2_2mu6, &b_L2_2mu6);
   fChain->SetBranchAddress("L2_2mu6_DiMu", &L2_2mu6_DiMu, &b_L2_2mu6_DiMu);
   fChain->SetBranchAddress("L2_2mu6_DiMu_noVtx_noOS", &L2_2mu6_DiMu_noVtx_noOS, &b_L2_2mu6_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("L2_3j15", &L2_3j15, &b_L2_3j15);
   fChain->SetBranchAddress("L2_EFInsideOut_FS_MB2", &L2_EFInsideOut_FS_MB2, &b_L2_EFInsideOut_FS_MB2);
   fChain->SetBranchAddress("L2_EFTRTOnly_FS_MB2", &L2_EFTRTOnly_FS_MB2, &b_L2_EFTRTOnly_FS_MB2);
   fChain->SetBranchAddress("L2_FJ18", &L2_FJ18, &b_L2_FJ18);
   fChain->SetBranchAddress("L2_FJ3", &L2_FJ3, &b_L2_FJ3);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2EM2", &L2_L1ItemStreamer_L1_2EM2, &b_L2_L1ItemStreamer_L1_2EM2);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2EM3", &L2_L1ItemStreamer_L1_2EM3, &b_L2_L1ItemStreamer_L1_2EM3);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2EM4", &L2_L1ItemStreamer_L1_2EM4, &b_L2_L1ItemStreamer_L1_2EM4);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2EM5", &L2_L1ItemStreamer_L1_2EM5, &b_L2_L1ItemStreamer_L1_2EM5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2EM5I", &L2_L1ItemStreamer_L1_2EM5I, &b_L2_L1ItemStreamer_L1_2EM5I);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2FJ18", &L2_L1ItemStreamer_L1_2FJ18, &b_L2_L1ItemStreamer_L1_2FJ18);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2FJ3", &L2_L1ItemStreamer_L1_2FJ3, &b_L2_L1ItemStreamer_L1_2FJ3);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2J10", &L2_L1ItemStreamer_L1_2J10, &b_L2_L1ItemStreamer_L1_2J10);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2J10_win6", &L2_L1ItemStreamer_L1_2J10_win6, &b_L2_L1ItemStreamer_L1_2J10_win6);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2J15", &L2_L1ItemStreamer_L1_2J15, &b_L2_L1ItemStreamer_L1_2J15);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2J5", &L2_L1ItemStreamer_L1_2J5, &b_L2_L1ItemStreamer_L1_2J5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU0", &L2_L1ItemStreamer_L1_2MU0, &b_L2_L1ItemStreamer_L1_2MU0);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU0_MU6", &L2_L1ItemStreamer_L1_2MU0_MU6, &b_L2_L1ItemStreamer_L1_2MU0_MU6);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU10", &L2_L1ItemStreamer_L1_2MU10, &b_L2_L1ItemStreamer_L1_2MU10);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2MU6", &L2_L1ItemStreamer_L1_2MU6, &b_L2_L1ItemStreamer_L1_2MU6);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2TAU5", &L2_L1ItemStreamer_L1_2TAU5, &b_L2_L1ItemStreamer_L1_2TAU5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2TAU6", &L2_L1ItemStreamer_L1_2TAU6, &b_L2_L1ItemStreamer_L1_2TAU6);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_2TAU6I", &L2_L1ItemStreamer_L1_2TAU6I, &b_L2_L1ItemStreamer_L1_2TAU6I);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_3J10", &L2_L1ItemStreamer_L1_3J10, &b_L2_L1ItemStreamer_L1_3J10);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_AtoC", &L2_L1ItemStreamer_L1_BCM_AtoC, &b_L2_L1ItemStreamer_L1_BCM_AtoC);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_AtoC_EMPTY", &L2_L1ItemStreamer_L1_BCM_AtoC_EMPTY, &b_L2_L1ItemStreamer_L1_BCM_AtoC_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_CtoA", &L2_L1ItemStreamer_L1_BCM_CtoA, &b_L2_L1ItemStreamer_L1_BCM_CtoA);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_CtoA_EMPTY", &L2_L1ItemStreamer_L1_BCM_CtoA_EMPTY, &b_L2_L1ItemStreamer_L1_BCM_CtoA_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_HT", &L2_L1ItemStreamer_L1_BCM_HT, &b_L2_L1ItemStreamer_L1_BCM_HT);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_HT_EMPTY", &L2_L1ItemStreamer_L1_BCM_HT_EMPTY, &b_L2_L1ItemStreamer_L1_BCM_HT_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_MUL_1", &L2_L1ItemStreamer_L1_BCM_MUL_1, &b_L2_L1ItemStreamer_L1_BCM_MUL_1);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_MUL_1_EMPTY", &L2_L1ItemStreamer_L1_BCM_MUL_1_EMPTY, &b_L2_L1ItemStreamer_L1_BCM_MUL_1_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_MUL_2", &L2_L1ItemStreamer_L1_BCM_MUL_2, &b_L2_L1ItemStreamer_L1_BCM_MUL_2);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_MUL_2_EMPTY", &L2_L1ItemStreamer_L1_BCM_MUL_2_EMPTY, &b_L2_L1ItemStreamer_L1_BCM_MUL_2_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_MUL_3", &L2_L1ItemStreamer_L1_BCM_MUL_3, &b_L2_L1ItemStreamer_L1_BCM_MUL_3);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_MUL_3_EMPTY", &L2_L1ItemStreamer_L1_BCM_MUL_3_EMPTY, &b_L2_L1ItemStreamer_L1_BCM_MUL_3_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_MUL_4", &L2_L1ItemStreamer_L1_BCM_MUL_4, &b_L2_L1ItemStreamer_L1_BCM_MUL_4);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_MUL_4_EMPTY", &L2_L1ItemStreamer_L1_BCM_MUL_4_EMPTY, &b_L2_L1ItemStreamer_L1_BCM_MUL_4_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_MUL_5", &L2_L1ItemStreamer_L1_BCM_MUL_5, &b_L2_L1ItemStreamer_L1_BCM_MUL_5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_MUL_5_EMPTY", &L2_L1ItemStreamer_L1_BCM_MUL_5_EMPTY, &b_L2_L1ItemStreamer_L1_BCM_MUL_5_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_MUL_6", &L2_L1ItemStreamer_L1_BCM_MUL_6, &b_L2_L1ItemStreamer_L1_BCM_MUL_6);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_MUL_6_EMPTY", &L2_L1ItemStreamer_L1_BCM_MUL_6_EMPTY, &b_L2_L1ItemStreamer_L1_BCM_MUL_6_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_Wide", &L2_L1ItemStreamer_L1_BCM_Wide, &b_L2_L1ItemStreamer_L1_BCM_Wide);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BCM_Wide_EMPTY", &L2_L1ItemStreamer_L1_BCM_Wide_EMPTY, &b_L2_L1ItemStreamer_L1_BCM_Wide_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BGRP0", &L2_L1ItemStreamer_L1_BGRP0, &b_L2_L1ItemStreamer_L1_BGRP0);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BGRP1", &L2_L1ItemStreamer_L1_BGRP1, &b_L2_L1ItemStreamer_L1_BGRP1);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BPTX0_BGRP0", &L2_L1ItemStreamer_L1_BPTX0_BGRP0, &b_L2_L1ItemStreamer_L1_BPTX0_BGRP0);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BPTX0_BPTX1_BGRP0", &L2_L1ItemStreamer_L1_BPTX0_BPTX1_BGRP0, &b_L2_L1ItemStreamer_L1_BPTX0_BPTX1_BGRP0);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_BPTX1_BGRP0", &L2_L1ItemStreamer_L1_BPTX1_BGRP0, &b_L2_L1ItemStreamer_L1_BPTX1_BGRP0);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM10", &L2_L1ItemStreamer_L1_EM10, &b_L2_L1ItemStreamer_L1_EM10);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM10I", &L2_L1ItemStreamer_L1_EM10I, &b_L2_L1ItemStreamer_L1_EM10I);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM14", &L2_L1ItemStreamer_L1_EM14, &b_L2_L1ItemStreamer_L1_EM14);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM2", &L2_L1ItemStreamer_L1_EM2, &b_L2_L1ItemStreamer_L1_EM2);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM3", &L2_L1ItemStreamer_L1_EM3, &b_L2_L1ItemStreamer_L1_EM3);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM3_EMPTY", &L2_L1ItemStreamer_L1_EM3_EMPTY, &b_L2_L1ItemStreamer_L1_EM3_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM3_UNPAIRED", &L2_L1ItemStreamer_L1_EM3_UNPAIRED, &b_L2_L1ItemStreamer_L1_EM3_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM4", &L2_L1ItemStreamer_L1_EM4, &b_L2_L1ItemStreamer_L1_EM4);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM5", &L2_L1ItemStreamer_L1_EM5, &b_L2_L1ItemStreamer_L1_EM5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_EM5I", &L2_L1ItemStreamer_L1_EM5I, &b_L2_L1ItemStreamer_L1_EM5I);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_FJ18", &L2_L1ItemStreamer_L1_FJ18, &b_L2_L1ItemStreamer_L1_FJ18);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_FJ3", &L2_L1ItemStreamer_L1_FJ3, &b_L2_L1ItemStreamer_L1_FJ3);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_FJ3_EMPTY", &L2_L1ItemStreamer_L1_FJ3_EMPTY, &b_L2_L1ItemStreamer_L1_FJ3_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_FJ3_UNPAIRED", &L2_L1ItemStreamer_L1_FJ3_UNPAIRED, &b_L2_L1ItemStreamer_L1_FJ3_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J10", &L2_L1ItemStreamer_L1_J10, &b_L2_L1ItemStreamer_L1_J10);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J10_EMPTY", &L2_L1ItemStreamer_L1_J10_EMPTY, &b_L2_L1ItemStreamer_L1_J10_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J10_win6", &L2_L1ItemStreamer_L1_J10_win6, &b_L2_L1ItemStreamer_L1_J10_win6);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J15", &L2_L1ItemStreamer_L1_J15, &b_L2_L1ItemStreamer_L1_J15);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J15_LV", &L2_L1ItemStreamer_L1_J15_LV, &b_L2_L1ItemStreamer_L1_J15_LV);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J15_MV", &L2_L1ItemStreamer_L1_J15_MV, &b_L2_L1ItemStreamer_L1_J15_MV);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J15_NL", &L2_L1ItemStreamer_L1_J15_NL, &b_L2_L1ItemStreamer_L1_J15_NL);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J30", &L2_L1ItemStreamer_L1_J30, &b_L2_L1ItemStreamer_L1_J30);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J30_EMPTY", &L2_L1ItemStreamer_L1_J30_EMPTY, &b_L2_L1ItemStreamer_L1_J30_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J5", &L2_L1ItemStreamer_L1_J5, &b_L2_L1ItemStreamer_L1_J5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J55", &L2_L1ItemStreamer_L1_J55, &b_L2_L1ItemStreamer_L1_J55);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J5_EMPTY", &L2_L1ItemStreamer_L1_J5_EMPTY, &b_L2_L1ItemStreamer_L1_J5_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J5_UNPAIRED", &L2_L1ItemStreamer_L1_J5_UNPAIRED, &b_L2_L1ItemStreamer_L1_J5_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_J75", &L2_L1ItemStreamer_L1_J75, &b_L2_L1ItemStreamer_L1_J75);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_JE120", &L2_L1ItemStreamer_L1_JE120, &b_L2_L1ItemStreamer_L1_JE120);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_JE280", &L2_L1ItemStreamer_L1_JE280, &b_L2_L1ItemStreamer_L1_JE280);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_L1A_Mon", &L2_L1ItemStreamer_L1_L1A_Mon, &b_L2_L1ItemStreamer_L1_L1A_Mon);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_LUCID", &L2_L1ItemStreamer_L1_LUCID, &b_L2_L1ItemStreamer_L1_LUCID);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_LUCID_A", &L2_L1ItemStreamer_L1_LUCID_A, &b_L2_L1ItemStreamer_L1_LUCID_A);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_LUCID_A_C", &L2_L1ItemStreamer_L1_LUCID_A_C, &b_L2_L1ItemStreamer_L1_LUCID_A_C);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_LUCID_A_C_EMPTY", &L2_L1ItemStreamer_L1_LUCID_A_C_EMPTY, &b_L2_L1ItemStreamer_L1_LUCID_A_C_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_LUCID_A_C_UNPAIRED", &L2_L1ItemStreamer_L1_LUCID_A_C_UNPAIRED, &b_L2_L1ItemStreamer_L1_LUCID_A_C_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_LUCID_A_EMPTY", &L2_L1ItemStreamer_L1_LUCID_A_EMPTY, &b_L2_L1ItemStreamer_L1_LUCID_A_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_LUCID_A_UNPAIRED", &L2_L1ItemStreamer_L1_LUCID_A_UNPAIRED, &b_L2_L1ItemStreamer_L1_LUCID_A_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_LUCID_C", &L2_L1ItemStreamer_L1_LUCID_C, &b_L2_L1ItemStreamer_L1_LUCID_C);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_LUCID_COMM", &L2_L1ItemStreamer_L1_LUCID_COMM, &b_L2_L1ItemStreamer_L1_LUCID_COMM);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_LUCID_COMM_EMPTY", &L2_L1ItemStreamer_L1_LUCID_COMM_EMPTY, &b_L2_L1ItemStreamer_L1_LUCID_COMM_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_LUCID_C_EMPTY", &L2_L1ItemStreamer_L1_LUCID_C_EMPTY, &b_L2_L1ItemStreamer_L1_LUCID_C_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_LUCID_C_UNPAIRED", &L2_L1ItemStreamer_L1_LUCID_C_UNPAIRED, &b_L2_L1ItemStreamer_L1_LUCID_C_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_LUCID_EMPTY", &L2_L1ItemStreamer_L1_LUCID_EMPTY, &b_L2_L1ItemStreamer_L1_LUCID_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA0", &L2_L1ItemStreamer_L1_MBTSA0, &b_L2_L1ItemStreamer_L1_MBTSA0);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA1", &L2_L1ItemStreamer_L1_MBTSA1, &b_L2_L1ItemStreamer_L1_MBTSA1);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA10", &L2_L1ItemStreamer_L1_MBTSA10, &b_L2_L1ItemStreamer_L1_MBTSA10);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA11", &L2_L1ItemStreamer_L1_MBTSA11, &b_L2_L1ItemStreamer_L1_MBTSA11);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA12", &L2_L1ItemStreamer_L1_MBTSA12, &b_L2_L1ItemStreamer_L1_MBTSA12);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA13", &L2_L1ItemStreamer_L1_MBTSA13, &b_L2_L1ItemStreamer_L1_MBTSA13);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA14", &L2_L1ItemStreamer_L1_MBTSA14, &b_L2_L1ItemStreamer_L1_MBTSA14);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA15", &L2_L1ItemStreamer_L1_MBTSA15, &b_L2_L1ItemStreamer_L1_MBTSA15);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA2", &L2_L1ItemStreamer_L1_MBTSA2, &b_L2_L1ItemStreamer_L1_MBTSA2);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA3", &L2_L1ItemStreamer_L1_MBTSA3, &b_L2_L1ItemStreamer_L1_MBTSA3);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA4", &L2_L1ItemStreamer_L1_MBTSA4, &b_L2_L1ItemStreamer_L1_MBTSA4);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA5", &L2_L1ItemStreamer_L1_MBTSA5, &b_L2_L1ItemStreamer_L1_MBTSA5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA6", &L2_L1ItemStreamer_L1_MBTSA6, &b_L2_L1ItemStreamer_L1_MBTSA6);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA7", &L2_L1ItemStreamer_L1_MBTSA7, &b_L2_L1ItemStreamer_L1_MBTSA7);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA8", &L2_L1ItemStreamer_L1_MBTSA8, &b_L2_L1ItemStreamer_L1_MBTSA8);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSA9", &L2_L1ItemStreamer_L1_MBTSA9, &b_L2_L1ItemStreamer_L1_MBTSA9);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC0", &L2_L1ItemStreamer_L1_MBTSC0, &b_L2_L1ItemStreamer_L1_MBTSC0);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC1", &L2_L1ItemStreamer_L1_MBTSC1, &b_L2_L1ItemStreamer_L1_MBTSC1);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC10", &L2_L1ItemStreamer_L1_MBTSC10, &b_L2_L1ItemStreamer_L1_MBTSC10);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC11", &L2_L1ItemStreamer_L1_MBTSC11, &b_L2_L1ItemStreamer_L1_MBTSC11);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC12", &L2_L1ItemStreamer_L1_MBTSC12, &b_L2_L1ItemStreamer_L1_MBTSC12);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC13", &L2_L1ItemStreamer_L1_MBTSC13, &b_L2_L1ItemStreamer_L1_MBTSC13);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC14", &L2_L1ItemStreamer_L1_MBTSC14, &b_L2_L1ItemStreamer_L1_MBTSC14);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC15", &L2_L1ItemStreamer_L1_MBTSC15, &b_L2_L1ItemStreamer_L1_MBTSC15);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC2", &L2_L1ItemStreamer_L1_MBTSC2, &b_L2_L1ItemStreamer_L1_MBTSC2);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC3", &L2_L1ItemStreamer_L1_MBTSC3, &b_L2_L1ItemStreamer_L1_MBTSC3);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC4", &L2_L1ItemStreamer_L1_MBTSC4, &b_L2_L1ItemStreamer_L1_MBTSC4);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC5", &L2_L1ItemStreamer_L1_MBTSC5, &b_L2_L1ItemStreamer_L1_MBTSC5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC6", &L2_L1ItemStreamer_L1_MBTSC6, &b_L2_L1ItemStreamer_L1_MBTSC6);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC7", &L2_L1ItemStreamer_L1_MBTSC7, &b_L2_L1ItemStreamer_L1_MBTSC7);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC8", &L2_L1ItemStreamer_L1_MBTSC8, &b_L2_L1ItemStreamer_L1_MBTSC8);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTSC9", &L2_L1ItemStreamer_L1_MBTSC9, &b_L2_L1ItemStreamer_L1_MBTSC9);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_1", &L2_L1ItemStreamer_L1_MBTS_1, &b_L2_L1ItemStreamer_L1_MBTS_1);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_1_1", &L2_L1ItemStreamer_L1_MBTS_1_1, &b_L2_L1ItemStreamer_L1_MBTS_1_1);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_1_1_Col", &L2_L1ItemStreamer_L1_MBTS_1_1_Col, &b_L2_L1ItemStreamer_L1_MBTS_1_1_Col);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_1_1_EMPTY", &L2_L1ItemStreamer_L1_MBTS_1_1_EMPTY, &b_L2_L1ItemStreamer_L1_MBTS_1_1_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED", &L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED, &b_L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED1", &L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED1, &b_L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED1);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED2", &L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED2, &b_L2_L1ItemStreamer_L1_MBTS_1_1_UNPAIRED2);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_1_Col", &L2_L1ItemStreamer_L1_MBTS_1_Col, &b_L2_L1ItemStreamer_L1_MBTS_1_Col);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_1_EMPTY", &L2_L1ItemStreamer_L1_MBTS_1_EMPTY, &b_L2_L1ItemStreamer_L1_MBTS_1_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED", &L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED, &b_L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED1", &L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED1, &b_L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED1);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED2", &L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED2, &b_L2_L1ItemStreamer_L1_MBTS_1_UNPAIRED2);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_2", &L2_L1ItemStreamer_L1_MBTS_2, &b_L2_L1ItemStreamer_L1_MBTS_2);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_2_Col", &L2_L1ItemStreamer_L1_MBTS_2_Col, &b_L2_L1ItemStreamer_L1_MBTS_2_Col);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_2_EMPTY", &L2_L1ItemStreamer_L1_MBTS_2_EMPTY, &b_L2_L1ItemStreamer_L1_MBTS_2_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED", &L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED, &b_L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED1", &L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED1, &b_L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED1);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED2", &L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED2, &b_L2_L1ItemStreamer_L1_MBTS_2_UNPAIRED2);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_4_4", &L2_L1ItemStreamer_L1_MBTS_4_4, &b_L2_L1ItemStreamer_L1_MBTS_4_4);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED", &L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED, &b_L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED1", &L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED1, &b_L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED1);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED2", &L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED2, &b_L2_L1ItemStreamer_L1_MBTS_4_4_UNPAIRED2);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0", &L2_L1ItemStreamer_L1_MU0, &b_L2_L1ItemStreamer_L1_MU0);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_COMM", &L2_L1ItemStreamer_L1_MU0_COMM, &b_L2_L1ItemStreamer_L1_MU0_COMM);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_COMM_EMPTY", &L2_L1ItemStreamer_L1_MU0_COMM_EMPTY, &b_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED", &L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED, &b_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_EM3", &L2_L1ItemStreamer_L1_MU0_EM3, &b_L2_L1ItemStreamer_L1_MU0_EM3);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_EMPTY", &L2_L1ItemStreamer_L1_MU0_EMPTY, &b_L2_L1ItemStreamer_L1_MU0_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_J5", &L2_L1ItemStreamer_L1_MU0_J5, &b_L2_L1ItemStreamer_L1_MU0_J5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU0_UNPAIRED", &L2_L1ItemStreamer_L1_MU0_UNPAIRED, &b_L2_L1ItemStreamer_L1_MU0_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU10", &L2_L1ItemStreamer_L1_MU10, &b_L2_L1ItemStreamer_L1_MU10);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU10_EMPTY", &L2_L1ItemStreamer_L1_MU10_EMPTY, &b_L2_L1ItemStreamer_L1_MU10_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU15", &L2_L1ItemStreamer_L1_MU15, &b_L2_L1ItemStreamer_L1_MU15);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU20", &L2_L1ItemStreamer_L1_MU20, &b_L2_L1ItemStreamer_L1_MU20);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU6", &L2_L1ItemStreamer_L1_MU6, &b_L2_L1ItemStreamer_L1_MU6);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU6_EM3", &L2_L1ItemStreamer_L1_MU6_EM3, &b_L2_L1ItemStreamer_L1_MU6_EM3);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU6_EMPTY", &L2_L1ItemStreamer_L1_MU6_EMPTY, &b_L2_L1ItemStreamer_L1_MU6_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU6_J5", &L2_L1ItemStreamer_L1_MU6_J5, &b_L2_L1ItemStreamer_L1_MU6_J5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_MU6_UNPAIRED", &L2_L1ItemStreamer_L1_MU6_UNPAIRED, &b_L2_L1ItemStreamer_L1_MU6_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_NIM_S9C0A20", &L2_L1ItemStreamer_L1_NIM_S9C0A20, &b_L2_L1ItemStreamer_L1_NIM_S9C0A20);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_NIM_S9C1C19", &L2_L1ItemStreamer_L1_NIM_S9C1C19, &b_L2_L1ItemStreamer_L1_NIM_S9C1C19);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_NIM_S9C1C20", &L2_L1ItemStreamer_L1_NIM_S9C1C20, &b_L2_L1ItemStreamer_L1_NIM_S9C1C20);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_RD0_EMPTY", &L2_L1ItemStreamer_L1_RD0_EMPTY, &b_L2_L1ItemStreamer_L1_RD0_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_RD0_FILLED", &L2_L1ItemStreamer_L1_RD0_FILLED, &b_L2_L1ItemStreamer_L1_RD0_FILLED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_RD0_FIRSTEMPTY", &L2_L1ItemStreamer_L1_RD0_FIRSTEMPTY, &b_L2_L1ItemStreamer_L1_RD0_FIRSTEMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_RD0_UNPAIRED", &L2_L1ItemStreamer_L1_RD0_UNPAIRED, &b_L2_L1ItemStreamer_L1_RD0_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_RD1_FILLED", &L2_L1ItemStreamer_L1_RD1_FILLED, &b_L2_L1ItemStreamer_L1_RD1_FILLED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TAU11", &L2_L1ItemStreamer_L1_TAU11, &b_L2_L1ItemStreamer_L1_TAU11);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TAU11I", &L2_L1ItemStreamer_L1_TAU11I, &b_L2_L1ItemStreamer_L1_TAU11I);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TAU20", &L2_L1ItemStreamer_L1_TAU20, &b_L2_L1ItemStreamer_L1_TAU20);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TAU30", &L2_L1ItemStreamer_L1_TAU30, &b_L2_L1ItemStreamer_L1_TAU30);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TAU5", &L2_L1ItemStreamer_L1_TAU5, &b_L2_L1ItemStreamer_L1_TAU5);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TAU5_EMPTY", &L2_L1ItemStreamer_L1_TAU5_EMPTY, &b_L2_L1ItemStreamer_L1_TAU5_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TAU5_UNPAIRED", &L2_L1ItemStreamer_L1_TAU5_UNPAIRED, &b_L2_L1ItemStreamer_L1_TAU5_UNPAIRED);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TAU6", &L2_L1ItemStreamer_L1_TAU6, &b_L2_L1ItemStreamer_L1_TAU6);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TAU6I", &L2_L1ItemStreamer_L1_TAU6I, &b_L2_L1ItemStreamer_L1_TAU6I);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TAU6_XE10", &L2_L1ItemStreamer_L1_TAU6_XE10, &b_L2_L1ItemStreamer_L1_TAU6_XE10);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TAU8", &L2_L1ItemStreamer_L1_TAU8, &b_L2_L1ItemStreamer_L1_TAU8);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TE10", &L2_L1ItemStreamer_L1_TE10, &b_L2_L1ItemStreamer_L1_TE10);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TE100", &L2_L1ItemStreamer_L1_TE100, &b_L2_L1ItemStreamer_L1_TE100);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_TRT", &L2_L1ItemStreamer_L1_TRT, &b_L2_L1ItemStreamer_L1_TRT);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_XE10", &L2_L1ItemStreamer_L1_XE10, &b_L2_L1ItemStreamer_L1_XE10);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_XE15", &L2_L1ItemStreamer_L1_XE15, &b_L2_L1ItemStreamer_L1_XE15);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_XE20", &L2_L1ItemStreamer_L1_XE20, &b_L2_L1ItemStreamer_L1_XE20);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_XE30", &L2_L1ItemStreamer_L1_XE30, &b_L2_L1ItemStreamer_L1_XE30);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_ZDC", &L2_L1ItemStreamer_L1_ZDC, &b_L2_L1ItemStreamer_L1_ZDC);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_ZDC_A", &L2_L1ItemStreamer_L1_ZDC_A, &b_L2_L1ItemStreamer_L1_ZDC_A);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_ZDC_AND", &L2_L1ItemStreamer_L1_ZDC_AND, &b_L2_L1ItemStreamer_L1_ZDC_AND);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_ZDC_AND_EMPTY", &L2_L1ItemStreamer_L1_ZDC_AND_EMPTY, &b_L2_L1ItemStreamer_L1_ZDC_AND_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_ZDC_A_C", &L2_L1ItemStreamer_L1_ZDC_A_C, &b_L2_L1ItemStreamer_L1_ZDC_A_C);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_ZDC_A_C_EMPTY", &L2_L1ItemStreamer_L1_ZDC_A_C_EMPTY, &b_L2_L1ItemStreamer_L1_ZDC_A_C_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_ZDC_A_EMPTY", &L2_L1ItemStreamer_L1_ZDC_A_EMPTY, &b_L2_L1ItemStreamer_L1_ZDC_A_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_ZDC_C", &L2_L1ItemStreamer_L1_ZDC_C, &b_L2_L1ItemStreamer_L1_ZDC_C);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_ZDC_C_EMPTY", &L2_L1ItemStreamer_L1_ZDC_C_EMPTY, &b_L2_L1ItemStreamer_L1_ZDC_C_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_ZDC_EMPTY", &L2_L1ItemStreamer_L1_ZDC_EMPTY, &b_L2_L1ItemStreamer_L1_ZDC_EMPTY);
   fChain->SetBranchAddress("L2_L1ItemStreamer_L1_ZDC_UNPAIRED", &L2_L1ItemStreamer_L1_ZDC_UNPAIRED, &b_L2_L1ItemStreamer_L1_ZDC_UNPAIRED);
   fChain->SetBranchAddress("L2_L2IdScan_FS_MB2", &L2_L2IdScan_FS_MB2, &b_L2_L2IdScan_FS_MB2);
   fChain->SetBranchAddress("L2_L2SiTrack_FS_MB2", &L2_L2SiTrack_FS_MB2, &b_L2_L2SiTrack_FS_MB2);
   fChain->SetBranchAddress("L2_MU4_DiMu", &L2_MU4_DiMu, &b_L2_MU4_DiMu);
   fChain->SetBranchAddress("L2_MU4_DiMu_FS", &L2_MU4_DiMu_FS, &b_L2_MU4_DiMu_FS);
   fChain->SetBranchAddress("L2_MU4_DiMu_FS_noOS", &L2_MU4_DiMu_FS_noOS, &b_L2_MU4_DiMu_FS_noOS);
   fChain->SetBranchAddress("L2_MU4_DiMu_FS_noOS_passL2", &L2_MU4_DiMu_FS_noOS_passL2, &b_L2_MU4_DiMu_FS_noOS_passL2);
   fChain->SetBranchAddress("L2_MU4_DiMu_MG_FS", &L2_MU4_DiMu_MG_FS, &b_L2_MU4_DiMu_MG_FS);
   fChain->SetBranchAddress("L2_MU4_DiMu_SiTrk_FS", &L2_MU4_DiMu_SiTrk_FS, &b_L2_MU4_DiMu_SiTrk_FS);
   fChain->SetBranchAddress("L2_MU4_DiMu_noOS", &L2_MU4_DiMu_noOS, &b_L2_MU4_DiMu_noOS);
   fChain->SetBranchAddress("L2_MU4_DiMu_noOS_passL2", &L2_MU4_DiMu_noOS_passL2, &b_L2_MU4_DiMu_noOS_passL2);
   fChain->SetBranchAddress("L2_MU4_Trk_Jpsi", &L2_MU4_Trk_Jpsi, &b_L2_MU4_Trk_Jpsi);
   fChain->SetBranchAddress("L2_MU4_Trk_Jpsi_FS", &L2_MU4_Trk_Jpsi_FS, &b_L2_MU4_Trk_Jpsi_FS);
   fChain->SetBranchAddress("L2_MU4_Trk_Jpsi_loose", &L2_MU4_Trk_Jpsi_loose, &b_L2_MU4_Trk_Jpsi_loose);
   fChain->SetBranchAddress("L2_MU4_Trk_Jpsi_loose_FS", &L2_MU4_Trk_Jpsi_loose_FS, &b_L2_MU4_Trk_Jpsi_loose_FS);
   fChain->SetBranchAddress("L2_MU4_Trk_Jpsi_loose_FS_passL2", &L2_MU4_Trk_Jpsi_loose_FS_passL2, &b_L2_MU4_Trk_Jpsi_loose_FS_passL2);
   fChain->SetBranchAddress("L2_MU4_Trk_Jpsi_loose_passL2", &L2_MU4_Trk_Jpsi_loose_passL2, &b_L2_MU4_Trk_Jpsi_loose_passL2);
   fChain->SetBranchAddress("L2_MU4_Trk_Upsi_loose_FS", &L2_MU4_Trk_Upsi_loose_FS, &b_L2_MU4_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("L2_MU4_Trk_Upsi_loose_FS_passL2", &L2_MU4_Trk_Upsi_loose_FS_passL2, &b_L2_MU4_Trk_Upsi_loose_FS_passL2);
   fChain->SetBranchAddress("L2_MU6_DiMu", &L2_MU6_DiMu, &b_L2_MU6_DiMu);
   fChain->SetBranchAddress("L2_MU6_DiMu_FS", &L2_MU6_DiMu_FS, &b_L2_MU6_DiMu_FS);
   fChain->SetBranchAddress("L2_MU6_Jpsie5e3", &L2_MU6_Jpsie5e3, &b_L2_MU6_Jpsie5e3);
   fChain->SetBranchAddress("L2_MU6_Jpsie5e3_FS", &L2_MU6_Jpsie5e3_FS, &b_L2_MU6_Jpsie5e3_FS);
   fChain->SetBranchAddress("L2_MU6_Jpsie5e3_SiTrk_FS", &L2_MU6_Jpsie5e3_SiTrk_FS, &b_L2_MU6_Jpsie5e3_SiTrk_FS);
   fChain->SetBranchAddress("L2_MU6_Trk_Jpsi_loose", &L2_MU6_Trk_Jpsi_loose, &b_L2_MU6_Trk_Jpsi_loose);
   fChain->SetBranchAddress("L2_MU6_Trk_Jpsi_loose_FS", &L2_MU6_Trk_Jpsi_loose_FS, &b_L2_MU6_Trk_Jpsi_loose_FS);
   fChain->SetBranchAddress("L2_MU6_Trk_Upsi_loose_FS", &L2_MU6_Trk_Upsi_loose_FS, &b_L2_MU6_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("L2_PixelNoise", &L2_PixelNoise, &b_L2_PixelNoise);
   fChain->SetBranchAddress("L2_SCTNoise", &L2_SCTNoise, &b_L2_SCTNoise);
   fChain->SetBranchAddress("L2_SeededStreamerBCM_LUCID_ZDC", &L2_SeededStreamerBCM_LUCID_ZDC, &b_L2_SeededStreamerBCM_LUCID_ZDC);
   fChain->SetBranchAddress("L2_SeededStreamerCosmicCalo", &L2_SeededStreamerCosmicCalo, &b_L2_SeededStreamerCosmicCalo);
   fChain->SetBranchAddress("L2_SeededStreamerCosmicCaloEM", &L2_SeededStreamerCosmicCaloEM, &b_L2_SeededStreamerCosmicCaloEM);
   fChain->SetBranchAddress("L2_SeededStreamerCosmicMuons", &L2_SeededStreamerCosmicMuons, &b_L2_SeededStreamerCosmicMuons);
   fChain->SetBranchAddress("L2_SeededStreamerL1Calo", &L2_SeededStreamerL1Calo, &b_L2_SeededStreamerL1Calo);
   fChain->SetBranchAddress("L2_SeededStreamerL1CaloEM", &L2_SeededStreamerL1CaloEM, &b_L2_SeededStreamerL1CaloEM);
   fChain->SetBranchAddress("L2_SeededStreamerL1CaloJet", &L2_SeededStreamerL1CaloJet, &b_L2_SeededStreamerL1CaloJet);
   fChain->SetBranchAddress("L2_SeededStreamerL1CaloTau", &L2_SeededStreamerL1CaloTau, &b_L2_SeededStreamerL1CaloTau);
   fChain->SetBranchAddress("L2_SeededStreamerMBTS", &L2_SeededStreamerMBTS, &b_L2_SeededStreamerMBTS);
   fChain->SetBranchAddress("L2_SeededStreamerMinBias", &L2_SeededStreamerMinBias, &b_L2_SeededStreamerMinBias);
   fChain->SetBranchAddress("L2_SeededStreamerMuonswBeam", &L2_SeededStreamerMuonswBeam, &b_L2_SeededStreamerMuonswBeam);
   fChain->SetBranchAddress("L2_SeededStreamerRNDM", &L2_SeededStreamerRNDM, &b_L2_SeededStreamerRNDM);
   fChain->SetBranchAddress("L2_SeededStreamerWarmStart", &L2_SeededStreamerWarmStart, &b_L2_SeededStreamerWarmStart);
   fChain->SetBranchAddress("L2_SeededStreamerZeroBias", &L2_SeededStreamerZeroBias, &b_L2_SeededStreamerZeroBias);
   fChain->SetBranchAddress("L2_TileCalib_cis", &L2_TileCalib_cis, &b_L2_TileCalib_cis);
   fChain->SetBranchAddress("L2_TileCalib_laser", &L2_TileCalib_laser, &b_L2_TileCalib_laser);
   fChain->SetBranchAddress("L2_TileMon", &L2_TileMon, &b_L2_TileMon);
   fChain->SetBranchAddress("L2_allID_IDCalib", &L2_allID_IDCalib, &b_L2_allID_IDCalib);
   fChain->SetBranchAddress("L2_cost_monitor", &L2_cost_monitor, &b_L2_cost_monitor);
   fChain->SetBranchAddress("L2_e10_loose", &L2_e10_loose, &b_L2_e10_loose);
   fChain->SetBranchAddress("L2_e10_loose_passEF", &L2_e10_loose_passEF, &b_L2_e10_loose_passEF);
   fChain->SetBranchAddress("L2_e10_loose_passL2", &L2_e10_loose_passL2, &b_L2_e10_loose_passL2);
   fChain->SetBranchAddress("L2_e10_medium", &L2_e10_medium, &b_L2_e10_medium);
   fChain->SetBranchAddress("L2_e20_loose_NoIDTrkCut", &L2_e20_loose_NoIDTrkCut, &b_L2_e20_loose_NoIDTrkCut);
   fChain->SetBranchAddress("L2_e3_NoCut", &L2_e3_NoCut, &b_L2_e3_NoCut);
   fChain->SetBranchAddress("L2_e3_NoCut_IdScan", &L2_e3_NoCut_IdScan, &b_L2_e3_NoCut_IdScan);
   fChain->SetBranchAddress("L2_e3_NoCut_TRT", &L2_e3_NoCut_TRT, &b_L2_e3_NoCut_TRT);
   fChain->SetBranchAddress("L2_e5_NoCut", &L2_e5_NoCut, &b_L2_e5_NoCut);
   fChain->SetBranchAddress("L2_e5_NoCut_FwdBackTrk", &L2_e5_NoCut_FwdBackTrk, &b_L2_e5_NoCut_FwdBackTrk);
   fChain->SetBranchAddress("L2_e5_NoCut_IdScan", &L2_e5_NoCut_IdScan, &b_L2_e5_NoCut_IdScan);
   fChain->SetBranchAddress("L2_e5_NoCut_SiTrk", &L2_e5_NoCut_SiTrk, &b_L2_e5_NoCut_SiTrk);
   fChain->SetBranchAddress("L2_e5_NoCut_TRT", &L2_e5_NoCut_TRT, &b_L2_e5_NoCut_TRT);
   fChain->SetBranchAddress("L2_e5_NoCut_cells", &L2_e5_NoCut_cells, &b_L2_e5_NoCut_cells);
   fChain->SetBranchAddress("L2_e5_loose", &L2_e5_loose, &b_L2_e5_loose);
   fChain->SetBranchAddress("L2_e5_loose_IdScan", &L2_e5_loose_IdScan, &b_L2_e5_loose_IdScan);
   fChain->SetBranchAddress("L2_e5_loose_NoIDTrkCut", &L2_e5_loose_NoIDTrkCut, &b_L2_e5_loose_NoIDTrkCut);
   fChain->SetBranchAddress("L2_e5_loose_TRT", &L2_e5_loose_TRT, &b_L2_e5_loose_TRT);
   fChain->SetBranchAddress("L2_e5_medium", &L2_e5_medium, &b_L2_e5_medium);
   fChain->SetBranchAddress("L2_e5_medium_IdScan", &L2_e5_medium_IdScan, &b_L2_e5_medium_IdScan);
   fChain->SetBranchAddress("L2_e5_medium_TRT", &L2_e5_medium_TRT, &b_L2_e5_medium_TRT);
   fChain->SetBranchAddress("L2_g10_loose", &L2_g10_loose, &b_L2_g10_loose);
   fChain->SetBranchAddress("L2_g3_nocut", &L2_g3_nocut, &b_L2_g3_nocut);
   fChain->SetBranchAddress("L2_g5_loose", &L2_g5_loose, &b_L2_g5_loose);
   fChain->SetBranchAddress("L2_g5_nocut", &L2_g5_nocut, &b_L2_g5_nocut);
   fChain->SetBranchAddress("L2_j130", &L2_j130, &b_L2_j130);
   fChain->SetBranchAddress("L2_j15", &L2_j15, &b_L2_j15);
   fChain->SetBranchAddress("L2_j15_noise", &L2_j15_noise, &b_L2_j15_noise);
   fChain->SetBranchAddress("L2_j20_Trackless_HV", &L2_j20_Trackless_HV, &b_L2_j20_Trackless_HV);
   fChain->SetBranchAddress("L2_j30", &L2_j30, &b_L2_j30);
   fChain->SetBranchAddress("L2_j30_L1TAU_HV", &L2_j30_L1TAU_HV, &b_L2_j30_L1TAU_HV);
   fChain->SetBranchAddress("L2_j60", &L2_j60, &b_L2_j60);
   fChain->SetBranchAddress("L2_j7", &L2_j7, &b_L2_j7);
   fChain->SetBranchAddress("L2_j7_noise", &L2_j7_noise, &b_L2_j7_noise);
   fChain->SetBranchAddress("L2_j90", &L2_j90, &b_L2_j90);
   fChain->SetBranchAddress("L2_mbBcm", &L2_mbBcm, &b_L2_mbBcm);
   fChain->SetBranchAddress("L2_mbLucid", &L2_mbLucid, &b_L2_mbLucid);
   fChain->SetBranchAddress("L2_mbMbts_1", &L2_mbMbts_1, &b_L2_mbMbts_1);
   fChain->SetBranchAddress("L2_mbMbts_1_1", &L2_mbMbts_1_1, &b_L2_mbMbts_1_1);
   fChain->SetBranchAddress("L2_mbMbts_1_1_NoCut_Time", &L2_mbMbts_1_1_NoCut_Time, &b_L2_mbMbts_1_1_NoCut_Time);
   fChain->SetBranchAddress("L2_mbMbts_1_NoCut_Time", &L2_mbMbts_1_NoCut_Time, &b_L2_mbMbts_1_NoCut_Time);
   fChain->SetBranchAddress("L2_mbMbts_1_NoCut_Time_unpaired", &L2_mbMbts_1_NoCut_Time_unpaired, &b_L2_mbMbts_1_NoCut_Time_unpaired);
   fChain->SetBranchAddress("L2_mbMbts_2", &L2_mbMbts_2, &b_L2_mbMbts_2);
   fChain->SetBranchAddress("L2_mbMbts_2_NoCut_Time", &L2_mbMbts_2_NoCut_Time, &b_L2_mbMbts_2_NoCut_Time);
   fChain->SetBranchAddress("L2_mbRmMbts_1", &L2_mbRmMbts_1, &b_L2_mbRmMbts_1);
   fChain->SetBranchAddress("L2_mbRmMbts_1_1", &L2_mbRmMbts_1_1, &b_L2_mbRmMbts_1_1);
   fChain->SetBranchAddress("L2_mbRmMbts_1_1_NoCut_Time", &L2_mbRmMbts_1_1_NoCut_Time, &b_L2_mbRmMbts_1_1_NoCut_Time);
   fChain->SetBranchAddress("L2_mbRmMbts_1_NoCut_Time", &L2_mbRmMbts_1_NoCut_Time, &b_L2_mbRmMbts_1_NoCut_Time);
   fChain->SetBranchAddress("L2_mbRmMbts_1_NoCut_Time_unpaired", &L2_mbRmMbts_1_NoCut_Time_unpaired, &b_L2_mbRmMbts_1_NoCut_Time_unpaired);
   fChain->SetBranchAddress("L2_mbRmMbts_1_unpaired", &L2_mbRmMbts_1_unpaired, &b_L2_mbRmMbts_1_unpaired);
   fChain->SetBranchAddress("L2_mbRmMbts_2", &L2_mbRmMbts_2, &b_L2_mbRmMbts_2);
   fChain->SetBranchAddress("L2_mbRmMbts_2_NoCut_Time", &L2_mbRmMbts_2_NoCut_Time, &b_L2_mbRmMbts_2_NoCut_Time);
   fChain->SetBranchAddress("L2_mbRndm", &L2_mbRndm, &b_L2_mbRndm);
   fChain->SetBranchAddress("L2_mbSpTrk", &L2_mbSpTrk, &b_L2_mbSpTrk);
   fChain->SetBranchAddress("L2_mbSpTrk_cosmic", &L2_mbSpTrk_cosmic, &b_L2_mbSpTrk_cosmic);
   fChain->SetBranchAddress("L2_mbSpTrk_unpaired", &L2_mbSpTrk_unpaired, &b_L2_mbSpTrk_unpaired);
   fChain->SetBranchAddress("L2_mbSp_fwd", &L2_mbSp_fwd, &b_L2_mbSp_fwd);
   fChain->SetBranchAddress("L2_mbSp_oneD", &L2_mbSp_oneD, &b_L2_mbSp_oneD);
   fChain->SetBranchAddress("L2_mbTrtTrk", &L2_mbTrtTrk, &b_L2_mbTrtTrk);
   fChain->SetBranchAddress("L2_mbTrtTrk_unpaired", &L2_mbTrtTrk_unpaired, &b_L2_mbTrtTrk_unpaired);
   fChain->SetBranchAddress("L2_mbZdc", &L2_mbZdc, &b_L2_mbZdc);
   fChain->SetBranchAddress("L2_mb_BM_calib", &L2_mb_BM_calib, &b_L2_mb_BM_calib);
   fChain->SetBranchAddress("L2_mb_LD_calib", &L2_mb_LD_calib, &b_L2_mb_LD_calib);
   fChain->SetBranchAddress("L2_mb_M1_calib", &L2_mb_M1_calib, &b_L2_mb_M1_calib);
   fChain->SetBranchAddress("L2_mb_M1_calib_unpaired", &L2_mb_M1_calib_unpaired, &b_L2_mb_M1_calib_unpaired);
   fChain->SetBranchAddress("L2_mb_M2_calib", &L2_mb_M2_calib, &b_L2_mb_M2_calib);
   fChain->SetBranchAddress("L2_mb_M2_calib_unpaired", &L2_mb_M2_calib_unpaired, &b_L2_mb_M2_calib_unpaired);
   fChain->SetBranchAddress("L2_mb_MU", &L2_mb_MU, &b_L2_mb_MU);
   fChain->SetBranchAddress("L2_mb_RM_calib", &L2_mb_RM_calib, &b_L2_mb_RM_calib);
   fChain->SetBranchAddress("L2_mb_RM_calib_cosmic", &L2_mb_RM_calib_cosmic, &b_L2_mb_RM_calib_cosmic);
   fChain->SetBranchAddress("L2_mb_RM_calib_unpaired", &L2_mb_RM_calib_unpaired, &b_L2_mb_RM_calib_unpaired);
   fChain->SetBranchAddress("L2_mb_ZC_calib", &L2_mb_ZC_calib, &b_L2_mb_ZC_calib);
   fChain->SetBranchAddress("L2_mu10", &L2_mu10, &b_L2_mu10);
   fChain->SetBranchAddress("L2_mu10_MG", &L2_mu10_MG, &b_L2_mu10_MG);
   fChain->SetBranchAddress("L2_mu10_MSonly", &L2_mu10_MSonly, &b_L2_mu10_MSonly);
   fChain->SetBranchAddress("L2_mu10_NoIDTrkCut", &L2_mu10_NoIDTrkCut, &b_L2_mu10_NoIDTrkCut);
   fChain->SetBranchAddress("L2_mu10_SiTrk", &L2_mu10_SiTrk, &b_L2_mu10_SiTrk);
   fChain->SetBranchAddress("L2_mu10_passHLT", &L2_mu10_passHLT, &b_L2_mu10_passHLT);
   fChain->SetBranchAddress("L2_mu10i_loose", &L2_mu10i_loose, &b_L2_mu10i_loose);
   fChain->SetBranchAddress("L2_mu13", &L2_mu13, &b_L2_mu13);
   fChain->SetBranchAddress("L2_mu15", &L2_mu15, &b_L2_mu15);
   fChain->SetBranchAddress("L2_mu20", &L2_mu20, &b_L2_mu20);
   fChain->SetBranchAddress("L2_mu20_MSonly", &L2_mu20_MSonly, &b_L2_mu20_MSonly);
   fChain->SetBranchAddress("L2_mu20_passHLT", &L2_mu20_passHLT, &b_L2_mu20_passHLT);
   fChain->SetBranchAddress("L2_mu4", &L2_mu4, &b_L2_mu4);
   fChain->SetBranchAddress("L2_mu4_DiMu", &L2_mu4_DiMu, &b_L2_mu4_DiMu);
   fChain->SetBranchAddress("L2_mu4_DiMu_FS", &L2_mu4_DiMu_FS, &b_L2_mu4_DiMu_FS);
   fChain->SetBranchAddress("L2_mu4_DiMu_FS_noOS", &L2_mu4_DiMu_FS_noOS, &b_L2_mu4_DiMu_FS_noOS);
   fChain->SetBranchAddress("L2_mu4_L2MSonly_EFFS_passL2", &L2_mu4_L2MSonly_EFFS_passL2, &b_L2_mu4_L2MSonly_EFFS_passL2);
   fChain->SetBranchAddress("L2_mu4_MB2_noL2_EFFS", &L2_mu4_MB2_noL2_EFFS, &b_L2_mu4_MB2_noL2_EFFS);
   fChain->SetBranchAddress("L2_mu4_MG", &L2_mu4_MG, &b_L2_mu4_MG);
   fChain->SetBranchAddress("L2_mu4_MSonly", &L2_mu4_MSonly, &b_L2_mu4_MSonly);
   fChain->SetBranchAddress("L2_mu4_MSonly_EFFS_passL2", &L2_mu4_MSonly_EFFS_passL2, &b_L2_mu4_MSonly_EFFS_passL2);
   fChain->SetBranchAddress("L2_mu4_MSonly_Trk_Jpsi_loose", &L2_mu4_MSonly_Trk_Jpsi_loose, &b_L2_mu4_MSonly_Trk_Jpsi_loose);
   fChain->SetBranchAddress("L2_mu4_MSonly_Trk_Upsi_loose_FS", &L2_mu4_MSonly_Trk_Upsi_loose_FS, &b_L2_mu4_MSonly_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("L2_mu4_NoIDTrkCut", &L2_mu4_NoIDTrkCut, &b_L2_mu4_NoIDTrkCut);
   fChain->SetBranchAddress("L2_mu4_SiTrk", &L2_mu4_SiTrk, &b_L2_mu4_SiTrk);
   fChain->SetBranchAddress("L2_mu4_Trk_Jpsi_loose", &L2_mu4_Trk_Jpsi_loose, &b_L2_mu4_Trk_Jpsi_loose);
   fChain->SetBranchAddress("L2_mu4_Trk_Upsi_loose_FS", &L2_mu4_Trk_Upsi_loose_FS, &b_L2_mu4_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("L2_mu4_mu6", &L2_mu4_mu6, &b_L2_mu4_mu6);
   fChain->SetBranchAddress("L2_mu4_passHLT", &L2_mu4_passHLT, &b_L2_mu4_passHLT);
   fChain->SetBranchAddress("L2_mu4_tile", &L2_mu4_tile, &b_L2_mu4_tile);
   fChain->SetBranchAddress("L2_mu4_tile_SiTrk", &L2_mu4_tile_SiTrk, &b_L2_mu4_tile_SiTrk);
   fChain->SetBranchAddress("L2_mu4_trod", &L2_mu4_trod, &b_L2_mu4_trod);
   fChain->SetBranchAddress("L2_mu4_trod_SiTrk", &L2_mu4_trod_SiTrk, &b_L2_mu4_trod_SiTrk);
   fChain->SetBranchAddress("L2_mu4mu6_DiMu", &L2_mu4mu6_DiMu, &b_L2_mu4mu6_DiMu);
   fChain->SetBranchAddress("L2_mu6", &L2_mu6, &b_L2_mu6);
   fChain->SetBranchAddress("L2_mu6_DiMu", &L2_mu6_DiMu, &b_L2_mu6_DiMu);
   fChain->SetBranchAddress("L2_mu6_DiMu_FS", &L2_mu6_DiMu_FS, &b_L2_mu6_DiMu_FS);
   fChain->SetBranchAddress("L2_mu6_DiMu_FS_noOS", &L2_mu6_DiMu_FS_noOS, &b_L2_mu6_DiMu_FS_noOS);
   fChain->SetBranchAddress("L2_mu6_Jpsie5e3", &L2_mu6_Jpsie5e3, &b_L2_mu6_Jpsie5e3);
   fChain->SetBranchAddress("L2_mu6_MG", &L2_mu6_MG, &b_L2_mu6_MG);
   fChain->SetBranchAddress("L2_mu6_MSonly", &L2_mu6_MSonly, &b_L2_mu6_MSonly);
   fChain->SetBranchAddress("L2_mu6_SiTrk", &L2_mu6_SiTrk, &b_L2_mu6_SiTrk);
   fChain->SetBranchAddress("L2_mu6_Trk_Jpsi_loose", &L2_mu6_Trk_Jpsi_loose, &b_L2_mu6_Trk_Jpsi_loose);
   fChain->SetBranchAddress("L2_mu6_Trk_Jpsi_loose_FS", &L2_mu6_Trk_Jpsi_loose_FS, &b_L2_mu6_Trk_Jpsi_loose_FS);
   fChain->SetBranchAddress("L2_mu6_Trk_Upsi_loose_FS", &L2_mu6_Trk_Upsi_loose_FS, &b_L2_mu6_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("L2_mu6_passHLT", &L2_mu6_passHLT, &b_L2_mu6_passHLT);
   fChain->SetBranchAddress("L2_te100", &L2_te100, &b_L2_te100);
   fChain->SetBranchAddress("L2_trk2_FullScan_IDSCAN_IDCalib", &L2_trk2_FullScan_IDSCAN_IDCalib, &b_L2_trk2_FullScan_IDSCAN_IDCalib);
   fChain->SetBranchAddress("L2_trk2_FullScan_SiTrk_IDCalib", &L2_trk2_FullScan_SiTrk_IDCalib, &b_L2_trk2_FullScan_SiTrk_IDCalib);
   fChain->SetBranchAddress("L2_trk2_IDSCAN_IDCalib", &L2_trk2_IDSCAN_IDCalib, &b_L2_trk2_IDSCAN_IDCalib);
   fChain->SetBranchAddress("L2_trk2_SiTrk_IDCalib", &L2_trk2_SiTrk_IDCalib, &b_L2_trk2_SiTrk_IDCalib);
   fChain->SetBranchAddress("L2_trk2_eGamma_IDSCAN_IDCalib", &L2_trk2_eGamma_IDSCAN_IDCalib, &b_L2_trk2_eGamma_IDSCAN_IDCalib);
   fChain->SetBranchAddress("L2_trk2_eGamma_SiTrk_IDCalib", &L2_trk2_eGamma_SiTrk_IDCalib, &b_L2_trk2_eGamma_SiTrk_IDCalib);
   fChain->SetBranchAddress("L2_trk6_IDSCAN_IDCalib", &L2_trk6_IDSCAN_IDCalib, &b_L2_trk6_IDSCAN_IDCalib);
   fChain->SetBranchAddress("L2_trk6_SiTrk_IDCalib", &L2_trk6_SiTrk_IDCalib, &b_L2_trk6_SiTrk_IDCalib);
   fChain->SetBranchAddress("L2_trk9_Central_Tau_IDCalib", &L2_trk9_Central_Tau_IDCalib, &b_L2_trk9_Central_Tau_IDCalib);
   fChain->SetBranchAddress("L2_trk9_Central_Tau_SiTrack_IDCalib", &L2_trk9_Central_Tau_SiTrack_IDCalib, &b_L2_trk9_Central_Tau_SiTrack_IDCalib);
   fChain->SetBranchAddress("L2_trk9_Fwd_Tau_IDCalib", &L2_trk9_Fwd_Tau_IDCalib, &b_L2_trk9_Fwd_Tau_IDCalib);
   fChain->SetBranchAddress("L2_trk9_Fwd_Tau_SiTrack_IDCalib", &L2_trk9_Fwd_Tau_SiTrack_IDCalib, &b_L2_trk9_Fwd_Tau_SiTrack_IDCalib);
   fChain->SetBranchAddress("L2_trk9_loose", &L2_trk9_loose, &b_L2_trk9_loose);
   fChain->SetBranchAddress("L2_vtxbeamspot_FSTracks", &L2_vtxbeamspot_FSTracks, &b_L2_vtxbeamspot_FSTracks);
   fChain->SetBranchAddress("L2_vtxbeamspot_FSTracks_SiTrk", &L2_vtxbeamspot_FSTracks_SiTrk, &b_L2_vtxbeamspot_FSTracks_SiTrk);
   fChain->SetBranchAddress("L2_vtxbeamspot_activeTE_SiTrk_peb", &L2_vtxbeamspot_activeTE_SiTrk_peb, &b_L2_vtxbeamspot_activeTE_SiTrk_peb);
   fChain->SetBranchAddress("L2_vtxbeamspot_activeTE_peb", &L2_vtxbeamspot_activeTE_peb, &b_L2_vtxbeamspot_activeTE_peb);
   fChain->SetBranchAddress("L2_vtxbeamspot_allTE_SiTrk_peb", &L2_vtxbeamspot_allTE_SiTrk_peb, &b_L2_vtxbeamspot_allTE_SiTrk_peb);
   fChain->SetBranchAddress("L2_vtxbeamspot_allTE_peb", &L2_vtxbeamspot_allTE_peb, &b_L2_vtxbeamspot_allTE_peb);
   fChain->SetBranchAddress("L2_xe15", &L2_xe15, &b_L2_xe15);
   fChain->SetBranchAddress("L2_xe15_FEB", &L2_xe15_FEB, &b_L2_xe15_FEB);
   fChain->SetBranchAddress("L2_xe15_allCells", &L2_xe15_allCells, &b_L2_xe15_allCells);
   fChain->SetBranchAddress("L2_xe30_allL1", &L2_xe30_allL1, &b_L2_xe30_allL1);
   fChain->SetBranchAddress("L2_xe30_allL1_FEB", &L2_xe30_allL1_FEB, &b_L2_xe30_allL1_FEB);
   fChain->SetBranchAddress("L2_xe30_allL1_allCells", &L2_xe30_allL1_allCells, &b_L2_xe30_allL1_allCells);
   fChain->SetBranchAddress("L2_xe30_unbiased", &L2_xe30_unbiased, &b_L2_xe30_unbiased);
   fChain->SetBranchAddress("L2_xe30_unbiased_FEB", &L2_xe30_unbiased_FEB, &b_L2_xe30_unbiased_FEB);
   fChain->SetBranchAddress("L2_xe30_unbiased_allCells", &L2_xe30_unbiased_allCells, &b_L2_xe30_unbiased_allCells);
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
   fChain->SetBranchAddress("cl_n", &cl_n, &b_cl_n);
   fChain->SetBranchAddress("cl_E", &cl_E, &b_cl_E);
   fChain->SetBranchAddress("cl_pt", &cl_pt, &b_cl_pt);
   fChain->SetBranchAddress("cl_m", &cl_m, &b_cl_m);
   fChain->SetBranchAddress("cl_eta", &cl_eta, &b_cl_eta);
   fChain->SetBranchAddress("cl_phi", &cl_phi, &b_cl_phi);
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
   fChain->SetBranchAddress("trig_L2_emcl_n", &trig_L2_emcl_n, &b_trig_L2_emcl_n);
   fChain->SetBranchAddress("trig_L2_emcl_quality", &trig_L2_emcl_quality, &b_trig_L2_emcl_quality);
   fChain->SetBranchAddress("trig_L2_emcl_E", &trig_L2_emcl_E, &b_trig_L2_emcl_E);
   fChain->SetBranchAddress("trig_L2_emcl_Et", &trig_L2_emcl_Et, &b_trig_L2_emcl_Et);
   fChain->SetBranchAddress("trig_L2_emcl_eta", &trig_L2_emcl_eta, &b_trig_L2_emcl_eta);
   fChain->SetBranchAddress("trig_L2_emcl_phi", &trig_L2_emcl_phi, &b_trig_L2_emcl_phi);
   fChain->SetBranchAddress("trig_L2_emcl_E237", &trig_L2_emcl_E237, &b_trig_L2_emcl_E237);
   fChain->SetBranchAddress("trig_L2_emcl_E277", &trig_L2_emcl_E277, &b_trig_L2_emcl_E277);
   fChain->SetBranchAddress("trig_L2_emcl_fracs1", &trig_L2_emcl_fracs1, &b_trig_L2_emcl_fracs1);
   fChain->SetBranchAddress("trig_L2_emcl_weta2", &trig_L2_emcl_weta2, &b_trig_L2_emcl_weta2);
   fChain->SetBranchAddress("trig_L2_emcl_Ehad1", &trig_L2_emcl_Ehad1, &b_trig_L2_emcl_Ehad1);
   fChain->SetBranchAddress("trig_L2_emcl_eta1", &trig_L2_emcl_eta1, &b_trig_L2_emcl_eta1);
   fChain->SetBranchAddress("trig_L2_emcl_emaxs1", &trig_L2_emcl_emaxs1, &b_trig_L2_emcl_emaxs1);
   fChain->SetBranchAddress("trig_L2_emcl_e2tsts1", &trig_L2_emcl_e2tsts1, &b_trig_L2_emcl_e2tsts1);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_n", &trig_L2_trk_idscan_eGamma_n, &b_trig_L2_trk_idscan_eGamma_n);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_algorithmId", &trig_L2_trk_idscan_eGamma_algorithmId, &b_trig_L2_trk_idscan_eGamma_algorithmId);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_trackStatus", &trig_L2_trk_idscan_eGamma_trackStatus, &b_trig_L2_trk_idscan_eGamma_trackStatus);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_chi2Ndof", &trig_L2_trk_idscan_eGamma_chi2Ndof, &b_trig_L2_trk_idscan_eGamma_chi2Ndof);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_nStrawHits", &trig_L2_trk_idscan_eGamma_nStrawHits, &b_trig_L2_trk_idscan_eGamma_nStrawHits);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_nHighThrHits", &trig_L2_trk_idscan_eGamma_nHighThrHits, &b_trig_L2_trk_idscan_eGamma_nHighThrHits);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_nPixelSpacePoints", &trig_L2_trk_idscan_eGamma_nPixelSpacePoints, &b_trig_L2_trk_idscan_eGamma_nPixelSpacePoints);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_nSCT_SpacePoints", &trig_L2_trk_idscan_eGamma_nSCT_SpacePoints, &b_trig_L2_trk_idscan_eGamma_nSCT_SpacePoints);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_a0", &trig_L2_trk_idscan_eGamma_a0, &b_trig_L2_trk_idscan_eGamma_a0);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_z0", &trig_L2_trk_idscan_eGamma_z0, &b_trig_L2_trk_idscan_eGamma_z0);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_phi0", &trig_L2_trk_idscan_eGamma_phi0, &b_trig_L2_trk_idscan_eGamma_phi0);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_eta", &trig_L2_trk_idscan_eGamma_eta, &b_trig_L2_trk_idscan_eGamma_eta);
   fChain->SetBranchAddress("trig_L2_trk_idscan_eGamma_pt", &trig_L2_trk_idscan_eGamma_pt, &b_trig_L2_trk_idscan_eGamma_pt);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_n", &trig_L2_trk_sitrack_eGamma_n, &b_trig_L2_trk_sitrack_eGamma_n);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_algorithmId", &trig_L2_trk_sitrack_eGamma_algorithmId, &b_trig_L2_trk_sitrack_eGamma_algorithmId);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_trackStatus", &trig_L2_trk_sitrack_eGamma_trackStatus, &b_trig_L2_trk_sitrack_eGamma_trackStatus);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_chi2Ndof", &trig_L2_trk_sitrack_eGamma_chi2Ndof, &b_trig_L2_trk_sitrack_eGamma_chi2Ndof);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_nStrawHits", &trig_L2_trk_sitrack_eGamma_nStrawHits, &b_trig_L2_trk_sitrack_eGamma_nStrawHits);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_nHighThrHits", &trig_L2_trk_sitrack_eGamma_nHighThrHits, &b_trig_L2_trk_sitrack_eGamma_nHighThrHits);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_nPixelSpacePoints", &trig_L2_trk_sitrack_eGamma_nPixelSpacePoints, &b_trig_L2_trk_sitrack_eGamma_nPixelSpacePoints);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_nSCT_SpacePoints", &trig_L2_trk_sitrack_eGamma_nSCT_SpacePoints, &b_trig_L2_trk_sitrack_eGamma_nSCT_SpacePoints);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_a0", &trig_L2_trk_sitrack_eGamma_a0, &b_trig_L2_trk_sitrack_eGamma_a0);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_z0", &trig_L2_trk_sitrack_eGamma_z0, &b_trig_L2_trk_sitrack_eGamma_z0);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_phi0", &trig_L2_trk_sitrack_eGamma_phi0, &b_trig_L2_trk_sitrack_eGamma_phi0);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_eta", &trig_L2_trk_sitrack_eGamma_eta, &b_trig_L2_trk_sitrack_eGamma_eta);
   fChain->SetBranchAddress("trig_L2_trk_sitrack_eGamma_pt", &trig_L2_trk_sitrack_eGamma_pt, &b_trig_L2_trk_sitrack_eGamma_pt);
   fChain->SetBranchAddress("trig_Nav_n", &trig_Nav_n, &b_trig_Nav_n);
   fChain->SetBranchAddress("trig_Nav_chain_ChainId", &trig_Nav_chain_ChainId, &b_trig_Nav_chain_ChainId);
   fChain->SetBranchAddress("trig_Nav_chain_RoIType", &trig_Nav_chain_RoIType, &b_trig_Nav_chain_RoIType);
   fChain->SetBranchAddress("trig_Nav_chain_RoIIndex", &trig_Nav_chain_RoIIndex, &b_trig_Nav_chain_RoIIndex);
   fChain->SetBranchAddress("trig_RoI_L2_e_n", &trig_RoI_L2_e_n, &b_trig_RoI_L2_e_n);
   fChain->SetBranchAddress("trig_RoI_L2_e_type", &trig_RoI_L2_e_type, &b_trig_RoI_L2_e_type);
   fChain->SetBranchAddress("trig_RoI_L2_e_lastStep", &trig_RoI_L2_e_lastStep, &b_trig_RoI_L2_e_lastStep);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgamma", &trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgamma, &b_trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgamma);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgammaStatus", &trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgammaStatus, &b_trig_RoI_L2_e_TrigRoiDescriptor_TrigT2CaloEgammaStatus);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigEMCluster", &trig_RoI_L2_e_TrigEMCluster, &b_trig_RoI_L2_e_TrigEMCluster);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigEMClusterStatus", &trig_RoI_L2_e_TrigEMClusterStatus, &b_trig_RoI_L2_e_TrigEMClusterStatus);
   fChain->SetBranchAddress("trig_RoI_L2_e_EmTau_ROI", &trig_RoI_L2_e_EmTau_ROI, &b_trig_RoI_L2_e_EmTau_ROI);
   fChain->SetBranchAddress("trig_RoI_L2_e_EmTau_ROIStatus", &trig_RoI_L2_e_EmTau_ROIStatus, &b_trig_RoI_L2_e_EmTau_ROIStatus);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGamma", &trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGamma, &b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGamma);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGammaStatus", &trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGammaStatus, &b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigSiTrack_eGammaStatus);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGamma", &trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGamma, &b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGamma);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGammaStatus", &trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGammaStatus, &b_trig_RoI_L2_e_TrigInDetTrackCollection_TrigIDSCAN_eGammaStatus);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigElectronContainer", &trig_RoI_L2_e_TrigElectronContainer, &b_trig_RoI_L2_e_TrigElectronContainer);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigElectronContainerStatus", &trig_RoI_L2_e_TrigElectronContainerStatus, &b_trig_RoI_L2_e_TrigElectronContainerStatus);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigPhotonContainer", &trig_RoI_L2_e_TrigPhotonContainer, &b_trig_RoI_L2_e_TrigPhotonContainer);
   fChain->SetBranchAddress("trig_RoI_L2_e_TrigPhotonContainerStatus", &trig_RoI_L2_e_TrigPhotonContainerStatus, &b_trig_RoI_L2_e_TrigPhotonContainerStatus);
   fChain->SetBranchAddress("trig_RoI_EF_e_n", &trig_RoI_EF_e_n, &b_trig_RoI_EF_e_n);
   fChain->SetBranchAddress("trig_RoI_EF_e_type", &trig_RoI_EF_e_type, &b_trig_RoI_EF_e_type);
   fChain->SetBranchAddress("trig_RoI_EF_e_lastStep", &trig_RoI_EF_e_lastStep, &b_trig_RoI_EF_e_lastStep);
   fChain->SetBranchAddress("trig_RoI_EF_e_EmTau_ROI", &trig_RoI_EF_e_EmTau_ROI, &b_trig_RoI_EF_e_EmTau_ROI);
   fChain->SetBranchAddress("trig_RoI_EF_e_EmTau_ROIStatus", &trig_RoI_EF_e_EmTau_ROIStatus, &b_trig_RoI_EF_e_EmTau_ROIStatus);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_Electrons", &trig_RoI_EF_e_egammaContainer_egamma_Electrons, &b_trig_RoI_EF_e_egammaContainer_egamma_Electrons);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus", &trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus, &b_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_Photons", &trig_RoI_EF_e_egammaContainer_egamma_Photons, &b_trig_RoI_EF_e_egammaContainer_egamma_Photons);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus", &trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus, &b_trig_RoI_EF_e_egammaContainer_egamma_PhotonsStatus);
   fChain->SetBranchAddress("trig_DB_SMK", &trig_DB_SMK, &b_trig_DB_SMK);
   fChain->SetBranchAddress("trig_DB_L1PSK", &trig_DB_L1PSK, &b_trig_DB_L1PSK);
   fChain->SetBranchAddress("trig_DB_HLTPSK", &trig_DB_HLTPSK, &b_trig_DB_HLTPSK);
   fChain->SetBranchAddress("trig_L1_esum_thrNames", &trig_L1_esum_thrNames, &b_trig_L1_esum_thrNames);
   fChain->SetBranchAddress("trig_L1_esum_energyX", &trig_L1_esum_energyX, &b_trig_L1_esum_energyX);
   fChain->SetBranchAddress("trig_L1_esum_energyY", &trig_L1_esum_energyY, &b_trig_L1_esum_energyY);
   fChain->SetBranchAddress("trig_L1_esum_energyT", &trig_L1_esum_energyT, &b_trig_L1_esum_energyT);
   fChain->SetBranchAddress("trig_L1_esum_overflowX", &trig_L1_esum_overflowX, &b_trig_L1_esum_overflowX);
   fChain->SetBranchAddress("trig_L1_esum_overflowY", &trig_L1_esum_overflowY, &b_trig_L1_esum_overflowY);
   fChain->SetBranchAddress("trig_L1_esum_overflowT", &trig_L1_esum_overflowT, &b_trig_L1_esum_overflowT);
   fChain->SetBranchAddress("trig_L1_esum_RoIWord0", &trig_L1_esum_RoIWord0, &b_trig_L1_esum_RoIWord0);
   fChain->SetBranchAddress("trig_L1_esum_RoIWord1", &trig_L1_esum_RoIWord1, &b_trig_L1_esum_RoIWord1);
   fChain->SetBranchAddress("trig_L1_esum_RoIWord2", &trig_L1_esum_RoIWord2, &b_trig_L1_esum_RoIWord2);
   fChain->SetBranchAddress("trig_L1_jet_n", &trig_L1_jet_n, &b_trig_L1_jet_n);
   fChain->SetBranchAddress("trig_L1_jet_thrNames", &trig_L1_jet_thrNames, &b_trig_L1_jet_thrNames);
   fChain->SetBranchAddress("trig_L1_jet_thrValues", &trig_L1_jet_thrValues, &b_trig_L1_jet_thrValues);
   fChain->SetBranchAddress("trig_L1_jet_thrPattern", &trig_L1_jet_thrPattern, &b_trig_L1_jet_thrPattern);
   fChain->SetBranchAddress("trig_L1_jet_et4x4", &trig_L1_jet_et4x4, &b_trig_L1_jet_et4x4);
   fChain->SetBranchAddress("trig_L1_jet_et6x6", &trig_L1_jet_et6x6, &b_trig_L1_jet_et6x6);
   fChain->SetBranchAddress("trig_L1_jet_et8x8", &trig_L1_jet_et8x8, &b_trig_L1_jet_et8x8);
   fChain->SetBranchAddress("trig_L1_jet_RoIWord", &trig_L1_jet_RoIWord, &b_trig_L1_jet_RoIWord);
   fChain->SetBranchAddress("trig_L1_jet_E", &trig_L1_jet_E, &b_trig_L1_jet_E);
   fChain->SetBranchAddress("trig_L1_jet_pt", &trig_L1_jet_pt, &b_trig_L1_jet_pt);
   fChain->SetBranchAddress("trig_L1_jet_eta", &trig_L1_jet_eta, &b_trig_L1_jet_eta);
   fChain->SetBranchAddress("trig_L1_jet_phi", &trig_L1_jet_phi, &b_trig_L1_jet_phi);
   fChain->SetBranchAddress("trig_L1_jetet_thrNames", &trig_L1_jetet_thrNames, &b_trig_L1_jetet_thrNames);
   fChain->SetBranchAddress("trig_L1_jetet_thrPattern", &trig_L1_jetet_thrPattern, &b_trig_L1_jetet_thrPattern);
   fChain->SetBranchAddress("trig_L1_jetet_RoIWord", &trig_L1_jetet_RoIWord, &b_trig_L1_jetet_RoIWord);
   fChain->SetBranchAddress("trig_L1_mu_n", &trig_L1_mu_n, &b_trig_L1_mu_n);
   fChain->SetBranchAddress("trig_L1_mu_pt", &trig_L1_mu_pt, &b_trig_L1_mu_pt);
   fChain->SetBranchAddress("trig_L1_mu_eta", &trig_L1_mu_eta, &b_trig_L1_mu_eta);
   fChain->SetBranchAddress("trig_L1_mu_phi", &trig_L1_mu_phi, &b_trig_L1_mu_phi);
   fChain->SetBranchAddress("trig_L1_mu_thrName", &trig_L1_mu_thrName, &b_trig_L1_mu_thrName);
   fChain->SetBranchAddress("trig_L1_mu_thrNumber", &trig_L1_mu_thrNumber, &b_trig_L1_mu_thrNumber);
   fChain->SetBranchAddress("trig_L1_mu_RoINumber", &trig_L1_mu_RoINumber, &b_trig_L1_mu_RoINumber);
   fChain->SetBranchAddress("trig_L1_mu_sectorAddress", &trig_L1_mu_sectorAddress, &b_trig_L1_mu_sectorAddress);
   fChain->SetBranchAddress("trig_L1_mu_firstCandidate", &trig_L1_mu_firstCandidate, &b_trig_L1_mu_firstCandidate);
   fChain->SetBranchAddress("trig_L1_mu_moreCandInRoI", &trig_L1_mu_moreCandInRoI, &b_trig_L1_mu_moreCandInRoI);
   fChain->SetBranchAddress("trig_L1_mu_moreCandInSector", &trig_L1_mu_moreCandInSector, &b_trig_L1_mu_moreCandInSector);
   fChain->SetBranchAddress("trig_L1_mu_source", &trig_L1_mu_source, &b_trig_L1_mu_source);
   fChain->SetBranchAddress("trig_L1_mu_hemisphere", &trig_L1_mu_hemisphere, &b_trig_L1_mu_hemisphere);
   fChain->SetBranchAddress("trig_L1_mu_RoIWord", &trig_L1_mu_RoIWord, &b_trig_L1_mu_RoIWord);
   fChain->SetBranchAddress("trig_L2_muonfeature_n", &trig_L2_muonfeature_n, &b_trig_L2_muonfeature_n);
   fChain->SetBranchAddress("trig_L2_muonfeature_pt", &trig_L2_muonfeature_pt, &b_trig_L2_muonfeature_pt);
   fChain->SetBranchAddress("trig_L2_muonfeature_eta", &trig_L2_muonfeature_eta, &b_trig_L2_muonfeature_eta);
   fChain->SetBranchAddress("trig_L2_muonfeature_phi", &trig_L2_muonfeature_phi, &b_trig_L2_muonfeature_phi);
   fChain->SetBranchAddress("trig_L2_muonfeature_dir_phi", &trig_L2_muonfeature_dir_phi, &b_trig_L2_muonfeature_dir_phi);
   fChain->SetBranchAddress("trig_L2_muonfeature_zeta", &trig_L2_muonfeature_zeta, &b_trig_L2_muonfeature_zeta);
   fChain->SetBranchAddress("trig_L2_muonfeature_dir_zeta", &trig_L2_muonfeature_dir_zeta, &b_trig_L2_muonfeature_dir_zeta);
   fChain->SetBranchAddress("trig_L2_muonfeature_radius", &trig_L2_muonfeature_radius, &b_trig_L2_muonfeature_radius);
   fChain->SetBranchAddress("trig_L2_muonfeature_beta", &trig_L2_muonfeature_beta, &b_trig_L2_muonfeature_beta);
   fChain->SetBranchAddress("trig_L2_muonfeature_br_radius", &trig_L2_muonfeature_br_radius, &b_trig_L2_muonfeature_br_radius);
   fChain->SetBranchAddress("trig_L2_muonfeature_br_sagitta", &trig_L2_muonfeature_br_sagitta, &b_trig_L2_muonfeature_br_sagitta);
   fChain->SetBranchAddress("trig_L2_muonfeature_ec_alpha", &trig_L2_muonfeature_ec_alpha, &b_trig_L2_muonfeature_ec_alpha);
   fChain->SetBranchAddress("trig_L2_muonfeature_ec_beta", &trig_L2_muonfeature_ec_beta, &b_trig_L2_muonfeature_ec_beta);
   fChain->SetBranchAddress("trig_L2_muonfeature_roiId", &trig_L2_muonfeature_roiId, &b_trig_L2_muonfeature_roiId);
   fChain->SetBranchAddress("trig_L2_muonfeature_saddress", &trig_L2_muonfeature_saddress, &b_trig_L2_muonfeature_saddress);
   fChain->SetBranchAddress("trig_L2_muonfeature_sp1_r", &trig_L2_muonfeature_sp1_r, &b_trig_L2_muonfeature_sp1_r);
   fChain->SetBranchAddress("trig_L2_muonfeature_sp1_z", &trig_L2_muonfeature_sp1_z, &b_trig_L2_muonfeature_sp1_z);
   fChain->SetBranchAddress("trig_L2_muonfeature_sp1_slope", &trig_L2_muonfeature_sp1_slope, &b_trig_L2_muonfeature_sp1_slope);
   fChain->SetBranchAddress("trig_L2_muonfeature_sp2_r", &trig_L2_muonfeature_sp2_r, &b_trig_L2_muonfeature_sp2_r);
   fChain->SetBranchAddress("trig_L2_muonfeature_sp2_z", &trig_L2_muonfeature_sp2_z, &b_trig_L2_muonfeature_sp2_z);
   fChain->SetBranchAddress("trig_L2_muonfeature_sp2_slope", &trig_L2_muonfeature_sp2_slope, &b_trig_L2_muonfeature_sp2_slope);
   fChain->SetBranchAddress("trig_L2_muonfeature_sp3_r", &trig_L2_muonfeature_sp3_r, &b_trig_L2_muonfeature_sp3_r);
   fChain->SetBranchAddress("trig_L2_muonfeature_sp3_z", &trig_L2_muonfeature_sp3_z, &b_trig_L2_muonfeature_sp3_z);
   fChain->SetBranchAddress("trig_L2_muonfeature_sp3_slope", &trig_L2_muonfeature_sp3_slope, &b_trig_L2_muonfeature_sp3_slope);
   fChain->SetBranchAddress("trig_L2_muonfeature_dq_var1", &trig_L2_muonfeature_dq_var1, &b_trig_L2_muonfeature_dq_var1);
   fChain->SetBranchAddress("trig_L2_muonfeature_dq_var2", &trig_L2_muonfeature_dq_var2, &b_trig_L2_muonfeature_dq_var2);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_2mu10", &trig_L2_muonfeature_L2_2mu10, &b_trig_L2_muonfeature_L2_2mu10);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_2mu4", &trig_L2_muonfeature_L2_2mu4, &b_trig_L2_muonfeature_L2_2mu4);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_2mu4_DiMu", &trig_L2_muonfeature_L2_2mu4_DiMu, &b_trig_L2_muonfeature_L2_2mu4_DiMu);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_2mu4_DiMu_SiTrk", &trig_L2_muonfeature_L2_2mu4_DiMu_SiTrk, &b_trig_L2_muonfeature_L2_2mu4_DiMu_SiTrk);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_2mu4_DiMu_noOS", &trig_L2_muonfeature_L2_2mu4_DiMu_noOS, &b_trig_L2_muonfeature_L2_2mu4_DiMu_noOS);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_2mu4_DiMu_noOS_passL2", &trig_L2_muonfeature_L2_2mu4_DiMu_noOS_passL2, &b_trig_L2_muonfeature_L2_2mu4_DiMu_noOS_passL2);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_2mu4_DiMu_noVtx_noOS", &trig_L2_muonfeature_L2_2mu4_DiMu_noVtx_noOS, &b_trig_L2_muonfeature_L2_2mu4_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2", &trig_L2_muonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2, &b_trig_L2_muonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_2mu4_MSonly", &trig_L2_muonfeature_L2_2mu4_MSonly, &b_trig_L2_muonfeature_L2_2mu4_MSonly);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_2mu6", &trig_L2_muonfeature_L2_2mu6, &b_trig_L2_muonfeature_L2_2mu6);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_2mu6_DiMu", &trig_L2_muonfeature_L2_2mu6_DiMu, &b_trig_L2_muonfeature_L2_2mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_2mu6_DiMu_noVtx_noOS", &trig_L2_muonfeature_L2_2mu6_DiMu_noVtx_noOS, &b_trig_L2_muonfeature_L2_2mu6_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU0", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU0, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU0);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU0_MU6", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU0_MU6, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU0_MU6);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU10", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU10, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU10);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU6", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU6, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_2MU6);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_EM3", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_EM3, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_EM3);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_J5", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_J5, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_J5);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU10", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU10, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU10);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU15", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU15, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU15);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU20", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU20, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU20);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_EM3", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_EM3, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_EM3);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_J5", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_J5, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_J5);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED", &trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED, &b_trig_L2_muonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu10", &trig_L2_muonfeature_L2_mu10, &b_trig_L2_muonfeature_L2_mu10);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu10_MG", &trig_L2_muonfeature_L2_mu10_MG, &b_trig_L2_muonfeature_L2_mu10_MG);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu10_MSonly", &trig_L2_muonfeature_L2_mu10_MSonly, &b_trig_L2_muonfeature_L2_mu10_MSonly);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu10_NoIDTrkCut", &trig_L2_muonfeature_L2_mu10_NoIDTrkCut, &b_trig_L2_muonfeature_L2_mu10_NoIDTrkCut);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu10_SiTrk", &trig_L2_muonfeature_L2_mu10_SiTrk, &b_trig_L2_muonfeature_L2_mu10_SiTrk);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu10_passHLT", &trig_L2_muonfeature_L2_mu10_passHLT, &b_trig_L2_muonfeature_L2_mu10_passHLT);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu10i_loose", &trig_L2_muonfeature_L2_mu10i_loose, &b_trig_L2_muonfeature_L2_mu10i_loose);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu13", &trig_L2_muonfeature_L2_mu13, &b_trig_L2_muonfeature_L2_mu13);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu15", &trig_L2_muonfeature_L2_mu15, &b_trig_L2_muonfeature_L2_mu15);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu20", &trig_L2_muonfeature_L2_mu20, &b_trig_L2_muonfeature_L2_mu20);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu20_MSonly", &trig_L2_muonfeature_L2_mu20_MSonly, &b_trig_L2_muonfeature_L2_mu20_MSonly);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu20_passHLT", &trig_L2_muonfeature_L2_mu20_passHLT, &b_trig_L2_muonfeature_L2_mu20_passHLT);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4", &trig_L2_muonfeature_L2_mu4, &b_trig_L2_muonfeature_L2_mu4);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_DiMu", &trig_L2_muonfeature_L2_mu4_DiMu, &b_trig_L2_muonfeature_L2_mu4_DiMu);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_DiMu_FS", &trig_L2_muonfeature_L2_mu4_DiMu_FS, &b_trig_L2_muonfeature_L2_mu4_DiMu_FS);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_DiMu_FS_noOS", &trig_L2_muonfeature_L2_mu4_DiMu_FS_noOS, &b_trig_L2_muonfeature_L2_mu4_DiMu_FS_noOS);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_L2MSonly_EFFS_passL2", &trig_L2_muonfeature_L2_mu4_L2MSonly_EFFS_passL2, &b_trig_L2_muonfeature_L2_mu4_L2MSonly_EFFS_passL2);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_MB2_noL2_EFFS", &trig_L2_muonfeature_L2_mu4_MB2_noL2_EFFS, &b_trig_L2_muonfeature_L2_mu4_MB2_noL2_EFFS);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_MG", &trig_L2_muonfeature_L2_mu4_MG, &b_trig_L2_muonfeature_L2_mu4_MG);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_MSonly", &trig_L2_muonfeature_L2_mu4_MSonly, &b_trig_L2_muonfeature_L2_mu4_MSonly);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_MSonly_EFFS_passL2", &trig_L2_muonfeature_L2_mu4_MSonly_EFFS_passL2, &b_trig_L2_muonfeature_L2_mu4_MSonly_EFFS_passL2);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_MSonly_Trk_Jpsi_loose", &trig_L2_muonfeature_L2_mu4_MSonly_Trk_Jpsi_loose, &b_trig_L2_muonfeature_L2_mu4_MSonly_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS", &trig_L2_muonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS, &b_trig_L2_muonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_NoIDTrkCut", &trig_L2_muonfeature_L2_mu4_NoIDTrkCut, &b_trig_L2_muonfeature_L2_mu4_NoIDTrkCut);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_SiTrk", &trig_L2_muonfeature_L2_mu4_SiTrk, &b_trig_L2_muonfeature_L2_mu4_SiTrk);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_Trk_Jpsi_loose", &trig_L2_muonfeature_L2_mu4_Trk_Jpsi_loose, &b_trig_L2_muonfeature_L2_mu4_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_Trk_Upsi_loose_FS", &trig_L2_muonfeature_L2_mu4_Trk_Upsi_loose_FS, &b_trig_L2_muonfeature_L2_mu4_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_mu6", &trig_L2_muonfeature_L2_mu4_mu6, &b_trig_L2_muonfeature_L2_mu4_mu6);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_passHLT", &trig_L2_muonfeature_L2_mu4_passHLT, &b_trig_L2_muonfeature_L2_mu4_passHLT);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_tile", &trig_L2_muonfeature_L2_mu4_tile, &b_trig_L2_muonfeature_L2_mu4_tile);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_tile_SiTrk", &trig_L2_muonfeature_L2_mu4_tile_SiTrk, &b_trig_L2_muonfeature_L2_mu4_tile_SiTrk);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_trod", &trig_L2_muonfeature_L2_mu4_trod, &b_trig_L2_muonfeature_L2_mu4_trod);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4_trod_SiTrk", &trig_L2_muonfeature_L2_mu4_trod_SiTrk, &b_trig_L2_muonfeature_L2_mu4_trod_SiTrk);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu4mu6_DiMu", &trig_L2_muonfeature_L2_mu4mu6_DiMu, &b_trig_L2_muonfeature_L2_mu4mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu6", &trig_L2_muonfeature_L2_mu6, &b_trig_L2_muonfeature_L2_mu6);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu6_DiMu", &trig_L2_muonfeature_L2_mu6_DiMu, &b_trig_L2_muonfeature_L2_mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu6_DiMu_FS", &trig_L2_muonfeature_L2_mu6_DiMu_FS, &b_trig_L2_muonfeature_L2_mu6_DiMu_FS);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu6_DiMu_FS_noOS", &trig_L2_muonfeature_L2_mu6_DiMu_FS_noOS, &b_trig_L2_muonfeature_L2_mu6_DiMu_FS_noOS);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu6_Jpsie5e3", &trig_L2_muonfeature_L2_mu6_Jpsie5e3, &b_trig_L2_muonfeature_L2_mu6_Jpsie5e3);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu6_MG", &trig_L2_muonfeature_L2_mu6_MG, &b_trig_L2_muonfeature_L2_mu6_MG);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu6_MSonly", &trig_L2_muonfeature_L2_mu6_MSonly, &b_trig_L2_muonfeature_L2_mu6_MSonly);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu6_SiTrk", &trig_L2_muonfeature_L2_mu6_SiTrk, &b_trig_L2_muonfeature_L2_mu6_SiTrk);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu6_Trk_Jpsi_loose", &trig_L2_muonfeature_L2_mu6_Trk_Jpsi_loose, &b_trig_L2_muonfeature_L2_mu6_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu6_Trk_Jpsi_loose_FS", &trig_L2_muonfeature_L2_mu6_Trk_Jpsi_loose_FS, &b_trig_L2_muonfeature_L2_mu6_Trk_Jpsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu6_Trk_Upsi_loose_FS", &trig_L2_muonfeature_L2_mu6_Trk_Upsi_loose_FS, &b_trig_L2_muonfeature_L2_mu6_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_muonfeature_L2_mu6_passHLT", &trig_L2_muonfeature_L2_mu6_passHLT, &b_trig_L2_muonfeature_L2_mu6_passHLT);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_n", &trig_L2_combmuonfeature_n, &b_trig_L2_combmuonfeature_n);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_pt", &trig_L2_combmuonfeature_pt, &b_trig_L2_combmuonfeature_pt);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_eta", &trig_L2_combmuonfeature_eta, &b_trig_L2_combmuonfeature_eta);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_phi", &trig_L2_combmuonfeature_phi, &b_trig_L2_combmuonfeature_phi);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_sigma_pt", &trig_L2_combmuonfeature_sigma_pt, &b_trig_L2_combmuonfeature_sigma_pt);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_2mu10", &trig_L2_combmuonfeature_L2_2mu10, &b_trig_L2_combmuonfeature_L2_2mu10);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_2mu4", &trig_L2_combmuonfeature_L2_2mu4, &b_trig_L2_combmuonfeature_L2_2mu4);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_2mu4_DiMu", &trig_L2_combmuonfeature_L2_2mu4_DiMu, &b_trig_L2_combmuonfeature_L2_2mu4_DiMu);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_2mu4_DiMu_SiTrk", &trig_L2_combmuonfeature_L2_2mu4_DiMu_SiTrk, &b_trig_L2_combmuonfeature_L2_2mu4_DiMu_SiTrk);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_2mu4_DiMu_noOS", &trig_L2_combmuonfeature_L2_2mu4_DiMu_noOS, &b_trig_L2_combmuonfeature_L2_2mu4_DiMu_noOS);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_2mu4_DiMu_noOS_passL2", &trig_L2_combmuonfeature_L2_2mu4_DiMu_noOS_passL2, &b_trig_L2_combmuonfeature_L2_2mu4_DiMu_noOS_passL2);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_2mu4_DiMu_noVtx_noOS", &trig_L2_combmuonfeature_L2_2mu4_DiMu_noVtx_noOS, &b_trig_L2_combmuonfeature_L2_2mu4_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2", &trig_L2_combmuonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2, &b_trig_L2_combmuonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_2mu4_MSonly", &trig_L2_combmuonfeature_L2_2mu4_MSonly, &b_trig_L2_combmuonfeature_L2_2mu4_MSonly);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_2mu6", &trig_L2_combmuonfeature_L2_2mu6, &b_trig_L2_combmuonfeature_L2_2mu6);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_2mu6_DiMu", &trig_L2_combmuonfeature_L2_2mu6_DiMu, &b_trig_L2_combmuonfeature_L2_2mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_2mu6_DiMu_noVtx_noOS", &trig_L2_combmuonfeature_L2_2mu6_DiMu_noVtx_noOS, &b_trig_L2_combmuonfeature_L2_2mu6_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU0", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU0, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU0);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU0_MU6", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU0_MU6, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU0_MU6);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU10", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU10, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU10);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU6", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU6, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_2MU6);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_EM3", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_EM3, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_EM3);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_J5", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_J5, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_J5);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU10", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU10, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU10);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU15", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU15, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU15);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU20", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU20, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU20);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_EM3", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_EM3, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_EM3);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_J5", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_J5, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_J5);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED", &trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED, &b_trig_L2_combmuonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu10", &trig_L2_combmuonfeature_L2_mu10, &b_trig_L2_combmuonfeature_L2_mu10);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu10_MG", &trig_L2_combmuonfeature_L2_mu10_MG, &b_trig_L2_combmuonfeature_L2_mu10_MG);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu10_MSonly", &trig_L2_combmuonfeature_L2_mu10_MSonly, &b_trig_L2_combmuonfeature_L2_mu10_MSonly);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu10_NoIDTrkCut", &trig_L2_combmuonfeature_L2_mu10_NoIDTrkCut, &b_trig_L2_combmuonfeature_L2_mu10_NoIDTrkCut);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu10_SiTrk", &trig_L2_combmuonfeature_L2_mu10_SiTrk, &b_trig_L2_combmuonfeature_L2_mu10_SiTrk);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu10_passHLT", &trig_L2_combmuonfeature_L2_mu10_passHLT, &b_trig_L2_combmuonfeature_L2_mu10_passHLT);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu10i_loose", &trig_L2_combmuonfeature_L2_mu10i_loose, &b_trig_L2_combmuonfeature_L2_mu10i_loose);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu13", &trig_L2_combmuonfeature_L2_mu13, &b_trig_L2_combmuonfeature_L2_mu13);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu15", &trig_L2_combmuonfeature_L2_mu15, &b_trig_L2_combmuonfeature_L2_mu15);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu20", &trig_L2_combmuonfeature_L2_mu20, &b_trig_L2_combmuonfeature_L2_mu20);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu20_MSonly", &trig_L2_combmuonfeature_L2_mu20_MSonly, &b_trig_L2_combmuonfeature_L2_mu20_MSonly);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu20_passHLT", &trig_L2_combmuonfeature_L2_mu20_passHLT, &b_trig_L2_combmuonfeature_L2_mu20_passHLT);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4", &trig_L2_combmuonfeature_L2_mu4, &b_trig_L2_combmuonfeature_L2_mu4);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_DiMu", &trig_L2_combmuonfeature_L2_mu4_DiMu, &b_trig_L2_combmuonfeature_L2_mu4_DiMu);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_DiMu_FS", &trig_L2_combmuonfeature_L2_mu4_DiMu_FS, &b_trig_L2_combmuonfeature_L2_mu4_DiMu_FS);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_DiMu_FS_noOS", &trig_L2_combmuonfeature_L2_mu4_DiMu_FS_noOS, &b_trig_L2_combmuonfeature_L2_mu4_DiMu_FS_noOS);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_L2MSonly_EFFS_passL2", &trig_L2_combmuonfeature_L2_mu4_L2MSonly_EFFS_passL2, &b_trig_L2_combmuonfeature_L2_mu4_L2MSonly_EFFS_passL2);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_MB2_noL2_EFFS", &trig_L2_combmuonfeature_L2_mu4_MB2_noL2_EFFS, &b_trig_L2_combmuonfeature_L2_mu4_MB2_noL2_EFFS);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_MG", &trig_L2_combmuonfeature_L2_mu4_MG, &b_trig_L2_combmuonfeature_L2_mu4_MG);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_MSonly", &trig_L2_combmuonfeature_L2_mu4_MSonly, &b_trig_L2_combmuonfeature_L2_mu4_MSonly);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_MSonly_EFFS_passL2", &trig_L2_combmuonfeature_L2_mu4_MSonly_EFFS_passL2, &b_trig_L2_combmuonfeature_L2_mu4_MSonly_EFFS_passL2);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_MSonly_Trk_Jpsi_loose", &trig_L2_combmuonfeature_L2_mu4_MSonly_Trk_Jpsi_loose, &b_trig_L2_combmuonfeature_L2_mu4_MSonly_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS", &trig_L2_combmuonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS, &b_trig_L2_combmuonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_NoIDTrkCut", &trig_L2_combmuonfeature_L2_mu4_NoIDTrkCut, &b_trig_L2_combmuonfeature_L2_mu4_NoIDTrkCut);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_SiTrk", &trig_L2_combmuonfeature_L2_mu4_SiTrk, &b_trig_L2_combmuonfeature_L2_mu4_SiTrk);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_Trk_Jpsi_loose", &trig_L2_combmuonfeature_L2_mu4_Trk_Jpsi_loose, &b_trig_L2_combmuonfeature_L2_mu4_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_Trk_Upsi_loose_FS", &trig_L2_combmuonfeature_L2_mu4_Trk_Upsi_loose_FS, &b_trig_L2_combmuonfeature_L2_mu4_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_mu6", &trig_L2_combmuonfeature_L2_mu4_mu6, &b_trig_L2_combmuonfeature_L2_mu4_mu6);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_passHLT", &trig_L2_combmuonfeature_L2_mu4_passHLT, &b_trig_L2_combmuonfeature_L2_mu4_passHLT);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_tile", &trig_L2_combmuonfeature_L2_mu4_tile, &b_trig_L2_combmuonfeature_L2_mu4_tile);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_tile_SiTrk", &trig_L2_combmuonfeature_L2_mu4_tile_SiTrk, &b_trig_L2_combmuonfeature_L2_mu4_tile_SiTrk);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_trod", &trig_L2_combmuonfeature_L2_mu4_trod, &b_trig_L2_combmuonfeature_L2_mu4_trod);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4_trod_SiTrk", &trig_L2_combmuonfeature_L2_mu4_trod_SiTrk, &b_trig_L2_combmuonfeature_L2_mu4_trod_SiTrk);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu4mu6_DiMu", &trig_L2_combmuonfeature_L2_mu4mu6_DiMu, &b_trig_L2_combmuonfeature_L2_mu4mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu6", &trig_L2_combmuonfeature_L2_mu6, &b_trig_L2_combmuonfeature_L2_mu6);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu6_DiMu", &trig_L2_combmuonfeature_L2_mu6_DiMu, &b_trig_L2_combmuonfeature_L2_mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu6_DiMu_FS", &trig_L2_combmuonfeature_L2_mu6_DiMu_FS, &b_trig_L2_combmuonfeature_L2_mu6_DiMu_FS);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu6_DiMu_FS_noOS", &trig_L2_combmuonfeature_L2_mu6_DiMu_FS_noOS, &b_trig_L2_combmuonfeature_L2_mu6_DiMu_FS_noOS);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu6_Jpsie5e3", &trig_L2_combmuonfeature_L2_mu6_Jpsie5e3, &b_trig_L2_combmuonfeature_L2_mu6_Jpsie5e3);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu6_MG", &trig_L2_combmuonfeature_L2_mu6_MG, &b_trig_L2_combmuonfeature_L2_mu6_MG);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu6_MSonly", &trig_L2_combmuonfeature_L2_mu6_MSonly, &b_trig_L2_combmuonfeature_L2_mu6_MSonly);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu6_SiTrk", &trig_L2_combmuonfeature_L2_mu6_SiTrk, &b_trig_L2_combmuonfeature_L2_mu6_SiTrk);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu6_Trk_Jpsi_loose", &trig_L2_combmuonfeature_L2_mu6_Trk_Jpsi_loose, &b_trig_L2_combmuonfeature_L2_mu6_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu6_Trk_Jpsi_loose_FS", &trig_L2_combmuonfeature_L2_mu6_Trk_Jpsi_loose_FS, &b_trig_L2_combmuonfeature_L2_mu6_Trk_Jpsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu6_Trk_Upsi_loose_FS", &trig_L2_combmuonfeature_L2_mu6_Trk_Upsi_loose_FS, &b_trig_L2_combmuonfeature_L2_mu6_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_L2_mu6_passHLT", &trig_L2_combmuonfeature_L2_mu6_passHLT, &b_trig_L2_combmuonfeature_L2_mu6_passHLT);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_mf_index", &trig_L2_combmuonfeature_mf_index, &b_trig_L2_combmuonfeature_mf_index);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_idscantrk_index", &trig_L2_combmuonfeature_idscantrk_index, &b_trig_L2_combmuonfeature_idscantrk_index);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_sitracktrk_index", &trig_L2_combmuonfeature_sitracktrk_index, &b_trig_L2_combmuonfeature_sitracktrk_index);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_n", &trig_L2_isomuonfeature_n, &b_trig_L2_isomuonfeature_n);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_pt", &trig_L2_isomuonfeature_pt, &b_trig_L2_isomuonfeature_pt);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_eta", &trig_L2_isomuonfeature_eta, &b_trig_L2_isomuonfeature_eta);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_phi", &trig_L2_isomuonfeature_phi, &b_trig_L2_isomuonfeature_phi);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_EtInnerConeEC ", &trig_L2_isomuonfeature_EtInnerConeEC , &b_trig_L2_isomuonfeature_EtInnerConeEC );
   fChain->SetBranchAddress("trig_L2_isomuonfeature_EtOuterConeEC", &trig_L2_isomuonfeature_EtOuterConeEC, &b_trig_L2_isomuonfeature_EtOuterConeEC);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_EtInnerConeHC", &trig_L2_isomuonfeature_EtInnerConeHC, &b_trig_L2_isomuonfeature_EtInnerConeHC);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_EtOuterConeHC", &trig_L2_isomuonfeature_EtOuterConeHC, &b_trig_L2_isomuonfeature_EtOuterConeHC);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_NTracksCone", &trig_L2_isomuonfeature_NTracksCone, &b_trig_L2_isomuonfeature_NTracksCone);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_SumPtTracksCone", &trig_L2_isomuonfeature_SumPtTracksCone, &b_trig_L2_isomuonfeature_SumPtTracksCone);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_PtMuTracksCone", &trig_L2_isomuonfeature_PtMuTracksCone, &b_trig_L2_isomuonfeature_PtMuTracksCone);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_iso_strategy", &trig_L2_isomuonfeature_iso_strategy, &b_trig_L2_isomuonfeature_iso_strategy);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_RoiIdMu ", &trig_L2_isomuonfeature_RoiIdMu , &b_trig_L2_isomuonfeature_RoiIdMu );
   fChain->SetBranchAddress("trig_L2_isomuonfeature_PtMu", &trig_L2_isomuonfeature_PtMu, &b_trig_L2_isomuonfeature_PtMu);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_EtaMu", &trig_L2_isomuonfeature_EtaMu, &b_trig_L2_isomuonfeature_EtaMu);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_PhiMu", &trig_L2_isomuonfeature_PhiMu, &b_trig_L2_isomuonfeature_PhiMu);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_LArWeight", &trig_L2_isomuonfeature_LArWeight, &b_trig_L2_isomuonfeature_LArWeight);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_TileWeight", &trig_L2_isomuonfeature_TileWeight, &b_trig_L2_isomuonfeature_TileWeight);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_2mu10", &trig_L2_isomuonfeature_L2_2mu10, &b_trig_L2_isomuonfeature_L2_2mu10);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_2mu4", &trig_L2_isomuonfeature_L2_2mu4, &b_trig_L2_isomuonfeature_L2_2mu4);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_2mu4_DiMu", &trig_L2_isomuonfeature_L2_2mu4_DiMu, &b_trig_L2_isomuonfeature_L2_2mu4_DiMu);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_2mu4_DiMu_SiTrk", &trig_L2_isomuonfeature_L2_2mu4_DiMu_SiTrk, &b_trig_L2_isomuonfeature_L2_2mu4_DiMu_SiTrk);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_2mu4_DiMu_noOS", &trig_L2_isomuonfeature_L2_2mu4_DiMu_noOS, &b_trig_L2_isomuonfeature_L2_2mu4_DiMu_noOS);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_2mu4_DiMu_noOS_passL2", &trig_L2_isomuonfeature_L2_2mu4_DiMu_noOS_passL2, &b_trig_L2_isomuonfeature_L2_2mu4_DiMu_noOS_passL2);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_2mu4_DiMu_noVtx_noOS", &trig_L2_isomuonfeature_L2_2mu4_DiMu_noVtx_noOS, &b_trig_L2_isomuonfeature_L2_2mu4_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2", &trig_L2_isomuonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2, &b_trig_L2_isomuonfeature_L2_2mu4_DiMu_noVtx_noOS_passL2);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_2mu4_MSonly", &trig_L2_isomuonfeature_L2_2mu4_MSonly, &b_trig_L2_isomuonfeature_L2_2mu4_MSonly);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_2mu6", &trig_L2_isomuonfeature_L2_2mu6, &b_trig_L2_isomuonfeature_L2_2mu6);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_2mu6_DiMu", &trig_L2_isomuonfeature_L2_2mu6_DiMu, &b_trig_L2_isomuonfeature_L2_2mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_2mu6_DiMu_noVtx_noOS", &trig_L2_isomuonfeature_L2_2mu6_DiMu_noVtx_noOS, &b_trig_L2_isomuonfeature_L2_2mu6_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU0", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU0, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU0);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU0_MU6", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU0_MU6, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU0_MU6);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU10", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU10, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU10);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU6", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU6, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_2MU6);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_EM3", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_EM3, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_EM3);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_EMPTY);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_J5", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_J5, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_J5);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU10", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU10, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU10);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU10_EMPTY);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU15", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU15, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU15);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU20", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU20, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU20);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_EM3", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_EM3, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_EM3);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_EMPTY);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_J5", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_J5, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_J5);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED", &trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED, &b_trig_L2_isomuonfeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu10", &trig_L2_isomuonfeature_L2_mu10, &b_trig_L2_isomuonfeature_L2_mu10);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu10_MG", &trig_L2_isomuonfeature_L2_mu10_MG, &b_trig_L2_isomuonfeature_L2_mu10_MG);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu10_MSonly", &trig_L2_isomuonfeature_L2_mu10_MSonly, &b_trig_L2_isomuonfeature_L2_mu10_MSonly);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu10_NoIDTrkCut", &trig_L2_isomuonfeature_L2_mu10_NoIDTrkCut, &b_trig_L2_isomuonfeature_L2_mu10_NoIDTrkCut);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu10_SiTrk", &trig_L2_isomuonfeature_L2_mu10_SiTrk, &b_trig_L2_isomuonfeature_L2_mu10_SiTrk);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu10_passHLT", &trig_L2_isomuonfeature_L2_mu10_passHLT, &b_trig_L2_isomuonfeature_L2_mu10_passHLT);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu10i_loose", &trig_L2_isomuonfeature_L2_mu10i_loose, &b_trig_L2_isomuonfeature_L2_mu10i_loose);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu13", &trig_L2_isomuonfeature_L2_mu13, &b_trig_L2_isomuonfeature_L2_mu13);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu15", &trig_L2_isomuonfeature_L2_mu15, &b_trig_L2_isomuonfeature_L2_mu15);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu20", &trig_L2_isomuonfeature_L2_mu20, &b_trig_L2_isomuonfeature_L2_mu20);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu20_MSonly", &trig_L2_isomuonfeature_L2_mu20_MSonly, &b_trig_L2_isomuonfeature_L2_mu20_MSonly);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu20_passHLT", &trig_L2_isomuonfeature_L2_mu20_passHLT, &b_trig_L2_isomuonfeature_L2_mu20_passHLT);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4", &trig_L2_isomuonfeature_L2_mu4, &b_trig_L2_isomuonfeature_L2_mu4);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_DiMu", &trig_L2_isomuonfeature_L2_mu4_DiMu, &b_trig_L2_isomuonfeature_L2_mu4_DiMu);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_DiMu_FS", &trig_L2_isomuonfeature_L2_mu4_DiMu_FS, &b_trig_L2_isomuonfeature_L2_mu4_DiMu_FS);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_DiMu_FS_noOS", &trig_L2_isomuonfeature_L2_mu4_DiMu_FS_noOS, &b_trig_L2_isomuonfeature_L2_mu4_DiMu_FS_noOS);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_L2MSonly_EFFS_passL2", &trig_L2_isomuonfeature_L2_mu4_L2MSonly_EFFS_passL2, &b_trig_L2_isomuonfeature_L2_mu4_L2MSonly_EFFS_passL2);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_MB2_noL2_EFFS", &trig_L2_isomuonfeature_L2_mu4_MB2_noL2_EFFS, &b_trig_L2_isomuonfeature_L2_mu4_MB2_noL2_EFFS);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_MG", &trig_L2_isomuonfeature_L2_mu4_MG, &b_trig_L2_isomuonfeature_L2_mu4_MG);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_MSonly", &trig_L2_isomuonfeature_L2_mu4_MSonly, &b_trig_L2_isomuonfeature_L2_mu4_MSonly);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_MSonly_EFFS_passL2", &trig_L2_isomuonfeature_L2_mu4_MSonly_EFFS_passL2, &b_trig_L2_isomuonfeature_L2_mu4_MSonly_EFFS_passL2);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_MSonly_Trk_Jpsi_loose", &trig_L2_isomuonfeature_L2_mu4_MSonly_Trk_Jpsi_loose, &b_trig_L2_isomuonfeature_L2_mu4_MSonly_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS", &trig_L2_isomuonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS, &b_trig_L2_isomuonfeature_L2_mu4_MSonly_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_NoIDTrkCut", &trig_L2_isomuonfeature_L2_mu4_NoIDTrkCut, &b_trig_L2_isomuonfeature_L2_mu4_NoIDTrkCut);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_SiTrk", &trig_L2_isomuonfeature_L2_mu4_SiTrk, &b_trig_L2_isomuonfeature_L2_mu4_SiTrk);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_Trk_Jpsi_loose", &trig_L2_isomuonfeature_L2_mu4_Trk_Jpsi_loose, &b_trig_L2_isomuonfeature_L2_mu4_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_Trk_Upsi_loose_FS", &trig_L2_isomuonfeature_L2_mu4_Trk_Upsi_loose_FS, &b_trig_L2_isomuonfeature_L2_mu4_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_mu6", &trig_L2_isomuonfeature_L2_mu4_mu6, &b_trig_L2_isomuonfeature_L2_mu4_mu6);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_passHLT", &trig_L2_isomuonfeature_L2_mu4_passHLT, &b_trig_L2_isomuonfeature_L2_mu4_passHLT);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_tile", &trig_L2_isomuonfeature_L2_mu4_tile, &b_trig_L2_isomuonfeature_L2_mu4_tile);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_tile_SiTrk", &trig_L2_isomuonfeature_L2_mu4_tile_SiTrk, &b_trig_L2_isomuonfeature_L2_mu4_tile_SiTrk);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_trod", &trig_L2_isomuonfeature_L2_mu4_trod, &b_trig_L2_isomuonfeature_L2_mu4_trod);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4_trod_SiTrk", &trig_L2_isomuonfeature_L2_mu4_trod_SiTrk, &b_trig_L2_isomuonfeature_L2_mu4_trod_SiTrk);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu4mu6_DiMu", &trig_L2_isomuonfeature_L2_mu4mu6_DiMu, &b_trig_L2_isomuonfeature_L2_mu4mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu6", &trig_L2_isomuonfeature_L2_mu6, &b_trig_L2_isomuonfeature_L2_mu6);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu6_DiMu", &trig_L2_isomuonfeature_L2_mu6_DiMu, &b_trig_L2_isomuonfeature_L2_mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu6_DiMu_FS", &trig_L2_isomuonfeature_L2_mu6_DiMu_FS, &b_trig_L2_isomuonfeature_L2_mu6_DiMu_FS);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu6_DiMu_FS_noOS", &trig_L2_isomuonfeature_L2_mu6_DiMu_FS_noOS, &b_trig_L2_isomuonfeature_L2_mu6_DiMu_FS_noOS);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu6_Jpsie5e3", &trig_L2_isomuonfeature_L2_mu6_Jpsie5e3, &b_trig_L2_isomuonfeature_L2_mu6_Jpsie5e3);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu6_MG", &trig_L2_isomuonfeature_L2_mu6_MG, &b_trig_L2_isomuonfeature_L2_mu6_MG);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu6_MSonly", &trig_L2_isomuonfeature_L2_mu6_MSonly, &b_trig_L2_isomuonfeature_L2_mu6_MSonly);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu6_SiTrk", &trig_L2_isomuonfeature_L2_mu6_SiTrk, &b_trig_L2_isomuonfeature_L2_mu6_SiTrk);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu6_Trk_Jpsi_loose", &trig_L2_isomuonfeature_L2_mu6_Trk_Jpsi_loose, &b_trig_L2_isomuonfeature_L2_mu6_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu6_Trk_Jpsi_loose_FS", &trig_L2_isomuonfeature_L2_mu6_Trk_Jpsi_loose_FS, &b_trig_L2_isomuonfeature_L2_mu6_Trk_Jpsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu6_Trk_Upsi_loose_FS", &trig_L2_isomuonfeature_L2_mu6_Trk_Upsi_loose_FS, &b_trig_L2_isomuonfeature_L2_mu6_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_isomuonfeature_L2_mu6_passHLT", &trig_L2_isomuonfeature_L2_mu6_passHLT, &b_trig_L2_isomuonfeature_L2_mu6_passHLT);
   fChain->SetBranchAddress("trig_L2_tilemufeature_n", &trig_L2_tilemufeature_n, &b_trig_L2_tilemufeature_n);
   fChain->SetBranchAddress("trig_L2_tilemufeature_eta", &trig_L2_tilemufeature_eta, &b_trig_L2_tilemufeature_eta);
   fChain->SetBranchAddress("trig_L2_tilemufeature_phi", &trig_L2_tilemufeature_phi, &b_trig_L2_tilemufeature_phi);
   fChain->SetBranchAddress("trig_L2_tilemufeature_enedep", &trig_L2_tilemufeature_enedep, &b_trig_L2_tilemufeature_enedep);
   fChain->SetBranchAddress("trig_L2_tilemufeature_quality", &trig_L2_tilemufeature_quality, &b_trig_L2_tilemufeature_quality);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_2mu10", &trig_L2_tilemufeature_L2_2mu10, &b_trig_L2_tilemufeature_L2_2mu10);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_2mu4", &trig_L2_tilemufeature_L2_2mu4, &b_trig_L2_tilemufeature_L2_2mu4);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_2mu4_DiMu", &trig_L2_tilemufeature_L2_2mu4_DiMu, &b_trig_L2_tilemufeature_L2_2mu4_DiMu);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_2mu4_DiMu_SiTrk", &trig_L2_tilemufeature_L2_2mu4_DiMu_SiTrk, &b_trig_L2_tilemufeature_L2_2mu4_DiMu_SiTrk);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_2mu4_DiMu_noOS", &trig_L2_tilemufeature_L2_2mu4_DiMu_noOS, &b_trig_L2_tilemufeature_L2_2mu4_DiMu_noOS);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_2mu4_DiMu_noOS_passL2", &trig_L2_tilemufeature_L2_2mu4_DiMu_noOS_passL2, &b_trig_L2_tilemufeature_L2_2mu4_DiMu_noOS_passL2);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_2mu4_DiMu_noVtx_noOS", &trig_L2_tilemufeature_L2_2mu4_DiMu_noVtx_noOS, &b_trig_L2_tilemufeature_L2_2mu4_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_2mu4_DiMu_noVtx_noOS_passL2", &trig_L2_tilemufeature_L2_2mu4_DiMu_noVtx_noOS_passL2, &b_trig_L2_tilemufeature_L2_2mu4_DiMu_noVtx_noOS_passL2);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_2mu4_MSonly", &trig_L2_tilemufeature_L2_2mu4_MSonly, &b_trig_L2_tilemufeature_L2_2mu4_MSonly);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_2mu6", &trig_L2_tilemufeature_L2_2mu6, &b_trig_L2_tilemufeature_L2_2mu6);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_2mu6_DiMu", &trig_L2_tilemufeature_L2_2mu6_DiMu, &b_trig_L2_tilemufeature_L2_2mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_2mu6_DiMu_noVtx_noOS", &trig_L2_tilemufeature_L2_2mu6_DiMu_noVtx_noOS, &b_trig_L2_tilemufeature_L2_2mu6_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU0", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU0, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU0);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU0_MU6", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU0_MU6, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU0_MU6);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU10", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU10, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU10);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU6", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU6, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_2MU6);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_EM3", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_EM3, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_EM3);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_EMPTY", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_EMPTY, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_EMPTY);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_J5", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_J5, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_J5);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU10", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU10, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU10);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU10_EMPTY", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU10_EMPTY, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU10_EMPTY);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU15", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU15, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU15);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU20", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU20, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU20);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_EM3", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_EM3, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_EM3);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_EMPTY", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_EMPTY, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_EMPTY);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_J5", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_J5, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_J5);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED", &trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED, &b_trig_L2_tilemufeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu10", &trig_L2_tilemufeature_L2_mu10, &b_trig_L2_tilemufeature_L2_mu10);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu10_MG", &trig_L2_tilemufeature_L2_mu10_MG, &b_trig_L2_tilemufeature_L2_mu10_MG);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu10_MSonly", &trig_L2_tilemufeature_L2_mu10_MSonly, &b_trig_L2_tilemufeature_L2_mu10_MSonly);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu10_NoIDTrkCut", &trig_L2_tilemufeature_L2_mu10_NoIDTrkCut, &b_trig_L2_tilemufeature_L2_mu10_NoIDTrkCut);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu10_SiTrk", &trig_L2_tilemufeature_L2_mu10_SiTrk, &b_trig_L2_tilemufeature_L2_mu10_SiTrk);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu10_passHLT", &trig_L2_tilemufeature_L2_mu10_passHLT, &b_trig_L2_tilemufeature_L2_mu10_passHLT);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu10i_loose", &trig_L2_tilemufeature_L2_mu10i_loose, &b_trig_L2_tilemufeature_L2_mu10i_loose);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu13", &trig_L2_tilemufeature_L2_mu13, &b_trig_L2_tilemufeature_L2_mu13);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu15", &trig_L2_tilemufeature_L2_mu15, &b_trig_L2_tilemufeature_L2_mu15);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu20", &trig_L2_tilemufeature_L2_mu20, &b_trig_L2_tilemufeature_L2_mu20);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu20_MSonly", &trig_L2_tilemufeature_L2_mu20_MSonly, &b_trig_L2_tilemufeature_L2_mu20_MSonly);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu20_passHLT", &trig_L2_tilemufeature_L2_mu20_passHLT, &b_trig_L2_tilemufeature_L2_mu20_passHLT);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4", &trig_L2_tilemufeature_L2_mu4, &b_trig_L2_tilemufeature_L2_mu4);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_DiMu", &trig_L2_tilemufeature_L2_mu4_DiMu, &b_trig_L2_tilemufeature_L2_mu4_DiMu);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_DiMu_FS", &trig_L2_tilemufeature_L2_mu4_DiMu_FS, &b_trig_L2_tilemufeature_L2_mu4_DiMu_FS);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_DiMu_FS_noOS", &trig_L2_tilemufeature_L2_mu4_DiMu_FS_noOS, &b_trig_L2_tilemufeature_L2_mu4_DiMu_FS_noOS);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_L2MSonly_EFFS_passL2", &trig_L2_tilemufeature_L2_mu4_L2MSonly_EFFS_passL2, &b_trig_L2_tilemufeature_L2_mu4_L2MSonly_EFFS_passL2);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_MB2_noL2_EFFS", &trig_L2_tilemufeature_L2_mu4_MB2_noL2_EFFS, &b_trig_L2_tilemufeature_L2_mu4_MB2_noL2_EFFS);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_MG", &trig_L2_tilemufeature_L2_mu4_MG, &b_trig_L2_tilemufeature_L2_mu4_MG);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_MSonly", &trig_L2_tilemufeature_L2_mu4_MSonly, &b_trig_L2_tilemufeature_L2_mu4_MSonly);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_MSonly_EFFS_passL2", &trig_L2_tilemufeature_L2_mu4_MSonly_EFFS_passL2, &b_trig_L2_tilemufeature_L2_mu4_MSonly_EFFS_passL2);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_MSonly_Trk_Jpsi_loose", &trig_L2_tilemufeature_L2_mu4_MSonly_Trk_Jpsi_loose, &b_trig_L2_tilemufeature_L2_mu4_MSonly_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_MSonly_Trk_Upsi_loose_FS", &trig_L2_tilemufeature_L2_mu4_MSonly_Trk_Upsi_loose_FS, &b_trig_L2_tilemufeature_L2_mu4_MSonly_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_NoIDTrkCut", &trig_L2_tilemufeature_L2_mu4_NoIDTrkCut, &b_trig_L2_tilemufeature_L2_mu4_NoIDTrkCut);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_SiTrk", &trig_L2_tilemufeature_L2_mu4_SiTrk, &b_trig_L2_tilemufeature_L2_mu4_SiTrk);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_Trk_Jpsi_loose", &trig_L2_tilemufeature_L2_mu4_Trk_Jpsi_loose, &b_trig_L2_tilemufeature_L2_mu4_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_Trk_Upsi_loose_FS", &trig_L2_tilemufeature_L2_mu4_Trk_Upsi_loose_FS, &b_trig_L2_tilemufeature_L2_mu4_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_mu6", &trig_L2_tilemufeature_L2_mu4_mu6, &b_trig_L2_tilemufeature_L2_mu4_mu6);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_passHLT", &trig_L2_tilemufeature_L2_mu4_passHLT, &b_trig_L2_tilemufeature_L2_mu4_passHLT);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_tile", &trig_L2_tilemufeature_L2_mu4_tile, &b_trig_L2_tilemufeature_L2_mu4_tile);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_tile_SiTrk", &trig_L2_tilemufeature_L2_mu4_tile_SiTrk, &b_trig_L2_tilemufeature_L2_mu4_tile_SiTrk);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_trod", &trig_L2_tilemufeature_L2_mu4_trod, &b_trig_L2_tilemufeature_L2_mu4_trod);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4_trod_SiTrk", &trig_L2_tilemufeature_L2_mu4_trod_SiTrk, &b_trig_L2_tilemufeature_L2_mu4_trod_SiTrk);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu4mu6_DiMu", &trig_L2_tilemufeature_L2_mu4mu6_DiMu, &b_trig_L2_tilemufeature_L2_mu4mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu6", &trig_L2_tilemufeature_L2_mu6, &b_trig_L2_tilemufeature_L2_mu6);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu6_DiMu", &trig_L2_tilemufeature_L2_mu6_DiMu, &b_trig_L2_tilemufeature_L2_mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu6_DiMu_FS", &trig_L2_tilemufeature_L2_mu6_DiMu_FS, &b_trig_L2_tilemufeature_L2_mu6_DiMu_FS);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu6_DiMu_FS_noOS", &trig_L2_tilemufeature_L2_mu6_DiMu_FS_noOS, &b_trig_L2_tilemufeature_L2_mu6_DiMu_FS_noOS);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu6_Jpsie5e3", &trig_L2_tilemufeature_L2_mu6_Jpsie5e3, &b_trig_L2_tilemufeature_L2_mu6_Jpsie5e3);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu6_MG", &trig_L2_tilemufeature_L2_mu6_MG, &b_trig_L2_tilemufeature_L2_mu6_MG);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu6_MSonly", &trig_L2_tilemufeature_L2_mu6_MSonly, &b_trig_L2_tilemufeature_L2_mu6_MSonly);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu6_SiTrk", &trig_L2_tilemufeature_L2_mu6_SiTrk, &b_trig_L2_tilemufeature_L2_mu6_SiTrk);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu6_Trk_Jpsi_loose", &trig_L2_tilemufeature_L2_mu6_Trk_Jpsi_loose, &b_trig_L2_tilemufeature_L2_mu6_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu6_Trk_Jpsi_loose_FS", &trig_L2_tilemufeature_L2_mu6_Trk_Jpsi_loose_FS, &b_trig_L2_tilemufeature_L2_mu6_Trk_Jpsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu6_Trk_Upsi_loose_FS", &trig_L2_tilemufeature_L2_mu6_Trk_Upsi_loose_FS, &b_trig_L2_tilemufeature_L2_mu6_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_tilemufeature_L2_mu6_passHLT", &trig_L2_tilemufeature_L2_mu6_passHLT, &b_trig_L2_tilemufeature_L2_mu6_passHLT);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_n", &trig_L2_tiletrackmufeature_n, &b_trig_L2_tiletrackmufeature_n);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_pt", &trig_L2_tiletrackmufeature_pt, &b_trig_L2_tiletrackmufeature_pt);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_eta", &trig_L2_tiletrackmufeature_eta, &b_trig_L2_tiletrackmufeature_eta);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_phi", &trig_L2_tiletrackmufeature_phi, &b_trig_L2_tiletrackmufeature_phi);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_PtTR_Trk", &trig_L2_tiletrackmufeature_PtTR_Trk, &b_trig_L2_tiletrackmufeature_PtTR_Trk);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_EtaTR_Trk", &trig_L2_tiletrackmufeature_EtaTR_Trk, &b_trig_L2_tiletrackmufeature_EtaTR_Trk);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_PhiTR_Trk", &trig_L2_tiletrackmufeature_PhiTR_Trk, &b_trig_L2_tiletrackmufeature_PhiTR_Trk);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_Typ_IDTrk", &trig_L2_tiletrackmufeature_Typ_IDTrk, &b_trig_L2_tiletrackmufeature_Typ_IDTrk);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_2mu10", &trig_L2_tiletrackmufeature_L2_2mu10, &b_trig_L2_tiletrackmufeature_L2_2mu10);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_2mu4", &trig_L2_tiletrackmufeature_L2_2mu4, &b_trig_L2_tiletrackmufeature_L2_2mu4);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_2mu4_DiMu", &trig_L2_tiletrackmufeature_L2_2mu4_DiMu, &b_trig_L2_tiletrackmufeature_L2_2mu4_DiMu);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_2mu4_DiMu_SiTrk", &trig_L2_tiletrackmufeature_L2_2mu4_DiMu_SiTrk, &b_trig_L2_tiletrackmufeature_L2_2mu4_DiMu_SiTrk);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noOS", &trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noOS, &b_trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noOS);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noOS_passL2", &trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noOS_passL2, &b_trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noOS_passL2);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noVtx_noOS", &trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noVtx_noOS, &b_trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noVtx_noOS_passL2", &trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noVtx_noOS_passL2, &b_trig_L2_tiletrackmufeature_L2_2mu4_DiMu_noVtx_noOS_passL2);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_2mu4_MSonly", &trig_L2_tiletrackmufeature_L2_2mu4_MSonly, &b_trig_L2_tiletrackmufeature_L2_2mu4_MSonly);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_2mu6", &trig_L2_tiletrackmufeature_L2_2mu6, &b_trig_L2_tiletrackmufeature_L2_2mu6);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_2mu6_DiMu", &trig_L2_tiletrackmufeature_L2_2mu6_DiMu, &b_trig_L2_tiletrackmufeature_L2_2mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_2mu6_DiMu_noVtx_noOS", &trig_L2_tiletrackmufeature_L2_2mu6_DiMu_noVtx_noOS, &b_trig_L2_tiletrackmufeature_L2_2mu6_DiMu_noVtx_noOS);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU0", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU0, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU0);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU0_MU6", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU0_MU6, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU0_MU6);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU10", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU10, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU10);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU6", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU6, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_2MU6);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM_EMPTY);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_COMM_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_EM3", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_EM3, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_EM3);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_EMPTY", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_EMPTY, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_EMPTY);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_J5", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_J5, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_J5);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU0_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU10", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU10, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU10);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU10_EMPTY", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU10_EMPTY, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU10_EMPTY);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU15", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU15, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU15);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU20", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU20, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU20);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_EM3", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_EM3, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_EM3);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_EMPTY", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_EMPTY, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_EMPTY);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_J5", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_J5, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_J5);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED", &trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED, &b_trig_L2_tiletrackmufeature_L2_L1ItemStreamer_L1_MU6_UNPAIRED);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu10", &trig_L2_tiletrackmufeature_L2_mu10, &b_trig_L2_tiletrackmufeature_L2_mu10);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu10_MG", &trig_L2_tiletrackmufeature_L2_mu10_MG, &b_trig_L2_tiletrackmufeature_L2_mu10_MG);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu10_MSonly", &trig_L2_tiletrackmufeature_L2_mu10_MSonly, &b_trig_L2_tiletrackmufeature_L2_mu10_MSonly);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu10_NoIDTrkCut", &trig_L2_tiletrackmufeature_L2_mu10_NoIDTrkCut, &b_trig_L2_tiletrackmufeature_L2_mu10_NoIDTrkCut);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu10_SiTrk", &trig_L2_tiletrackmufeature_L2_mu10_SiTrk, &b_trig_L2_tiletrackmufeature_L2_mu10_SiTrk);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu10_passHLT", &trig_L2_tiletrackmufeature_L2_mu10_passHLT, &b_trig_L2_tiletrackmufeature_L2_mu10_passHLT);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu10i_loose", &trig_L2_tiletrackmufeature_L2_mu10i_loose, &b_trig_L2_tiletrackmufeature_L2_mu10i_loose);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu13", &trig_L2_tiletrackmufeature_L2_mu13, &b_trig_L2_tiletrackmufeature_L2_mu13);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu15", &trig_L2_tiletrackmufeature_L2_mu15, &b_trig_L2_tiletrackmufeature_L2_mu15);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu20", &trig_L2_tiletrackmufeature_L2_mu20, &b_trig_L2_tiletrackmufeature_L2_mu20);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu20_MSonly", &trig_L2_tiletrackmufeature_L2_mu20_MSonly, &b_trig_L2_tiletrackmufeature_L2_mu20_MSonly);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu20_passHLT", &trig_L2_tiletrackmufeature_L2_mu20_passHLT, &b_trig_L2_tiletrackmufeature_L2_mu20_passHLT);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4", &trig_L2_tiletrackmufeature_L2_mu4, &b_trig_L2_tiletrackmufeature_L2_mu4);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_DiMu", &trig_L2_tiletrackmufeature_L2_mu4_DiMu, &b_trig_L2_tiletrackmufeature_L2_mu4_DiMu);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_DiMu_FS", &trig_L2_tiletrackmufeature_L2_mu4_DiMu_FS, &b_trig_L2_tiletrackmufeature_L2_mu4_DiMu_FS);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_DiMu_FS_noOS", &trig_L2_tiletrackmufeature_L2_mu4_DiMu_FS_noOS, &b_trig_L2_tiletrackmufeature_L2_mu4_DiMu_FS_noOS);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_L2MSonly_EFFS_passL2", &trig_L2_tiletrackmufeature_L2_mu4_L2MSonly_EFFS_passL2, &b_trig_L2_tiletrackmufeature_L2_mu4_L2MSonly_EFFS_passL2);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_MB2_noL2_EFFS", &trig_L2_tiletrackmufeature_L2_mu4_MB2_noL2_EFFS, &b_trig_L2_tiletrackmufeature_L2_mu4_MB2_noL2_EFFS);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_MG", &trig_L2_tiletrackmufeature_L2_mu4_MG, &b_trig_L2_tiletrackmufeature_L2_mu4_MG);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_MSonly", &trig_L2_tiletrackmufeature_L2_mu4_MSonly, &b_trig_L2_tiletrackmufeature_L2_mu4_MSonly);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_MSonly_EFFS_passL2", &trig_L2_tiletrackmufeature_L2_mu4_MSonly_EFFS_passL2, &b_trig_L2_tiletrackmufeature_L2_mu4_MSonly_EFFS_passL2);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_MSonly_Trk_Jpsi_loose", &trig_L2_tiletrackmufeature_L2_mu4_MSonly_Trk_Jpsi_loose, &b_trig_L2_tiletrackmufeature_L2_mu4_MSonly_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_MSonly_Trk_Upsi_loose_FS", &trig_L2_tiletrackmufeature_L2_mu4_MSonly_Trk_Upsi_loose_FS, &b_trig_L2_tiletrackmufeature_L2_mu4_MSonly_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_NoIDTrkCut", &trig_L2_tiletrackmufeature_L2_mu4_NoIDTrkCut, &b_trig_L2_tiletrackmufeature_L2_mu4_NoIDTrkCut);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_SiTrk", &trig_L2_tiletrackmufeature_L2_mu4_SiTrk, &b_trig_L2_tiletrackmufeature_L2_mu4_SiTrk);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_Trk_Jpsi_loose", &trig_L2_tiletrackmufeature_L2_mu4_Trk_Jpsi_loose, &b_trig_L2_tiletrackmufeature_L2_mu4_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_Trk_Upsi_loose_FS", &trig_L2_tiletrackmufeature_L2_mu4_Trk_Upsi_loose_FS, &b_trig_L2_tiletrackmufeature_L2_mu4_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_mu6", &trig_L2_tiletrackmufeature_L2_mu4_mu6, &b_trig_L2_tiletrackmufeature_L2_mu4_mu6);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_passHLT", &trig_L2_tiletrackmufeature_L2_mu4_passHLT, &b_trig_L2_tiletrackmufeature_L2_mu4_passHLT);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_tile", &trig_L2_tiletrackmufeature_L2_mu4_tile, &b_trig_L2_tiletrackmufeature_L2_mu4_tile);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_tile_SiTrk", &trig_L2_tiletrackmufeature_L2_mu4_tile_SiTrk, &b_trig_L2_tiletrackmufeature_L2_mu4_tile_SiTrk);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_trod", &trig_L2_tiletrackmufeature_L2_mu4_trod, &b_trig_L2_tiletrackmufeature_L2_mu4_trod);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4_trod_SiTrk", &trig_L2_tiletrackmufeature_L2_mu4_trod_SiTrk, &b_trig_L2_tiletrackmufeature_L2_mu4_trod_SiTrk);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu4mu6_DiMu", &trig_L2_tiletrackmufeature_L2_mu4mu6_DiMu, &b_trig_L2_tiletrackmufeature_L2_mu4mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu6", &trig_L2_tiletrackmufeature_L2_mu6, &b_trig_L2_tiletrackmufeature_L2_mu6);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu6_DiMu", &trig_L2_tiletrackmufeature_L2_mu6_DiMu, &b_trig_L2_tiletrackmufeature_L2_mu6_DiMu);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu6_DiMu_FS", &trig_L2_tiletrackmufeature_L2_mu6_DiMu_FS, &b_trig_L2_tiletrackmufeature_L2_mu6_DiMu_FS);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu6_DiMu_FS_noOS", &trig_L2_tiletrackmufeature_L2_mu6_DiMu_FS_noOS, &b_trig_L2_tiletrackmufeature_L2_mu6_DiMu_FS_noOS);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu6_Jpsie5e3", &trig_L2_tiletrackmufeature_L2_mu6_Jpsie5e3, &b_trig_L2_tiletrackmufeature_L2_mu6_Jpsie5e3);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu6_MG", &trig_L2_tiletrackmufeature_L2_mu6_MG, &b_trig_L2_tiletrackmufeature_L2_mu6_MG);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu6_MSonly", &trig_L2_tiletrackmufeature_L2_mu6_MSonly, &b_trig_L2_tiletrackmufeature_L2_mu6_MSonly);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu6_SiTrk", &trig_L2_tiletrackmufeature_L2_mu6_SiTrk, &b_trig_L2_tiletrackmufeature_L2_mu6_SiTrk);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu6_Trk_Jpsi_loose", &trig_L2_tiletrackmufeature_L2_mu6_Trk_Jpsi_loose, &b_trig_L2_tiletrackmufeature_L2_mu6_Trk_Jpsi_loose);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu6_Trk_Jpsi_loose_FS", &trig_L2_tiletrackmufeature_L2_mu6_Trk_Jpsi_loose_FS, &b_trig_L2_tiletrackmufeature_L2_mu6_Trk_Jpsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu6_Trk_Upsi_loose_FS", &trig_L2_tiletrackmufeature_L2_mu6_Trk_Upsi_loose_FS, &b_trig_L2_tiletrackmufeature_L2_mu6_Trk_Upsi_loose_FS);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_L2_mu6_passHLT", &trig_L2_tiletrackmufeature_L2_mu6_passHLT, &b_trig_L2_tiletrackmufeature_L2_mu6_passHLT);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_tilemu_index", &trig_L2_tiletrackmufeature_tilemu_index, &b_trig_L2_tiletrackmufeature_tilemu_index);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_algorithmId", &trig_L2_tiletrackmufeature_idtrk_algorithmId, &b_trig_L2_tiletrackmufeature_idtrk_algorithmId);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_trackStatus", &trig_L2_tiletrackmufeature_idtrk_trackStatus, &b_trig_L2_tiletrackmufeature_idtrk_trackStatus);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_chi2Ndof", &trig_L2_tiletrackmufeature_idtrk_chi2Ndof, &b_trig_L2_tiletrackmufeature_idtrk_chi2Ndof);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_nStrawHits", &trig_L2_tiletrackmufeature_idtrk_nStrawHits, &b_trig_L2_tiletrackmufeature_idtrk_nStrawHits);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_nHighThrHits", &trig_L2_tiletrackmufeature_idtrk_nHighThrHits, &b_trig_L2_tiletrackmufeature_idtrk_nHighThrHits);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_nPixelSpacePoints", &trig_L2_tiletrackmufeature_idtrk_nPixelSpacePoints, &b_trig_L2_tiletrackmufeature_idtrk_nPixelSpacePoints);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_nSCT_SpacePoints", &trig_L2_tiletrackmufeature_idtrk_nSCT_SpacePoints, &b_trig_L2_tiletrackmufeature_idtrk_nSCT_SpacePoints);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_hitPattern", &trig_L2_tiletrackmufeature_idtrk_hitPattern, &b_trig_L2_tiletrackmufeature_idtrk_hitPattern);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_nStraw", &trig_L2_tiletrackmufeature_idtrk_nStraw, &b_trig_L2_tiletrackmufeature_idtrk_nStraw);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_nStrawTime", &trig_L2_tiletrackmufeature_idtrk_nStrawTime, &b_trig_L2_tiletrackmufeature_idtrk_nStrawTime);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_a0", &trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_a0, &b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_a0);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_z0", &trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_z0, &b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_z0);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_phi0", &trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_phi0, &b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_phi0);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_eta", &trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_eta, &b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_eta);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_pt", &trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_pt, &b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_pt);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_covariance", &trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_covariance, &b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_covariance);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_hasidtrkfitpar", &trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_hasidtrkfitpar, &b_trig_L2_tiletrackmufeature_idtrk_idtrkfitpar_hasidtrkfitpar);
   fChain->SetBranchAddress("trig_L2_tiletrackmufeature_idtrk_hasidtrk", &trig_L2_tiletrackmufeature_idtrk_hasidtrk, &b_trig_L2_tiletrackmufeature_idtrk_hasidtrk);
   fChain->SetBranchAddress("trig_EF_trigmuonef_n", &trig_EF_trigmuonef_n, &b_trig_EF_trigmuonef_n);
   fChain->SetBranchAddress("trig_EF_trigmuonef_RoINum", &trig_EF_trigmuonef_RoINum, &b_trig_EF_trigmuonef_RoINum);
   fChain->SetBranchAddress("trig_EF_trigmuonef_NSegments", &trig_EF_trigmuonef_NSegments, &b_trig_EF_trigmuonef_NSegments);
   fChain->SetBranchAddress("trig_EF_trigmuonef_NMdtHits", &trig_EF_trigmuonef_NMdtHits, &b_trig_EF_trigmuonef_NMdtHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_NRpcHits", &trig_EF_trigmuonef_NRpcHits, &b_trig_EF_trigmuonef_NRpcHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_NTgcHits", &trig_EF_trigmuonef_NTgcHits, &b_trig_EF_trigmuonef_NTgcHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_NCscHits", &trig_EF_trigmuonef_NCscHits, &b_trig_EF_trigmuonef_NCscHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_EtaPreviousLevel", &trig_EF_trigmuonef_EtaPreviousLevel, &b_trig_EF_trigmuonef_EtaPreviousLevel);
   fChain->SetBranchAddress("trig_EF_trigmuonef_PhiPreviousLevel", &trig_EF_trigmuonef_PhiPreviousLevel, &b_trig_EF_trigmuonef_PhiPreviousLevel);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_n", &trig_EF_trigmuonef_track_n, &b_trig_EF_trigmuonef_track_n);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MuonType", &trig_EF_trigmuonef_track_MuonType, &b_trig_EF_trigmuonef_track_MuonType);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_pt", &trig_EF_trigmuonef_track_MS_pt, &b_trig_EF_trigmuonef_track_MS_pt);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_eta", &trig_EF_trigmuonef_track_MS_eta, &b_trig_EF_trigmuonef_track_MS_eta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_phi", &trig_EF_trigmuonef_track_MS_phi, &b_trig_EF_trigmuonef_track_MS_phi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_charge", &trig_EF_trigmuonef_track_MS_charge, &b_trig_EF_trigmuonef_track_MS_charge);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_d0", &trig_EF_trigmuonef_track_MS_d0, &b_trig_EF_trigmuonef_track_MS_d0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_z0", &trig_EF_trigmuonef_track_MS_z0, &b_trig_EF_trigmuonef_track_MS_z0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_chi2", &trig_EF_trigmuonef_track_MS_chi2, &b_trig_EF_trigmuonef_track_MS_chi2);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_chi2prob", &trig_EF_trigmuonef_track_MS_chi2prob, &b_trig_EF_trigmuonef_track_MS_chi2prob);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_posX", &trig_EF_trigmuonef_track_MS_posX, &b_trig_EF_trigmuonef_track_MS_posX);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_posY", &trig_EF_trigmuonef_track_MS_posY, &b_trig_EF_trigmuonef_track_MS_posY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_posZ", &trig_EF_trigmuonef_track_MS_posZ, &b_trig_EF_trigmuonef_track_MS_posZ);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NRpcHitsPhi", &trig_EF_trigmuonef_track_MS_NRpcHitsPhi, &b_trig_EF_trigmuonef_track_MS_NRpcHitsPhi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NTgcHitsPhi", &trig_EF_trigmuonef_track_MS_NTgcHitsPhi, &b_trig_EF_trigmuonef_track_MS_NTgcHitsPhi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NCscHitsPhi", &trig_EF_trigmuonef_track_MS_NCscHitsPhi, &b_trig_EF_trigmuonef_track_MS_NCscHitsPhi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NRpcHitsEta", &trig_EF_trigmuonef_track_MS_NRpcHitsEta, &b_trig_EF_trigmuonef_track_MS_NRpcHitsEta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NTgcHitsEta", &trig_EF_trigmuonef_track_MS_NTgcHitsEta, &b_trig_EF_trigmuonef_track_MS_NTgcHitsEta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NCscHitsEta", &trig_EF_trigmuonef_track_MS_NCscHitsEta, &b_trig_EF_trigmuonef_track_MS_NCscHitsEta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_NMdtHits", &trig_EF_trigmuonef_track_MS_NMdtHits, &b_trig_EF_trigmuonef_track_MS_NMdtHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_MS_hasMS", &trig_EF_trigmuonef_track_MS_hasMS, &b_trig_EF_trigmuonef_track_MS_hasMS);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_pt", &trig_EF_trigmuonef_track_SA_pt, &b_trig_EF_trigmuonef_track_SA_pt);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_eta", &trig_EF_trigmuonef_track_SA_eta, &b_trig_EF_trigmuonef_track_SA_eta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_phi", &trig_EF_trigmuonef_track_SA_phi, &b_trig_EF_trigmuonef_track_SA_phi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_charge", &trig_EF_trigmuonef_track_SA_charge, &b_trig_EF_trigmuonef_track_SA_charge);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_d0", &trig_EF_trigmuonef_track_SA_d0, &b_trig_EF_trigmuonef_track_SA_d0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_z0", &trig_EF_trigmuonef_track_SA_z0, &b_trig_EF_trigmuonef_track_SA_z0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_chi2", &trig_EF_trigmuonef_track_SA_chi2, &b_trig_EF_trigmuonef_track_SA_chi2);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_chi2prob", &trig_EF_trigmuonef_track_SA_chi2prob, &b_trig_EF_trigmuonef_track_SA_chi2prob);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_posX", &trig_EF_trigmuonef_track_SA_posX, &b_trig_EF_trigmuonef_track_SA_posX);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_posY", &trig_EF_trigmuonef_track_SA_posY, &b_trig_EF_trigmuonef_track_SA_posY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_posZ", &trig_EF_trigmuonef_track_SA_posZ, &b_trig_EF_trigmuonef_track_SA_posZ);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_hasSA", &trig_EF_trigmuonef_track_SA_hasSA, &b_trig_EF_trigmuonef_track_SA_hasSA);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_pt", &trig_EF_trigmuonef_track_CB_pt, &b_trig_EF_trigmuonef_track_CB_pt);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_eta", &trig_EF_trigmuonef_track_CB_eta, &b_trig_EF_trigmuonef_track_CB_eta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_phi", &trig_EF_trigmuonef_track_CB_phi, &b_trig_EF_trigmuonef_track_CB_phi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_charge", &trig_EF_trigmuonef_track_CB_charge, &b_trig_EF_trigmuonef_track_CB_charge);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_d0", &trig_EF_trigmuonef_track_CB_d0, &b_trig_EF_trigmuonef_track_CB_d0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_z0", &trig_EF_trigmuonef_track_CB_z0, &b_trig_EF_trigmuonef_track_CB_z0);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_chi2", &trig_EF_trigmuonef_track_CB_chi2, &b_trig_EF_trigmuonef_track_CB_chi2);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_chi2prob", &trig_EF_trigmuonef_track_CB_chi2prob, &b_trig_EF_trigmuonef_track_CB_chi2prob);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_posX", &trig_EF_trigmuonef_track_CB_posX, &b_trig_EF_trigmuonef_track_CB_posX);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_posY", &trig_EF_trigmuonef_track_CB_posY, &b_trig_EF_trigmuonef_track_CB_posY);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_posZ", &trig_EF_trigmuonef_track_CB_posZ, &b_trig_EF_trigmuonef_track_CB_posZ);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_matchChi2", &trig_EF_trigmuonef_track_CB_matchChi2, &b_trig_EF_trigmuonef_track_CB_matchChi2);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_NIdSctHits", &trig_EF_trigmuonef_track_CB_NIdSctHits, &b_trig_EF_trigmuonef_track_CB_NIdSctHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_NIdPixelHits", &trig_EF_trigmuonef_track_CB_NIdPixelHits, &b_trig_EF_trigmuonef_track_CB_NIdPixelHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_NTrtHits", &trig_EF_trigmuonef_track_CB_NTrtHits, &b_trig_EF_trigmuonef_track_CB_NTrtHits);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_hasCB", &trig_EF_trigmuonef_track_CB_hasCB, &b_trig_EF_trigmuonef_track_CB_hasCB);
   fChain->SetBranchAddress("trig_EF_trigmugirl_n", &trig_EF_trigmugirl_n, &b_trig_EF_trigmugirl_n);
   fChain->SetBranchAddress("trig_EF_trigmugirl_RoINum", &trig_EF_trigmugirl_RoINum, &b_trig_EF_trigmugirl_RoINum);
   fChain->SetBranchAddress("trig_EF_trigmugirl_NSegments", &trig_EF_trigmugirl_NSegments, &b_trig_EF_trigmugirl_NSegments);
   fChain->SetBranchAddress("trig_EF_trigmugirl_NMdtHits", &trig_EF_trigmugirl_NMdtHits, &b_trig_EF_trigmugirl_NMdtHits);
   fChain->SetBranchAddress("trig_EF_trigmugirl_NRpcHits", &trig_EF_trigmugirl_NRpcHits, &b_trig_EF_trigmugirl_NRpcHits);
   fChain->SetBranchAddress("trig_EF_trigmugirl_NTgcHits", &trig_EF_trigmugirl_NTgcHits, &b_trig_EF_trigmugirl_NTgcHits);
   fChain->SetBranchAddress("trig_EF_trigmugirl_NCscHits", &trig_EF_trigmugirl_NCscHits, &b_trig_EF_trigmugirl_NCscHits);
   fChain->SetBranchAddress("trig_EF_trigmugirl_EtaPreviousLevel", &trig_EF_trigmugirl_EtaPreviousLevel, &b_trig_EF_trigmugirl_EtaPreviousLevel);
   fChain->SetBranchAddress("trig_EF_trigmugirl_PhiPreviousLevel", &trig_EF_trigmugirl_PhiPreviousLevel, &b_trig_EF_trigmugirl_PhiPreviousLevel);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_n", &trig_EF_trigmugirl_track_n, &b_trig_EF_trigmugirl_track_n);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MuonType", &trig_EF_trigmugirl_track_MuonType, &b_trig_EF_trigmugirl_track_MuonType);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_pt", &trig_EF_trigmugirl_track_MS_pt, &b_trig_EF_trigmugirl_track_MS_pt);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_eta", &trig_EF_trigmugirl_track_MS_eta, &b_trig_EF_trigmugirl_track_MS_eta);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_phi", &trig_EF_trigmugirl_track_MS_phi, &b_trig_EF_trigmugirl_track_MS_phi);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_charge", &trig_EF_trigmugirl_track_MS_charge, &b_trig_EF_trigmugirl_track_MS_charge);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_d0", &trig_EF_trigmugirl_track_MS_d0, &b_trig_EF_trigmugirl_track_MS_d0);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_z0", &trig_EF_trigmugirl_track_MS_z0, &b_trig_EF_trigmugirl_track_MS_z0);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_chi2", &trig_EF_trigmugirl_track_MS_chi2, &b_trig_EF_trigmugirl_track_MS_chi2);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_chi2prob", &trig_EF_trigmugirl_track_MS_chi2prob, &b_trig_EF_trigmugirl_track_MS_chi2prob);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_posX", &trig_EF_trigmugirl_track_MS_posX, &b_trig_EF_trigmugirl_track_MS_posX);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_posY", &trig_EF_trigmugirl_track_MS_posY, &b_trig_EF_trigmugirl_track_MS_posY);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_posZ", &trig_EF_trigmugirl_track_MS_posZ, &b_trig_EF_trigmugirl_track_MS_posZ);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_NRpcHitsPhi", &trig_EF_trigmugirl_track_MS_NRpcHitsPhi, &b_trig_EF_trigmugirl_track_MS_NRpcHitsPhi);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_NTgcHitsPhi", &trig_EF_trigmugirl_track_MS_NTgcHitsPhi, &b_trig_EF_trigmugirl_track_MS_NTgcHitsPhi);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_NCscHitsPhi", &trig_EF_trigmugirl_track_MS_NCscHitsPhi, &b_trig_EF_trigmugirl_track_MS_NCscHitsPhi);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_NRpcHitsEta", &trig_EF_trigmugirl_track_MS_NRpcHitsEta, &b_trig_EF_trigmugirl_track_MS_NRpcHitsEta);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_NTgcHitsEta", &trig_EF_trigmugirl_track_MS_NTgcHitsEta, &b_trig_EF_trigmugirl_track_MS_NTgcHitsEta);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_NCscHitsEta", &trig_EF_trigmugirl_track_MS_NCscHitsEta, &b_trig_EF_trigmugirl_track_MS_NCscHitsEta);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_NMdtHits", &trig_EF_trigmugirl_track_MS_NMdtHits, &b_trig_EF_trigmugirl_track_MS_NMdtHits);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_MS_hasMS", &trig_EF_trigmugirl_track_MS_hasMS, &b_trig_EF_trigmugirl_track_MS_hasMS);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_SA_pt", &trig_EF_trigmugirl_track_SA_pt, &b_trig_EF_trigmugirl_track_SA_pt);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_SA_eta", &trig_EF_trigmugirl_track_SA_eta, &b_trig_EF_trigmugirl_track_SA_eta);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_SA_phi", &trig_EF_trigmugirl_track_SA_phi, &b_trig_EF_trigmugirl_track_SA_phi);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_SA_charge", &trig_EF_trigmugirl_track_SA_charge, &b_trig_EF_trigmugirl_track_SA_charge);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_SA_d0", &trig_EF_trigmugirl_track_SA_d0, &b_trig_EF_trigmugirl_track_SA_d0);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_SA_z0", &trig_EF_trigmugirl_track_SA_z0, &b_trig_EF_trigmugirl_track_SA_z0);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_SA_chi2", &trig_EF_trigmugirl_track_SA_chi2, &b_trig_EF_trigmugirl_track_SA_chi2);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_SA_chi2prob", &trig_EF_trigmugirl_track_SA_chi2prob, &b_trig_EF_trigmugirl_track_SA_chi2prob);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_SA_posX", &trig_EF_trigmugirl_track_SA_posX, &b_trig_EF_trigmugirl_track_SA_posX);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_SA_posY", &trig_EF_trigmugirl_track_SA_posY, &b_trig_EF_trigmugirl_track_SA_posY);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_SA_posZ", &trig_EF_trigmugirl_track_SA_posZ, &b_trig_EF_trigmugirl_track_SA_posZ);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_SA_hasSA", &trig_EF_trigmugirl_track_SA_hasSA, &b_trig_EF_trigmugirl_track_SA_hasSA);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_pt", &trig_EF_trigmugirl_track_CB_pt, &b_trig_EF_trigmugirl_track_CB_pt);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_eta", &trig_EF_trigmugirl_track_CB_eta, &b_trig_EF_trigmugirl_track_CB_eta);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_phi", &trig_EF_trigmugirl_track_CB_phi, &b_trig_EF_trigmugirl_track_CB_phi);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_charge", &trig_EF_trigmugirl_track_CB_charge, &b_trig_EF_trigmugirl_track_CB_charge);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_d0", &trig_EF_trigmugirl_track_CB_d0, &b_trig_EF_trigmugirl_track_CB_d0);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_z0", &trig_EF_trigmugirl_track_CB_z0, &b_trig_EF_trigmugirl_track_CB_z0);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_chi2", &trig_EF_trigmugirl_track_CB_chi2, &b_trig_EF_trigmugirl_track_CB_chi2);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_chi2prob", &trig_EF_trigmugirl_track_CB_chi2prob, &b_trig_EF_trigmugirl_track_CB_chi2prob);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_posX", &trig_EF_trigmugirl_track_CB_posX, &b_trig_EF_trigmugirl_track_CB_posX);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_posY", &trig_EF_trigmugirl_track_CB_posY, &b_trig_EF_trigmugirl_track_CB_posY);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_posZ", &trig_EF_trigmugirl_track_CB_posZ, &b_trig_EF_trigmugirl_track_CB_posZ);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_matchChi2", &trig_EF_trigmugirl_track_CB_matchChi2, &b_trig_EF_trigmugirl_track_CB_matchChi2);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_NIdSctHits", &trig_EF_trigmugirl_track_CB_NIdSctHits, &b_trig_EF_trigmugirl_track_CB_NIdSctHits);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_NIdPixelHits", &trig_EF_trigmugirl_track_CB_NIdPixelHits, &b_trig_EF_trigmugirl_track_CB_NIdPixelHits);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_NTrtHits", &trig_EF_trigmugirl_track_CB_NTrtHits, &b_trig_EF_trigmugirl_track_CB_NTrtHits);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_hasCB", &trig_EF_trigmugirl_track_CB_hasCB, &b_trig_EF_trigmugirl_track_CB_hasCB);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_n", &trig_L2_sitrack_muon_n, &b_trig_L2_sitrack_muon_n);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_algorithmId", &trig_L2_sitrack_muon_algorithmId, &b_trig_L2_sitrack_muon_algorithmId);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_trackStatus", &trig_L2_sitrack_muon_trackStatus, &b_trig_L2_sitrack_muon_trackStatus);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_chi2Ndof", &trig_L2_sitrack_muon_chi2Ndof, &b_trig_L2_sitrack_muon_chi2Ndof);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_nStrawHits", &trig_L2_sitrack_muon_nStrawHits, &b_trig_L2_sitrack_muon_nStrawHits);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_nHighThrHits", &trig_L2_sitrack_muon_nHighThrHits, &b_trig_L2_sitrack_muon_nHighThrHits);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_nPixelSpacePoints", &trig_L2_sitrack_muon_nPixelSpacePoints, &b_trig_L2_sitrack_muon_nPixelSpacePoints);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_nSCT_SpacePoints", &trig_L2_sitrack_muon_nSCT_SpacePoints, &b_trig_L2_sitrack_muon_nSCT_SpacePoints);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_hitPattern", &trig_L2_sitrack_muon_hitPattern, &b_trig_L2_sitrack_muon_hitPattern);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_nStraw", &trig_L2_sitrack_muon_nStraw, &b_trig_L2_sitrack_muon_nStraw);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_nStrawTime", &trig_L2_sitrack_muon_nStrawTime, &b_trig_L2_sitrack_muon_nStrawTime);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_a0", &trig_L2_sitrack_muon_a0, &b_trig_L2_sitrack_muon_a0);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_z0", &trig_L2_sitrack_muon_z0, &b_trig_L2_sitrack_muon_z0);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_phi0", &trig_L2_sitrack_muon_phi0, &b_trig_L2_sitrack_muon_phi0);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_eta", &trig_L2_sitrack_muon_eta, &b_trig_L2_sitrack_muon_eta);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_pt", &trig_L2_sitrack_muon_pt, &b_trig_L2_sitrack_muon_pt);
   fChain->SetBranchAddress("trig_L2_sitrack_muon_covariance", &trig_L2_sitrack_muon_covariance, &b_trig_L2_sitrack_muon_covariance);
   fChain->SetBranchAddress("trig_L2_idscan_muon_n", &trig_L2_idscan_muon_n, &b_trig_L2_idscan_muon_n);
   fChain->SetBranchAddress("trig_L2_idscan_muon_algorithmId", &trig_L2_idscan_muon_algorithmId, &b_trig_L2_idscan_muon_algorithmId);
   fChain->SetBranchAddress("trig_L2_idscan_muon_trackStatus", &trig_L2_idscan_muon_trackStatus, &b_trig_L2_idscan_muon_trackStatus);
   fChain->SetBranchAddress("trig_L2_idscan_muon_chi2Ndof", &trig_L2_idscan_muon_chi2Ndof, &b_trig_L2_idscan_muon_chi2Ndof);
   fChain->SetBranchAddress("trig_L2_idscan_muon_nStrawHits", &trig_L2_idscan_muon_nStrawHits, &b_trig_L2_idscan_muon_nStrawHits);
   fChain->SetBranchAddress("trig_L2_idscan_muon_nHighThrHits", &trig_L2_idscan_muon_nHighThrHits, &b_trig_L2_idscan_muon_nHighThrHits);
   fChain->SetBranchAddress("trig_L2_idscan_muon_nPixelSpacePoints", &trig_L2_idscan_muon_nPixelSpacePoints, &b_trig_L2_idscan_muon_nPixelSpacePoints);
   fChain->SetBranchAddress("trig_L2_idscan_muon_nSCT_SpacePoints", &trig_L2_idscan_muon_nSCT_SpacePoints, &b_trig_L2_idscan_muon_nSCT_SpacePoints);
   fChain->SetBranchAddress("trig_L2_idscan_muon_hitPattern", &trig_L2_idscan_muon_hitPattern, &b_trig_L2_idscan_muon_hitPattern);
   fChain->SetBranchAddress("trig_L2_idscan_muon_nStraw", &trig_L2_idscan_muon_nStraw, &b_trig_L2_idscan_muon_nStraw);
   fChain->SetBranchAddress("trig_L2_idscan_muon_nStrawTime", &trig_L2_idscan_muon_nStrawTime, &b_trig_L2_idscan_muon_nStrawTime);
   fChain->SetBranchAddress("trig_L2_idscan_muon_a0", &trig_L2_idscan_muon_a0, &b_trig_L2_idscan_muon_a0);
   fChain->SetBranchAddress("trig_L2_idscan_muon_z0", &trig_L2_idscan_muon_z0, &b_trig_L2_idscan_muon_z0);
   fChain->SetBranchAddress("trig_L2_idscan_muon_phi0", &trig_L2_idscan_muon_phi0, &b_trig_L2_idscan_muon_phi0);
   fChain->SetBranchAddress("trig_L2_idscan_muon_eta", &trig_L2_idscan_muon_eta, &b_trig_L2_idscan_muon_eta);
   fChain->SetBranchAddress("trig_L2_idscan_muon_pt", &trig_L2_idscan_muon_pt, &b_trig_L2_idscan_muon_pt);
   fChain->SetBranchAddress("trig_L2_idscan_muon_covariance", &trig_L2_idscan_muon_covariance, &b_trig_L2_idscan_muon_covariance);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_n", &trig_L2_sitrack_isomuon_n, &b_trig_L2_sitrack_isomuon_n);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_algorithmId", &trig_L2_sitrack_isomuon_algorithmId, &b_trig_L2_sitrack_isomuon_algorithmId);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_trackStatus", &trig_L2_sitrack_isomuon_trackStatus, &b_trig_L2_sitrack_isomuon_trackStatus);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_chi2Ndof", &trig_L2_sitrack_isomuon_chi2Ndof, &b_trig_L2_sitrack_isomuon_chi2Ndof);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_nStrawHits", &trig_L2_sitrack_isomuon_nStrawHits, &b_trig_L2_sitrack_isomuon_nStrawHits);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_nHighThrHits", &trig_L2_sitrack_isomuon_nHighThrHits, &b_trig_L2_sitrack_isomuon_nHighThrHits);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_nPixelSpacePoints", &trig_L2_sitrack_isomuon_nPixelSpacePoints, &b_trig_L2_sitrack_isomuon_nPixelSpacePoints);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_nSCT_SpacePoints", &trig_L2_sitrack_isomuon_nSCT_SpacePoints, &b_trig_L2_sitrack_isomuon_nSCT_SpacePoints);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_hitPattern", &trig_L2_sitrack_isomuon_hitPattern, &b_trig_L2_sitrack_isomuon_hitPattern);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_nStraw", &trig_L2_sitrack_isomuon_nStraw, &b_trig_L2_sitrack_isomuon_nStraw);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_nStrawTime", &trig_L2_sitrack_isomuon_nStrawTime, &b_trig_L2_sitrack_isomuon_nStrawTime);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_a0", &trig_L2_sitrack_isomuon_a0, &b_trig_L2_sitrack_isomuon_a0);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_z0", &trig_L2_sitrack_isomuon_z0, &b_trig_L2_sitrack_isomuon_z0);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_phi0", &trig_L2_sitrack_isomuon_phi0, &b_trig_L2_sitrack_isomuon_phi0);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_eta", &trig_L2_sitrack_isomuon_eta, &b_trig_L2_sitrack_isomuon_eta);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_pt", &trig_L2_sitrack_isomuon_pt, &b_trig_L2_sitrack_isomuon_pt);
   fChain->SetBranchAddress("trig_L2_sitrack_isomuon_covariance", &trig_L2_sitrack_isomuon_covariance, &b_trig_L2_sitrack_isomuon_covariance);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_n", &trig_L2_idscan_isomuon_n, &b_trig_L2_idscan_isomuon_n);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_algorithmId", &trig_L2_idscan_isomuon_algorithmId, &b_trig_L2_idscan_isomuon_algorithmId);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_trackStatus", &trig_L2_idscan_isomuon_trackStatus, &b_trig_L2_idscan_isomuon_trackStatus);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_chi2Ndof", &trig_L2_idscan_isomuon_chi2Ndof, &b_trig_L2_idscan_isomuon_chi2Ndof);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_nStrawHits", &trig_L2_idscan_isomuon_nStrawHits, &b_trig_L2_idscan_isomuon_nStrawHits);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_nHighThrHits", &trig_L2_idscan_isomuon_nHighThrHits, &b_trig_L2_idscan_isomuon_nHighThrHits);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_nPixelSpacePoints", &trig_L2_idscan_isomuon_nPixelSpacePoints, &b_trig_L2_idscan_isomuon_nPixelSpacePoints);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_nSCT_SpacePoints", &trig_L2_idscan_isomuon_nSCT_SpacePoints, &b_trig_L2_idscan_isomuon_nSCT_SpacePoints);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_hitPattern", &trig_L2_idscan_isomuon_hitPattern, &b_trig_L2_idscan_isomuon_hitPattern);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_nStraw", &trig_L2_idscan_isomuon_nStraw, &b_trig_L2_idscan_isomuon_nStraw);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_nStrawTime", &trig_L2_idscan_isomuon_nStrawTime, &b_trig_L2_idscan_isomuon_nStrawTime);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_a0", &trig_L2_idscan_isomuon_a0, &b_trig_L2_idscan_isomuon_a0);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_z0", &trig_L2_idscan_isomuon_z0, &b_trig_L2_idscan_isomuon_z0);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_phi0", &trig_L2_idscan_isomuon_phi0, &b_trig_L2_idscan_isomuon_phi0);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_eta", &trig_L2_idscan_isomuon_eta, &b_trig_L2_idscan_isomuon_eta);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_pt", &trig_L2_idscan_isomuon_pt, &b_trig_L2_idscan_isomuon_pt);
   fChain->SetBranchAddress("trig_L2_idscan_isomuon_covariance", &trig_L2_idscan_isomuon_covariance, &b_trig_L2_idscan_isomuon_covariance);
   fChain->SetBranchAddress("trig_RoI_L2_mu_n", &trig_RoI_L2_mu_n, &b_trig_RoI_L2_mu_n);
   fChain->SetBranchAddress("trig_RoI_L2_mu_type", &trig_RoI_L2_mu_type, &b_trig_RoI_L2_mu_type);
   fChain->SetBranchAddress("trig_RoI_L2_mu_lastStep", &trig_RoI_L2_mu_lastStep, &b_trig_RoI_L2_mu_lastStep);
   fChain->SetBranchAddress("trig_RoI_L2_mu_MuonFeature", &trig_RoI_L2_mu_MuonFeature, &b_trig_RoI_L2_mu_MuonFeature);
   fChain->SetBranchAddress("trig_RoI_L2_mu_MuonFeatureStatus", &trig_RoI_L2_mu_MuonFeatureStatus, &b_trig_RoI_L2_mu_MuonFeatureStatus);
   fChain->SetBranchAddress("trig_RoI_L2_mu_MuonFeatureDetails", &trig_RoI_L2_mu_MuonFeatureDetails, &b_trig_RoI_L2_mu_MuonFeatureDetails);
   fChain->SetBranchAddress("trig_RoI_L2_mu_MuonFeatureDetailsStatus", &trig_RoI_L2_mu_MuonFeatureDetailsStatus, &b_trig_RoI_L2_mu_MuonFeatureDetailsStatus);
   fChain->SetBranchAddress("trig_RoI_L2_mu_CombinedMuonFeature", &trig_RoI_L2_mu_CombinedMuonFeature, &b_trig_RoI_L2_mu_CombinedMuonFeature);
   fChain->SetBranchAddress("trig_RoI_L2_mu_CombinedMuonFeatureStatus", &trig_RoI_L2_mu_CombinedMuonFeatureStatus, &b_trig_RoI_L2_mu_CombinedMuonFeatureStatus);
   fChain->SetBranchAddress("trig_RoI_L2_mu_IsoMuonFeature", &trig_RoI_L2_mu_IsoMuonFeature, &b_trig_RoI_L2_mu_IsoMuonFeature);
   fChain->SetBranchAddress("trig_RoI_L2_mu_IsoMuonFeatureStatus", &trig_RoI_L2_mu_IsoMuonFeatureStatus, &b_trig_RoI_L2_mu_IsoMuonFeatureStatus);
   fChain->SetBranchAddress("trig_RoI_L2_mu_Muon_ROI", &trig_RoI_L2_mu_Muon_ROI, &b_trig_RoI_L2_mu_Muon_ROI);
   fChain->SetBranchAddress("trig_RoI_L2_mu_Muon_ROIStatus", &trig_RoI_L2_mu_Muon_ROIStatus, &b_trig_RoI_L2_mu_Muon_ROIStatus);
   fChain->SetBranchAddress("trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_Muon", &trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_Muon, &b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_Muon);
   fChain->SetBranchAddress("trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_MuonStatus", &trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_MuonStatus, &b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_MuonStatus);
   fChain->SetBranchAddress("trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_Muon", &trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_Muon, &b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_Muon);
   fChain->SetBranchAddress("trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_MuonStatus", &trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_MuonStatus, &b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_MuonStatus);
   fChain->SetBranchAddress("trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_muonIso", &trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_muonIso, &b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_muonIso);
   fChain->SetBranchAddress("trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_muonIsoStatus", &trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_muonIsoStatus, &b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigSiTrack_muonIsoStatus);
   fChain->SetBranchAddress("trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_muonIso", &trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_muonIso, &b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_muonIso);
   fChain->SetBranchAddress("trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_muonIsoStatus", &trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_muonIsoStatus, &b_trig_RoI_L2_mu_TrigInDetTrackCollection_TrigIDSCAN_muonIsoStatus);
   fChain->SetBranchAddress("trig_RoI_L2_TileMu_n", &trig_RoI_L2_TileMu_n, &b_trig_RoI_L2_TileMu_n);
   fChain->SetBranchAddress("trig_RoI_L2_TileMu_type", &trig_RoI_L2_TileMu_type, &b_trig_RoI_L2_TileMu_type);
   fChain->SetBranchAddress("trig_RoI_L2_TileMu_lastStep", &trig_RoI_L2_TileMu_lastStep, &b_trig_RoI_L2_TileMu_lastStep);
   fChain->SetBranchAddress("trig_RoI_L2_TileMu_TileMuFeature", &trig_RoI_L2_TileMu_TileMuFeature, &b_trig_RoI_L2_TileMu_TileMuFeature);
   fChain->SetBranchAddress("trig_RoI_L2_TileMu_TileMuFeatureStatus", &trig_RoI_L2_TileMu_TileMuFeatureStatus, &b_trig_RoI_L2_TileMu_TileMuFeatureStatus);
   fChain->SetBranchAddress("trig_RoI_L2_TileMu_TileTrackMuFeature", &trig_RoI_L2_TileMu_TileTrackMuFeature, &b_trig_RoI_L2_TileMu_TileTrackMuFeature);
   fChain->SetBranchAddress("trig_RoI_L2_TileMu_TileTrackMuFeatureStatus", &trig_RoI_L2_TileMu_TileTrackMuFeatureStatus, &b_trig_RoI_L2_TileMu_TileTrackMuFeatureStatus);
   fChain->SetBranchAddress("trig_RoI_L2_TileMu_Muon_ROI", &trig_RoI_L2_TileMu_Muon_ROI, &b_trig_RoI_L2_TileMu_Muon_ROI);
   fChain->SetBranchAddress("trig_RoI_L2_TileMu_Muon_ROIStatus", &trig_RoI_L2_TileMu_Muon_ROIStatus, &b_trig_RoI_L2_TileMu_Muon_ROIStatus);
   fChain->SetBranchAddress("trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigSiTrack_Tile", &trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigSiTrack_Tile, &b_trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigSiTrack_Tile);
   fChain->SetBranchAddress("trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigSiTrack_TileStatus", &trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigSiTrack_TileStatus, &b_trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigSiTrack_TileStatus);
   fChain->SetBranchAddress("trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigIDSCAN_Tile", &trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigIDSCAN_Tile, &b_trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigIDSCAN_Tile);
   fChain->SetBranchAddress("trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigIDSCAN_TileStatus", &trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigIDSCAN_TileStatus, &b_trig_RoI_L2_TileMu_TrigInDetTrackCollection_TrigIDSCAN_TileStatus);
   fChain->SetBranchAddress("trig_RoI_EF_mu_n", &trig_RoI_EF_mu_n, &b_trig_RoI_EF_mu_n);
   fChain->SetBranchAddress("trig_RoI_EF_mu_type", &trig_RoI_EF_mu_type, &b_trig_RoI_EF_mu_type);
   fChain->SetBranchAddress("trig_RoI_EF_mu_lastStep", &trig_RoI_EF_mu_lastStep, &b_trig_RoI_EF_mu_lastStep);
   fChain->SetBranchAddress("trig_RoI_EF_mu_Muon_ROI", &trig_RoI_EF_mu_Muon_ROI, &b_trig_RoI_EF_mu_Muon_ROI);
   fChain->SetBranchAddress("trig_RoI_EF_mu_Muon_ROIStatus", &trig_RoI_EF_mu_Muon_ROIStatus, &b_trig_RoI_EF_mu_Muon_ROIStatus);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFID", &trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFID, &b_trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFID);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFIDStatus", &trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFIDStatus, &b_trig_RoI_EF_mu_TrackCollection_InDetTrigTrackSlimmer_Muon_EFIDStatus);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainer", &trig_RoI_EF_mu_TrigMuonEFInfoContainer, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainer);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus", &trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirl", &trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirl, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirl);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirlStatus", &trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirlStatus, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuGirlStatus);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EF", &trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EF, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EF);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus", &trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus);
   fChain->SetBranchAddress("trig_RoI_EF_TileMu_n", &trig_RoI_EF_TileMu_n, &b_trig_RoI_EF_TileMu_n);
   fChain->SetBranchAddress("trig_RoI_EF_TileMu_type", &trig_RoI_EF_TileMu_type, &b_trig_RoI_EF_TileMu_type);
   fChain->SetBranchAddress("trig_RoI_EF_TileMu_lastStep", &trig_RoI_EF_TileMu_lastStep, &b_trig_RoI_EF_TileMu_lastStep);
   fChain->SetBranchAddress("trig_RoI_EF_TileMu_Muon_ROI", &trig_RoI_EF_TileMu_Muon_ROI, &b_trig_RoI_EF_TileMu_Muon_ROI);
   fChain->SetBranchAddress("trig_RoI_EF_TileMu_Muon_ROIStatus", &trig_RoI_EF_TileMu_Muon_ROIStatus, &b_trig_RoI_EF_TileMu_Muon_ROIStatus);
   fChain->SetBranchAddress("trig_RoI_EF_TileMu_TrigMuonEFContainer", &trig_RoI_EF_TileMu_TrigMuonEFContainer, &b_trig_RoI_EF_TileMu_TrigMuonEFContainer);
   fChain->SetBranchAddress("trig_RoI_EF_TileMu_TrigMuonEFContainerStatus", &trig_RoI_EF_TileMu_TrigMuonEFContainerStatus, &b_trig_RoI_EF_TileMu_TrigMuonEFContainerStatus);
   fChain->SetBranchAddress("trig_RoI_EF_TileMu_TrigMuonEFInfoContainer", &trig_RoI_EF_TileMu_TrigMuonEFInfoContainer, &b_trig_RoI_EF_TileMu_TrigMuonEFInfoContainer);
   fChain->SetBranchAddress("trig_RoI_EF_TileMu_TrigMuonEFInfoContainerStatus", &trig_RoI_EF_TileMu_TrigMuonEFInfoContainerStatus, &b_trig_RoI_EF_TileMu_TrigMuonEFInfoContainerStatus);
   fChain->SetBranchAddress("trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuGirl", &trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuGirl, &b_trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuGirl);
   fChain->SetBranchAddress("trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuGirlStatus", &trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuGirlStatus, &b_trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuGirlStatus);
   fChain->SetBranchAddress("trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuTagIMO_EF", &trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuTagIMO_EF, &b_trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuTagIMO_EF);
   fChain->SetBranchAddress("trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus", &trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus, &b_trig_RoI_EF_TileMu_TrigMuonEFInfoContainer_MuTagIMO_EFStatus);
   fChain->SetBranchAddress("trig_L2_met_MEx", &trig_L2_met_MEx, &b_trig_L2_met_MEx);
   fChain->SetBranchAddress("trig_L2_met_MEy", &trig_L2_met_MEy, &b_trig_L2_met_MEy);
   fChain->SetBranchAddress("trig_L2_met_MEz", &trig_L2_met_MEz, &b_trig_L2_met_MEz);
   fChain->SetBranchAddress("trig_L2_met_sumEt", &trig_L2_met_sumEt, &b_trig_L2_met_sumEt);
   fChain->SetBranchAddress("trig_L2_met_sumE", &trig_L2_met_sumE, &b_trig_L2_met_sumE);
   fChain->SetBranchAddress("trig_L2_met_flag", &trig_L2_met_flag, &b_trig_L2_met_flag);
   fChain->SetBranchAddress("trig_L2_met_nameOfComponent", &trig_L2_met_nameOfComponent, &b_trig_L2_met_nameOfComponent);
   fChain->SetBranchAddress("trig_L2_met_MExComponent", &trig_L2_met_MExComponent, &b_trig_L2_met_MExComponent);
   fChain->SetBranchAddress("trig_L2_met_MEyComponent", &trig_L2_met_MEyComponent, &b_trig_L2_met_MEyComponent);
   fChain->SetBranchAddress("trig_L2_met_MEzComponent", &trig_L2_met_MEzComponent, &b_trig_L2_met_MEzComponent);
   fChain->SetBranchAddress("trig_L2_met_sumEtComponent", &trig_L2_met_sumEtComponent, &b_trig_L2_met_sumEtComponent);
   fChain->SetBranchAddress("trig_L2_met_sumEComponent", &trig_L2_met_sumEComponent, &b_trig_L2_met_sumEComponent);
   fChain->SetBranchAddress("trig_L2_met_componentCalib0", &trig_L2_met_componentCalib0, &b_trig_L2_met_componentCalib0);
   fChain->SetBranchAddress("trig_L2_met_componentCalib1", &trig_L2_met_componentCalib1, &b_trig_L2_met_componentCalib1);
   fChain->SetBranchAddress("trig_L2_met_sumOfSigns", &trig_L2_met_sumOfSigns, &b_trig_L2_met_sumOfSigns);
   fChain->SetBranchAddress("trig_L2_met_usedChannels", &trig_L2_met_usedChannels, &b_trig_L2_met_usedChannels);
   fChain->SetBranchAddress("trig_L2_met_status", &trig_L2_met_status, &b_trig_L2_met_status);
   fChain->SetBranchAddress("trig_L2_jet_n", &trig_L2_jet_n, &b_trig_L2_jet_n);
   fChain->SetBranchAddress("trig_L2_jet_ehad0", &trig_L2_jet_ehad0, &b_trig_L2_jet_ehad0);
   fChain->SetBranchAddress("trig_L2_jet_eem0", &trig_L2_jet_eem0, &b_trig_L2_jet_eem0);
   fChain->SetBranchAddress("trig_L2_jet_L2_2j15", &trig_L2_jet_L2_2j15, &b_trig_L2_jet_L2_2j15);
   fChain->SetBranchAddress("trig_L2_jet_L2_2j30", &trig_L2_jet_L2_2j30, &b_trig_L2_jet_L2_2j30);
   fChain->SetBranchAddress("trig_L2_jet_L2_2j7", &trig_L2_jet_L2_2j7, &b_trig_L2_jet_L2_2j7);
   fChain->SetBranchAddress("trig_L2_jet_L2_3j15", &trig_L2_jet_L2_3j15, &b_trig_L2_jet_L2_3j15);
   fChain->SetBranchAddress("trig_L2_jet_L2_j130", &trig_L2_jet_L2_j130, &b_trig_L2_jet_L2_j130);
   fChain->SetBranchAddress("trig_L2_jet_L2_j15", &trig_L2_jet_L2_j15, &b_trig_L2_jet_L2_j15);
   fChain->SetBranchAddress("trig_L2_jet_L2_j30", &trig_L2_jet_L2_j30, &b_trig_L2_jet_L2_j30);
   fChain->SetBranchAddress("trig_L2_jet_L2_j60", &trig_L2_jet_L2_j60, &b_trig_L2_jet_L2_j60);
   fChain->SetBranchAddress("trig_L2_jet_L2_j7", &trig_L2_jet_L2_j7, &b_trig_L2_jet_L2_j7);
   fChain->SetBranchAddress("trig_L2_jet_L2_j90", &trig_L2_jet_L2_j90, &b_trig_L2_jet_L2_j90);
   fChain->SetBranchAddress("trig_L2_jet_E", &trig_L2_jet_E, &b_trig_L2_jet_E);
   fChain->SetBranchAddress("trig_L2_jet_pt", &trig_L2_jet_pt, &b_trig_L2_jet_pt);
   fChain->SetBranchAddress("trig_L2_jet_eta", &trig_L2_jet_eta, &b_trig_L2_jet_eta);
   fChain->SetBranchAddress("trig_L2_jet_phi", &trig_L2_jet_phi, &b_trig_L2_jet_phi);
   fChain->SetBranchAddress("trig_L2_jet_RoIWord", &trig_L2_jet_RoIWord, &b_trig_L2_jet_RoIWord);
   fChain->SetBranchAddress("trig_EF_met_MEx", &trig_EF_met_MEx, &b_trig_EF_met_MEx);
   fChain->SetBranchAddress("trig_EF_met_MEy", &trig_EF_met_MEy, &b_trig_EF_met_MEy);
   fChain->SetBranchAddress("trig_EF_met_MEz", &trig_EF_met_MEz, &b_trig_EF_met_MEz);
   fChain->SetBranchAddress("trig_EF_met_sumEt", &trig_EF_met_sumEt, &b_trig_EF_met_sumEt);
   fChain->SetBranchAddress("trig_EF_met_sumE", &trig_EF_met_sumE, &b_trig_EF_met_sumE);
   fChain->SetBranchAddress("trig_EF_met_flag", &trig_EF_met_flag, &b_trig_EF_met_flag);
   fChain->SetBranchAddress("trig_EF_met_nameOfComponent", &trig_EF_met_nameOfComponent, &b_trig_EF_met_nameOfComponent);
   fChain->SetBranchAddress("trig_EF_met_MExComponent", &trig_EF_met_MExComponent, &b_trig_EF_met_MExComponent);
   fChain->SetBranchAddress("trig_EF_met_MEyComponent", &trig_EF_met_MEyComponent, &b_trig_EF_met_MEyComponent);
   fChain->SetBranchAddress("trig_EF_met_MEzComponent", &trig_EF_met_MEzComponent, &b_trig_EF_met_MEzComponent);
   fChain->SetBranchAddress("trig_EF_met_sumEtComponent", &trig_EF_met_sumEtComponent, &b_trig_EF_met_sumEtComponent);
   fChain->SetBranchAddress("trig_EF_met_sumEComponent", &trig_EF_met_sumEComponent, &b_trig_EF_met_sumEComponent);
   fChain->SetBranchAddress("trig_EF_met_componentCalib0", &trig_EF_met_componentCalib0, &b_trig_EF_met_componentCalib0);
   fChain->SetBranchAddress("trig_EF_met_componentCalib1", &trig_EF_met_componentCalib1, &b_trig_EF_met_componentCalib1);
   fChain->SetBranchAddress("trig_EF_met_sumOfSigns", &trig_EF_met_sumOfSigns, &b_trig_EF_met_sumOfSigns);
   fChain->SetBranchAddress("trig_EF_met_usedChannels", &trig_EF_met_usedChannels, &b_trig_EF_met_usedChannels);
   fChain->SetBranchAddress("trig_EF_met_status", &trig_EF_met_status, &b_trig_EF_met_status);
   fChain->SetBranchAddress("trig_EF_jet_n", &trig_EF_jet_n, &b_trig_EF_jet_n);
   fChain->SetBranchAddress("trig_EF_jet_E", &trig_EF_jet_E, &b_trig_EF_jet_E);
   fChain->SetBranchAddress("trig_EF_jet_pt", &trig_EF_jet_pt, &b_trig_EF_jet_pt);
   fChain->SetBranchAddress("trig_EF_jet_m", &trig_EF_jet_m, &b_trig_EF_jet_m);
   fChain->SetBranchAddress("trig_EF_jet_eta", &trig_EF_jet_eta, &b_trig_EF_jet_eta);
   fChain->SetBranchAddress("trig_EF_jet_phi", &trig_EF_jet_phi, &b_trig_EF_jet_phi);
   fChain->SetBranchAddress("trig_EF_jet_EtaPhys", &trig_EF_jet_EtaPhys, &b_trig_EF_jet_EtaPhys);
   fChain->SetBranchAddress("trig_EF_jet_PhiPhys", &trig_EF_jet_PhiPhys, &b_trig_EF_jet_PhiPhys);
   fChain->SetBranchAddress("trig_EF_jet_MPhys", &trig_EF_jet_MPhys, &b_trig_EF_jet_MPhys);
   fChain->SetBranchAddress("trig_EF_jet_emscale_E", &trig_EF_jet_emscale_E, &b_trig_EF_jet_emscale_E);
   fChain->SetBranchAddress("trig_EF_jet_emscale_pt", &trig_EF_jet_emscale_pt, &b_trig_EF_jet_emscale_pt);
   fChain->SetBranchAddress("trig_EF_jet_emscale_m", &trig_EF_jet_emscale_m, &b_trig_EF_jet_emscale_m);
   fChain->SetBranchAddress("trig_EF_jet_emscale_eta", &trig_EF_jet_emscale_eta, &b_trig_EF_jet_emscale_eta);
   fChain->SetBranchAddress("trig_EF_jet_emscale_phi", &trig_EF_jet_emscale_phi, &b_trig_EF_jet_emscale_phi);
   fChain->SetBranchAddress("trig_EF_jet_RoIword", &trig_EF_jet_RoIword, &b_trig_EF_jet_RoIword);
   fChain->SetBranchAddress("trig_EF_jet_mu_dr", &trig_EF_jet_mu_dr, &b_trig_EF_jet_mu_dr);
   fChain->SetBranchAddress("trig_EF_jet_mu_matched", &trig_EF_jet_mu_matched, &b_trig_EF_jet_mu_matched);
   fChain->SetBranchAddress("trig_bgCode", &trig_bgCode, &b_trig_bgCode);
   fChain->SetBranchAddress("SkimDecision_name", &SkimDecision_name, &b_SkimDecision_name);
   fChain->SetBranchAddress("SkimDecision_accepted", &SkimDecision_accepted, &b_SkimDecision_accepted);
   fChain->SetBranchAddress("ti_staco_topo_Jet_n", &ti_staco_topo_Jet_n, &b_ti_staco_topo_Jet_n);
   fChain->SetBranchAddress("ti_staco_topo_Jet_use", &ti_staco_topo_Jet_use, &b_ti_staco_topo_Jet_use);
   fChain->SetBranchAddress("ti_staco_topo_Jet_index", &ti_staco_topo_Jet_index, &b_ti_staco_topo_Jet_index);
   fChain->SetBranchAddress("ti_staco_topo_Jet_overlap_jetn", &ti_staco_topo_Jet_overlap_jetn, &b_ti_staco_topo_Jet_overlap_jetn);
   fChain->SetBranchAddress("ti_staco_topo_Jet_overlap_jetindex", &ti_staco_topo_Jet_overlap_jetindex, &b_ti_staco_topo_Jet_overlap_jetindex);
   fChain->SetBranchAddress("ti_staco_topo_Jet_overlap_mun", &ti_staco_topo_Jet_overlap_mun, &b_ti_staco_topo_Jet_overlap_mun);
   fChain->SetBranchAddress("ti_staco_topo_Jet_overlap_muindex", &ti_staco_topo_Jet_overlap_muindex, &b_ti_staco_topo_Jet_overlap_muindex);
   fChain->SetBranchAddress("ti_staco_topo_Mu_n", &ti_staco_topo_Mu_n, &b_ti_staco_topo_Mu_n);
   fChain->SetBranchAddress("ti_staco_topo_Mu_use", &ti_staco_topo_Mu_use, &b_ti_staco_topo_Mu_use);
   fChain->SetBranchAddress("ti_staco_topo_Mu_index", &ti_staco_topo_Mu_index, &b_ti_staco_topo_Mu_index);
   fChain->SetBranchAddress("ti_staco_topo_Mu_overlap_jetn", &ti_staco_topo_Mu_overlap_jetn, &b_ti_staco_topo_Mu_overlap_jetn);
   fChain->SetBranchAddress("ti_staco_topo_Mu_overlap_jetindex", &ti_staco_topo_Mu_overlap_jetindex, &b_ti_staco_topo_Mu_overlap_jetindex);
   fChain->SetBranchAddress("ti_staco_topo_Mu_overlap_mun", &ti_staco_topo_Mu_overlap_mun, &b_ti_staco_topo_Mu_overlap_mun);
   fChain->SetBranchAddress("ti_staco_topo_Mu_overlap_muindex", &ti_staco_topo_Mu_overlap_muindex, &b_ti_staco_topo_Mu_overlap_muindex);
   fChain->SetBranchAddress("ti_staco_topo_El_n", &ti_staco_topo_El_n, &b_ti_staco_topo_El_n);
   fChain->SetBranchAddress("ti_staco_topo_El_use", &ti_staco_topo_El_use, &b_ti_staco_topo_El_use);
   fChain->SetBranchAddress("ti_staco_topo_El_index", &ti_staco_topo_El_index, &b_ti_staco_topo_El_index);
   fChain->SetBranchAddress("ti_staco_topo_El_overlap_jetn", &ti_staco_topo_El_overlap_jetn, &b_ti_staco_topo_El_overlap_jetn);
   fChain->SetBranchAddress("ti_staco_topo_El_overlap_jetindex", &ti_staco_topo_El_overlap_jetindex, &b_ti_staco_topo_El_overlap_jetindex);
   fChain->SetBranchAddress("ti_staco_topo_El_overlap_mun", &ti_staco_topo_El_overlap_mun, &b_ti_staco_topo_El_overlap_mun);
   fChain->SetBranchAddress("ti_staco_topo_El_overlap_muindex", &ti_staco_topo_El_overlap_muindex, &b_ti_staco_topo_El_overlap_muindex);
   fChain->SetBranchAddress("ti_staco_tower_Jet_n", &ti_staco_tower_Jet_n, &b_ti_staco_tower_Jet_n);
   fChain->SetBranchAddress("ti_staco_tower_Jet_use", &ti_staco_tower_Jet_use, &b_ti_staco_tower_Jet_use);
   fChain->SetBranchAddress("ti_staco_tower_Jet_index", &ti_staco_tower_Jet_index, &b_ti_staco_tower_Jet_index);
   fChain->SetBranchAddress("ti_staco_tower_Jet_overlap_jetn", &ti_staco_tower_Jet_overlap_jetn, &b_ti_staco_tower_Jet_overlap_jetn);
   fChain->SetBranchAddress("ti_staco_tower_Jet_overlap_jetindex", &ti_staco_tower_Jet_overlap_jetindex, &b_ti_staco_tower_Jet_overlap_jetindex);
   fChain->SetBranchAddress("ti_staco_tower_Jet_overlap_mun", &ti_staco_tower_Jet_overlap_mun, &b_ti_staco_tower_Jet_overlap_mun);
   fChain->SetBranchAddress("ti_staco_tower_Jet_overlap_muindex", &ti_staco_tower_Jet_overlap_muindex, &b_ti_staco_tower_Jet_overlap_muindex);
   fChain->SetBranchAddress("ti_staco_tower_Mu_n", &ti_staco_tower_Mu_n, &b_ti_staco_tower_Mu_n);
   fChain->SetBranchAddress("ti_staco_tower_Mu_use", &ti_staco_tower_Mu_use, &b_ti_staco_tower_Mu_use);
   fChain->SetBranchAddress("ti_staco_tower_Mu_index", &ti_staco_tower_Mu_index, &b_ti_staco_tower_Mu_index);
   fChain->SetBranchAddress("ti_staco_tower_Mu_overlap_jetn", &ti_staco_tower_Mu_overlap_jetn, &b_ti_staco_tower_Mu_overlap_jetn);
   fChain->SetBranchAddress("ti_staco_tower_Mu_overlap_jetindex", &ti_staco_tower_Mu_overlap_jetindex, &b_ti_staco_tower_Mu_overlap_jetindex);
   fChain->SetBranchAddress("ti_staco_tower_Mu_overlap_mun", &ti_staco_tower_Mu_overlap_mun, &b_ti_staco_tower_Mu_overlap_mun);
   fChain->SetBranchAddress("ti_staco_tower_Mu_overlap_muindex", &ti_staco_tower_Mu_overlap_muindex, &b_ti_staco_tower_Mu_overlap_muindex);
   fChain->SetBranchAddress("ti_staco_tower_El_n", &ti_staco_tower_El_n, &b_ti_staco_tower_El_n);
   fChain->SetBranchAddress("ti_staco_tower_El_use", &ti_staco_tower_El_use, &b_ti_staco_tower_El_use);
   fChain->SetBranchAddress("ti_staco_tower_El_index", &ti_staco_tower_El_index, &b_ti_staco_tower_El_index);
   fChain->SetBranchAddress("ti_staco_tower_El_overlap_jetn", &ti_staco_tower_El_overlap_jetn, &b_ti_staco_tower_El_overlap_jetn);
   fChain->SetBranchAddress("ti_staco_tower_El_overlap_jetindex", &ti_staco_tower_El_overlap_jetindex, &b_ti_staco_tower_El_overlap_jetindex);
   fChain->SetBranchAddress("ti_staco_tower_El_overlap_mun", &ti_staco_tower_El_overlap_mun, &b_ti_staco_tower_El_overlap_mun);
   fChain->SetBranchAddress("ti_staco_tower_El_overlap_muindex", &ti_staco_tower_El_overlap_muindex, &b_ti_staco_tower_El_overlap_muindex);
   fChain->SetBranchAddress("ti_muid_topo_Jet_n", &ti_muid_topo_Jet_n, &b_ti_muid_topo_Jet_n);
   fChain->SetBranchAddress("ti_muid_topo_Jet_use", &ti_muid_topo_Jet_use, &b_ti_muid_topo_Jet_use);
   fChain->SetBranchAddress("ti_muid_topo_Jet_index", &ti_muid_topo_Jet_index, &b_ti_muid_topo_Jet_index);
   fChain->SetBranchAddress("ti_muid_topo_Jet_overlap_jetn", &ti_muid_topo_Jet_overlap_jetn, &b_ti_muid_topo_Jet_overlap_jetn);
   fChain->SetBranchAddress("ti_muid_topo_Jet_overlap_jetindex", &ti_muid_topo_Jet_overlap_jetindex, &b_ti_muid_topo_Jet_overlap_jetindex);
   fChain->SetBranchAddress("ti_muid_topo_Jet_overlap_mun", &ti_muid_topo_Jet_overlap_mun, &b_ti_muid_topo_Jet_overlap_mun);
   fChain->SetBranchAddress("ti_muid_topo_Jet_overlap_muindex", &ti_muid_topo_Jet_overlap_muindex, &b_ti_muid_topo_Jet_overlap_muindex);
   fChain->SetBranchAddress("ti_muid_topo_Mu_n", &ti_muid_topo_Mu_n, &b_ti_muid_topo_Mu_n);
   fChain->SetBranchAddress("ti_muid_topo_Mu_use", &ti_muid_topo_Mu_use, &b_ti_muid_topo_Mu_use);
   fChain->SetBranchAddress("ti_muid_topo_Mu_index", &ti_muid_topo_Mu_index, &b_ti_muid_topo_Mu_index);
   fChain->SetBranchAddress("ti_muid_topo_Mu_overlap_jetn", &ti_muid_topo_Mu_overlap_jetn, &b_ti_muid_topo_Mu_overlap_jetn);
   fChain->SetBranchAddress("ti_muid_topo_Mu_overlap_jetindex", &ti_muid_topo_Mu_overlap_jetindex, &b_ti_muid_topo_Mu_overlap_jetindex);
   fChain->SetBranchAddress("ti_muid_topo_Mu_overlap_mun", &ti_muid_topo_Mu_overlap_mun, &b_ti_muid_topo_Mu_overlap_mun);
   fChain->SetBranchAddress("ti_muid_topo_Mu_overlap_muindex", &ti_muid_topo_Mu_overlap_muindex, &b_ti_muid_topo_Mu_overlap_muindex);
   fChain->SetBranchAddress("ti_muid_topo_El_n", &ti_muid_topo_El_n, &b_ti_muid_topo_El_n);
   fChain->SetBranchAddress("ti_muid_topo_El_use", &ti_muid_topo_El_use, &b_ti_muid_topo_El_use);
   fChain->SetBranchAddress("ti_muid_topo_El_index", &ti_muid_topo_El_index, &b_ti_muid_topo_El_index);
   fChain->SetBranchAddress("ti_muid_topo_El_overlap_jetn", &ti_muid_topo_El_overlap_jetn, &b_ti_muid_topo_El_overlap_jetn);
   fChain->SetBranchAddress("ti_muid_topo_El_overlap_jetindex", &ti_muid_topo_El_overlap_jetindex, &b_ti_muid_topo_El_overlap_jetindex);
   fChain->SetBranchAddress("ti_muid_topo_El_overlap_mun", &ti_muid_topo_El_overlap_mun, &b_ti_muid_topo_El_overlap_mun);
   fChain->SetBranchAddress("ti_muid_topo_El_overlap_muindex", &ti_muid_topo_El_overlap_muindex, &b_ti_muid_topo_El_overlap_muindex);
   fChain->SetBranchAddress("ti_muid_tower_Jet_n", &ti_muid_tower_Jet_n, &b_ti_muid_tower_Jet_n);
   fChain->SetBranchAddress("ti_muid_tower_Jet_use", &ti_muid_tower_Jet_use, &b_ti_muid_tower_Jet_use);
   fChain->SetBranchAddress("ti_muid_tower_Jet_index", &ti_muid_tower_Jet_index, &b_ti_muid_tower_Jet_index);
   fChain->SetBranchAddress("ti_muid_tower_Jet_overlap_jetn", &ti_muid_tower_Jet_overlap_jetn, &b_ti_muid_tower_Jet_overlap_jetn);
   fChain->SetBranchAddress("ti_muid_tower_Jet_overlap_jetindex", &ti_muid_tower_Jet_overlap_jetindex, &b_ti_muid_tower_Jet_overlap_jetindex);
   fChain->SetBranchAddress("ti_muid_tower_Jet_overlap_mun", &ti_muid_tower_Jet_overlap_mun, &b_ti_muid_tower_Jet_overlap_mun);
   fChain->SetBranchAddress("ti_muid_tower_Jet_overlap_muindex", &ti_muid_tower_Jet_overlap_muindex, &b_ti_muid_tower_Jet_overlap_muindex);
   fChain->SetBranchAddress("ti_muid_tower_Mu_n", &ti_muid_tower_Mu_n, &b_ti_muid_tower_Mu_n);
   fChain->SetBranchAddress("ti_muid_tower_Mu_use", &ti_muid_tower_Mu_use, &b_ti_muid_tower_Mu_use);
   fChain->SetBranchAddress("ti_muid_tower_Mu_index", &ti_muid_tower_Mu_index, &b_ti_muid_tower_Mu_index);
   fChain->SetBranchAddress("ti_muid_tower_Mu_overlap_jetn", &ti_muid_tower_Mu_overlap_jetn, &b_ti_muid_tower_Mu_overlap_jetn);
   fChain->SetBranchAddress("ti_muid_tower_Mu_overlap_jetindex", &ti_muid_tower_Mu_overlap_jetindex, &b_ti_muid_tower_Mu_overlap_jetindex);
   fChain->SetBranchAddress("ti_muid_tower_Mu_overlap_mun", &ti_muid_tower_Mu_overlap_mun, &b_ti_muid_tower_Mu_overlap_mun);
   fChain->SetBranchAddress("ti_muid_tower_Mu_overlap_muindex", &ti_muid_tower_Mu_overlap_muindex, &b_ti_muid_tower_Mu_overlap_muindex);
   fChain->SetBranchAddress("ti_muid_tower_El_n", &ti_muid_tower_El_n, &b_ti_muid_tower_El_n);
   fChain->SetBranchAddress("ti_muid_tower_El_use", &ti_muid_tower_El_use, &b_ti_muid_tower_El_use);
   fChain->SetBranchAddress("ti_muid_tower_El_index", &ti_muid_tower_El_index, &b_ti_muid_tower_El_index);
   fChain->SetBranchAddress("ti_muid_tower_El_overlap_jetn", &ti_muid_tower_El_overlap_jetn, &b_ti_muid_tower_El_overlap_jetn);
   fChain->SetBranchAddress("ti_muid_tower_El_overlap_jetindex", &ti_muid_tower_El_overlap_jetindex, &b_ti_muid_tower_El_overlap_jetindex);
   fChain->SetBranchAddress("ti_muid_tower_El_overlap_mun", &ti_muid_tower_El_overlap_mun, &b_ti_muid_tower_El_overlap_mun);
   fChain->SetBranchAddress("ti_muid_tower_El_overlap_muindex", &ti_muid_tower_El_overlap_muindex, &b_ti_muid_tower_El_overlap_muindex);
   Notify();
}

Bool_t trig::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void trig::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t trig::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef trig_cxx
