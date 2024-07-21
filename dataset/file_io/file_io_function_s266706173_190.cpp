int main(){
        
    ios_base::sync_with_stdio(0);
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int t,x;
    cin>>t>>x;
    double res = (double)t/x;
    cout<<fixed<<setprecision(6)<<res<<endl;
    return 0;
}