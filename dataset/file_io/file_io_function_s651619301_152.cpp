int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N,M;cin>>N>>M;
        int maxi=-1;
        if(N==0) break;
        
        vector<int> A(N);
        
        for(int i=0;i<N;i++){
            cin>>A[i];
        }