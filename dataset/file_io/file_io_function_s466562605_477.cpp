int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MIN / 2 + 1;
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll m = 1 + n % 2;
    vector<vector<ll>> dp(n + 1, vector<ll>(m + 2, inf));
    dp[0][0] = 0;
    rep(i, n) {
        rep(j, m + 1) {
            dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j]);
            ll v = dp[i][j];
            if ((i + j) % 2 == 0) v += a[i];
            dp[i + 1][j] = max(dp[i + 1][j], v);
        }