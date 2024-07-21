int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int n,k;
    cin>>n>>k;
    map<int,int> x;
    forn(i,n){
        int a;
        cin>>a;
        x[a]++;
    }