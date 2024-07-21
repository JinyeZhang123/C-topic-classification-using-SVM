int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n), c(n, LONG_LONG_MAX);
    rep(i, n) cin >> a[i];
    ll ans = LONG_LONG_MAX;
    rep(i, n) {
        ll cost = i * x;
        rep(ii, n) {
            c[ii] = min(c[ii], a[(ii + n - i) % n]);
            cost += c[ii];
        }