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

void MultiSigmoidePlotter_507(){

  setTDRStyle();

  string fName = "EfficiencyGIF36_COAX_THR507_ATTOFF.root";
  TFile *_file0 = TFile::Open(fName.c_str());
  TGraphAsymmErrors* EfficiencyOff = (TGraphAsymmErrors*) _file0->Get("Efficiency;1");

  fName = "EfficiencyGIF36_COAX_THR507_ATT46.root";
  TFile *_file1 = TFile::Open(fName.c_str());
  TGraphAsymmErrors* Efficiency22 = (TGraphAsymmErrors*) _file1->Get("Efficiency;1");

  fName = "EfficiencyGIF36_COAX_THR507_ATT22.root";
  TFile *_file2 = TFile::Open(fName.c_str());
  TGraphAsymmErrors* Efficiency10 = (TGraphAsymmErrors*) _file2->Get("Efficiency;1");

  fName = "EfficiencyGIF36_COAX_THR510_ATT10_GIF18.root";
  TFile *_file3 = TFile::Open(fName.c_str());
  TGraphAsymmErrors* Efficiency4p6 = (TGraphAsymmErrors*) _file3->Get("Efficiency;1");

  int marker = 20;


  TCanvas* c1 = new TCanvas("CANVAS", "Double gap glass RPC prototype",1000, 600);

  TH1D* PLOTTER = new TH1D("PLOTTER", "", 1, 6400, 7600);
  PLOTTER->SetStats(0);

  string xLabel = "HV_{eff} (V)";

  string lName = "COAX; " + xLabel + "; Efficiency";
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
  // Efficiency4p6->Draw("SAMEPE");

  TLegend *leg = new TLegend(0.608739,0.1724784,0.8085924,0.4023343,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextFont(62);
  leg->SetTextSize(0.04);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);

  
  leg->SetHeader("COAX THR=507");
  leg->AddEntry(EfficiencyOff,"Source Off","P");
  leg->AddEntry(Efficiency22,"#approx 270 kHz/cm^{2}","P");
  leg->AddEntry(Efficiency10,"#approx 560 kHz/cm^{2}","P");
  //  leg->AddEntry(Efficiency4p6,"#approx 1240 kHz/cm^{2}","P");
  
  leg->Draw();

  TLatex* ltx = new TLatex(6500, 0.97,"Preliminary");
  ltx->SetTextSize(0.04);
  ltx->SetTextAlign(13);
  ltx->SetTextFont(52);
  ltx->SetTextSize(0.0456);
  ltx->SetLineWidth(2);
  ltx->Draw();







  c1->Update();

  string outName = "MultiSigmoide_507.png"; 

  c1->SaveAs(outName.c_str());

  outName = "MultiSigmoide_507.pdf"; 

  c1->SaveAs(outName.c_str());

  outName = "MultiSigmoide_507.C"; 

  c1->SaveAs(outName.c_str());




}
