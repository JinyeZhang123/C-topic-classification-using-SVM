int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N;cin>>N;
        if(N==0) break;
        vector<vector<int>> can(N,vector<int>(31));
        vector<set<int>> SE(N);
        
        for(int i=0;i<N;i++){
            int a;cin>>a;
            for(int j=0;j<a;j++){
                int b;cin>>b;
                can[i][b]=1;
            }