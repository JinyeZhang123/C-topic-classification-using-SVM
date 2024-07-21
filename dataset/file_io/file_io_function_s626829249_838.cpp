int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    vector<string> b(m);
    forn(i,n)   cin>>a[i];
    forn(i,m)   cin>>b[i];

    for(int i=0;i<=n-m;i++){
        for(int j=0;j<=n-m;j++){
            bool flag = true;
            for(int k=0;k<m;k++){
                for(int l=0;l<m;l++){
                    if(a[i+k][j+l]!=b[k][l]){
                        flag = false;
                        break;
                    }