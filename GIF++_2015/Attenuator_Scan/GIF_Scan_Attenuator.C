{
//=========Macro generated from canvas: c1/
//=========  (Sun Jan 31 12:04:52 2016) by ROOT version5.34/32
   TCanvas *c1 = new TCanvas("c1", "",2,23,800,719);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0,0,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(1.61944,-0.1339363,6.728373,1.205426);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogx();
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph0");
   gre->SetTitle("");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
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
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,135,1649985);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1.07149);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Cesium Source Rate (Gamma*cm^{-2}*s^{-1})");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.045);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph1->GetYaxis()->CenterTitle(true);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.045);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("ap");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph1");
   gre->SetTitle("");

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
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
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,135,1649985);
   Graph_Graph2->SetMinimum(-0.1223518);
   Graph_Graph2->SetMaximum(1.037402);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("Cesium Source Rate (Gamma*cm^{-2}*s^{-1})");
   Graph_Graph2->GetXaxis()->CenterTitle(true);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.045);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph2->GetYaxis()->CenterTitle(true);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.045);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   
   gre->Draw("p&&");
   pad1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad2
   pad2 = new TPad("pad2", "",0,0,1,1);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-12488.75,-0.125,112498.8,1.125);
   pad2->SetFillColor(0);
   pad2->SetFillStyle(4000);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetFrameBorderMode(0);
   TGaxis *gaxis = new TGaxis(100000,1,10,1,10,100000,510,"G+");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.025);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.2);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Attenator factor on Cesium Source Rate");
   gaxis->Draw();
   
   TLegend *leg = new TLegend(0.1,0.1,0.5,0.5,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Low Resistive Glass RPC","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","Standard Glass RPC","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
