int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int A,B,C;cin>>A>>B>>C;
        //if(A+B+C==0) break;
        
        int now=0;
        int ans=INF;
        
        while(now<=7200){
            if(now%60<=C%60){
                if(now%60+A>=C%60){
                    ans=min(ans,now/60*60+C);
                }