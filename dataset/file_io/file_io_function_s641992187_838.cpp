int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int n;
    cin>>n;
    vi a(n);
    map<int,int> x;
    forn(i,n){
        cin>>a[i];
        x[a[i]]++;
        x[a[i]+1]++;
        if(a[i]>0){
            x[a[i]-1]++;
        }