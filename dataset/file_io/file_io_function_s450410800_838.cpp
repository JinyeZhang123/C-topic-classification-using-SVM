int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    string s;
    cin>>s;
    int n = s.length();
    
    vi x(n+1,0);
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            x[i+1] = max(x[i+1], x[i]+1);
        }