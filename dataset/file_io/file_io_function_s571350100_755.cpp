int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int T,N;cin>>T>>N;
        if(T+N==0) break;
        
        memset(dis,-1,sizeof(dis));
        
        for(int i=0;i<N;i++){
            int a,b;cin>>a>>b;
            a+=100;b+=100;
            dis[a+b*200]=INF;
        }