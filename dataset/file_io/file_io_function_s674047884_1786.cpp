int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, m;
    cin >> n >> m;
    Dijkstra<ll> di(n);
    rep(i, n - 1) {
        di.add_edge(i + 1, i, 0);
    }