int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N;cin>>N;
        int cnt=0;
        
        bool ok=true;
        
        for(int i=0;i<N;i++){
            string S;cin>>S;
            if(S[0]=='A') cnt++;
            else cnt--;
            
            if(cnt<0) ok=false;
        }