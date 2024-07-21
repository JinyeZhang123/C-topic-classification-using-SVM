int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,M;ll X;cin>>N>>M>>X;
    init(N);
    
    vector<edge> S(M);
    for(int i=0;i<M;i++){
        cin>>S[i].from>>S[i].to>>S[i].cost;
        S[i].from--;
        S[i].to--;
    }