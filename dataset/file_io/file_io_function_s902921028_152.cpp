int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int A,B;cin>>A>>B;
        
        if(A==0&&B==0) break;
        
        double ans=INF;
        
        for(int i=0;i<=A;i++){
            ans=min(ans,abs(hypot(i,A-i)-B));
        }