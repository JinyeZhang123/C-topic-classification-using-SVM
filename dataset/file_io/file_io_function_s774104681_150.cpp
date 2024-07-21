int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    vector<string> S(N);
    for(int i=0;i<N;i++) cin>>S[i];
    
    bool ok=false;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(S[i][j]=='#'){
                ok=true;
            }