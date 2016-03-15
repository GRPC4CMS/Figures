#include "Style.h"
#include "TH1.h"
#include "TH1F.h"
 
TCanvas* example_plot( int iPeriod, int iPos );
 
void myMacro()
{

  setTDRStyle();

  writeExtraText = true;       // if extra text
  /*extraTexts.push_back("Preliminary");
  extraTexts.push_back(" ");
  extraTexts.push_back("CMS gas mixture");
  extraTextFonts.push_back(52);
  extraTextFonts.push_back(52);
  extraTextFonts.push_back(51);
  extraTextSizes.push_back(extraTextSize);
  extraTextSizes.push_back(extraTextSize);
  extraTextSizes.push_back(0.33);*/
  int iPeriod = 2;    // 1=Emu = 150 GeV; 2=Nothing for the mometnt just fill with what we need

  // second parameter in example_plot is iPos, which drives the position of the CMS logo in the plot
  // iPos=11 : top-left, left-aligned
  // iPos=33 : top-right, right-aligned
  // iPos=22 : center, centered
  // mode generally : 
  //   iPos = 10*(alignement 1/2/3) + position (1/2/3 = left/center/right)

  int iPos = 11;

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
		 TLatex latex;
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

          gre = new TGraphErrors(20);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,5400,1.13313);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,5500,1.09136);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,5600,1.13001);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,5700,1.20645);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,5800,1.28269);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,5900,1.36188);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,6000,1.45264);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,6100,1.54098);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,6200,1.63157);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,6300,1.74623);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,6400,1.84249);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,6500,1.97674);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,6600,2.10343);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,6700,2.26613);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,6800,2.45509);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,7000,2.91188);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,7100,3.10152);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,7300,3.44235);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,7400,3.56932);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,7500,3.66958);
   gre->SetPointError(19,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,5190,7710);
   Graph_Graph2->SetMinimum(0.833538);
   Graph_Graph2->SetMaximum(3.927402);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("Applied voltage (kV)");
   Graph_Graph2->GetXaxis()->CenterTitle(true);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("Cluster Size");
   Graph_Graph2->GetYaxis()->CenterTitle(true);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.1);
   gre->Draw("ap");
   TPaveText *pt = new TPaveText(.02,.2,.2,.35,"NDCNB");
   pt->SetBorderSize(0)
   pt->SetFillColorAlpha(kWhite, 1);
   //pt->SetFillColor(kWhite);
   pt->SetMargin(0)
   pt->SetTextSize(0.6 )
   pt->SetTextFont(42)
   pt->SetTextAlign(33)
   pt->AddText("Preliminary");
   pt->AddText("CMS Gas Mixture");
   pt->Draw();
   

  }

  TLegend *leg = new TLegend(0.65,0.25,0.75,0.40);
  leg->SetTextSize(0.035);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetBorderSize(0);
  leg->SetHeader("SPS test beams 06.2015");
  leg->AddEntry(gre, "Low Resistive Glass RPC", "p");
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
