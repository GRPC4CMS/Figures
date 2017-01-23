#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
#include "TMath.h"
#include "TFile.h"
#include "TTree.h"
#include "TStyle.h"
#include "TF1.h"
#include "TH1S.h"
#include "TH1F.h"
#include "TH3S.h"
#include "TH3F.h"
#include "THistPainter.h"
#include "TF1.h"
#include "TGraphErrors.h"
#include "TGraphPainter.h"
#include "TMultiGraph.h"
#include "TCanvas.h"
#include "TLegend.h"

#include "Style.h"

using namespace std;

void ClusterSizePlotter(){

  setTDRStyle();

  string fName = "ClusterSize_Off.root"; 
  TFile *_file0 = TFile::Open(fName.c_str());
  TGraphAsymmErrors* EfficiencyOff = (TGraphAsymmErrors*) _file0->Get("Graph;1");

  fName = "ClusterSize_22.root";
  TFile *_file1 = TFile::Open(fName.c_str());
  TGraphAsymmErrors* Efficiency22 = (TGraphAsymmErrors*) _file1->Get("Graph;1");

  fName = "ClusterSize_10.root";
  TFile *_file2 = TFile::Open(fName.c_str());
  TGraphAsymmErrors* Efficiency10 = (TGraphAsymmErrors*) _file2->Get("Graph;1");

  fName = "ClusterSize_4p6.root";
  TFile *_file3 = TFile::Open(fName.c_str());
  TGraphAsymmErrors* Efficiency4p6 = (TGraphAsymmErrors*) _file3->Get("Graph;1");

  int marker = 20;


  TCanvas* c1 = new TCanvas("CANVAS", "Double gap glass RPC prototype",1000, 600);

  TH1D* PLOTTER = new TH1D("PLOTTER", "", 1, 5800, 11000);	
  PLOTTER->SetStats(0);

  string xLabel = "HV_{eff} (V)";

  string lName = "Double gap glass RPC prototype; " + xLabel + "; Cluster size (strips)";
  PLOTTER->SetTitle(lName.c_str());
  PLOTTER->SetMaximum(2.6);
  PLOTTER->SetMinimum(1);
  PLOTTER->Draw("");

  PLOTTER->SetStats(0);
  TGaxis *myX = (TGaxis*) PLOTTER->GetXaxis();
  myX->SetMaxDigits(3);


  EfficiencyOff->SetLineColor(kBlack);
  EfficiencyOff->SetMarkerColor(kBlack);
  EfficiencyOff->SetMarkerStyle(marker);
  //  EfficiencyOff->SetStats(0);
  EfficiencyOff->Draw("SAMEPE");

  Efficiency22->SetLineColor(kBlue-5);
  Efficiency22->SetMarkerColor(kBlue-5);
  Efficiency22->SetMarkerStyle(marker+3);
  //  Efficiency10->SetStats(0);
  Efficiency22->Draw("SAMEPE");

  Efficiency10->SetLineColor(kBlue);
  Efficiency10->SetMarkerColor(kBlue);
  Efficiency10->SetMarkerStyle(marker+1);
  //  Efficiency10->SetStats(0);
  Efficiency10->Draw("SAMEPE");
  
  Efficiency4p6->SetLineColor(kRed);
  Efficiency4p6->SetMarkerColor(kRed);
  Efficiency4p6->SetMarkerStyle(marker+2);
  //  Efficiency4p6->SetStats(0);
  Efficiency4p6->Draw("SAMEPE");

  TLegend *leg = new TLegend(0.608739,0.5024784,0.8285924,0.8023343,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextFont(62);
  leg->SetTextSize(0.04);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);

  leg->SetHeader("Estimated converted #gamma rate");
  leg->AddEntry(EfficiencyOff,"Source Off","P");
  leg->AddEntry(Efficiency22,"#approx 0.6 kHz/cm^{2}","P");
  leg->AddEntry(Efficiency10,"#approx 1.4 kHz/cm^{2}","P");
  leg->AddEntry(Efficiency4p6,"#approx 3 kHz/cm^{2}","P");

  leg->Draw();

  TLatex* ltx = new TLatex(6000, 2.45,"Preliminary");
  ltx->SetTextSize(0.04);
  ltx->SetTextAlign(13);
  ltx->SetTextFont(52);
  ltx->SetTextSize(0.0456);
  ltx->SetLineWidth(2);
  ltx->Draw();
  ltx = new TLatex(6200, 2.3,"Double gap glass RPC prototype");
  ltx->SetTextAlign(13);
  ltx->SetTextFont(62);
  ltx->SetTextSize(0.032);
  ltx->SetLineWidth(2);
  ltx->Draw();
  ltx = new TLatex(6200, 2.2,"in GIF++ #mu test beams");
  ltx->SetTextAlign(13);
  ltx->SetTextFont(62);
  ltx->SetTextSize(0.032);
  ltx->SetLineWidth(2);
  ltx->Draw();

  ltx = new TLatex(6200, 2.1,"CMS gas mixture : 95.2% TFE, 4.5% C_{4}H_{10}, 0.3% SF_{6}");
  ltx->SetTextAlign(13);
  ltx->SetTextFont(52);
  ltx->SetTextSize(0.032);
  ltx->SetLineWidth(2);
  ltx->Draw();
  ltx = new TLatex(6200, 2.0,"Threshold #approx 0.15 pC");
  ltx->SetTextAlign(13);
  ltx->SetTextFont(52);
  ltx->SetTextSize(0.032);
  ltx->SetLineWidth(2);
  ltx->Draw();
  ltx = new TLatex(6200, 1.9,"Estimated sensitivity of 6.2 hits/1000 #gamma");
  ltx->SetTextAlign(13);
  ltx->SetTextFont(52);
  ltx->SetTextSize(0.032);
  ltx->SetLineWidth(2);
  ltx->Draw();










  c1->Update();

  string outName = "MultiClusterSize.png"; 

  c1->SaveAs(outName.c_str());

  outName = "MultiClusterSize.pdf"; 

  c1->SaveAs(outName.c_str());

  outName = "MultiClusterSize.C"; 

  c1->SaveAs(outName.c_str());




}
