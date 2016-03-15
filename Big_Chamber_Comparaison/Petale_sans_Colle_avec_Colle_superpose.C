plot()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Feb 11 11:52:28 2016) by ROOT version5.34/30
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",911,203,538,323);
   Canvas_1->Range(5.85,-0.125,7.35,1.125);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH2F *h11 = new TH2F("h11","",1200,6,7.2,1000,0,1);
   h11->SetBinContent(8514,1);
   h11->SetBinContent(55493,1);
   h11->SetBinContent(226276,1);
   h11->SetBinContent(434323,1);
   h11->SetBinContent(696458,1);
   h11->SetBinContent(797526,1);
   h11->SetBinContent(1086107,1);
   h11->SetBinContent(1131882,1);
   h11->SetBinContent(1144003,1);
   h11->SetBinContent(1168242,1);
   h11->SetBinContent(1181364,1);
   h11->SetEntries(11);
   h11->SetStats(0);

   TGraph* Scan = new TGraph(11);
   int counter = -1;
   for (int i = 1; i < h11->GetXaxis()->GetNbins()+1; i++)
     for (int j = 1; j < h11->GetYaxis()->GetNbins()+1; j++){
       double content = h11->GetBinContent(i, j);
       if (content > 1e-1){
	 double voltage = h11->GetXaxis()->GetBinCenter(i);
	 double eff = h11->GetYaxis()->GetBinCenter(j);
	 counter++;
	 Scan->SetPoint(counter, voltage, eff);
       }
     }




   TH2F *h10 = new TH2F("h10","",1400,6,7.4,1000,0,1);
   h10->SetBinContent(211903,1);
   h10->SetBinContent(527553,1);
   h10->SetBinContent(1137622,1);
   h10->SetBinContent(1264002,1);
   h10->SetBinContent(1330296,1);
   h10->SetBinContent(1334302,1);
   h10->SetEntries(6);
   h10->SetStats(0);

   TGraph* Scan_Colle = new TGraph(6);
   counter = -1;
   for (int i = 1; i < h10->GetXaxis()->GetNbins()+1; i++)
     for (int j = 1; j < h10->GetYaxis()->GetNbins()+1; j++){
       double content = h10->GetBinContent(i, j);
       if (content > 1e-1){
	 double voltage = h10->GetXaxis()->GetBinCenter(i);
	 double eff = h10->GetYaxis()->GetBinCenter(j);
	 counter++;
	 Scan_Colle->SetPoint(counter, voltage, eff);
       }
     }













   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
  


   Scan->SetMarkerStyle(21);
   Scan->SetMarkerSize(1.6);
   Scan->SetMarkerColor(kBlack);

   Scan_Colle->SetMarkerStyle(20);
   Scan_Colle->SetMarkerSize(1.6);
   Scan_Colle->SetMarkerColor(kRed);

   Scan_Colle->Draw("AP");

   Scan->Draw("SAMEP");



   TH1* h12 = Scan_Colle->GetHistogram();

   h12->SetLineColor(ci);
   h12->SetMarkerColor(4);
   h12->SetMarkerStyle(21);
   h12->SetMarkerSize(0.4);
   //   h12->GetXaxis()->SetRangeUser(6, 7.5);
   h12->GetXaxis()->SetTitle("Applied HV(kV)");
   h12->GetXaxis()->CenterTitle(true);
   h12->GetXaxis()->SetLabelFont(42);
   h12->GetXaxis()->SetLabelSize(0.05);
   h12->GetXaxis()->SetTitleSize(0.05);
   h12->GetXaxis()->SetTitleFont(42);
   h12->GetYaxis()->SetTitle("#mu detection efficiency");
   h12->GetYaxis()->CenterTitle(true);
   h12->GetYaxis()->SetLabelFont(42);
   h12->GetYaxis()->SetLabelSize(0.05);
   h12->GetYaxis()->SetTitleSize(0.05);
   h12->GetYaxis()->SetTitleFont(42);
   h12->GetZaxis()->SetLabelFont(42);
   h12->GetZaxis()->SetLabelSize(0.035);
   h12->GetZaxis()->SetTitleSize(0.035);
   h12->GetZaxis()->SetTitleFont(42);

   Canvas_1->Update();

   TLine* L = new TLine(6.1, 1, 7.3, 1);
   L->SetLineStyle(2);
   L->Draw();

   TLegend *leg = new TLegend(0.40,0.35,0.70,0.5,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);

   leg->AddEntry(Scan, "CMS Geometry GRPC mechanical fixation", "P");
   leg->AddEntry(Scan_Colle, "CMS Geometry GRPC glued", "P");
   leg->Draw();
   
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
      tex = new TLatex(0.1722,0.851872,"Gas mixture : 93% TFE, 5%CO_{2}, 2%SF_{6}");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0264);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1722,0.811744,"Threshold : 0.13pC");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0264);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(0.1722,0.811744-0.040128,"Cosmic #mu");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0264);
   tex->SetLineWidth(2);
   tex->Draw();
    TPaveText* Box = new TPaveText(0.08, 0.8, 0.115, 0.9, "nbNDC");
  
   Box->SetFillColor(10);
   Box->SetLineColor(10);

   Box->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
