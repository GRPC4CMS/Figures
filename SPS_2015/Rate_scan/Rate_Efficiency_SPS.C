#include "Style.h"
#include "TH1.h"
#include "TH1F.h"
 
TCanvas* example_plot( int iPeriod, int iPos );
 
void myMacro()
{

  setTDRStyle();

  writeExtraText = true;       // if extra text
  extraText  = "Preliminary";  // default extra text is "Preliminary"

  int iPeriod = 2;    // 1=Emu = 150 GeV; 2=Nothing for the mometnt just fill with what we need

  // second parameter in example_plot is iPos, which drives the position of the CMS logo in the plot
  // iPos=11 : top-left, left-aligned
  // iPos=33 : top-right, right-aligned
  // iPos=22 : center, centered
  // mode generally : 
  //   iPos = 10*(alignement 1/2/3) + position (1/2/3 = left/center/right)

  int iPos = 33;

  example_plot( iPeriod, iPos );   // out of frame (in exceptional cases)

}

TCanvas* example_plot( int iPeriod, int iPos )
{ 
  //  if( iPos==0 ) relPosX = 0.12;

  int W = 800;
  int H = 600;

  int H_ref = 600; 
  int W_ref = 800; 

  // references for T, B, L, R
  float T = 0.08*H_ref;
  float B = 0.12*H_ref; 
  float L = 0.12*W_ref;
  float R = 0.04*W_ref;

  TString canvName = "FigExample_";
  canvName += W;
  canvName += "-";
  canvName += H;
  canvName += "_";  
  canvName += iPeriod;
  if( writeExtraText ) canvName += "-prelim";
  if( iPos%10==0 ) canvName += "-out";
  else if( iPos%10==1 ) canvName += "-left";
  else if( iPos%10==2 )  canvName += "-center";
  else if( iPos%10==3 )  canvName += "-right";

  TCanvas* canv = new TCanvas(canvName,canvName,50,50,W,H);
  canv->SetFillColor(0);
  canv->SetBorderMode(0);
  canv->SetFrameFillStyle(0);
  canv->SetFrameBorderMode(0);
  canv->SetLeftMargin( L/W );
  canv->SetRightMargin( R/W );
  canv->SetTopMargin( T/H );
  canv->SetBottomMargin( B/H );
  canv->SetTickx(0);
  canv->SetTicky(0);

  double ss=1.0/650;
  int histLineColor = kOrange+7;
  int histFillColor = kOrange-2;
  float markerSize  = 1.0;

  {
    TLatex latex;
				
    int n_ = 2;

    float x1_l = 0.92;
    float y1_l = 0.60;

    float dx_l = 0.30;
    float dy_l = 0.18;
    float x0_l = x1_l-dx_l;
    float y0_l = y1_l-dy_l;

    TPad* legend = new TPad("legend_0","legend_0",x0_l,y0_l,x1_l, y1_l );
    //    legend->SetFillColor( kGray );
    legend->Draw();
    legend->cd();
		
    float ar_l = dy_l/dx_l;
		
    float x_l[1];
    float ex_l[1];
    float y_l[1];
    float ey_l[1];
		
    //    float gap_ = 0.09/ar_l;
    float gap_ = 1./(n_+1);
		
    float bwx_ = 0.12;
    float bwy_ = gap_/1.5;
		
    x_l[0] = 1.2*bwx_;
    //    y_l[0] = 1-(1-0.10)/ar_l;
    y_l[0] = 1-gap_;
    ex_l[0] = 0;
    ey_l[0] = 0.04/ar_l;
		
    TGraph* gr_l = new TGraphErrors(1, x_l, y_l, ex_l, ey_l );
		
    gStyle->SetEndErrorSize(0);
    gr_l->SetMarkerSize(0.9);
    gr_l->Draw("0P");
		
    latex.SetTextFont(42);
    latex.SetTextAngle(0);
    latex.SetTextColor(kBlack);    
    latex.SetTextSize(0.25);    
    latex.SetTextAlign(12); 
		
    TLine line_;
    TBox  box_;
    float xx_ = x_l[0];
    float yy_ = y_l[0];
    latex.DrawLatex(xx_+1.*bwx_,yy_,"Data");
		
    yy_ -= gap_;
    box_.SetLineStyle( kSolid );
    box_.SetLineWidth( 1 );
    //		box_.SetLineColor( kBlack );
    box_.SetLineColor( histLineColor );
    box_.SetFillColor( histFillColor );
    box_.DrawBox( xx_-bwx_/2, yy_-bwy_/2, xx_+bwx_/2, yy_+bwy_/2 );
    box_.SetFillStyle(0);
    box_.DrawBox( xx_-bwx_/2, yy_-bwy_/2, xx_+bwx_/2, yy_+bwy_/2 );
    latex.DrawLatex(xx_+1.*bwx_,yy_,"Z #rightarrow e^{+}e^{-} (MC)");

    canv->cd();
  }

  {

   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("Graph0");
   //gre->SetTitle("Chambre 1 (Standard Glass RPC)");
   gre->SetTitle("");
   gre->SetMarkerStyle(29);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,5780*ss,0.950951);
   gre->SetPointError(0,0,0.00213863);
   gre->SetPoint(1,6750*ss,0.944049);
   gre->SetPointError(1,0,0.00384276);
   gre->SetPoint(2,15300*ss,0.891383);
   gre->SetPointError(2,0,0.0034486);
   gre->SetPoint(3,28500*ss,0.770538);
   gre->SetPointError(3,0,0.00387254);
   gre->SetPoint(4,78200*ss,0.457137);
   gre->SetPointError(4,0,0.00387828);
   gre->SetPoint(5,107000*ss,0.419466);
   gre->SetPointError(5,0,0.00437868);
   gre->SetPoint(6,253000*ss,0.324404);
   gre->SetPointError(6,0,0.00517429);
   gre->SetPoint(7,490000*ss,0.324663);
   gre->SetPointError(7,0,0.00695632);
   gre->SetPoint(8,823000*ss,0.384676);
   gre->SetPointError(8,0,0.00778953);
   gre->SetPoint(9,2210000*ss,0.438947);
   gre->SetPointError(9,0,0.00782797);
   gre->SetPoint(10,4830000*ss,0.424943);
   gre->SetPointError(10,0,0.0109421);
   gre->GetXaxis()->SetRangeUser(0,1.3);
   gre->GetYaxis()->SetRange(0,500000);
   TH1F *Graph_Graph_Graph_Graph1151 = new TH1F("Graph_Graph_Graph_Graph1151","",100,0,5312422);
   Graph_Graph_Graph_Graph1151->SetMinimum(0);
   Graph_Graph_Graph_Graph1151->SetMaximum(1);
   Graph_Graph_Graph_Graph1151->SetDirectory(0);
   Graph_Graph_Graph_Graph1151->SetStats(0);
   Graph_Graph_Graph_Graph1151->SetMinimum(0);
   Graph_Graph_Graph_Graph1151->SetMinimum(1);
   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph1151->SetLineColor(ci);
   Graph_Graph_Graph_Graph1151->GetXaxis()->SetTitle("Average rate (N_{#mu}.s^{-1}.cm^{-2})");
  Graph_Graph_Graph_Graph1151->GetXaxis()->SetTitleOffset(3);
  Graph_Graph_Graph_Graph1151->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph1151->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph1151->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1151->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1151->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph1151->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1151->GetYaxis()->SetTitle("#mu detection efficiency");
   Graph_Graph_Graph_Graph1151->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph1151->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1151->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph1151->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph1151->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1151->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1151->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph1151->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph1151->GetZaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1151->GetXaxis()->SetRangeUser(0,1.3);
   Graph_Graph_Graph_Graph1151->GetXaxis()->SetRange(0,1.3);
   Graph_Graph_Graph_Graph1151->GetYaxis()->SetRangeUser(0,1.3);
   Graph_Graph_Graph_Graph1151->GetYaxis()->SetRange(0,1.3);
   gre->SetHistogram(Graph_Graph_Graph_Graph1151);
   
   //gre->Draw("ap");
   
   gre = new TGraphErrors(11);
   gre->SetName("Graph1");
   //gre->SetTitle("Chambre 2 (Low Resistive Glass RPC)");
   gre->SetTitle("");
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,5780*ss,0.97914);
   gre->SetPointError(0,0,0.00119056);
   gre->SetPoint(1,6750*ss,0.973453);
   gre->SetPointError(1,0,0.00225169);
   gre->SetPoint(2,15300*ss,0.980456);
   gre->SetPointError(2,0,0.00126418);
   gre->SetPoint(3,28500*ss,0.97976);
   gre->SetPointError(3,0,0.001007);
   gre->SetPoint(4,78200*ss,0.971649);
   gre->SetPointError(4,0,0.000816721);
   gre->SetPoint(5,107000*ss,0.970778);
   gre->SetPointError(5,0,0.000914539);
   gre->SetPoint(6,253000*ss,0.953326);
   gre->SetPointError(6,0,0.00131593);
   gre->SetPoint(7,490000*ss,0.942877);
   gre->SetPointError(7,0,0.0019686);
   gre->SetPoint(8,823000*ss,0.914665);
   gre->SetPointError(8,0,0.00283506);
   gre->SetPoint(9,2210000*ss,0.867066);
   gre->SetPointError(9,0,0.00370407);
   gre->SetPoint(10,4830000*ss,0.807229);
   gre->SetPointError(10,0,0.0060241);
   gre->GetXaxis()->SetRangeUser(0,1.3);
   gre->GetYaxis()->SetRange(0,500000);
   TH1F *Graph_Graph_Graph_Graph2162 = new TH1F("Graph_Graph_Graph_Graph2162","",100,0,5312422);
   Graph_Graph_Graph_Graph2162->SetMinimum(0.7831534);
   Graph_Graph_Graph_Graph2162->SetMaximum(0.9997717);
   Graph_Graph_Graph_Graph2162->SetDirectory(0);
   Graph_Graph_Graph_Graph2162->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph2162->SetLineColor(ci);
   Graph_Graph_Graph_Graph2162->GetXaxis()->SetTitle("Average rate (N_{#mu}.s^{-1}.cm^{-2})");
   Graph_Graph_Graph_Graph2162->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph2162->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2162->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2162->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph2162->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2162->GetYaxis()->SetTitle("#mu detection efficiency");
   Graph_Graph_Graph_Graph2162->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph2162->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2162->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph2162->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph2162->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2162->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2162->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph2162->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph2162->GetZaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2162->GetYaxis()->SetRangeUser(0,1.3);
   Graph_Graph_Graph_Graph2162->GetYaxis()->SetRange(0,1.3);
   gre->SetHistogram(Graph_Graph_Graph_Graph2162);
   
   gre->Draw("pa");
   
   gre = new TGraphErrors(11);
   gre->SetName("Graph2");
   //gre->SetTitle("Chambre 3 (Standard Glass RPC)");
   gre->SetTitle("");
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(30);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,5780*ss,0.95645);
   gre->SetPointError(0,0,0.00194373);
   gre->SetPoint(1,6750*ss,0.937254);
   gre->SetPointError(1,0,0.00392931);
   gre->SetPoint(2,15300*ss,0.886893);
   gre->SetPointError(2,0,0.0034072);
   gre->SetPoint(3,28500*ss,0.780193);
   gre->SetPointError(3,0,0.00367932);
   gre->SetPoint(4,78200*ss,0.468236);
   gre->SetPointError(4,0,0.00370273);
   gre->SetPoint(5,107000*ss,0.431888);
   gre->SetPointError(5,0,0.00418488);
   gre->SetPoint(6,253000*ss,0.310846);
   gre->SetPointError(6,0,0.00502523);
   gre->SetPoint(7,490000*ss,0.29662);
   gre->SetPointError(7,0,0.00680078);
   gre->SetPoint(8,823000*ss,0.311373);
   gre->SetPointError(8,0,0.00789961);
   gre->SetPoint(9,2210000*ss,0.330144);
   gre->SetPointError(9,0,0.0080876);
   gre->SetPoint(10,4830000*ss,0.294684);
   gre->SetPointError(10,0,0.0112167);
   gre->GetXaxis()->SetRangeUser(0,1.3);
   gre->GetYaxis()->SetRange(0,500000);
   TH1F *Graph_Graph_Graph_Graph3173 = new TH1F("Graph_Graph_Graph_Graph3173","",100,0,5312422);
   Graph_Graph_Graph_Graph3173->SetMinimum(0.2159747);
   Graph_Graph_Graph_Graph3173->SetMaximum(1.025886);
   Graph_Graph_Graph_Graph3173->SetDirectory(0);
   Graph_Graph_Graph_Graph3173->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph3173->SetLineColor(ci);
   Graph_Graph_Graph_Graph3173->GetXaxis()->SetTitle("Average rate (N_{#mu}.s^{-1}.cm^{-2})");
   Graph_Graph_Graph_Graph3173->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph3173->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3173->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3173->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph3173->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph3173->GetYaxis()->SetTitle("#mu detection efficiency");
   Graph_Graph_Graph_Graph3173->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph3173->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3173->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph3173->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph3173->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph3173->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph3173->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph3173->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph3173->GetZaxis()->SetTitleFont(42);
      Graph_Graph_Graph_Graph3173->GetYaxis()->SetRangeUser(0,1.3);
   Graph_Graph_Graph_Graph3173->GetYaxis()->SetRange(0,1.3);
   gre->SetHistogram(Graph_Graph_Graph_Graph3173);
   
   //gre->Draw("p&");
   
   gre = new TGraphErrors(11);
   gre->SetName("Graph3");
   //gre->SetTitle("Chambre 4 (Low Resistive Glass RPC)");
   gre->SetTitle("");
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(23);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,5780*ss,0.945552);
   gre->SetPointError(0,0,0.00222099);
   gre->SetPoint(1,6750*ss,0.937882);
   gre->SetPointError(1,0,0.00397671);
   gre->SetPoint(2,15300*ss,0.945317);
   gre->SetPointError(2,0,0.0024096);
   gre->SetPoint(3,28500*ss,0.950864);
   gre->SetPointError(3,0,0.00176728);
   gre->SetPoint(4,78200*ss,0.94505);
   gre->SetPointError(4,0,0.00122324);
   gre->SetPoint(5,107000*ss,0.942688);
   gre->SetPointError(5,0,0.00136884);
   gre->SetPoint(6,253000*ss,0.921693);
   gre->SetPointError(6,0,0.00178155);
   gre->SetPoint(7,490000*ss,0.905909);
   gre->SetPointError(7,0,0.002633);
   gre->SetPoint(8,823000*ss,0.891392);
   gre->SetPointError(8,0,0.00331251);
   gre->SetPoint(9,2210000*ss,0.868524);
   gre->SetPointError(9,0,0.003775);
   gre->SetPoint(10,4830000*ss,0.847397);
   gre->SetPointError(10,0,0.00551738);
   gre->GetXaxis()->SetRangeUser(0,1.3);
   gre->GetYaxis()->SetRange(0,500000);
   TH1F *Graph_Graph_Graph_Graph4184 = new TH1F("Graph_Graph_Graph_Graph4184","",100,0,5312422);
   Graph_Graph_Graph_Graph4184->SetMinimum(0.8308045);
   Graph_Graph_Graph_Graph4184->SetMaximum(0.9637065);
   Graph_Graph_Graph_Graph4184->SetDirectory(0);
   Graph_Graph_Graph_Graph4184->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph4184->SetLineColor(ci);
   Graph_Graph_Graph_Graph4184->GetXaxis()->SetTitle("Average rate (N_{#mu}.s^{-1}.cm^{-2})");
   Graph_Graph_Graph_Graph4184->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph4184->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph4184->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph4184->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph4184->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph4184->GetYaxis()->SetTitle("#mu detection efficiency");
   Graph_Graph_Graph_Graph4184->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph4184->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph4184->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph4184->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph4184->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph4184->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph4184->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph4184->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph4184->GetZaxis()->SetTitleFont(42);
    Graph_Graph_Graph_Graph4184->GetYaxis()->SetRangeUser(0,1.3);
   Graph_Graph_Graph_Graph4184->GetYaxis()->SetRange(0,1.3);
   gre->SetHistogram(Graph_Graph_Graph_Graph4184);
   
   gre->Draw("p&");
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph4");
   //gre->SetTitle("Chambre 5 (Low Resistive Glass RPC)");
   gre->SetTitle("");


   gre->SetLineColor(4);

