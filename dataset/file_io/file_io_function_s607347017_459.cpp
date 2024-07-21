int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,K,M;
    cin>>N>>K>>M;
    
    dp[0][0]=1;
    
    pre[0][0]=1;
    
    for(int k=0;k<=N;k++){
        for(int l=0;l<=N;l++){
            for(int m=l;m<=N;m++){
                pre[k+1][m]+=pre[k][l]*(m+1);
                pre[k+1][m]%=M;
            }