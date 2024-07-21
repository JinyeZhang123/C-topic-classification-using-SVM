int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<pair<ll, ll>> ab(n - 1);
    vector<vector<ll>> g(n);
    ll mv = -1, mi;
    rep(i, n - 1) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
        ab[i] = make_pair(a, b);
        if (sz(g[a]) > mv) {
            mv = sz(g[a]);
            mi = a;
        }