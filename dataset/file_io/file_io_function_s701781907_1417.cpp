int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, m;
    cin >> n >> m;
    BellmanFord<ll> bf(n);
    rep(i, m) {
        ll a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        bf.add_edge(a, b, -c);
    }