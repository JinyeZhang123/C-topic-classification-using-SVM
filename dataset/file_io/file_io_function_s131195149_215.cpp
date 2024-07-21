int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N,K,S;cin>>N>>K>>S;
        if(N+K+S==0) break;
        
        memset(dp,0,sizeof(dp));
        
        dp[0][0]=1;
        
        for(int i=1;i<=N;i++){
            for(int k=S;k>=i;k--){
                for(int j=0;j<K;j++){
                    dp[j+1][k]+=dp[j][k-i];
                }