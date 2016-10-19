{

  TGraph* Source = new TGraph(3);
  
  //  Source->SetPoint(0, 0.9, 5.9e7);
  Source->SetPoint(0, 1.8, 1e7);
  Source->SetPoint(1, 2.9, 6.3e6);
  Source->SetPoint(2, 4.9, 2.7e6);


  TF1* quadReg = new TF1("quadReg", "[0]+[1]*x+[2]*x*x");
  quadReg->FixParameter(2,0);
  Source->Fit(quadReg);



  Source->Draw();

  cout << "Source at 1.97 " << quadReg->Eval(1.97) << endl;
  cout << "Source at 2.56 " << quadReg->Eval(2.56) << endl;

  cout << "Source at 3.662 " << quadReg->Eval(3.662) << endl;

}
