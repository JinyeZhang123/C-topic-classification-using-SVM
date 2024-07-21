int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int n;
    cin>>n;
    int cnt=0;
    forn(i,n){
        int x;
        cin>>x;
        if(x%2==1)  cnt++;
    }