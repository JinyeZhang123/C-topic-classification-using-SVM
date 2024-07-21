int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    cin >> n;
    a.resize(n);
    rep(i, n) cin >> a[i];
    g.resize(n);
    rep(i, n - 1) {
        ll u, v;
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }