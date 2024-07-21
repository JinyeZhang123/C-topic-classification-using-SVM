int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    vector<vector<ll>> A(N,vector<ll>(N));
    
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) cin>>A[i][j];
    
    for(int bit=0;bit<(1<<N);bit++){
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                if((bit&(1<<i))&&(bit&(1<<j))){
                    dp[bit]+=A[i][j];
                }