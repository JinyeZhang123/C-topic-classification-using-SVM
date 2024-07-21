int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    const ll MAX = 101000;
    ll n;
    cin >> n;
    vector<pair<ll, ll>> xy(n);
    rep(i, n) cin >> xy[i].first >> xy[i].second;
    UnionFind uf(MAX * 2);
    rep(i, n) {
        uf.merge(xy[i].first, xy[i].second + MAX);
    }