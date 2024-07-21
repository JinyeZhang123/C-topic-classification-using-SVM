int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,K;cin>>N>>K;
    dp[0][0][0]=1;
    int pre=0;
    
    for(int mo=1;mo<=min(N,2*K);mo++){
        for(int i=0;i<N;i++){
            dp[i][mo][0]+=dp[i][pre][0]+dp[i][pre][1];
            if(mo-K>=1) dp[i+1][mo][0]+=dp[i][pre][0]+dp[i][pre][1];
            if(mo+K<=N) dp[i+1][mo][1]+=dp[i][pre][0]+dp[i][pre][1];
            
            dp[i][mo][0]%=mod;
            dp[i+1][mo][0]%=mod;
            dp[i+1][mo][1]%=mod;
        }