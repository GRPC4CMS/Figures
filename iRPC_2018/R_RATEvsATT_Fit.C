void R_RATEvsATT_Fit()
{
//=========Macro generated from canvas: example/example
//=========  (Wed Nov  7 05:52:23 2018) by ROOT version6.02/05
   TCanvas *example = new TCanvas("example", "example",12,80,800,600);
   example->SetHighLightColor(2);
   example->Range(-0.07199117,-0.7726384,0.3514863,4.746208);
   example->SetFillColor(0);
   example->SetBorderMode(0);
   example->SetBorderSize(2);
   example->SetTickx(1);
   example->SetTicky(1);
   example->SetLeftMargin(0.17);
   example->SetRightMargin(0.048);
   example->SetTopMargin(0.08);
   example->SetBottomMargin(0.14);
   example->SetFrameFillStyle(0);
   example->SetFrameBorderMode(0);
   example->SetFrameFillStyle(0);
   example->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[7] = {
   0.02173913,
   0.04545455,
   0.06666667,
   0.1,
   0.1470588,
   0.2173913,
   0.3030303};
   Double_t Graph0_fy1001[7] = {
   0.299,
   0.605,
   0.895,
   1.113,
   1.765,
   2.3,
   3.39};
   Double_t Graph0_fex1001[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[7] = {
   0.061,
   0.107,
   0.16,
   0.19,
   0.312,
   0.381,
   0.545};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_Graph0100410011001 = new TH1F("Graph_Graph_Graph_Graph0100410011001","",100,0,0.3311594);
   Graph_Graph_Graph_Graph0100410011001->SetMinimum(0);
   Graph_Graph_Graph_Graph0100410011001->SetMaximum(4.3047);
   Graph_Graph_Graph_Graph0100410011001->SetDirectory(0);
   Graph_Graph_Graph_Graph0100410011001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph0100410011001->SetLineColor(ci);
   Graph_Graph_Graph_Graph0100410011001->GetXaxis()->SetTitle("1/ATT");
   Graph_Graph_Graph_Graph0100410011001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100410011001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100410011001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100410011001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0100410011001->GetYaxis()->SetTitle("#gamma cluster rate (kHz cm^{-2})");
   Graph_Graph_Graph_Graph0100410011001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100410011001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph0100410011001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph0100410011001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph0100410011001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph0100410011001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph0100410011001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph0100410011001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph0100410011001);
   
   
   TF1 *PrevFitTMP1002 = new TF1("PrevFitTMP","[0]+[1]*x",0,0.3311594);
   PrevFitTMP1002->SetFillColor(19);
   PrevFitTMP1002->SetFillStyle(0);
   PrevFitTMP1002->SetLineColor(2);
   PrevFitTMP1002->SetLineWidth(2);
   PrevFitTMP1002->SetChisquare(0.7801989);
   PrevFitTMP1002->SetNDF(5);
   PrevFitTMP1002->GetXaxis()->SetLabelFont(42);
   PrevFitTMP1002->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP1002->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP1002->GetXaxis()->SetTitleFont(42);
   PrevFitTMP1002->GetYaxis()->SetLabelFont(42);
   PrevFitTMP1002->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP1002->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP1002->GetYaxis()->SetTitleFont(42);
   PrevFitTMP1002->SetParameter(0,0.07796146);
   PrevFitTMP1002->SetParError(0,0.06823843);
   PrevFitTMP1002->SetParLimits(0,0,0);
   PrevFitTMP1002->SetParameter(1,10.91907);
   PrevFitTMP1002->SetParError(1,1.130668);
   PrevFitTMP1002->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(PrevFitTMP1002);
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.17,0.94,"");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.22,0.82,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.952,0.94,"GIF++");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.17,0.94,"");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.17,0.94,"Return-scheme prototype");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   example->Modified();
   example->cd();
   example->SetSelected(example);
}
