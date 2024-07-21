int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int H,W;cin>>H>>W;
    vector<string> S(H);
    for(int i=0;i<H;i++) cin>>S[i];
    
    ll ans=0;
    
    for(int k=0;k<W-1;k++){
        
        for(int i=0;i<=H;i++){
            for(int j=0;j<=H;j++){
                dp[i][j]=INF;
                cost[i][j]=INF;
            }