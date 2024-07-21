int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    i64 a,b,c;
    cin>>a>>b>>c;
    if(c<(a+b)){
        cout<<"No\n";
        return 0;
    }