{
//=========Macro generated from canvas: CANVAS/Double gap glass RPC prototype
//=========  (Mon Jan 23 19:16:17 2017) by ROOT version5.34/21
   TCanvas *CANVAS = new TCanvas("CANVAS", "Double gap glass RPC prototype",65,52,1000,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   CANVAS->Range(5180.952,-0.1585366,11371.43,1.060976);
   CANVAS->SetFillColor(0);
   CANVAS->SetBorderMode(0);
   CANVAS->SetBorderSize(2);
   CANVAS->SetTickx(1);
   CANVAS->SetTicky(1);
   CANVAS->SetRightMargin(0.06);
   CANVAS->SetTopMargin(0.05);
   CANVAS->SetBottomMargin(0.13);
   CANVAS->SetFrameFillStyle(0);
   CANVAS->SetFrameBorderMode(0);
   CANVAS->SetFrameFillStyle(0);
   CANVAS->SetFrameBorderMode(0);
   
   TH1D *PLOTTER = new TH1D("PLOTTER","Double gap glass RPC prototype",1,5800,11000);
   PLOTTER->SetMinimum(0);
   PLOTTER->SetMaximum(1);
   PLOTTER->SetStats(0);
   PLOTTER->SetLineStyle(0);
   PLOTTER->SetMarkerStyle(20);
   PLOTTER->GetXaxis()->SetTitle(" HV_{eff} (V)");
   PLOTTER->GetXaxis()->SetLabelFont(42);
   PLOTTER->GetXaxis()->SetLabelOffset(0.007);
   PLOTTER->GetXaxis()->SetTitleSize(0.06);
   PLOTTER->GetXaxis()->SetTitleOffset(0.9);
   PLOTTER->GetXaxis()->SetTitleFont(42);
   PLOTTER->GetYaxis()->SetTitle(" #mu Efficiency");
   PLOTTER->GetYaxis()->SetLabelFont(42);
   PLOTTER->GetYaxis()->SetLabelOffset(0.007);
   PLOTTER->GetYaxis()->SetTitleSize(0.06);
   PLOTTER->GetYaxis()->SetTitleOffset(0.7);
   PLOTTER->GetYaxis()->SetTitleFont(42);
   PLOTTER->GetZaxis()->SetLabelFont(42);
   PLOTTER->GetZaxis()->SetLabelOffset(0.007);
   PLOTTER->GetZaxis()->SetTitleSize(0.06);
   PLOTTER->GetZaxis()->SetTitleFont(42);
   PLOTTER->Draw("");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8);
   grae->SetName("1_3.000000_0_Gaussian + constante_alMethod1");
   grae->SetTitle("1_3.000000_0_Gaussian + constante_alMethod1");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,6000,0.556751);
   grae->SetPointError(0,0,0,0.01261517,0.01261517);
   grae->SetPoint(1,6200,0.7635141);
   grae->SetPointError(1,0,0,0.007874097,0.007874097);
   grae->SetPoint(2,6400,0.8556513);
   grae->SetPointError(2,0,0,0.005811435,0.005811435);
   grae->SetPoint(3,6600,0.8850556);
   grae->SetPointError(3,0,0,0.005114863,0.005114863);
   grae->SetPoint(4,6800,0.8870142);
   grae->SetPointError(4,0,0,0.005220819,0.005220819);
   grae->SetPoint(5,7000,0.8980305);
   grae->SetPointError(5,0,0,0.005184555,0.005184555);
   grae->SetPoint(6,7200,0.9057916);
   grae->SetPointError(6,0,0,0.005535673,0.005535673);
   grae->SetPoint(7,7400,0.9145571);
   grae->SetPointError(7,0,0,0.006112872,0.006112872);
   
   TH1F *Graph_1_3.000000_0_Gaussian + constante_alMethod11 = new TH1F("Graph_1_3.000000_0_Gaussian + constante_alMethod11","1_3.000000_0_Gaussian + constante_alMethod1",100,5860,7540);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->SetMinimum(0.5064824);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->SetMaximum(0.9583234);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->SetDirectory(0);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->SetLineColor(ci);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->GetXaxis()->SetLabelFont(42);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->GetXaxis()->SetLabelSize(0.035);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->GetXaxis()->SetTitleSize(0.035);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->GetXaxis()->SetTitleFont(42);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->GetYaxis()->SetLabelFont(42);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->GetYaxis()->SetLabelSize(0.035);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->GetYaxis()->SetTitleSize(0.035);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->GetYaxis()->SetTitleFont(42);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->GetZaxis()->SetLabelFont(42);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->GetZaxis()->SetLabelSize(0.035);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->GetZaxis()->SetTitleSize(0.035);
   Graph_1_3.000000_0_Gaussian + constante_alMethod11->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_1_3.000000_0_Gaussian + constante_alMethod11);
   
   
   TF1 *sigmoid = new TF1("sigmoid","[0]/(1+exp([1]*([2]-x)))",5860,7540);
   sigmoid->SetFillColor(19);
   sigmoid->SetFillStyle(0);
   sigmoid->SetLineWidth(2);
   sigmoid->SetLineStyle(2);
   sigmoid->SetChisquare(9.429028);
   sigmoid->SetNDF(5);
   sigmoid->GetXaxis()->SetLabelFont(42);
   sigmoid->GetXaxis()->SetLabelOffset(0.007);
   sigmoid->GetXaxis()->SetTitleSize(0.06);
   sigmoid->GetXaxis()->SetTitleOffset(0.9);
   sigmoid->GetXaxis()->SetTitleFont(42);
   sigmoid->GetYaxis()->SetLabelFont(42);
   sigmoid->GetYaxis()->SetLabelOffset(0.007);
   sigmoid->GetYaxis()->SetTitleSize(0.06);
   sigmoid->GetYaxis()->SetTitleOffset(0.7);
   sigmoid->GetYaxis()->SetTitleFont(42);
   sigmoid->SetParameter(0,0.9021276);
   sigmoid->SetParError(0,0.002868515);
   sigmoid->SetParLimits(0,0,0);
   sigmoid->SetParameter(1,0.005942224);
   sigmoid->SetParError(1,0.0003471191);
   sigmoid->SetParLimits(1,0,0);
   sigmoid->SetParameter(2,5916.74);
   sigmoid->SetParError(2,12.8852);
   sigmoid->SetParLimits(2,0,0);
   grae->GetListOfFunctions()->Add(sigmoid);
   grae->Draw("pe");
   
   grae = new TGraphAsymmErrors(9);
   grae->SetName("");
   grae->SetTitle("Method1");

   ci = TColor::GetColor("#0000ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(23);
   grae->SetPoint(0,6200,0.4142684);
   grae->SetPointError(0,0,0,0.005763539,0.005763539);
   grae->SetPoint(1,6400,0.5802119);
   grae->SetPointError(1,0,0,0.005836469,0.005836469);
   grae->SetPoint(2,6600,0.6910185);
   grae->SetPointError(2,0,0,0.004303392,0.004303392);
   grae->SetPoint(3,6800,0.7794841);
   grae->SetPointError(3,0,0,0.003515946,0.003515946);
   grae->SetPoint(4,7000,0.8310293);
   grae->SetPointError(4,0,0,0.004502295,0.004502295);
   grae->SetPoint(5,7200,0.8550634);
   grae->SetPointError(5,0,0,0.00519245,0.00519245);
   grae->SetPoint(6,7400,0.8758768);
   grae->SetPointError(6,0,0,0.005594338,0.005594338);
   grae->SetPoint(7,7800,0.9022696);
   grae->SetPointError(7,0,0,0.007166633,0.007166633);
   grae->SetPoint(8,8000,0.9104465);
   grae->SetPointError(8,0,0,0.007786175,0.007786175);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Method1",100,6020,8180);
   Graph_Graph2->SetMinimum(0.3575321);
   Graph_Graph2->SetMaximum(0.9692055);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph2);
   
   
   TF1 *sigmoid = new TF1("sigmoid","[0]/(1+exp([1]*([2]-x)))",6020,8180);
   sigmoid->SetFillColor(19);
   sigmoid->SetFillStyle(0);

   ci = TColor::GetColor("#666699");
   sigmoid->SetLineColor(ci);
   sigmoid->SetLineWidth(2);
   sigmoid->SetLineStyle(2);
   sigmoid->SetChisquare(14.19067);
   sigmoid->SetNDF(6);
   sigmoid->GetXaxis()->SetLabelFont(42);
   sigmoid->GetXaxis()->SetLabelOffset(0.007);
   sigmoid->GetXaxis()->SetTitleSize(0.06);
   sigmoid->GetXaxis()->SetTitleOffset(0.9);
   sigmoid->GetXaxis()->SetTitleFont(42);
   sigmoid->GetYaxis()->SetLabelFont(42);
   sigmoid->GetYaxis()->SetLabelOffset(0.007);
   sigmoid->GetYaxis()->SetTitleSize(0.06);
   sigmoid->GetYaxis()->SetTitleOffset(0.7);
   sigmoid->GetYaxis()->SetTitleFont(42);
   sigmoid->SetParameter(0,0.8988816);
   sigmoid->SetParError(0,0.00418257);
   sigmoid->SetParLimits(0,0,0);
   sigmoid->SetParameter(1,0.003316373);
   sigmoid->SetParError(1,8.495348e-05);
   sigmoid->SetParLimits(1,0,0);
   sigmoid->SetParameter(2,6236.361);
   sigmoid->SetParError(2,6.114765);
   sigmoid->SetParLimits(2,0,0);
   grae->GetListOfFunctions()->Add(sigmoid);
   grae->Draw("pe");
   
   grae = new TGraphAsymmErrors(10);
   grae->SetName("");
   grae->SetTitle("Method1");

   ci = TColor::GetColor("#0000ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetPoint(0,6200,0.2432026);
   grae->SetPointError(0,0,0,0.02603392,0.02603392);
   grae->SetPoint(1,6400,0.3844475);
   grae->SetPointError(1,0,0,0.0197113,0.0197113);
   grae->SetPoint(2,6600,0.4878135);
   grae->SetPointError(2,0,0,0.01629163,0.01629163);
   grae->SetPoint(3,6800,0.5893828);
   grae->SetPointError(3,0,0,0.01506466,0.01506466);
   grae->SetPoint(4,7000,0.6698575);
   grae->SetPointError(4,0,0,0.01312392,0.01312392);
   grae->SetPoint(5,7200,0.7471903);
   grae->SetPointError(5,0,0,0.01149079,0.01149079);
   grae->SetPoint(6,7400,0.7801741);
   grae->SetPointError(6,0,0,0.01274842,0.01274842);
   grae->SetPoint(7,7800,0.8371449);
   grae->SetPointError(7,0,0,0.01242286,0.01242286);
   grae->SetPoint(8,8000,0.8687184);
   grae->SetPointError(8,0,0,0.01154309,0.01154309);
   grae->SetPoint(9,8200,0.8760597);
   grae->SetPointError(9,0,0,0.01258988,0.01258988);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Method1",100,6000,8400);
   Graph_Graph3->SetMinimum(0.1500206);
   Graph_Graph3->SetMaximum(0.9557977);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3);
   
   
   TF1 *sigmoid = new TF1("sigmoid","[0]/(1+exp([1]*([2]-x)))",6000,8400);
   sigmoid->SetFillColor(19);
   sigmoid->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   sigmoid->SetLineColor(ci);
   sigmoid->SetLineWidth(2);
   sigmoid->SetLineStyle(2);
   sigmoid->SetChisquare(4.232258);
   sigmoid->SetNDF(7);
   sigmoid->GetXaxis()->SetLabelFont(42);
   sigmoid->GetXaxis()->SetLabelOffset(0.007);
   sigmoid->GetXaxis()->SetTitleSize(0.06);
   sigmoid->GetXaxis()->SetTitleOffset(0.9);
   sigmoid->GetXaxis()->SetTitleFont(42);
   sigmoid->GetYaxis()->SetLabelFont(42);
   sigmoid->GetYaxis()->SetLabelOffset(0.007);
   sigmoid->GetYaxis()->SetTitleSize(0.06);
   sigmoid->GetYaxis()->SetTitleOffset(0.7);
   sigmoid->GetYaxis()->SetTitleFont(42);
   sigmoid->SetParameter(0,0.8853127);
   sigmoid->SetParError(0,0.01082461);
   sigmoid->SetParLimits(0,0,0);
   sigmoid->SetParameter(1,0.002438653);
   sigmoid->SetParError(1,0.0001499818);
   sigmoid->SetParLimits(1,0,0);
   sigmoid->SetParameter(2,6526.415);
   sigmoid->SetParError(2,19.2713);
   sigmoid->SetParLimits(2,0,0);
   grae->GetListOfFunctions()->Add(sigmoid);
   grae->Draw("pe");
   
   grae = new TGraphAsymmErrors(18);
   grae->SetName("");
   grae->SetTitle("Method1");

   ci = TColor::GetColor("#0000ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(22);
   grae->SetPoint(0,6000,0.0795377);
   grae->SetPointError(0,0,0,0.04627975,0.04627975);
   grae->SetPoint(1,6200,0.1232221);
   grae->SetPointError(1,0,0,0.03763725,0.03763725);
   grae->SetPoint(2,6400,0.1923911);
   grae->SetPointError(2,0,0,0.03057115,0.03057115);
   grae->SetPoint(3,6600,0.2656366);
   grae->SetPointError(3,0,0,0.02820412,0.02820412);
   grae->SetPoint(4,6800,0.3392073);
   grae->SetPointError(4,0,0,0.0263138,0.0263138);
   grae->SetPoint(5,7000,0.4224655);
   grae->SetPointError(5,0,0,0.02519654,0.02519654);
   grae->SetPoint(6,7200,0.4880126);
   grae->SetPointError(6,0,0,0.02403086,0.02403086);
   grae->SetPoint(7,7400,0.560845);
   grae->SetPointError(7,0,0,0.02404269,0.02404269);
   grae->SetPoint(8,7600,0.6186679);
   grae->SetPointError(8,0,0,0.02388673,0.02388673);
   grae->SetPoint(9,7800,0.6729086);
   grae->SetPointError(9,0,0,0.02308747,0.02308747);
   grae->SetPoint(10,8000,0.7021516);
   grae->SetPointError(10,0,0,0.0246042,0.0246042);
   grae->SetPoint(11,8200,0.7389264);
   grae->SetPointError(11,0,0,0.02560875,0.02560875);
   grae->SetPoint(12,8400,0.7526623);
   grae->SetPointError(12,0,0,0.02694706,0.02694706);
   grae->SetPoint(13,8600,0.7864238);
   grae->SetPointError(13,0,0,0.02923752,0.02923752);
   grae->SetPoint(14,8800,0.7993386);
   grae->SetPointError(14,0,0,0.03032004,0.03032004);
   grae->SetPoint(15,9000,0.8261863);
   grae->SetPointError(15,0,0,0.02867308,0.02867308);
   grae->SetPoint(16,9500,0.8627123);
   grae->SetPointError(16,0,0,0.02950184,0.02950184);
   grae->SetPoint(17,10300,0.8519992);
   grae->SetPointError(17,0,0,0.04196103,0.04196103);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Method1",100,5570,10730);
   Graph_Graph4->SetMinimum(0);
   Graph_Graph4->SetMaximum(0.9800304);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph4);
   
   
   TF1 *sigmoid = new TF1("sigmoid","[0]/(1+exp([1]*([2]-x)))",5570,10730);
   sigmoid->SetFillColor(19);
   sigmoid->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   sigmoid->SetLineColor(ci);
   sigmoid->SetLineWidth(2);
   sigmoid->SetLineStyle(2);
   sigmoid->SetChisquare(4.412973);
   sigmoid->SetNDF(15);
   sigmoid->GetXaxis()->SetLabelFont(42);
   sigmoid->GetXaxis()->SetLabelOffset(0.007);
   sigmoid->GetXaxis()->SetTitleSize(0.06);
   sigmoid->GetXaxis()->SetTitleOffset(0.9);
   sigmoid->GetXaxis()->SetTitleFont(42);
   sigmoid->GetYaxis()->SetLabelFont(42);
   sigmoid->GetYaxis()->SetLabelOffset(0.007);
   sigmoid->GetYaxis()->SetTitleSize(0.06);
   sigmoid->GetYaxis()->SetTitleOffset(0.7);
   sigmoid->GetYaxis()->SetTitleFont(42);
   sigmoid->SetParameter(0,0.8411333);
   sigmoid->SetParError(0,0.01829532);
   sigmoid->SetParLimits(0,0,0);
   sigmoid->SetParameter(1,0.001797375);
   sigmoid->SetParError(1,0.0001322441);
   sigmoid->SetParLimits(1,0,0);
   sigmoid->SetParameter(2,7034.138);
   sigmoid->SetParError(2,40.20357);
   sigmoid->SetParLimits(2,0,0);
   grae->GetListOfFunctions()->Add(sigmoid);
   grae->Draw("pe");
   
   TLegend *leg = new TLegend(0.608739,0.1724784,0.8085924,0.4023343,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Estimated converted #gamma rate","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("1_3.000000_0_Gaussian + constante_alMethod1","Source Off","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("","#approx 0.6 kHz/cm^{2}","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("","#approx 1.4 kHz/cm^{2}","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("","#approx 3 kHz/cm^{2}","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(6000,0.97,"Preliminary");
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(8000,0.65,"Double gap glass RPC prototype");
   tex->SetTextAlign(13);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(8000,0.6,"in GIF++ #mu test beams");
   tex->SetTextAlign(13);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(8000,0.52,"CMS gas mixture : 95.2% TFE, 4.5% C_{4}H_{10}, 0.3%SF_{6}");
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(8000,0.46,"Threshold #approx 0.15 pC");
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(8000,0.4,"Estimated sensitivity of 6.2 hits/1000 #gamma");
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
   CANVAS->Modified();
   CANVAS->cd();
   CANVAS->SetSelected(CANVAS);
}
