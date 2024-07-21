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
    vector<pair<ll, ll>> pa(n);
    rep(i, n) pa[i] = make_pair(a[i], i);
    sort(all(pa), greater<pair<ll, ll>>());
    // dp[見た数][左においた数]
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, inf));
    dp[0][0] = 0;
    rep(i, n) {
        ll val = pa[i].first;
        ll idx = pa[i].second;
        rep(j, n) {
            if (dp[i][j] == inf) continue;
            ll left = j, right = n - 1 - (i - j);
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + abs(right - idx) * val);
            dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + abs(left - idx) * val);
        }