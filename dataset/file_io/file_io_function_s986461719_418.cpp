int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> g(n);
    vector<ll> cnt(n, 0);
    set<ll> on, off;
    rep(i, n - 1 + m) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        on.insert(a);
        off.insert(b);
        cnt[b]++;
    }