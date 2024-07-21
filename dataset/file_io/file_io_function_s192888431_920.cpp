int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;ll C;cin>>N>>C;
    vector<ll> h(N);
    for(int i=0;i<N;i++) cin>>h[i];
    
    add(-2*h[0],dp[0]+h[0]*h[0]);
    
    for(int i=1;i<N;i++){
        ll x=query(h[i]);
        dp[i]=C+h[i]*h[i]+x;
        add(-2*h[i],dp[i]+h[i]*h[i]);
    }