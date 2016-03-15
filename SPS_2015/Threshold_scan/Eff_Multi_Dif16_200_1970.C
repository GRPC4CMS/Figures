{
//=========Macro generated from canvas: c1/
//=========  (Mon Feb  1 09:36:05 2016) by ROOT version5.34/32
   TCanvas *c1 = new TCanvas("c1", "",530,67,800,719);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "c1_1",0.01,0.51,0.99,0.99);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(-0.8610269,-0.125,7.749241,1.125);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   
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
   gre->SetPoint(1,0.1961543,0.7188928);
   gre->SetPointError(1,0,0.0687184);
   gre->SetPoint(2,0.2571429,0.857143);
   gre->SetPointError(2,0,0.0381802);
   gre->SetPoint(3,0.3142857,0.856757);
   gre->SetPointError(3,0,0.0113599);
   gre->SetPoint(4,0.3714286,0.875);
   gre->SetPointError(4,0,0.0245145);
   gre->SetPoint(5,0.3714286,0.792683);
   gre->SetPointError(5,0,0.0502818);
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
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   c1_2 = new TPad("c1_2", "c1_2",0.01,0.01,0.99,0.49);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.8610269,0.8125,7.749241,2.6875);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   
   gre = new TGraphErrors(23);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.1428571,1.98333);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,0.2,1.93023);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,0.2571429,1.70238);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,0.3142857,1.74238);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,0.3714286,1.8022);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,0.3714286,1.63077);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,0.5428572,1.54955);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,0.6,1.78689);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,0.6,1.78689);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,0.9,1.56522);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,1.15,1.55738);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,1.4,1.53257);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,1.525,1.42338);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,1.775,1.42026);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,2.025,1.37956);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,2.275,1.41483);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,2.525,1.3588);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,3.15,1.33037);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,3.775,1.26402);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,4.4,1.18091);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,5.025,1.22794);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,5.65,1.1434);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,6.275,1.28125);
   gre->SetPointError(22,0,0);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","",100,0,6.888214);
   Graph_Graph4->SetMinimum(1);
   Graph_Graph4->SetMaximum(2.5);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetTitle("Threshold (pC)");
   Graph_Graph4->GetXaxis()->CenterTitle(true);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetTitle("Multiplicity");
   Graph_Graph4->GetYaxis()->CenterTitle(true);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph4);
   
   gre->Draw("ap");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
