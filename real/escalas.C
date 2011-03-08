#define escalas_cxx

#include <iostream>
#include <map>
#include "escalas.h"

using namespace std;

double escalas::putscale(int r, bool isRD)
{

  // this is the luminosity for the periods from A to H
  double Ls = 35000.0;
  double L0 = Ls; // inverted nb
  double esca;


  map<int,int> Nevents;
  map<int,double> Xsection;

  //qcd
  Nevents[105009]=1399184;
  Nevents[105010]=1395383;
  Nevents[105011]=1398078;
  Nevents[105012]=1397430;
  Nevents[105013]=1397401;
  Nevents[105014]=1391612;
  Nevents[105015]=1347654;
  Nevents[105016]=1125428;
  //top
  Nevents[105200]=999387;
  Nevents[105861]=199838;
  //dibosons
  Nevents[105985]=249837;
  Nevents[105986]=249725;
  Nevents[105987]=249830;
  //W->bb + jets
  Nevents[106280]=6499;
  Nevents[106281]=5500;
  Nevents[106282]=2997;
  Nevents[106283]=1500;
  //Z->ee + jets
  Nevents[107650]=303966;
  Nevents[107651]=63440;
  Nevents[107652]=18997;
  Nevents[107653]=5499;
  Nevents[107654]=1499;
  Nevents[107655]=500;
  //Z->mumu + jets
  Nevents[107660]=303947;
  Nevents[107661]=62996;
  Nevents[107662]=18993;
  Nevents[107663]=5497;
  Nevents[107664]=1499;
  Nevents[107665]=499;
  //Z->tautau + jets
  Nevents[107670]=302959;
  Nevents[107671]=62981;
  Nevents[107672]=18993;
  Nevents[107673]=5497;
  Nevents[107674]=1499;
  Nevents[107675]=499;
  //W->enu + jets
  Nevents[107680]=1381531;
  Nevents[107681]=257958;
  Nevents[107682]=188896;
  Nevents[107683]=49978;
  Nevents[107684]=12991;
  Nevents[107685]=3449;
  //W->munu + jets
  Nevents[107690]=1386038;
  Nevents[107691]=254959;
  Nevents[107692]=187860;
  Nevents[107693]=49887;
  Nevents[107694]=12991;
  Nevents[107695]=3498;
  //W->taunu + jets
  Nevents[107700]=1364841;
  Nevents[107701]=254753;
  Nevents[107702]=187946;
  Nevents[107703]=49972;
  Nevents[107704]=12996;
  Nevents[107705]=3998;
  //DrellYan_mumu
  Nevents[108319]=999503;
  //DrellYan_ee
  Nevents[108320]=999969;
  //DrellYanLowmM_mu3
  Nevents[108321]=499925;
  //DrellYanLowM_ee3
  Nevents[108322]=499931;
  //singletop
  Nevents[108340]=9993;
  Nevents[108341]=9997;
  Nevents[108342]=10000;
  Nevents[108343]=9950;
  Nevents[108344]=9996;
  Nevents[108345]=9996;
  Nevents[108346]=14995;
  Nevents[114010]=9975;
  //........................................
  Xsection[105009]=9.8568E+06;
  Xsection[105010]=6.7808E+05;
  Xsection[105011]=4.0994E+04;
  Xsection[105012]=2.1936E+03;
  Xsection[105013]=8.7704E+01;
  Xsection[105014]=2.3498E+00;
  Xsection[105015]=3.3615E-02;
  Xsection[105016]=1.3741E-04;
  Xsection[105200]=1.4412E-01;
  Xsection[105861]=1.4581E-01;
  Xsection[105985]=2.9603E-02;
  Xsection[105986]=4.5988E-03;
  Xsection[105987]=1.1229E-02;
  Xsection[106280]=3.3072E-03;
  Xsection[106281]=2.6756E-03;
  Xsection[106282]=1.3763E-03;
  Xsection[106283]=6.5689E-04;
  Xsection[107650]=5.1631E-01;
  Xsection[107651]=1.0766E-01;
  Xsection[107652]=3.2570E-02;
  Xsection[107653]=1.1226E-02;
  Xsection[107654]=2.7748E-03;
  Xsection[107655]=7.0271E-04;
  Xsection[107660]=5.1632E-01;
  Xsection[107661]=1.0774E-01;
  Xsection[107662]=3.2560E-02;
  Xsection[107663]=1.1184E-02;
  Xsection[107664]=2.7890E-03;
  Xsection[107665]=7.5662E-04;
  Xsection[107670]=5.1626E-01;
  Xsection[107671]=1.0766E-01;
  Xsection[107672]=3.2642E-02;
  Xsection[107673]=1.1204E-02;
  Xsection[107674]=2.7783E-03;
  Xsection[107675]=7.8054E-04;
  Xsection[107680]=6.8705E+00;
  Xsection[107681]=1.2938E+00;
  Xsection[107682]=3.7660E-01;
  Xsection[107683]=1.0129E-01;
  Xsection[107684]=2.5246E-02;
  Xsection[107685]=7.1239E-03;
  Xsection[107690]=6.8711E+00;
  Xsection[107691]=1.2947E+00;
  Xsection[107692]=3.7608E-01;
  Xsection[107693]=1.0072E-01;
  Xsection[107694]=2.5993E-02;
  Xsection[107695]=7.1300E-03;
  Xsection[107700]=6.8733E+00;
  Xsection[107701]=1.2954E+00;
  Xsection[107702]=3.7507E-01;
  Xsection[107703]=1.0177E-01;
  Xsection[107704]=2.5756E-02;
  Xsection[107705]=7.0016E-03;
  Xsection[108319]=1.2529E+00;
  Xsection[108320]=1.2530E+00;
  Xsection[108321]=4.4070E+00;
  Xsection[108322]=4.4061E+00;
  Xsection[108340]=7.1522E-03;
  Xsection[108341]=7.1767E-03;
  Xsection[108342]=7.1277E-03;
  Xsection[108343]=4.6856E-04;
  Xsection[108344]=4.6837E-04;
  Xsection[108345]=4.6978E-04;
  Xsection[108346]=1.4581E-02;
  Xsection[114010]=1.4086E-03;


  if(!isRD){
    esca = L0 * Xsection[r]/Nevents[r];
  } else esca =1.0;

  
  return esca;


}