gre->SetMarkerSize(1.5);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,6750*ss,0.818118);
   gre->SetPointError(0,0,0.00652498);
   gre->SetPoint(1,15300*ss,0.859551);
   gre->SetPointError(1,0,0.00371018);
   gre->SetPoint(2,28500*ss,0.869325);
   gre->SetPointError(2,0,0.00275425);
   gre->SetPoint(3,78200*ss,0.852496);
   gre->SetPointError(3,0,0.00191306);
   gre->SetPoint(4,107000*ss,0.844565);
   gre->SetPointError(4,0,0.00214338);
   gre->SetPoint(5,253000*ss,0.801642);
   gre->SetPointError(5,0,0.00267808);
   gre->SetPoint(6,490000*ss,0.77863);
   gre->SetPointError(6,0,0.00379423);
   gre->SetPoint(7,823000*ss,0.751091);
   gre->SetPointError(7,0,0.00470814);
   gre->SetPoint(8,2210000*ss,0.700803);
   gre->SetPointError(8,0,0.00534877);
   gre->SetPoint(9,4830000*ss,0.681421);
   gre->SetPointError(9,0,0.00746557);
   gre->GetXaxis()->SetRangeUser(0,1.3);
   gre->GetYaxis()->SetRange(0,500000);
   TH1F *Graph_Graph_Graph_Graph5195 = new TH1F("Graph_Graph_Graph_Graph5195","",100,0,5312422);
   Graph_Graph_Graph_Graph5195->SetMinimum(0);
   Graph_Graph_Graph_Graph5195->SetMaximum(0.9592872);
   Graph_Graph_Graph_Graph5195->SetDirectory(0);
   Graph_Graph_Graph_Graph5195->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph5195->SetLineColor(ci);
   Graph_Graph_Graph_Graph5195->GetXaxis()->SetTitle("Average rate (N_{#mu}.s^{-1}.cm^{-2})");
   Graph_Graph_Graph_Graph5195->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph5195->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph5195->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph5195->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph5195->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph5195->GetYaxis()->SetTitle("#mu detection efficiency");
   Graph_Graph_Graph_Graph5195->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph5195->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph5195->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph5195->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph5195->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph5195->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph5195->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph5195->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph5195->GetZaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph5195->GetYaxis()->SetRangeUser(0,1.3);
   Graph_Graph_Graph_Graph5195->GetYaxis()->SetRange(0,1.3);
   gre->SetHistogram(Graph_Graph_Graph_Graph5195);
   
   gre->Draw("p&");
   
   gre = new TGraphErrors(11);
   gre->SetName("Graph5");
   //gre->SetTitle("Chambre 6 (Low Resistive Glass RPC)");
   gre->SetTitle("");
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(32);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,5780*ss,0.964904);
   gre->SetPointError(0,0,0.00161884);
   gre->SetPoint(1,6750*ss,0.968371);
   gre->SetPointError(1,0,0.00261764);
   gre->SetPoint(2,15300*ss,0.966203);
   gre->SetPointError(2,0,0.00172469);
   gre->SetPoint(3,28500*ss,0.966627);
   gre->SetPointError(3,0,0.00131816);
   gre->SetPoint(4,78200*ss,0.952356);
   gre->SetPointError(4,0,0.00103524);
   gre->SetPoint(5,107000*ss,0.947467);
   gre->SetPointError(5,0,0.00119486);
   gre->SetPoint(6,253000*ss,0.920595);
   gre->SetPointError(6,0,0.00164465);
   gre->SetPoint(7,490000*ss,0.899052);
   gre->SetPointError(7,0,0.00250036);
   gre->SetPoint(8,823000*ss,0.871394);
   gre->SetPointError(8,0,0.00333283);
   gre->SetPoint(9,2210000*ss,0.817966);
   gre->SetPointError(9,0,0.00415542);
   gre->SetPoint(10,4830000*ss,0.771213);
   gre->SetPointError(10,0,0.00633324);
   gre->GetXaxis()->SetRangeUser(0,1.3);
   gre->GetYaxis()->SetRange(0,500000);
   TH1F *Graph_Graph_Graph_Graph6206 = new TH1F("Graph_Graph_Graph_Graph6206","",100,0,5312422);
   Graph_Graph_Graph_Graph6206->SetMinimum(0.7442689);
   Graph_Graph_Graph_Graph6206->SetMaximum(0.9915995);
   Graph_Graph_Graph_Graph6206->SetDirectory(0);
   Graph_Graph_Graph_Graph6206->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph6206->SetLineColor(ci);
   Graph_Graph_Graph_Graph6206->GetXaxis()->SetTitle("Average rate (N_{#mu}.s^{-1}.cm^{-2})");
   Graph_Graph_Graph_Graph6206->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph6206->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph6206->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph6206->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph6206->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph6206->GetYaxis()->SetTitle("#mu detection efficiency");
   Graph_Graph_Graph_Graph6206->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph6206->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph6206->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph6206->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph6206->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph6206->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph6206->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph6206->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph6206->GetZaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph6206->GetYaxis()->SetRangeUser(0,1.3);
   Graph_Graph_Graph_Graph6206->GetYaxis()->SetRange(0,1.3);
   gre->SetHistogram(Graph_Graph_Graph_Graph6206);
   
   gre->Draw("p&");
   
   gre = new TGraphErrors(11);
   gre->SetName("Graph6");
  // gre->SetTitle("Chambre 7 (Standard Glass RPC)");
  gre->SetTitle("");
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(31);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,5780*ss,0.937506);
   gre->SetPointError(0,0,0.00238084);
   gre->SetPoint(1,6750*ss,0.932408);
   gre->SetPointError(1,0,0.00416789);
   gre->SetPoint(2,15300*ss,0.852038);
   gre->SetPointError(2,0,0.00397868);
   gre->SetPoint(3,28500*ss,0.707619);
   gre->SetPointError(3,0,0.00429972);
   gre->SetPoint(4,78200*ss,0.38838);
   gre->SetPointError(4,0,0.00401168);
   gre->SetPoint(5,107000*ss,0.348649);
   gre->SetPointError(5,0,0.00451826);
   gre->SetPoint(6,253000*ss,0.254837);
   gre->SetPointError(6,0,0.00521552);
   gre->SetPoint(7,490000*ss,0.245527);
   gre->SetPointError(7,0,0.00698108);
   gre->SetPoint(8,823000*ss,0.250365);
   gre->SetPointError(8,0,0.00802127);
   gre->SetPoint(9,2210000*ss,0.232597);
   gre->SetPointError(9,0,0.00840615);
   gre->SetPoint(10,4830000*ss,0.186328);
   gre->SetPointError(10,0,0.0117775);
   gre->GetXaxis()->SetRangeUser(0,1.3);
   gre->GetYaxis()->SetRange(0,500000);
   TH1F *Graph_Graph_Graph_Graph7217 = new TH1F("Graph_Graph_Graph_Graph7217","",100,0,5312422);
   Graph_Graph_Graph_Graph7217->SetMinimum(0.09801686);
   Graph_Graph_Graph_Graph7217->SetMaximum(1.01642);
   Graph_Graph_Graph_Graph7217->SetDirectory(0);
   Graph_Graph_Graph_Graph7217->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph7217->SetLineColor(ci);
   Graph_Graph_Graph_Graph7217->GetXaxis()->SetTitle("Average rate (N_{#mu}.s^{-1}.cm^{-2})");
   Graph_Graph_Graph_Graph7217->GetXaxis()->SetTitleOffset(3);
   Graph_Graph_Graph_Graph7217->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph7217->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph7217->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph7217->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph7217->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph7217->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph7217->GetYaxis()->SetTitle("#mu detection efficiency");
   Graph_Graph_Graph_Graph7217->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph7217->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph7217->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph7217->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph7217->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph7217->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph7217->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph7217->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph7217->GetZaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph7217->GetYaxis()->SetRangeUser(0,1.3);
   Graph_Graph_Graph_Graph7217->GetYaxis()->SetRange(0,1.3);
   gre->SetHistogram(Graph_Graph_Graph_Graph7217);
   
   gre->Draw("p&");
   

   TLegend *leg = new TLegend(0.5,0.8,0.9,0.9,NULL,"brNDC");
    leg->SetTextSize(0.015);
  //leg->SetLineColor(1);
  //leg->SetLineStyle(1);
 // leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(0);
  leg->SetBorderSize(0);
  leg->SetHeader("SPS test beams 06.2015");
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   leg-> SetNColumns(4);
   leg->SetTextSize(0.025);
   /*TLegendEntry *entry=leg->AddEntry("Graph0","Standard Glass RPC 1","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(3);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Standard Glass RPC 2","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(3);
   entry->SetTextFont(42);*/
   
   TLegendEntry *entry=leg->AddEntry("Graph1","","p");
   entry->SetTextAlign(13);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(0);
   entry=leg->AddEntry("Graph3","","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","","p");
   entry->SetFillStyle(1001);

   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","Low resistive glass RPC - 10^{10} #Omega.cm: 1,2,3,4","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(3);
   entry->SetTextFont(42);
   
   entry=leg->AddEntry("","","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(0);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(0);
   entry->SetTextFont(0);
   entry=leg->AddEntry("","","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(0);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(0);
   entry->SetTextFont(0);
   entry=leg->AddEntry("","","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(6);
   entry->SetLineStyle(0);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(0);
   entry->SetTextFont(0);
   entry=leg->AddEntry("Graph6","Float glass RPC ~10^{12}-10^{13}#Omega.cm","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   //TLine* line=TLine(0,1,5000,1);
//leg->Draw();
  }
 
  //TLegend *leg = new TLegend(0.55,0.35,0.70,0.50);
 
  //leg->AddEntry(gre, "Chineese chamber 2", "p");
  //leg->Draw();

  // writing the lumi information and the CMS "logo"
  CMS_lumi( canv, iPeriod, iPos );

  canv->Update();
  canv->RedrawAxis();
  canv->GetFrame()->Draw();
canv->Update();
  canv->RedrawAxis();
  canv->Print("Rate_#mu detection efficiency_good.C",".C");

  return canv;
}
