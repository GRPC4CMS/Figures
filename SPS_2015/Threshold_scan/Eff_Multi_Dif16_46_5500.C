{
//=========Macro generated from canvas: c1/
//=========  (Mon Feb  1 09:37:04 2016) by ROOT version5.34/32
   TCanvas *c1 = new TCanvas("c1", "",523,23,800,719);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "c1_1",0.01,0.51,0.99,0.99);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(0.02142857,-0.125,0.75,1.125);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
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
   gre->SetPoint(0,0.1428571,0.933737);
   gre->SetPointError(0,0,0.00517424);
   gre->SetPoint(1,0.1714286,0.928338);
   gre->SetPointError(1,0,0.00510574);
   gre->SetPoint(2,0.2,0.938204);
   gre->SetPointError(2,0,0.00473951);
   gre->SetPoint(3,0.2285714,0.939315);
   gre->SetPointError(3,0,0.00512881);
   gre->SetPoint(4,0.2571429,0.929515);
   gre->SetPointError(4,0,0.0055723);
   gre->SetPoint(5,0.3142857,0.921661);
   gre->SetPointError(5,0,0.00579099);
   gre->SetPoint(6,0.3714286,0.927908);
   gre->SetPointError(6,0,0.00564668);
   gre->SetPoint(7,0.4571429,0.922973);
   gre->SetPointError(7,0,0.0058904);
   gre->SetPoint(8,0.5142857,0.911906);
   gre->SetPointError(8,0,0.00619829);
   gre->SetPoint(9,0.5714286,0.897292);
   gre->SetPointError(9,0,0.00601055);
   gre->SetPoint(10,0.6285715,0.92751);
   gre->SetPointError(10,0,0.004689);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","",100,0.09428572,0.6771429);
   Graph_Graph5->SetMinimum(0);
   Graph_Graph5->SetMaximum(1);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetTitle("Threshold (pC)");
   Graph_Graph5->GetXaxis()->CenterTitle(true);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph5->GetYaxis()->CenterTitle(true);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph5);
   
   gre->Draw("ap");
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   c1_2 = new TPad("c1_2", "c1_2",0.01,0.01,0.99,0.49);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(0.02142857,0.75,0.75,3.25);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   
   gre = new TGraphErrors(11);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.1428571,2.81437);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,0.1714286,2.7645);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,0.2,2.63193);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,0.2285714,2.41855);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,0.2571429,2.53649);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,0.3142857,2.38226);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,0.3714286,2.35844);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,0.4571429,2.23768);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,0.5142857,2.13821);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,0.5714286,2.09173);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,0.6285715,3.56213);
   gre->SetPointError(10,0,0);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","",100,0.09428572,0.6771429);
   Graph_Graph6->SetMinimum(1);
   Graph_Graph6->SetMaximum(3);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetTitle("Threshold (pC)");
   Graph_Graph6->GetXaxis()->CenterTitle(true);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetTitle("Multiplicity");
   Graph_Graph6->GetYaxis()->CenterTitle(true);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph6);
   
   gre->Draw("ap");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
