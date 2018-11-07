void R_CURRENT()
{
//=========Macro generated from canvas: example/example
//=========  (Wed Nov  7 05:19:57 2018) by ROOT version6.02/05
   TCanvas *example = new TCanvas("example", "example",6,53,800,600);
   example->SetHighLightColor(2);
   example->Range(-0.6187396,-97.46835,4.203434,598.7342);
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
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1001[7] = {
   0.299,
   0.605,
   0.895,
   1.113,
   1.765,
   2.3,
   3.39};
   Double_t Graph_fy1001[7] = {
   43.4,
   85,
   126.2,
   159.1,
   240.6,
   308,
   459.7};
   Double_t Graph_fex1001[7] = {
   0.061,
   0.107,
   0.16,
   0.19,
   0.312,
   0.381,
   0.545};
   Double_t Graph_fey1001[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(7,Graph_fx1001,Graph_fy1001,Graph_fex1001,Graph_fey1001);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.0);
   
   TH1F *Graph_Graph_Graph_Graph100110031001 = new TH1F("Graph_Graph_Graph_Graph100110031001","Graph",100,0,4.3047);
   Graph_Graph_Graph_Graph100110031001->SetMinimum(1.77);
   Graph_Graph_Graph_Graph100110031001->SetMaximum(501.33);
   Graph_Graph_Graph_Graph100110031001->SetDirectory(0);
   Graph_Graph_Graph_Graph100110031001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph100110031001->SetLineColor(ci);
   Graph_Graph_Graph_Graph100110031001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110031001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph100110031001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph100110031001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100110031001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110031001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph100110031001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph100110031001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph_Graph100110031001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100110031001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100110031001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph100110031001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph100110031001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100110031001);
   
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1002[7] = {
   0.299,
   0.605,
   0.895,
   1.113,
   1.765,
   2.3,
   3.39};
   Double_t Graph_fy1002[7] = {
   47.5,
   91.5,
   133.2,
   165.5,
   247.6,
   314.1,
   460.1};
   Double_t Graph_fex1002[7] = {
   0.061,
   0.107,
   0.16,
   0.19,
   0.312,
   0.381,
   0.545};
   Double_t Graph_fey1002[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(7,Graph_fx1002,Graph_fy1002,Graph_fex1002,Graph_fey1002);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.0);
   
   TH1F *Graph_Graph_Graph_Graph100210041002 = new TH1F("Graph_Graph_Graph_Graph100210041002","Graph",100,0,4.3047);
   Graph_Graph_Graph_Graph100210041002->SetMinimum(6.239999);
   Graph_Graph_Graph_Graph100210041002->SetMaximum(501.36);
   Graph_Graph_Graph_Graph100210041002->SetDirectory(0);
   Graph_Graph_Graph_Graph100210041002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph100210041002->SetLineColor(ci);
   Graph_Graph_Graph_Graph100210041002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100210041002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph100210041002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph100210041002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100210041002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100210041002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph100210041002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph100210041002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_Graph_Graph100210041002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph100210041002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph100210041002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph100210041002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph100210041002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph100210041002);
   
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("#gamma cluster rate (kHz cm^{-2})");
   multigraph->GetXaxis()->SetRange(0,101);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("I (#muA)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleOffset(1);
   multigraph->GetYaxis()->SetTitleFont(42);
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

   
   TLegend *leg = new TLegend(0.45,0.7,0.75,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(0);
   leg->SetFillColor(10);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph_Graph_Graph_Graph100110031001","Bottom gap","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_Graph_Graph_Graph100110031002","Top gap","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.5);
   entry->SetTextFont(42);
   leg->Draw();
   example->Modified();
   example->cd();
   example->SetSelected(example);
}
