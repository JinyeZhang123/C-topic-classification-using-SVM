int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    const ll mod = 1e9 + 7;
    ll n;
    cin >> n;
    vector<ll> t(n), a(n);
    rep(i, n) cin >> t[i];
    rep(i, n) cin >> a[i];
    vector<pair<ll, ll>> h(n, make_pair(-1, -1));
    rep(i, n) {
        if ((i == 0) || (t[i] != t[i - 1])) {
            h[i].first = t[i];
            h[i].second = t[i];
            continue;
        }