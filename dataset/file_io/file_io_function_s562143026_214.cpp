int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int H;cin>>H>>W;
    vector<vector<int>> up(H,vector<int>(W));
    
    vector<string> S(H);
    for(int i=0;i<H;i++) cin>>S[i];
    
    for(int i=1;i<H;i++){
        for(int j=1;j<W;j++){
            int c=0;
            for(int a=-1;a<=0;a++){
                for(int b=-1;b<=0;b++){
                    if(S[i+a][j+b]=='#') c++;
                }