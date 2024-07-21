int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    string S;cin>>S;
    int M=S.size();
    
    dp[0][0]=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            dp[i+1][max(0,j-1)]+=dp[i][j];
            dp[i+1][max(0,j-1)]%=mod;
            
            dp[i+1][j+1]+=2*dp[i][j];
            dp[i+1][j+1]%=mod;
        }