#include "W_From_jj.h"
#include "Analysis1.h"
#include "AnalysisBase.h"


#include <TString.h>
#include <TStopwatch.h>

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

/*
int psmain( int argc, char* argv[] )
{
  const int nfiles = argc - 1;
  TString *filename[nfiles];
  for(int i=0; i<nfiles; i++){
    filename[i]=new TString(argv[i+1]);
  }
  Analysis1 o(nfiles,filename);
*/
//int main( )



int main(int argc, char **argv)
{
  TStopwatch reloj;
  reloj.Start();

  // split by ','
  string argStr = argv[1];
  vector<string> fileList;
  for (size_t i=0,n; i <= argStr.length(); i=n+1){
    n = argStr.find_first_of(',',i);
    if (n == string::npos) n = argStr.length();
    string tmp = argStr.substr(i,n-i);
    fileList.push_back(tmp);
  }

  Analysis1 o(fileList);
  o.EventsLoop();
  reloj.Stop();
  double tiempo = reloj.CpuTime();
  cout << "tiempo gastado en el calculo = " << tiempo << endl;

  return 0;

}

/*
int main()
{
  TStopwatch reloj;
  reloj.Start();

  ifstream archivo( "input.dat", ios::in );
  Analysis1 o("input.dat");	
  //o.SetCuts(1.2e6,0.2,4.e4,2.5,1.5);
  //Analysis1 o(1.2e6,0.2,40.e3,2.5,1.5); //standard model cuts (EM,TS,MET,DeltaRjj,DeltaRwmu) 
  //Analysis1 o;
  o.EventsLoop();
  reloj.Stop();
  double tiempo = reloj.CpuTime();
  cout << "tiempo gastado en el calculo = " << tiempo << endl;
  return 0;
}
*/

