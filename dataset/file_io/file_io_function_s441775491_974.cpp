int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    i64 a,b,c;
    i64 k;
    cin>>a>>b>>c>>k;
    if(k%2==1) cout<<b-a<<endl;
    else       cout<<a-b<<endl;
    return 0;
}