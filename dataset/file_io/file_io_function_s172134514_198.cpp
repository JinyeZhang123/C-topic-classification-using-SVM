int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N;cin>>N;
        if(N==0) break;
        vector<int> cnt(26);
        int ans=INF;
        for(int i=0;i<N;i++){
            char a;cin>>a;
            cnt[a-'A']++;
            
            vector<int> B=cnt;
            sort(all(B));
            if(B[24]+N-1-i<B[25]) ans=min(ans,i+1);
        }