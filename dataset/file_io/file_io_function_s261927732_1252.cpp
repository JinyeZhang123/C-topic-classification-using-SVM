int main(){
    // std::ifstream in("antigreedy0.in");
    // std::cin.rdbuf(in.rdbuf());
    
    ll N,W; cin >> N >> W;
    vector<ll> w(N),v(N);
    vector<vector<vector<ll>>> dp(2,vector<vector<ll>>(N+1,vector<ll>(330,0)));   
    // vector<vector<vector<ll>>> dp(2,vector<vector<ll>>(N+1,vector<ll>(30,0)));   
    rep(i,N)cin >> w[i] >> v[i];
    ll base = w[0];
    rep(i,N)w[i] -= base;
    rep(i,N){
        rep(j,N){
            if(i < j)continue;
            rep(k,330){
                dp[(i+1)%2][j][k] = max(dp[(i+1)%2][j][k],dp[i%2][j][k]);
                if(w[i] <= k && (j+1)*base + k <= W){
                    dp[(i+1)%2][j+1][k] = max(dp[(i+1)%2][j+1][k],dp[i%2][j][k-w[i]] + v[i]);
                }