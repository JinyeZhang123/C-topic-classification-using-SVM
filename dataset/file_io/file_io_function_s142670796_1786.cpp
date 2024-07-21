int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, m, s, t;
    cin >> n >> m >> s >> t;
    s--; t--;
    Dijkstra<ll> yen(n), snk(n);
    rep(i, m) {
        ll u, v, a, b;
        cin >> u >> v >> a >> b;
        u--; v--;
        yen.add_edge(u, v, a);
        yen.add_edge(v, u, a);
        snk.add_edge(u, v, b);
        snk.add_edge(v, u, b);
    }