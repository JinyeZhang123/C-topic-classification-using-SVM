int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N;cin>>N;
        if(N==0) break;
        
        int M;cin>>M;
        vector<int> X(M),Y(M);
        for(int i=0;i<M;i++){
            cin>>X[i]>>Y[i];
        }