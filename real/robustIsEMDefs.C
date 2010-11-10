#define robustIsEMDefs_cxx

#include "egammaPIDdefs.h"
#include "robustIsEMDefs.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/**
   Author John Alison <johnda@sas.upenn.edu>
   
   Redefine the isEM definitions such that the Reta and w2 cuts are loosened at high eta.
   
   Note: 
   Currently the MC mismodels the Reta and w2 distributions at high large eta (|eta| > 1.8).
   In addition the isEM cuts are relatively aggressive in this region, leading to data/MC 
   disagrement in electron efficiency.
   


*/


//----------------------------------------------------------------------------------------
bool robustIsEMDefs::isRobustLoose(long isEM, float eta, float eT, float Reta, float w2 ){

  float absEta = fabs(eta);

  // Does it pass the loose isEM with Reta and w2 removed?
  const unsigned int CALOMIDDLE_ELECTRON_NoReta_NoW2 = 0x1 << egammaPID::ClusterMiddleEnergy_Electron;
  const unsigned int ElectronLoose_NoReta_NoW2 = CALOMIDDLE_ELECTRON_NoReta_NoW2 | egammaPID::HADLEAKETA_ELECTRON;
  if((isEM & ElectronLoose_NoReta_NoW2) != 0){
    return false;
  }

  // Cut on 0.9 for all eta
  if(Reta <= 0.9)
    return false;
  
  // Keep the w2 cuts in the barrel, move them in the endcap
  if(absEta < 0.8){
    if(w2 > 0.012)
      return false;
  }else if(absEta < 1.15){
    if(w2 > 0.013)
      return false;
  }else if(absEta < 1.81){
    if(w2 > 0.015)
      return false;
  }else{
    if(w2 > 0.013)
      return false;
  }
  
  return true;
}

//----------------------------------------------------------------------------------------
bool robustIsEMDefs::isRobustMedium(long isEM, float eta, float eT, float Reta, float w2 ){

  // If not robustLoose, then not robustMedium
  if(!isRobustLoose(isEM,eta,eT,Reta,w2))
    return false;

  const unsigned int CALOMIDDLE_ELECTRON_NoReta_NoW2 = 0x1 << egammaPID::ClusterMiddleEnergy_Electron;
  
  const unsigned int CALO_ELECTRON_NoReta_NoW2 = 
    egammaPID::HADLEAKETA_ELECTRON | 
    egammaPID::CALOSTRIPS_ELECTRON | 
    CALOMIDDLE_ELECTRON_NoReta_NoW2 ;

  const unsigned int ElectronMedium_NOReta_NoW2 = 
    CALO_ELECTRON_NoReta_NoW2 | 
    egammaPID::TRACKINGNOBLAYER_ELECTRON | 
    egammaPID::TRACKMATCHDETA_ELECTRON;
  

  return ((isEM & ElectronMedium_NOReta_NoW2) == 0);
}

//----------------------------------------------------------------------------------------
bool robustIsEMDefs::isRobusterTight(long isEM, bool expectBLayer, float eta, float eT, float Reta, float w2 ){

  // If not robustMedium, then not robusterTight
  if(!isRobustMedium(isEM,eta,eT,Reta,w2))
    return false;
  
  const unsigned int CALOMIDDLE_ELECTRON_NoReta_NoW2 = 0x1 << egammaPID::ClusterMiddleEnergy_Electron;
  
  const unsigned int CALO_ELECTRON_NoReta_NoW2 = 
    egammaPID::HADLEAKETA_ELECTRON | 
    egammaPID::CALOSTRIPS_ELECTRON | 
    CALOMIDDLE_ELECTRON_NoReta_NoW2 ;  
  
  const unsigned int ElectronTightRobust_NoReta_NoW2 = 
    CALO_ELECTRON_NoReta_NoW2 | 
    egammaPID::TRACKING_ELECTRON | 
    0x1 << egammaPID::TrackMatchEta_Electron | 
    0x1 << egammaPID::TrackMatchEoverP_Electron | 
    0x1 << egammaPID::TrackA0Tight_Electron |
    0x1 << egammaPID::ConversionMatch_Electron |
    egammaPID::TRT_ELECTRON ;

  
  // If robust tight with out Reta and w2 
  if((isEM & ElectronTightRobust_NoReta_NoW2) == 0){
    return true;
  }

  // Tight without the conversion requirement 
  const unsigned int ElectronTightRobust_NoReta_NoW2_NoConvCut = 
    CALO_ELECTRON_NoReta_NoW2 | 
    egammaPID::TRACKING_ELECTRON | 
    0x1 << egammaPID::TrackMatchEta_Electron | 
    0x1 << egammaPID::TrackMatchEoverP_Electron | 
    0x1 << egammaPID::TrackA0Tight_Electron |
    egammaPID::TRT_ELECTRON ;


  if( ((isEM & ElectronTightRobust_NoReta_NoW2_NoConvCut) == 0) && !expectBLayer){
    return true;
  }

  return false;
}




