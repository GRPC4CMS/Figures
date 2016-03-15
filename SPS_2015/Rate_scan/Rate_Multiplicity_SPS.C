
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
double ss=1.0/650;
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
   gre->SetTitle("Chambre 1 (Standard Glass RPC)");
   gre->SetMarkerStyle(29);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,5780*ss,1.7426);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,6750*ss,1.67431);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,15300*ss,1.52991);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,28500*ss,1.40068);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,78200*ss,1.36311);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,107000*ss,1.35887);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,253000*ss,1.37271);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,490000*ss,1.38689);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,823000*ss,1.384);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2210000*ss,1.35457);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,4830000*ss,1.34199);
   gre->SetPointError(10,0,0);
   
   TH1F *Graph_Graph_Graph_Graph8228 = new TH1F("Graph_Graph_Graph_Graph8228","Chambre 1 (Standard Glass RPC)",100,0,5312422);
   Graph_Graph_Graph_Graph8228->SetMinimum(0);
   Graph_Graph_Graph_Graph8228->SetMaximum(4);
   Graph_Graph_Graph_Graph8228->SetDirectory(0);
   Graph_Graph_Graph_Graph8228->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph8228->SetLineColor(ci);
   Graph_Graph_Graph_Graph8228->GetXaxis()->SetTitle("Average rate (Part.s^{-1}.cm^{-2})");
   Graph_Graph_Graph_Graph8228->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph8228->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph8228->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph8228->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph8228->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph8228->GetYaxis()->SetTitle("Multiplicity");
   Graph_Graph_Graph_Graph8228->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph8228->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph8228->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph8228->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph8228->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph8228->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph8228->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph8228->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph8228->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph8228);
   
   //gre->Draw("ap");
   
   gre = new TGraphErrors(11);
   gre->SetName("Graph1");
   gre->SetTitle("Chambre 2 (Low Resistive Glass RPC)");
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,5780*ss,3.00368);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,6750*ss,2.98372);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,15300*ss,2.94362);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,28500*ss,2.7862);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,78200*ss,2.54954);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,107000*ss,2.48986);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,253000*ss,2.33579);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,490000*ss,2.28328);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,823000*ss,2.24807);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2210000*ss,2.16867);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,4830000*ss,2.09771);
   gre->SetPointError(10,0,0);
   
   TH1F *Graph_Graph_Graph_Graph9239 = new TH1F("Graph_Graph_Graph_Graph9239","Chambre 2 (Low Resistive Glass RPC)",100,0,5312422);
   Graph_Graph_Graph_Graph9239->SetMinimum(2.007113);
   Graph_Graph_Graph_Graph9239->SetMaximum(3.094277);
   Graph_Graph_Graph_Graph9239->SetDirectory(0);
   Graph_Graph_Graph_Graph9239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph9239->SetLineColor(ci);
   Graph_Graph_Graph_Graph9239->GetXaxis()->SetTitle("Average rate (Part.s^{-1}.cm^{-2})");
   Graph_Graph_Graph_Graph9239->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph9239->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph9239->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph9239->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph9239->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph9239->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph_Graph_Graph9239->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph9239->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph9239->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph9239->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph9239->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph9239->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph9239->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph9239->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph9239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph9239);
   
   gre->Draw("pa");
   
   gre = new TGraphErrors(11);
   gre->SetName("Graph2");
   gre->SetTitle("Chambre 3 (Standard Glass RPC)");
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(30);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,5780*ss,1.86503);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,6750*ss,1.74193);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,15300*ss,1.55503);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,28500*ss,1.44924);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,78200*ss,1.39601);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,107000*ss,1.38116);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,253000*ss,1.39267);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,490000*ss,1.39215);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,823000*ss,1.40279);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2210000*ss,1.39752);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,4830000*ss,1.3868);
   gre->SetPointError(10,0,0);
   
   TH1F *Graph_Graph_Graph_Graph102410 = new TH1F("Graph_Graph_Graph_Graph102410","Chambre 3 (Standard Glass RPC)",100,0,5312422);
   Graph_Graph_Graph_Graph102410->SetMinimum(1.332773);
   Graph_Graph_Graph_Graph102410->SetMaximum(1.913417);
   Graph_Graph_Graph_Graph102410->SetDirectory(0);
   Graph_Graph_Graph_Graph102410->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph102410->SetLineColor(ci);
   Graph_Graph_Graph_Graph102410->GetXaxis()->SetTitle("Average rate (Part.s^{-1}.cm^{-2})");
   Graph_Graph_Graph_Graph102410->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph102410->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph102410->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph102410->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph102410->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph102410->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph_Graph_Graph102410->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph102410->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph102410->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph102410->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph102410->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph102410->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph102410->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph102410->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph102410->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph102410);
   
   //gre->Draw("p&");
   
   gre = new TGraphErrors(11);
   gre->SetName("Graph3");
   gre->SetTitle("Chambre 4 (Low Resistive Glass RPC)");
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(23);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,5780*ss,2.49698);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,6750*ss,2.45358);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,15300*ss,2.41177);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,28500*ss,2.36079);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,78200*ss,2.22685);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,107000*ss,2.19751);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,253000*ss,2.11618);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,490000*ss,2.10728);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,823000*ss,2.20537);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2210000*ss,2.39673);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,4830000*ss,2.59134);
   gre->SetPointError(10,0,0);
   
   TH1F *Graph_Graph_Graph_Graph112511 = new TH1F("Graph_Graph_Graph_Graph112511","Chambre 4 (Low Resistive Glass RPC)",100,0,5312422);
   Graph_Graph_Graph_Graph112511->SetMinimum(2.058874);
   Graph_Graph_Graph_Graph112511->SetMaximum(2.639746);
   Graph_Graph_Graph_Graph112511->SetDirectory(0);
   Graph_Graph_Graph_Graph112511->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph112511->SetLineColor(ci);
   Graph_Graph_Graph_Graph112511->GetXaxis()->SetTitle("Average rate (Part.s^{-1}.cm^{-2})");
   Graph_Graph_Graph_Graph112511->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph112511->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph112511->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph112511->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph112511->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph112511->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph_Graph_Graph112511->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph112511->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph112511->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph112511->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph112511->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph112511->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph112511->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph112511->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph112511->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph112511);
   
   gre->Draw("p&");
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph4");
   gre->SetTitle("Chambre 5 (Low Resistive Glass RPC)");

   ci = TColor::GetColor("#ff6633");
   gre->SetLineColor(5);

   ci = TColor::GetColor("#ff6633");
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,6750*ss,1.58712);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,15300*ss,1.59122);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,28500*ss,1.58584);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,78200*ss,1.56643);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,107000*ss,1.56203);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,253000*ss,1.56479);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,490000*ss,1.6204);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,823000*ss,1.72504);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,2210000*ss,1.88416);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,4830000*ss,2.08909);
   gre->SetPointError(9,0,0);
   
   TH1F *Graph_Graph_Graph_Graph122612 = new TH1F("Graph_Graph_Graph_Graph122612","Chambre 5 (Low Resistive Glass RPC)",100,0,5312422);
   Graph_Graph_Graph_Graph122612->SetMinimum(0);
   Graph_Graph_Graph_Graph122612->SetMaximum(2.297999);
   Graph_Graph_Graph_Graph122612->SetDirectory(0);
   Graph_Graph_Graph_Graph122612->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph122612->SetLineColor(ci);
   Graph_Graph_Graph_Graph122612->GetXaxis()->SetTitle("Average rate (Part.s^{-1}.cm^{-2})");
   Graph_Graph_Graph_Graph122612->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph122612->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph122612->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph122612->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph122612->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph122612->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph_Graph_Graph122612->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph122612->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph122612->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph122612->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph122612->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph122612->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph122612->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph122612->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph122612->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph122612);
   
   gre->Draw("p&");
   
   gre = new TGraphErrors(11);
   gre->SetName("Graph5");
   gre->SetTitle("Chambre 6 (Low Resistive Glass RPC)");
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
    gre->SetMarkerSize(1.5);
   gre->SetMarkerStyle(32);
   gre->SetPoint(0,5780*ss,2.04976);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,6750*ss,1.95101);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,15300*ss,1.95564);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,28500*ss,1.92411);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,78200*ss,1.91605);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,107000*ss,1.90463);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,253000*ss,1.93084);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,490000*ss,1.96811);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,823000*ss,2.07454);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2210000*ss,2.15598);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,4830000*ss,2.20095);
   gre->SetPointError(10,0,0);
   
   TH1F *Graph_Graph_Graph_Graph132713 = new TH1F("Graph_Graph_Graph_Graph132713","Chambre 6 (Low Resistive Glass RPC)",100,0,5312422);
   Graph_Graph_Graph_Graph132713->SetMinimum(1.874998);
   Graph_Graph_Graph_Graph132713->SetMaximum(2.230582);
   Graph_Graph_Graph_Graph132713->SetDirectory(0);
   Graph_Graph_Graph_Graph132713->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph132713->SetLineColor(ci);
   Graph_Graph_Graph_Graph132713->GetXaxis()->SetTitle("Average rate (Part.s^{-1}.cm^{-2})");
   Graph_Graph_Graph_Graph132713->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph132713->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_Graph_Graph132713->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph132713->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph132713->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph132713->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph132713->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph132713->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph_Graph_Graph132713->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph132713->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph132713->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph132713->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph132713->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph132713->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph132713->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph132713->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph132713->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph132713);
   
   gre->Draw("p&");
   
   gre = new TGraphErrors(11);
   gre->SetName("Graph6");
   gre->SetTitle("Chambre 7 (Standard Glass RPC)");
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(31);
    gre->SetMarkerSize(1.5);
   gre->SetPoint(0,5780*ss,2.03947);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,6750*ss,1.87872);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,15300*ss,1.65733);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,28500*ss,1.60075);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,78200*ss,1.65312);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,107000*ss,1.67035);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,253000*ss,1.75519);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,490000*ss,1.73402);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,823000*ss,1.66781);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,2210000*ss,1.6635);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,4830000*ss*ss,1.76304);
   gre->SetPointError(10,0,0);
   
   TH1F *Graph_Graph_Graph_Graph142814 = new TH1F("Graph_Graph_Graph_Graph142814","Chambre 7 (Standard Glass RPC)",100,0,5312422);
   Graph_Graph_Graph_Graph142814->SetMinimum(1.556878);
   Graph_Graph_Graph_Graph142814->SetMaximum(2.083342);
   Graph_Graph_Graph_Graph142814->SetDirectory(0);
   Graph_Graph_Graph_Graph142814->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph142814->SetLineColor(ci);
   Graph_Graph_Graph_Graph142814->GetXaxis()->SetTitle("Average rate (Part.s^{-1}.cm^{-2})");
     Graph_Graph_Graph_Graph142814->GetXaxis()->SetTitleOffset(1.1);
  Graph_Graph_Graph_Graph142814->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph142814->GetXaxis()->CenterTitle(true);
    
   Graph_Graph_Graph_Graph142814->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph142814->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph142814->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph142814->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph142814->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph_Graph_Graph142814->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph142814->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph142814->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph142814->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph142814->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph142814->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph142814->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph142814->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph142814->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph142814);
   
   gre->Draw("p&");
   

   
   TLegend *leg = new TLegend(0.4769254,0.2760147,0.7974054,0.6508204,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Standard Glass RPC 1","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(0);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(29);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Standard Glass RPC 2","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(0);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(30);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph6","Standard Glass RPC ","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(0);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(31);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Low Resistive Glass RPC 1 (~10^{10}#Omega)","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(0);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","Low Resistive Glass RPC 2 (~10^{10}#Omega)","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(0);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","Low Resistive Glass RPC 3 (~10^{10}#Omega)","p");
   entry->SetFillStyle(1001);

   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(0);

   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","Low Resistive Glass RPC 4 (~10^{10}#Omega)","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(0);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(32);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);

  }

  //TLegend *leg = new TLegend(0.55,0.35,0.70,0.50);
  leg->SetTextSize(0.015);
  //leg->SetLineColor(1);
  //leg->SetLineStyle(1);
 // leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(0);
  leg->SetBorderSize(0);
  leg->SetHeader("SPS test beams 06.2015");
  //leg->AddEntry(gre, "Chineese chamber 2", "p");
  //leg->Draw();

  // writing the lumi information and the CMS "logo"
  CMS_lumi( canv, iPeriod, iPos );

  canv->Update();
  canv->RedrawAxis();
  canv->GetFrame()->Draw();

  canv->Print(canvName+".pdf",".pdf");
  canv->Print(canvName+".png",".png");

  return canv;
}
