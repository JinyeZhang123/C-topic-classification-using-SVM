int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll N,E,T;cin>>N>>E>>T;
    vector<ll> A(N),def(N);
    for(int i=0;i<N;i++) cin>>A[i];
    A.push_back(INF);
    
    for(int i=1;i<=N+1;i++) dp[i]=INF;
    dp[0]=0;
    
    LazySegmentTree<ll,ll> seg(N,
                               def,
                               [](ll a,ll b){return min(a,b);}