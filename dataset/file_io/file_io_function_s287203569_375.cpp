int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        cin>>N;
        if(N==0) break;
        int M,A,B,C;cin>>M>>A>>B>>C;
        A--;
        B--;
        C--;
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++) dis[i][j]=INF;
            dis[i][i]=0;
        }