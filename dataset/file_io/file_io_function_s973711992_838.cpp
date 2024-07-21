int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int n;
    cin>>n;
    vector<pi64> r(n);
    forn(i,n){
        i64 x,l;
        cin>>x>>l;
        r[i] = mp(x+l,x-l);
    }