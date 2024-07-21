int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MIN / 2 + 1;
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];
    vector<vector<ll>> dp(t + 1, vector<ll>(2, inf));
    dp[0][0] = 0;
    rep(i, n) {
        rrep(j, t) {
            ll nt = j + a[i];
            if (nt <= t) {
                chmax(dp[nt][0], dp[j][0] + b[i]);
                chmax(dp[nt][1], dp[j][1] + b[i]);
            }