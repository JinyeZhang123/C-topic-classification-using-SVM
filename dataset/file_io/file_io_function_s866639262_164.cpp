int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll N,X;cin>>N>>X;
    vector<ll> S(N+1);
    for(int i=0;i<N;i++){
        cin>>S[i+1];
        S[i+1]+=S[i];
    }