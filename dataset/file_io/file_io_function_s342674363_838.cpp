int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int n;
    cin>>n;
    unordered_map<string,int> songs;
    int dur[n];
    for(int i=0;i<n;i++){
        string x;
        int t;
        cin>>x>>t;
        songs[x] = i;
        dur[i] = t;
    }