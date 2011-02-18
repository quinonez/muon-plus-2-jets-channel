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

  Nevents[105009]=1399184;
  Nevents[105010]=1395383;
  Nevents[105011]=1398078;
  Nevents[105012]=1397430;
  Nevents[105013]=1397401;
  Nevents[105014]=1391612;
  Nevents[105015]=1347654;
  Nevents[105016]=1125428;
  //Nevents[105017]=;
  Nevents[105200]=999387;
  Nevents[105204]=149899;
  Nevents[105985]=249837;
  Nevents[105986]=249725;
  Nevents[105987]=249830;
  Nevents[107660]=303947;
  Nevents[107661]=62996;
  Nevents[107662]=18993;
  Nevents[107663]=5497;
  Nevents[107664]=1499;
  Nevents[107665]=499;
  Nevents[107670]=303359;
  Nevents[107671]=63481;
  Nevents[107672]=19492;
  Nevents[107673]=5497;
  Nevents[107674]=1499;
  Nevents[107675]=499;
  Nevents[107690]=1386038;
  Nevents[107691]=255909;
  Nevents[107692]=187860;
  Nevents[107693]=50887;
  Nevents[107694]=12991;
  Nevents[107695]=3498;
  Nevents[107700]=1365491;
  Nevents[107701]=254753;
  Nevents[107702]=188446;
  Nevents[107703]=50472;
  Nevents[107704]=12996;
  Nevents[107705]=3998;
  Nevents[108340]=9993;
  Nevents[108341]=9997;
  Nevents[108342]=10000;
  Nevents[108343]=9950;
  Nevents[108344]=9996;
  Nevents[108345]=9996;
  Nevents[108346]=14995;
  Nevents[114010]=9975;

  Xsection[105009]=9.8568E+06;
  Xsection[105010]=6.7808E+05;
  Xsection[105011]=4.0994E+04;
  Xsection[105012]=2.1936E+03;
  Xsection[105013]=8.7704E+01;
  Xsection[105014]=2.3498E+00;
  Xsection[105015]=3.3615E-02;
  Xsection[105016]=1.3741E-04;
  //Xsection[105017]=;
  Xsection[105200]=1.4412E-01;
  Xsection[105204]=1.4428E-01;
  Xsection[105985]=2.9603E-02;
  Xsection[105986]=4.5988E-03;
  Xsection[105987]=1.1229E-02;
  Xsection[107660]=6.6379E-01;
  Xsection[107661]=1.3295E-01;
  Xsection[107662]=4.0375E-02;
  Xsection[107663]=1.1161E-02;
  Xsection[107664]=2.8987E-03;
  Xsection[107665]=7.5662E-04;
  Xsection[107670]=6.6250E-01;
  Xsection[107671]=1.3394E-01;
  Xsection[107672]=4.0295E-02;
  Xsection[107673]=1.1029E-02;
  Xsection[107674]=2.8040E-03;
  Xsection[107675]=7.8054E-04;
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
