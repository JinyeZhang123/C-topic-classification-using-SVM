int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MIN / 2 - 1;
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<vector<ll>> dp(n + 1, vector<ll>(2, inf));
    dp[0][0] = 0;
    rep(i, n) {
        {
            chmax(dp[i + 1][0], dp[i][0] + a[i]);
            chmax(dp[i + 1][0], dp[i][1] - a[i]);
        }