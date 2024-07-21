int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    g.resize(n);
    rep(i, n - 1) {
        ll a;
        cin >> a;
        g[a - 1].push_back(i + 1);
    }