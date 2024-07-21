int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int T,P,R;cin>>T>>P>>R;
        if(T+P+R==0) break;
        vector<data> S(T);
        vector<vector<int>> A(T,vector<int>(P));
        
        for(int i=0;i<T;i++) S[i].id=i+1;
        
        for(int i=0;i<R;i++){
            int a,b,c;cin>>a>>b>>c;
            a--;b--;
            string d;cin>>d;
            if(d[0]=='C'){
                S[a].ok++;
                S[a].pena+=c+A[a][b]*1200;
            }