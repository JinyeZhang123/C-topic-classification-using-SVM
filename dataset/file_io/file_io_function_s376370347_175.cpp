int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll N;cin>>N;
    dp[1]=N;
    dp[2]=N*N%mod;
    
    sum[1]=N;
    sum[2]=N+N*N%mod;
    
    for(ll i=3;i<=N;i++){
        dp[i]=dp[i-1]+sum[i-3]+(N-1-(i-3))*N+(i-3)*(N-1);
        dp[i]%=mod;
        
        sum[i]=sum[i-1]+dp[i];
        sum[i]%=mod;
    }