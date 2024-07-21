int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N,Q;cin>>N>>Q;
        if(N+Q==0) break;
        vector<string> A(N);
        vector<int> S(N),T(N);
        
        for(int i=0;i<N;i++){
            cin>>A[i];
            int a,b;cin>>a>>b;
            S[i]=b-a;
            T[i]=b;
        }