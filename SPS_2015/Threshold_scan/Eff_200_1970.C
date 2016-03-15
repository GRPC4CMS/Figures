#include "tdrstyle.C"
#include "CMS_lumi.C"
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

   TGraphErrors *gre = new TGraphErrors(23);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.1428571,0.873786);
   gre->SetPointError(0,0,0.0247525);
   gre->SetPoint(2,0.2571429,0.857143);
   gre->SetPointError(2,0,0.0381802);
   gre->SetPoint(3,0.3142857,0.856757);
   gre->SetPointError(3,0,0.0113599);
   gre->SetPoint(4,0.3714286,0.875);
   gre->SetPointError(4,0,0.0245145);
   gre->SetPoint(6,0.5428572,0.895161);
   gre->SetPointError(6,0,0.0205606);
   gre->SetPoint(7,0.6,0.835616);
   gre->SetPointError(7,0,0.0474534);
   gre->SetPoint(8,0.6,0.835616);
   gre->SetPointError(8,0,0.0474534);
   gre->SetPoint(9,0.9,0.875752);
   gre->SetPointError(9,0,0.0157796);
   gre->SetPoint(10,1.15,0.891234);
   gre->SetPointError(10,0,0.0132879);
   gre->SetPoint(11,1.4,0.883249);
   gre->SetPointError(11,0,0.0140552);
   gre->SetPoint(12,1.525,0.83878);
   gre->SetPointError(12,0,0.0187414);
   gre->SetPoint(13,1.775,0.857671);
   gre->SetPointError(13,0,0.0162199);
   gre->SetPoint(14,2.025,0.85447);
   gre->SetPointError(14,0,0.0173942);
   gre->SetPoint(15,2.275,0.845763);
   gre->SetPointError(15,0,0.0161685);
   gre->SetPoint(16,2.525,0.8);
   gre->SetPointError(16,0,0.019245);
   gre->SetPoint(17,3.15,0.804286);
   gre->SetPointError(17,0,0.016721);
   gre->SetPoint(18,3.775,0.739206);
   gre->SetPointError(18,0,0.0212232);
   gre->SetPoint(19,4.4,0.647362);
   gre->SetPointError(19,0,0.0213037);
   gre->SetPoint(20,5.025,0.592593);
   gre->SetPointError(20,0,0.0210665);
   gre->SetPoint(21,5.65,0.350529);
   gre->SetPointError(21,0,0.0293102);
   gre->SetPoint(22,6.275,0.0526316);
   gre->SetPointError(22,0,0.0394737);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,0,6.888214);
   Graph_Graph3->SetMinimum(0);
   Graph_Graph3->SetMaximum(1);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetTitle("Threshold (pC)");
   Graph_Graph3->GetXaxis()->CenterTitle(true);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph3->GetYaxis()->CenterTitle(true);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph3);
   
   gre->Draw("ap");

  }

  TLegend *leg = new TLegend(0.55,0.35,0.70,0.50);
  leg->SetTextSize(0.035);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetBorderSize(0);
  leg->SetHeader("GIF++ test beams 08.2015");
  leg->AddEntry(gre, "Low Resistivity Glass RPC", "p");
  leg->Draw();

  // writing the lumi information and the CMS "logo"
  CMS_lumi( canv, iPeriod, iPos );

  canv->Update();
  canv->RedrawAxis();
  canv->GetFrame()->Draw();

  canv->Print(canvName+".pdf",".pdf");
  canv->Print(canvName+".png",".png");

  return canv;
}
