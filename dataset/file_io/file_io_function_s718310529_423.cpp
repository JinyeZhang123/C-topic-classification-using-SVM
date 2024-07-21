int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,M;cin>>N>>M;
    N*=3;
    dp[0][6000]=1;
    
    for(int i=0;i<N;i++){
        for(int j=1;j<=12000;j++){
            dp[i+3][j]+=dp[i][j]*(N-i-1)%M*(N-i-2)%M;
            dp[i+3][j]%=M;
            
            dp[i+2][j-1]+=dp[i][j]*(N-1-i)%M;
            dp[i+2][j-1]%=M;
            
            dp[i+1][j+1]+=dp[i][j];
            dp[i+1][j+1]%=M;
        }