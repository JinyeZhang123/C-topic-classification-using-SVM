int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int n;
    cin>>n;
    vi x(3*n);
    forn(i,3*n)   cin>>x[i];
    sort(rall(x));
    i64 sum=0;
    int cnt=0;
    for(int i=1;cnt<n;i+=2){
        //cout<<x[i]<<endl;
        sum+=x[i];
        cnt++;
    }