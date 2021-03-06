{
//=========Macro generated from canvas: MainCanvas /MainCanvas 13 Chamber 1
//=========  (Mon Jan 23 19:31:24 2017) by ROOT version5.34/21
   TCanvas *MainCanvas  = new TCanvas("MainCanvas ", "MainCanvas 13 Chamber 1",65,24,1535,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MainCanvas ->SetHighLightColor(2);
   MainCanvas ->Range(64.87897,-475.4512,416.0892,3181.866);
   MainCanvas ->SetFillColor(0);
   MainCanvas ->SetBorderMode(0);
   MainCanvas ->SetBorderSize(2);
   MainCanvas ->SetTickx(1);
   MainCanvas ->SetTicky(1);
   MainCanvas ->SetRightMargin(0.06);
   MainCanvas ->SetTopMargin(0.05);
   MainCanvas ->SetBottomMargin(0.13);
   MainCanvas ->SetFrameFillStyle(0);
   MainCanvas ->SetFrameBorderMode(0);
   MainCanvas ->SetFrameFillStyle(0);
   MainCanvas ->SetFrameBorderMode(0);
   
   TH1F *TimeHisto__1 = new TH1F("TimeHisto__1","profile_time_aligned_File*13_Chamber1",37,100,395.0166);
   TimeHisto__1->SetBinContent(0,37);
   TimeHisto__1->SetBinContent(1,247);
   TimeHisto__1->SetBinContent(2,389);
   TimeHisto__1->SetBinContent(3,364);
   TimeHisto__1->SetBinContent(4,361);
   TimeHisto__1->SetBinContent(5,365);
   TimeHisto__1->SetBinContent(6,352);
   TimeHisto__1->SetBinContent(7,343);
   TimeHisto__1->SetBinContent(8,303);
   TimeHisto__1->SetBinContent(9,337);
   TimeHisto__1->SetBinContent(10,343);
   TimeHisto__1->SetBinContent(11,409);
   TimeHisto__1->SetBinContent(12,380);
   TimeHisto__1->SetBinContent(13,377);
   TimeHisto__1->SetBinContent(14,295);
   TimeHisto__1->SetBinContent(15,339);
   TimeHisto__1->SetBinContent(16,424);
   TimeHisto__1->SetBinContent(17,414);
   TimeHisto__1->SetBinContent(18,552);
   TimeHisto__1->SetBinContent(19,1584);
   TimeHisto__1->SetBinContent(20,2550);
   TimeHisto__1->SetBinContent(21,2760);
   TimeHisto__1->SetBinContent(22,2084);
   TimeHisto__1->SetBinContent(23,1174);
   TimeHisto__1->SetBinContent(24,666);
   TimeHisto__1->SetBinContent(25,496);
   TimeHisto__1->SetBinContent(26,349);
   TimeHisto__1->SetBinContent(27,359);
   TimeHisto__1->SetBinContent(28,320);
   TimeHisto__1->SetBinContent(29,364);
   TimeHisto__1->SetBinContent(30,370);
   TimeHisto__1->SetBinContent(31,351);
   TimeHisto__1->SetBinContent(32,372);
   TimeHisto__1->SetBinContent(33,351);
   TimeHisto__1->SetBinContent(34,391);
   TimeHisto__1->SetBinContent(35,373);
   TimeHisto__1->SetBinContent(36,399);
   TimeHisto__1->SetBinContent(37,417);
   TimeHisto__1->SetBinContent(38,360);
   TimeHisto__1->SetMinimum(0);
   TimeHisto__1->SetMaximum(2999);
   TimeHisto__1->SetEntries(22721);
   TimeHisto__1->SetDirectory(0);
   TimeHisto__1->SetStats(0);
   
   TF1 *total2 = new TF1("total2","[0]*exp(-0.5*((x-[1])/[2])^2)+[3]*exp(-0.5*((x-[4])/[5])^2)+[6]",100,400);
   total2->SetBit(TF1::kNotDraw);
   total2->SetFillColor(19);
   total2->SetFillStyle(0);
   total2->SetMarkerStyle(20);
   total2->SetLineColor(3);
   total2->SetLineWidth(1);
   total2->SetChisquare(37303.77);
   total2->SetNDF(294);
   total2->GetXaxis()->SetLabelFont(42);
   total2->GetXaxis()->SetLabelOffset(0.007);
   total2->GetXaxis()->SetTitleSize(0.06);
   total2->GetXaxis()->SetTitleOffset(0.9);
   total2->GetXaxis()->SetTitleFont(42);
   total2->GetYaxis()->SetLabelFont(42);
   total2->GetYaxis()->SetLabelOffset(0.007);
   total2->GetYaxis()->SetTitleSize(0.06);
   total2->GetYaxis()->SetTitleOffset(0.7);
   total2->GetYaxis()->SetTitleFont(42);
   total2->SetParameter(0,78.08538);
   total2->SetParError(0,0.8267804);
   total2->SetParLimits(0,0,0);
   total2->SetParameter(1,251.325);
   total2->SetParError(1,0.03085035);
   total2->SetParLimits(1,0,0);
   total2->SetParameter(2,3.752113);
   total2->SetParError(2,0.03360243);
   total2->SetParLimits(2,0,0);
   total2->SetParameter(3,303.1088);
   total2->SetParError(3,0.3853222);
   total2->SetParLimits(3,0,0);
   total2->SetParameter(4,263.1681);
   total2->SetParError(4,0.02399075);
   total2->SetParLimits(4,0,0);
   total2->SetParameter(5,10.66228);
   total2->SetParError(5,0.01757398);
   total2->SetParLimits(5,0,0);
   total2->SetParameter(6,45.44235);
   total2->SetParError(6,0.06466257);
   total2->SetParLimits(6,0,0);
   TimeHisto__1->GetListOfFunctions()->Add(total2);
   TimeHisto__1->SetLineStyle(0);
   TimeHisto__1->SetMarkerStyle(20);
   TimeHisto__1->GetXaxis()->SetTitle("Time (ns)");
   TimeHisto__1->GetXaxis()->SetRange(1,75);
   TimeHisto__1->GetXaxis()->SetLabelFont(42);
   TimeHisto__1->GetXaxis()->SetLabelOffset(0.007);
   TimeHisto__1->GetXaxis()->SetTitleSize(0.06);
   TimeHisto__1->GetXaxis()->SetTitleOffset(0.9);
   TimeHisto__1->GetXaxis()->SetTitleFont(42);
   TimeHisto__1->GetYaxis()->SetTitle("# hits / 8 ns / 64 strips");
   TimeHisto__1->GetYaxis()->SetLabelFont(42);
   TimeHisto__1->GetYaxis()->SetLabelOffset(0.007);
   TimeHisto__1->GetYaxis()->SetTitleSize(0.06);
   TimeHisto__1->GetYaxis()->SetTitleOffset(0.7);
   TimeHisto__1->GetYaxis()->SetTitleFont(42);
   TimeHisto__1->GetZaxis()->SetLabelFont(42);
   TimeHisto__1->GetZaxis()->SetLabelOffset(0.007);
   TimeHisto__1->GetZaxis()->SetTitleSize(0.06);
   TimeHisto__1->GetZaxis()->SetTitleFont(42);
   TimeHisto__1->Draw("");
   
   TF1 *gfit = new TF1("gfit","[0]*exp(-0.5*((x-[1])/[2])^2)+[3]",100,400);
   gfit->SetFillColor(19);
   gfit->SetFillStyle(0);
   gfit->SetMarkerStyle(20);
   gfit->SetLineColor(2);
   gfit->SetLineWidth(2);
   gfit->SetLineStyle(2);
   gfit->SetChisquare(48573.33);
   gfit->SetNDF(297);
   gfit->GetXaxis()->SetLabelFont(42);
   gfit->GetXaxis()->SetLabelOffset(0.007);
   gfit->GetXaxis()->SetTitleSize(0.06);
   gfit->GetXaxis()->SetTitleOffset(0.9);
   gfit->GetXaxis()->SetTitleFont(42);
   gfit->GetYaxis()->SetLabelFont(42);
   gfit->GetYaxis()->SetLabelOffset(0.007);
   gfit->GetYaxis()->SetTitleSize(0.06);
   gfit->GetYaxis()->SetTitleOffset(0.7);
   gfit->GetYaxis()->SetTitleFont(42);
   gfit->SetParameter(0,2540.581);
   gfit->SetParError(0,0.2767962);
   gfit->SetParLimits(0,0,0);
   gfit->SetParameter(1,261.7631);
   gfit->SetParError(1,0.011275);
   gfit->SetParLimits(1,0,0);
   gfit->SetParameter(2,11.28263);
   gfit->SetParError(2,0.01160788);
   gfit->SetParLimits(2,0,0);
   gfit->SetParameter(3,359.646);
   gfit->SetParError(3,0.0644131);
   gfit->SetParLimits(3,0,0);
   gfit->Draw("same");
   
   TLegend *leg = new TLegend(0.65,0.3,0.85,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Hits distribution for 5000 #mu events","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("TimeHisto","Data","l");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("gfit","Fit with a Gaussian + constant:","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   entry->SetTextColor(ci);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","     #sigma = 11.3 ns, t_{0} = 261.8 ns","h");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetTextColor(ci);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","     background = 360 Hz/8 ns/64 strips","h");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetTextColor(ci);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(110,2900,"Preliminary");
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(110,2390,"Double gap glass RPC prototype");
   tex->SetTextAlign(13);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(110,2240,"in GIF++ #mu test beams");
   tex->SetTextAlign(13);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(110,2070,"CMS gas mixture : 95.2% TFE, 4.5% C_{4}H_{10}, 0.3% SF_{6}");
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(110,1920,"Threshold #approx 0.15 pC; HV = 8.6 kV");
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(110,1770,"Background #approx 3 kHz/cm^{2}");
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(110,1610,"Estimated sensitivity of 6.2 hits/1000 #gamma");
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
   MainCanvas ->Modified();
   MainCanvas ->cd();
   MainCanvas ->SetSelected(MainCanvas );
}
