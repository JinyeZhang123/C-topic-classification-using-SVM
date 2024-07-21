int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    const ll inf = 1e12;
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n, 0));
    rep(i, n) rep(ii, n) cin >> a[i][ii];
    vector<vector<ll>> d(n, vector<ll>(n, 0));
    ll ans = 0;
    rep(i, n) rep(ii, n) d[i][ii] = a[i][ii];
    rep(i, n) {
        rep(ii, n) {
            rep(iii, n) {
                d[ii][iii] = min(d[ii][iii], d[ii][i] + d[i][iii]);
            }