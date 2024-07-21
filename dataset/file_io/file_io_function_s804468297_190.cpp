int main(){
        
    ios_base::sync_with_stdio(0);
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int k,n;
    cin>>n>>k;
    if(k==1)    cout<<0<<endl;
    else        cout<<n-k<<endl;
    return 0;
}