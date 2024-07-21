int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    string t;
    cin>>t;
    int n = t.length();
    for(int i=0;i<n;i++){
        if(t[i]=='?')   t[i] = 'D';  
    }