int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MAX / 2 - 1;
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n)), g(n, vector<ll>(n));
    rep(i, n) {
        rep(j, n) {
            cin >> a[i][j];
            g[i][j] = a[i][j];
        }