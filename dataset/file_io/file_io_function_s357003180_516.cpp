void sinhtest(){
    srand(time(0));
    ofstream cout("a.inp");
    cout << "10\n";
    for (int i=1; i<=10; ++i) cout << rand()%10+1 << " ";
}