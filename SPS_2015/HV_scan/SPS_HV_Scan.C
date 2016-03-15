{
//=========Macro generated from canvas: c1/
//=========  (Sun Jan 31 13:20:42 2016) by ROOT version5.34/32
   TCanvas *c1 = new TCanvas("c1", "",3,23,800,719);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "c1_1",0.01,0.51,0.99,0.99);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(4875,-0.1343892,8025,1.209503);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(20);
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
   gre->SetPoint(0,5400,0.0296809);
   gre->SetPointError(0,0,0.00536924);
   gre->SetPoint(1,5500,0.104536);
   gre->SetPointError(1,0,0.00479461);
   gre->SetPoint(2,5600,0.214692);
   gre->SetPointError(2,0,0.00493778);
   gre->SetPoint(3,5700,0.347853);
   gre->SetPointError(3,0,0.00441103);
   gre->SetPoint(4,5800,0.470752);
   gre->SetPointError(4,0,0.00395922);
   gre->SetPoint(5,5900,0.579752);
   gre->SetPointError(5,0,0.00351478);
   gre->SetPoint(6,6000,0.686489);
   gre->SetPointError(6,0,0.00304552);
   gre->SetPoint(7,6100,0.780909);
   gre->SetPointError(7,0,0.00250754);
   gre->SetPoint(8,6200,0.85262);
   gre->SetPointError(8,0,0.00204301);
   gre->SetPoint(9,6300,0.900056);
   gre->SetPointError(9,0,0.00171959);
   gre->SetPoint(10,6400,0.929143);
   gre->SetPointError(10,0,0.00144666);
   gre->SetPoint(11,6500,0.94844);
   gre->SetPointError(11,0,0.0011455);
   gre->SetPoint(12,6600,0.960287);
   gre->SetPointError(12,0,0.00108286);
   gre->SetPoint(13,6700,0.969078);
   gre->SetPointError(13,0,0.000964429);
   gre->SetPoint(14,6800,0.973713);
   gre->SetPointError(14,0,0.000881638);
   gre->SetPoint(15,7000,0.978582);
   gre->SetPointError(15,0,0.00100408);
   gre->SetPoint(16,7100,0.977462);
   gre->SetPointError(16,0,0.00123136);
   gre->SetPoint(17,7300,0.976827);
   gre->SetPointError(17,0,0.00158039);
   gre->SetPoint(18,7400,0.976739);
   gre->SetPointError(18,0,0.00159381);
   gre->SetPoint(19,7500,0.975994);
   gre->SetPointError(19,0,0.00186321);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,5190,7710);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1.075114);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("High Voltage (kV)");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Efficiency");
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
   c1_2->Range(4875,0.4468049,8025,4.314135);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   
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
   Graph_Graph2->GetXaxis()->SetTitle("High Voltage (kV)");
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
   
   gre->Draw("ap");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
