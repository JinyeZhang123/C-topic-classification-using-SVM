int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    cin>>N>>M;
    vector<dat> S(N);
    for(int i=0;i<N;i++){
        cin>>S[i].l>>S[i].r;
    }