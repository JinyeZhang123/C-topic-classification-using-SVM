int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,M;cin>>N>>M;
    cin>>S;
    for(int i=0;i<M;i++){
        int u,v;cin>>u>>v;
        u--;v--;
        G[u].push_back(v);
        G[v].push_back(u);
        
        if(S[u]=='A'){
            cnta[v]++;
        }