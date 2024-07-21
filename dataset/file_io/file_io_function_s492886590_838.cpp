int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    i64 n,a,b;
    cin>>n>>a>>b;
    i64 res=0;
    if(n==1){
        if(a==b)    res=1;
        else        res=0;
    }