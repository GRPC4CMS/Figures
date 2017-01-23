#include <map>
#include <utility>
#include<string>
#include"TH1.h"
#include"TF1.h"
#include"TCanvas.h"
#include"TLine.h"
#include"TLatex.h"
#include"TGraphErrors.h"
#include<iostream>
#include"TFile.h"


void Test(){

  double minErr = 0.02;
  
  TFile *_file0 = TFile::Open("filePourMax.root");
  TFile *_file1 = TFile::Open("DataToFit.root", "Update");


 
  
  std::map <double, std::pair<double, double> > merger;


  double x, y, Ey, wy, wpoint;
  std::pair<double, double> point;

  for (int j = 1; j < 4; j++){
    TGraphErrors* THR = (TGraphErrors*) _file0->Get(Form("plan_5_threshold_%d;1",j));
    for (int i = 0; i < THR->GetN(); i++){
      THR->GetPoint(i, x, y);
      Ey = THR->GetErrorY(i);
      
      if(merger.find(x) == merger.end()){
	point = std::make_pair(y, Ey);
	merger[x] = point;

	cout << "x = " << x << endl;
      } else {
	point = merger[x];
	wy = 1/(Ey*Ey);
	wpoint = 1/(point.second*point.second);
	y = (y*wy + point.first*wpoint)/(wy+wpoint);
	Ey = 1/std::sqrt(wy+wpoint);
	point = std::make_pair(y, Ey);
	merger[x] = point;
      }
    }
  }


  TGraphErrors* THR_ALL = new TGraphErrors(merger.size());

  std::map <double, std::pair<double, double> >::const_iterator 
    lit (merger.begin()), 
    lend(merger.end());
  int counter = -1;
  for(;lit!=lend;++lit) {
    counter++;
    THR_ALL->SetPoint(counter, lit->first, (lit->second).first);
    if ((lit->second).second > minErr)
      THR_ALL->SetPointError(counter, 1e-6, (lit->second).second);
    else
      THR_ALL->SetPointError(counter, 1e-6, minErr);

  }


  TCanvas* canv = new TCanvas("canv", "", 500, 500);

  THR_ALL->SetMarkerStyle(25);
  THR_ALL->SetMarkerColor(kRed);
  THR_ALL->SetLineColor(kRed);
  THR_ALL->Draw("APE");



  canv->SetLogx();

  _file1->cd();

  THR_ALL->Write("plan_5_threshold");

  _file1->Close();

  //  THR1->Draw("SAME");
}

