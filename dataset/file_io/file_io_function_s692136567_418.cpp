int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> dp(n + 1, 0), dpz(n + 1, 0);
    rep(i, n) {
        dp[i + 1] = dp[i] + a[i];
        dpz[i + 1] = dpz[i] + ((a[i] > 0) ? a[i] : 0);
    }