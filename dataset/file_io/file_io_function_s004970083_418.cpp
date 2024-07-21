int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    map<ll, vector<ll>> m;
    rep(i, n) m[a[i]].push_back(i);
    vector<ll> vals;
    for(auto x : m) vals.push_back(x.first);
    reverse(all(vals));
    vals.push_back(0);
    vector<ll> ans(n, 0);
    ll cnt = 0, idx = LONG_LONG_MAX;
    rep(i, sz(vals) - 1) {
        rep(ii, sz(m[vals[i]])) {
            idx = min(idx, m[vals[i]][ii]);
        }