int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MAX / 2 - 1;
    ll n, m;
    cin >> n >> m;
    vector<ll> dp(1 << n, inf);
    dp[0] = 0;
    rep(i, m) {
        ll a, b;
        cin >> a >> b;
        vector<ll> c(b);
        rep(j, b) cin >> c[j];
        rep(bit, 1 << n) {
            if (dp[bit] == inf) continue;
            ll nb = bit;
            rep(j, b) nb |= 1 << (c[j] - 1);
            chmin(dp[nb], dp[bit] + a);
        }