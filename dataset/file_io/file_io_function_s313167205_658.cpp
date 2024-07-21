int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MAX / 2 - 1;
    const ll mv = 50;
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    vector<vector<ll>> dp(1 << n, vector<ll>(mv + 1, inf));
    dp[0][0] = 0;
    rep(bit, 1 << n) {
        ll pc = __builtin_popcountll(bit);
        rep(i, n) {
            if (f(bit, i)) continue;
            ll v = ((i % 2) == (pc % 2)) ? a[i] : b[i];
            rep(j, v + 1) {
                if (dp[bit][j] == inf) continue;
                dp[bit | (1 << i)][v] = min(dp[bit | (1 << i)][v], dp[bit][j] + g(bit, i));
            }