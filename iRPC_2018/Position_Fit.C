void Position_Fit()
{
//=========Macro generated from canvas: example/example
//=========  (Wed Nov  7 03:54:43 2018) by ROOT version6.02/05
   TCanvas *example = new TCanvas("example", "example",12,80,800,600);
   example->SetHighLightColor(2);
   example->Range(-347.8261,-1.230769,1698.21,21.84615);
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
   
   Double_t Graph0_fx1001[18] = {
   299.9139,
   349,
   351,
   388.7439,
   500,
   600,
   650,
   699.9,
   750,
   800,
   850,
   900,
   950,
   999.9,
   1050,
   1100,
   1200,
   1275.1};
   Double_t Graph0_fy1001[18] = {
   15.27004,
   14.78616,
   14.76182,
   14.42681,
   13.36572,
   12.26203,
   11.92109,
   11.35288,
   10.84919,
   10.36835,
   9.87505,
   9.431176,
   8.798319,
   8.198785,
   7.824253,
   7.282055,
   6.015434,
   5.418541};
   Double_t Graph0_fex1001[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[18] = {
   0.05567364,
   0.0616189,
   0.06295186,
   0.05001527,
   0.04604799,
   0.04363935,
   0.04280467,
   0.05265124,
   0.05607422,
   0.04891339,
   0.04915029,
   0.0506349,
   0.06345937,
   0.0443578,
   0.04125316,
   0.04036304,
   0.04151464,
   0.07305226};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1);
   
   TH1F *Graph_Graph_Graph10011001 = new TH1F("Graph_Graph_Graph10011001","",100,0,1600);
   Graph_Graph_Graph10011001->SetMinimum(2);
   Graph_Graph_Graph10011001->SetMaximum(20);
   Graph_Graph_Graph10011001->SetDirectory(0);
   Graph_Graph_Graph10011001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10011001->SetLineColor(ci);
   Graph_Graph_Graph10011001->GetXaxis()->SetTitle("Muon beam distance from HR (mm)");
   Graph_Graph_Graph10011001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10011001->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph10011001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011001->GetYaxis()->SetTitle("<#Delta T> = <T_{HR} - T_{LR}> (ns)");
   Graph_Graph_Graph10011001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10011001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10011001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10011001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10011001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10011001);
   
   
   TF1 *PrevFitTMP1002 = new TF1("PrevFitTMP","[0]+[1]*x",272,1296);
   PrevFitTMP1002->SetFillColor(19);
   PrevFitTMP1002->SetFillStyle(0);
   PrevFitTMP1002->SetLineColor(2);
   PrevFitTMP1002->SetLineWidth(2);
   PrevFitTMP1002->SetChisquare(66.16189);
   PrevFitTMP1002->SetNDF(16);
   PrevFitTMP1002->GetXaxis()->SetLabelFont(42);
   PrevFitTMP1002->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP1002->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP1002->GetXaxis()->SetTitleFont(42);
   PrevFitTMP1002->GetYaxis()->SetLabelFont(42);
   PrevFitTMP1002->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP1002->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP1002->GetYaxis()->SetTitleFont(42);
   PrevFitTMP1002->SetParameter(0,18.41676);
   PrevFitTMP1002->SetParError(0,0.03447258);
   PrevFitTMP1002->SetParLimits(0,0,0);
   PrevFitTMP1002->SetParameter(1,-0.01015397);
   PrevFitTMP1002->SetParError(1,4.117723e-05);
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
      tex = new TLatex(0.22,0.8,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   //   tex->Draw();
      tex = new TLatex(0.952,0.94,"H2 line");
tex->SetNDC();
   tex->SetTextAlign(31);
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
