int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N;cin>>N;
        //if(N+M==0) break;
        
        vector<int> A(N);
        
        for(int i=0;i<N;i++) cin>>A[i];
        
        vector<int> deta(1000);
        
        for(int i=0;i<N;i++) deta[A[i]]++;
        for(int i=1;i<N;i++) deta[A[i-1]*10+A[i]]++;
        for(int i=2;i<N;i++) deta[A[i-2]*100+A[i-1]*10+A[i]]++;
        
        for(int i=0;;i++){
            if(deta[i]==0){
                cout<<i<<endl;
                return 0;
            }