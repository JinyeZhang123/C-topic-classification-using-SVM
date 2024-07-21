int main() {
    #ifdef LOCAL
    ifstream in("../../Atcoder/input.txt");
    cin.rdbuf(in.rdbuf());
    #endif

    ll N; string S;
    cin>>N>>S;

    auto dp = genarr(N+10,N+10,0LL);
    ll ans = 0;

    rep(i,N) {
        rep(j,N) {
            if (S[i] != S[j]) continue; 

            chmax(dp[i+1][j+1],dp[i][j]+1);
            if (dp[i+1][j+1] <= j-i && i<j) {
                chmax(ans,dp[i+1][j+1]);
            }