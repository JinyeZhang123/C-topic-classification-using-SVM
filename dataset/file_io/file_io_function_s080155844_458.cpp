int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    vector<pair<ll,pair<ll,ll>>> S(N);
    for(int i=0;i<N;i++){
        ll a,b,c;cin>>a>>b>>c;
        S[i]=mp(a+b,mp(a,c));
    }