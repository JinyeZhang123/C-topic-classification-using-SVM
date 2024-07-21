int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MAX / 2 - 1;
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> g(n);
    rep(i, m) {
        ll u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
    }