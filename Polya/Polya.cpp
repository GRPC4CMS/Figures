#include "Polya.h"
#include <iostream>
//#include <Minuit2/Minuit2Minimizer.h>
//#include <Math/ProbFuncMathCore.h>
#include<string>
#include"TH1.h"
#include"TH1D.h"
#include"TFile.h"
#include"TF1.h"
#include"TCanvas.h"
#include"TLine.h"
#include"TLatex.h"
#include"TGraphAsymmErrors.h"
#include"TGraphErrors.h"
#include<iostream>
//#include"Colors.h"
//#include "thr.h"


void Polya()
{  

  TFile *_file1 = TFile::Open("DataToFit.root", "read");

  double lLimit =5., uLimit =12000;

  string name =  "";

  TGraphErrors* Efficiency = (TGraphErrors*) _file1->Get("plan_5_threshold;1");

  int color = 2;
  int marker = 20;
  TCanvas* c1 = new TCanvas();
  c1->SetTitle((name+Efficiency->GetTitle()).c_str());
  c1->SetName((name+Efficiency->GetTitle()).c_str());
  TH1D* PLOTTER = new TH1D("PLOTTER", "", 1, lLimit, uLimit);	
  PLOTTER->SetStats(0);
  std::string xLabel = "HARDROC II Threshold (fC)";

  //std::string lName = "Double gap Glass RPC; " + xLabel + "; Efficiency";
  std::string lName = "Double gap bakelite RPC; " + xLabel + "; Efficiency";
  PLOTTER->SetTitle(lName.c_str());
  PLOTTER->SetMaximum(1.1);
  PLOTTER->SetMinimum(0);
  PLOTTER->Draw("");
  Efficiency->SetMarkerColor(color);
  Efficiency->SetMarkerStyle(marker);
  Efficiency->Draw("SAMEPE");
  //****************************************************
  TF1* fPolya = new TF1("fPolya","[2]*ROOT::Math::gamma_cdf_c(x/1000. ,[1]+1 ,[0]/([1]+1) , 0.0)",lLimit,uLimit);
  fPolya->SetParName(0,"average charge");
  fPolya->SetParName(1,"#alpha");
  fPolya->SetParName(3,"constant");
  fPolya->SetParameter(0,4.5);
  fPolya->SetParameter(1,0.6);
  fPolya->SetParameter(2,1.0);

//fPolya->FixParameter(0, 3.0);
//fPolya->FixParameter(1, 2.0);
//fPolya->FixParameter(3, 0.0);

 Efficiency->Fit(fPolya);
  Efficiency->GetFunction("fPolya")->SetLineColor(kBlue);
  double p1 = fPolya->GetParameter(0);
  double p1Err = fPolya->GetParError(0);
  double p2 = fPolya->GetParameter(1);
  double p3 = fPolya->GetParameter(2);
  TLatex* ltx = new TLatex();
  ltx->SetTextSize(0.04);
  double add = (uLimit-lLimit)/1000.;
  if (uLimit < 4/11.*(uLimit-lLimit)) add = -add*4;
  ltx->DrawLatex(add, 0.22, Form("average charge = %.2f #pm %.2f pC", p1, p1Err));
  ltx->DrawLatex(add, 0.15, Form("plateau = %.2f %%", p3));
  c1->SetLogx();
  c1->Update();

  //  c1->SaveAs("PolyaGRPC.png");
  //  c1->SaveAs("PolyaGRPC.pdf");

  c1->SaveAs("PolyaBRPC.png");
  c1->SaveAs("PolyaBRPC.pdf");


} 
