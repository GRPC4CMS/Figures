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

void SigmoidePlotter(){

  setTDRStyle();

  string fName = "T3S2_Efficiency_Off_220mV_1833.root";
  TFile *_file0 = TFile::Open(fName.c_str());
  TGraphAsymmErrors* EfficiencyOff = (TGraphAsymmErrors*) _file0->Get("Efficiency;1");

  fName = "T3S2_Efficiency_22_220mV.root";
  TFile *_file1 = TFile::Open(fName.c_str());
  TGraphAsymmErrors* Efficiency22 = (TGraphAsymmErrors*) _file1->Get("Efficiency;1");

  fName = "T3S2_Efficiency_10_220mV.root";
  TFile *_file2 = TFile::Open(fName.c_str());
  TGraphAsymmErrors* Efficiency10 = (TGraphAsymmErrors*) _file2->Get("Efficiency;1");

  fName = "T3S2_Efficiency_4p6_220mV.root";
  TFile *_file3 = TFile::Open(fName.c_str());
  TGraphAsymmErrors* Efficiency4p6 = (TGraphAsymmErrors*) _file3->Get("Efficiency;1");

  int marker = 20;


  TCanvas* c1 = new TCanvas("CANVAS", "Double gap glass RPC prototype",1000, 600);

  TH1D* PLOTTER = new TH1D("PLOTTER", "", 1, 5800, 11000);	
  PLOTTER->SetStats(0);

  string xLabel = "HV_{eff} (V)";

  string lName = "Double gap glass RPC prototype; " + xLabel + "; #mu Efficiency";
  PLOTTER->SetTitle(lName.c_str());
  PLOTTER->SetMaximum(1);
  PLOTTER->SetMinimum(0);
  PLOTTER->Draw("");

  PLOTTER->SetStats(0);
  TGaxis *myX = (TGaxis*) PLOTTER->GetXaxis();
  myX->SetMaxDigits(3);


  EfficiencyOff->SetLineColor(kBlack);
  EfficiencyOff->SetMarkerColor(kBlack);
  EfficiencyOff->SetMarkerStyle(marker);
  EfficiencyOff->GetFunction("sigmoid")->SetLineColor(kBlack);
  EfficiencyOff->GetFunction("sigmoid")->SetLineStyle(2);
  //  EfficiencyOff->SetStats(0);
  EfficiencyOff->Draw("SAMEPE");


  Efficiency22->SetLineColor(kBlue);
  Efficiency22->SetMarkerColor(kBlue);
  Efficiency22->GetFunction("sigmoid")->SetLineColor(kBlue-5);
  Efficiency22->GetFunction("sigmoid")->SetLineStyle(2);
  Efficiency22->SetMarkerStyle(marker+3);
  //  Efficiency22->SetStats(0);
  Efficiency22->Draw("SAMEPE");

  Efficiency10->SetLineColor(kBlue);
  Efficiency10->SetMarkerColor(kBlue);
  Efficiency10->GetFunction("sigmoid")->SetLineColor(kBlue);
  Efficiency10->GetFunction("sigmoid")->SetLineStyle(2);
  Efficiency10->SetMarkerStyle(marker+1);
  //  Efficiency10->SetStats(0);
  Efficiency10->Draw("SAMEPE");
  
  Efficiency4p6->SetLineColor(kRed);
  Efficiency4p6->SetMarkerColor(kRed);
  Efficiency4p6->GetFunction("sigmoid")->SetLineColor(kRed);
  Efficiency4p6->GetFunction("sigmoid")->SetLineStyle(2);
  Efficiency4p6->SetMarkerStyle(marker+2);
  //  Efficiency4p6->SetStats(0);
  Efficiency4p6->Draw("SAMEPE");

  TLegend *leg = new TLegend(0.608739,0.1724784,0.8085924,0.4023343,NULL,"brNDC");
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
  
  /*
  leg->SetHeader("Clusters rate");
  leg->AddEntry(EfficiencyOff,"Source Off","P");
  leg->AddEntry(Efficiency22,"#approx 1.1 kHz/cm^{2}","P");
  leg->AddEntry(Efficiency10,"#approx 2.3 kHz/cm^{2}","P");
  leg->AddEntry(Efficiency4p6,"#approx 5 kHz/cm^{2}","P");
  */

  leg->Draw();

  TLatex* ltx = new TLatex(6000, 0.97,"Preliminary");
  ltx->SetTextSize(0.04);
  ltx->SetTextAlign(13);
  ltx->SetTextFont(52);
  ltx->SetTextSize(0.0456);
  ltx->SetLineWidth(2);
  ltx->Draw();
  ltx = new TLatex(8000, 0.65,"Double gap glass RPC prototype");
  ltx->SetTextAlign(13);
  ltx->SetTextFont(62);
  ltx->SetTextSize(0.032);
  ltx->SetLineWidth(2);
  ltx->Draw();
  ltx = new TLatex(8000, 0.6,"in GIF++ #mu test beams");
  ltx->SetTextAlign(13);
  ltx->SetTextFont(62);
  ltx->SetTextSize(0.032);
  ltx->SetLineWidth(2);
  ltx->Draw();

  ltx = new TLatex(8000, 0.52,"CMS gas mixture : 95.2% TFE, 4.5% C_{4}H_{10}, 0.3%SF_{6}");
  ltx->SetTextAlign(13);
  ltx->SetTextFont(52);
  ltx->SetTextSize(0.032);
  ltx->SetLineWidth(2);
  ltx->Draw();
  ltx = new TLatex(8000, 0.46,"Threshold #approx 0.15 pC");
  ltx->SetTextAlign(13);
  ltx->SetTextFont(52);
  ltx->SetTextSize(0.032);
  ltx->SetLineWidth(2);
  ltx->Draw();
  ltx = new TLatex(8000, 0.40,"Estimated sensitivity of 6.2 hits/1000 #gamma");
  ltx->SetTextAlign(13);
  ltx->SetTextFont(52);
  ltx->SetTextSize(0.032);
  ltx->SetLineWidth(2);
  ltx->Draw();










  c1->Update();

  string outName = "MultiSigmoide.png"; 

  c1->SaveAs(outName.c_str());

  outName = "MultiSigmoide.pdf"; 

  c1->SaveAs(outName.c_str());

  outName = "MultiSigmoide.C"; 

  c1->SaveAs(outName.c_str());




}
