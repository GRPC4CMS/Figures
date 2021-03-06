plot()
{
//=========Macro generated from canvas: FigExample/FigExample
//=========  (Wed Feb 10 18:30:48 2016) by ROOT version5.34/32
   TCanvas *FigExample = new TCanvas("FigExample", "FigExample",0,23,1366,720);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   FigExample->Range(1.546456,-0.2025,6.412106,1.485);
   FigExample->SetFillColor(0);
   FigExample->SetBorderMode(0);
   FigExample->SetBorderSize(2);
   FigExample->SetLogx();
   FigExample->SetLeftMargin(0.12);
   FigExample->SetRightMargin(0.04);
   FigExample->SetTopMargin(0.08);
   FigExample->SetBottomMargin(0.12);
   FigExample->SetFrameFillStyle(0);
   FigExample->SetFrameBorderMode(0);
   FigExample->SetFrameFillStyle(0);
   FigExample->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(1.8);
   gre->SetPoint(0,1500000,0.192982);
   gre->SetPointError(0,0,0.118988);
   gre->SetPoint(1,681818.2,0.704545);
   gre->SetPointError(1,0,0.0473106);
   gre->SetPoint(2,217391.3,0.943028);
   gre->SetPointError(2,0,0.009242);
   gre->SetPoint(3,68181.82,0.973359);
   gre->SetPointError(3,0,0.00320719);
   gre->SetPoint(4,326.0869,0.967568);
   gre->SetPointError(4,0,0.0132405);
   gre->SetPoint(5,150,0.97559);
   gre->SetPointError(5,0,0.00223768);
   
   TH1F *Graph_Graph_Graph11 = new TH1F("Graph_Graph_Graph11","",100,135,1649985);
   Graph_Graph_Graph11->SetMinimum(0);
   Graph_Graph_Graph11->SetMaximum(1.35);
   Graph_Graph_Graph11->SetDirectory(0);
   Graph_Graph_Graph11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11->SetLineColor(ci);
   Graph_Graph_Graph11->SetLineStyle(0);
   Graph_Graph_Graph11->SetMarkerStyle(20);
   Graph_Graph_Graph11->GetXaxis()->SetTitle("Cesium Source Rate ( N_{#gamma}.cm^{-2}.s^{-1} )");
   Graph_Graph_Graph11->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph11->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetXaxis()->SetTitleSize(0.045);
   Graph_Graph_Graph11->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetYaxis()->SetTitle("#mu detection efficiency");
   Graph_Graph_Graph11->GetYaxis()->SetRange(0,1);
   Graph_Graph_Graph11->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph11->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetYaxis()->SetTitleSize(0.045);
   Graph_Graph_Graph11->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph11);
   
   gre->Draw("ap");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph1");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(3);
   gre->SetMarkerSize(1.8);
   gre->SetPoint(0,1500000,0);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,681818.2,0.0381356);
   gre->SetPointError(1,0,0.0638412);
   gre->SetPoint(2,217391.3,0.242259);
   gre->SetPointError(2,0,0.0371513);
   gre->SetPoint(3,68181.82,0.70679);
   gre->SetPointError(3,0,0.0113702);
   gre->SetPoint(4,326.0869,0.919075);
   gre->SetPointError(4,0,0.021681);
   gre->SetPoint(5,150,0.929634);
   gre->SetPointError(5,0,0.00395216);
   
   TH1F *Graph_Graph_Graph22 = new TH1F("Graph_Graph_Graph22","",100,135,1649985);
   Graph_Graph_Graph22->SetMinimum(-0.1223518);
   Graph_Graph_Graph22->SetMaximum(1.037402);
   Graph_Graph_Graph22->SetDirectory(0);
   Graph_Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph22->SetLineColor(ci);
   Graph_Graph_Graph22->SetLineStyle(0);
   Graph_Graph_Graph22->SetMarkerStyle(20);
   Graph_Graph_Graph22->GetXaxis()->SetTitle("Cesium Source Rate ( N_{#gamma}.cm^{-2}.s^{-1} )");
   Graph_Graph_Graph22->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph22->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetXaxis()->SetTitleSize(0.045);
   Graph_Graph_Graph22->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph_Graph22->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph22->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetYaxis()->SetTitleSize(0.045);
   Graph_Graph_Graph22->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph22->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph22);
   
   gre->Draw("p&");
   
   TLegend *leg = new TLegend(0.15,0.15,0.3,0.3,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","GIF++ test beams 08.2015","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","Low Resistive Glass RPC ~10^{10}#Omega","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.8);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Float Glass RPC ~10^{12}-10^{13}#Omega","p");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(3);
   entry->SetMarkerSize(1.8);
   entry->SetTextFont(42);
   leg->Draw();
   TLine *line = new TLine(0,1,1650000,1);
   line->SetLineStyle(2);
   line->Draw();
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,135,1649985);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1.07149);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetTitle("Cesium Source Rate ( N_{#gamma}.cm^{-2}.s^{-1} )");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.045);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("#mu detection efficiency");
   Graph_Graph1->GetYaxis()->SetRange(0,1);
   Graph_Graph1->GetYaxis()->CenterTitle(true);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.045);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   Graph_Graph1->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.96,0.936," ");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1722,0.892,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1722,0.851872,"CMS gas mixture : 95.2% TFE, 4.5%CO_{2}, 0.3%SF_{6}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1722,0.811744,"Threshold : 0.13pC");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1722,0.7635904,"Sensitivity to background with E_{#gamma} = 661.7 keV : 3.1 hits/1000 #gamma");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,135,1649985);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1.07149);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetTitle("Cesium Source Rate ( N_{#gamma}.cm^{-2}.s^{-1} )");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.045);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("#mu detection efficiency");
   Graph_Graph1->GetYaxis()->SetRange(0,1);
   Graph_Graph1->GetYaxis()->CenterTitle(true);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.045);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   Graph_Graph1->Draw("sameaxis");
   FigExample->Modified();
   FigExample->cd();
   FigExample->SetSelected(FigExample);
}
