int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MAX / 2 - 1;
    ll h, n;
    cin >> h >> n;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];
    vector<ll> dp(h + 1, inf);
    dp[0] = 0;
    rep(i, n) {
        rep(j, h) {
            if (dp[j] == inf) continue;
            ll v = min(h, j + a[i]);
            chmin(dp[v], dp[j] + b[i]);
        }