int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    ll A,B;cin>>A>>B;
    vector<int> S(N);
    for(int i=0;i<N;i++) cin>>S[i];
    
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            dp[i][j]=INF;
        }