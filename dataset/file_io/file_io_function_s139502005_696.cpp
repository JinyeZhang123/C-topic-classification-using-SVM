int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    make();
    
    int N,Q;cin>>N>>Q;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin>>A[i];
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(A[i]>A[j]) dp[i][j]=1;
        }