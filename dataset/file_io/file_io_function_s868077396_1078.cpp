int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    cin>>N;
    
    for(int i=0;i<N-1;i++){
        int a,b,c;cin>>a>>b>>c;
        a--;b--;
        G[a].push_back(mp(b,c));
        G[b].push_back(mp(a,c));
    }