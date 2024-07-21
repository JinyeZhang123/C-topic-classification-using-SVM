int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,M;cin>>N>>M;
    
    vector<dat> S(M);
    for(int i=0;i<M;i++){
        cin>>S[i].l>>S[i].r>>S[i].score;
    }