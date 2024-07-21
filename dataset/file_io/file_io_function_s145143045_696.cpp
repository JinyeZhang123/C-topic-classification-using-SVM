int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,M;cin>>N>>M;
    init(N);
    for(int i=0;i<N;i++) cin>>cost[i];
    
    vector<edge> G(M);
    for(int i=0;i<M;i++){
        int a,b,c;cin>>a>>b>>c;
        a--;b--;
        G[i]={a,b,c}