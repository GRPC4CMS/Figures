{
//=========Macro generated from canvas: c1/
//=========  (Mon Feb  1 09:35:06 2016) by ROOT version5.34/32
   TCanvas *c1 = new TCanvas("c1", "",468,45,800,719);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "c1_1",0.01,0.51,0.99,0.99);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(0.06428572,-0.125,0.5357143,1.125);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(12);
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
   gre->SetPoint(0,0.1428571,0.943962);
   gre->SetPointError(0,0,0.00470259);
   gre->SetPoint(1,0.1714286,0.940484);
   gre->SetPointError(1,0,0.00447348);
   gre->SetPoint(2,0.2,0.935519);
   gre->SetPointError(2,0,0.00484668);
   gre->SetPoint(3,0.2285714,0.928495);
   gre->SetPointError(3,0,0.00504356);
   gre->SetPoint(4,0.2571429,0.931586);
   gre->SetPointError(4,0,0.00551296);
   gre->SetPoint(5,0.2857143,0.924183);
   gre->SetPointError(5,0,0.00521949);
   gre->SetPoint(6,0.3142857,0.925186);
   gre->SetPointError(6,0,0.00541335);
   gre->SetPoint(7,0.3428572,0.918469);
   gre->SetPointError(7,0,0.00520881);
   gre->SetPoint(8,0.3714286,0.926619);
   gre->SetPointError(8,0,0.00524148);
   gre->SetPoint(9,0.4,0.931496);
   gre->SetPointError(9,0,0.00526956);
   gre->SetPoint(10,0.4285714,0.932581);
   gre->SetPointError(10,0,0.00466349);
   gre->SetPoint(11,0.4571429,0.924199);
   gre->SetPointError(11,0,0.00348535);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0.1114286,0.4885714);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Threshold (pC)");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph1->GetYaxis()->SetRange(0,1);
   Graph_Graph1->GetYaxis()->CenterTitle(true);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("ap");
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   c1_2 = new TPad("c1_2", "c1_2",0.01,0.01,0.99,0.49);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(0.06428572,0.75,0.5357143,3.25);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   
   gre = new TGraphErrors(12);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.1428571,2.72617);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,0.1714286,2.66643);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,0.2,2.50857);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,0.2285714,2.46858);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,0.2571429,2.33);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,0.2857143,2.36703);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,0.3142857,2.30737);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,0.3428572,2.25254);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,0.3714286,2.26182);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,0.4,2.13185);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,0.4285714,2.20719);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,0.4571429,2.10786);
   gre->SetPointError(11,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0.1114286,0.4885714);
   Graph_Graph2->SetMinimum(1);
   Graph_Graph2->SetMaximum(3);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("Threshold (pC)");
   Graph_Graph2->GetXaxis()->CenterTitle(true);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("Multiplicity");
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
   
   gre->Draw("ap");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
