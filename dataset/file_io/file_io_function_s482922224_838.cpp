int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int n;
    cin>>n;
    vi a(n);
    forn(i,n)   cin>>a[i];
    sort(all(a));

    int cnt=1, max_cnt=1, i=0, j=1;
    while(i<n && j<n)
    {
        if(a[j]-a[i]<=2)
        {
            j++;
            cnt++;
        }