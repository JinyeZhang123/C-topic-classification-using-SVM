int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll ans = a[0];
    reps(i, 1, n) ans = __gcd(ans, a[i]);
    auto div = get_divisor(accumulate(all(a), 0LL));
    for(auto &x : div) {
        vector<ll> d(n);
        rep(i, n) d[i] = a[i] % x;
        sort(all(d));
        vector<ll> dp(n + 1, 0);
        rep(i, n) dp[i + 1] += dp[i] + d[i];
        bool f = false;
        reps(i, 1, n) {
            ll left = dp[i];
            ll right = (n - i) * x - (dp[n] - dp[i]);
            if ((left == right) && (k >= left)) {
                f = true;
                break;
            }