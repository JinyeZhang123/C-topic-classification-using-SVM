int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        cin>>H>>W>>X;
        if(H+W+X==0) break;
        ans=0;
        mat S(H,vector<int>(W));
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                cin>>S[i][j];
            }