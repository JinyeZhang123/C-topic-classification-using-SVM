int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N,M;cin>>N>>M;
        if(N+M==0) break;
        V=N;
        init(N+M);
        
        vector<int> A(N),B(M);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }