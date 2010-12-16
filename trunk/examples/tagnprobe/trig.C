#define trig_cxx
#include <iostream>
#include "trig.h"
#include <TNamed.h>
#include <TH1.h>
#include <TRandom.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "TLegend.h"
#include <vector>
#include <string>

using namespace std;

void trig::Loop()
{
  fChain->SetBranchStatus("*",1);  // disable all branches
  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntriesFast();

  TFile *f = new TFile("tagnprobe.root","RECREATE");

  Int_t Nmenu = 3;
  trigname[0] = "L1_MU6";
  trigname[1] = "EF_mu13";
  trigname[2] = "EF_mu10_MSonly";
  cutsTrigger[0] = 6.e3;
  cutsTrigger[1] = 10.e3;
  cutsTrigger[2] = 10.e3;


  for( int i = 0; i < Nmenu; i++ ){
    sall[i] = "all_" + trigname[i];
    striggered[i] = "triggered_" + trigname[i];
    sefficiency[i] = "efficiency_" + trigname[i];
  }
  for( int i = 0; i < Nmenu; i++ ){
    all[i] = new TH1D( sall[i].c_str(), sall[i].c_str(),120,0,200);
    triggered[i] = new TH1D( striggered[i].c_str(), striggered[i].c_str(), 120, 0, 200);
    efficiency[i] = new TH1D( sefficiency[i].c_str(), sefficiency[i].c_str(), 120, 0, 200);
  }




  gRandom->SetSeed(2);
  TRandom aleat;

  // **********************************************************************************************************
  //********************************************** BEGIN EVENTS' LOOP *******************************************
  //************************************************************************************************************
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;

    if( mu_staco_n == 0 || mu_staco_n == 1 ) {
      continue;
    }else {
      trigga[0] = L1_MU6; 
      trigga[1] = EF_mu13; 
      trigga[2] = EF_mu10_MSonly; 
      //trigga[3] = EF_2j15;

      for( int k = 0; k < Nmenu; k++ ){
	if( trigga[k] ){
	  probe = aleat.Integer( mu_staco_n );
	  // to me ntags is the number of tag's muons, but I only will need one tag!
	  ntags = 0;
	  for(int iMu = 0; iMu < mu_staco_n; iMu++){
	    if( iMu != probe ){
	      // if tag pass the selection
	      if( mu_staco_pt->at(iMu) > cutsTrigger[k] ){
		ntags++;
	      }
	    } 
     
	  }

	  cout << jentry << "\t" << ntags <<  "\t" << mu_staco_n << "\t" << probe << endl;

	  if( ntags >=1 ) {
	    all[k]->Fill( ( mu_staco_pt->at(probe) )/1.e3 ); 
	    if( mu_staco_pt->at(probe) > cutsTrigger[k] ){
	      triggered[k]->Fill( (mu_staco_pt->at(probe))/1.e3 );
	    }
	  }
	} // end trigger 
      }
    } // end else

  } 
  //********************************************************************
  //*************** END EVENTS' LOOP ***********************************
  //******************************************************************

  for( int k = 0; k < Nmenu; k++ ){
    efficiency[k]->Sumw2();
    efficiency[k]->Divide(triggered[k],all[k],1,1,"b");
    all[k]->Write();
    triggered[k]->Write();
    efficiency[k]->Write();
  }
  TLegend *leyenda[Nmenu];
  TCanvas *c[Nmenu];
  //c->SetFillStyle(1001);
  //gStyle->SetObjectStat(kFALSE);
  gStyle->SetStatColor(0); 
  gStyle->SetCanvasBorderMode(0);
  gStyle->SetCanvasColor(0);
  gStyle->SetPadColor(0);
  gStyle->SetPadBorderMode(0);
  gStyle->SetLabelColor(0);
  //gStyle->SetOptStat("n");
  for(int i=0; i < Nmenu; i++){
    c[i] = new TCanvas(sefficiency[i].c_str(),"",600,400);
    efficiency[i]->SetMarkerSize(3);
    c[i]->SetGrid();
    c[i]->SetFillColor(kWhite);
    efficiency[i]->SetMarkerStyle(22);
    efficiency[i]->SetMarkerColor(1);
    efficiency[i]->SetMarkerSize(1.5);
    efficiency[i]->SetLineColor(632);
    efficiency[i]->SetLineWidth(1);
    efficiency[i]->SetXTitle("p_{T}(#mu) [GeV] ");
    efficiency[i]->SetYTitle("Tag & Probe");
    efficiency[i]->SetStats(0);
    efficiency[i]->Draw("PE1");  
    leyenda[i] =  new TLegend(.70,.45,.88,.55);
    leyenda[i]->AddEntry(efficiency[i],trigname[i].c_str());
    leyenda[i]->SetFillColor(kWhite);
    leyenda[i]->Draw("same");
    c[i]->Write();
  }

  f->Close();

}
