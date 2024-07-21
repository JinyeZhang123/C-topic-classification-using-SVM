int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll N,X;cin>>N>>X;
    
    vector<data> S(N);
    ll need=0;
    
    for(int i=0;i<N;i++){
        cin>>S[i].b>>S[i].l>>S[i].r;
        need+=S[i].b*S[i].l;
    }