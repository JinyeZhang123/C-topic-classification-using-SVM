int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int n,k;
    cin>>n>>k;
    vi h(n);
    forn(i,n)   cin>>h[i];
    sort(all(h));
    int mini = INT_MAX;
    forn(i,n-k+1){
        mini = min(mini,h[i+k-1]-h[i]);
    }