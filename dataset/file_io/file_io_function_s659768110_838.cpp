int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    i64 n,c,k;
    cin>>n>>c>>k;
    vi64 a(n), d(n);
    i64 cnt=1, bus=1;
    
    forn(i,n)
    {
        cin>>a[i];
        d[i] = a[i] + k;
    }