double escalas::putkfactor(int r, bool isRD)
{
  double kf;
  map<int,double> KF;
  //qcd
  KF[105009]=1.0;
  KF[105010]=1.0;
  KF[105011]=1.0;
  KF[105012]=1.0;
  KF[105013]=1.0;
  KF[105014]=1.0;
  KF[105015]=1.0;
  KF[105016]=1.0;
  //top
  KF[105200]=1.0;
  KF[105861]=1.0;
  //dibosons
  KF[105985]=1.0;
  KF[105986]=1.0;
  KF[105987]=1.0;
  //W->bb + jets
  KF[106280]=1.2;
  KF[106281]=1.2;
  KF[106282]=1.2;
  KF[106283]=1.2;
  //Z->ee + jets
  KF[107650]=1.25;
  KF[107651]=1.25;
  KF[107652]=1.25;
  KF[107653]=1.25;
  KF[107654]=1.25;
  KF[107655]=1.25;
  //Z->mumu + jets
  KF[107660]=1.25;
  KF[107661]=1.25;
  KF[107662]=1.25;
  KF[107663]=1.25;
  KF[107664]=1.25;
  KF[107665]=1.25;
  //Z->tautau + jets
  KF[107670]=1.25;
  KF[107671]=1.25;
  KF[107672]=1.25;
  KF[107673]=1.25;
  KF[107674]=1.25;
  KF[107675]=1.25;
  //W->enu + jets
  KF[107680]=1.2;
  KF[107681]=1.2;
  KF[107682]=1.2;
  KF[107683]=1.2;
  KF[107684]=1.2;
  KF[107685]=1.2;
  //W->munu + jets
  KF[107690]=1.2;
  KF[107691]=1.2;
  KF[107692]=1.2;
  KF[107693]=1.2;
  KF[107694]=1.2;
  KF[107695]=1.2;
  //W->taunu + jets
  KF[107700]=1.2;
  KF[107701]=1.2;
  KF[107702]=1.2;
  KF[107703]=1.2;
  KF[107704]=1.2;
  KF[107705]=1.2;
  //DrellYan_mumu
  KF[108319]=1.15;
  //DrellYan_ee
  KF[108320]=1.15;
  //DrellYanLowmM_mu3
  KF[108321]=1.0;
  //DrellYanLowM_ee3
  KF[108322]=1.0;
  //singletop
  KF[108340]=1.0;
  KF[108341]=1.0;
  KF[108342]=1.0;
  KF[108343]=1.0;
  KF[108344]=1.0;
  KF[108345]=1.0;
  KF[108346]=1.0;
  KF[114010]=1.0;

  if(!isRD){
    kf = KF[r];
  } else kf =1.0;

  return kf;
}
