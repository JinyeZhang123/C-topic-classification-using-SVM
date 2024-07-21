int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, m;
    cin >> n >> m;
    UnionFind uf(n);
    rep(i, m) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        uf.merge(a, b);
    }