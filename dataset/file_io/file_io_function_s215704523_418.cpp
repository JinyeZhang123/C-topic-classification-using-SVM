int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> g(n), r(n);
    rep(i, m) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        r[b].push_back(a);
    }