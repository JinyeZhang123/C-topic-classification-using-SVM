int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    rep(i, n) rep(ii, m) cin >> a[i][ii];
    ll ans = LONG_LONG_MAX;
    rep(i, m) {
        map<ll, ll> cnt;
        rep(ii, n) cnt[a[ii][0]]++;
        ll mv = -1, mi = -1;
        for(auto x : cnt) {
            if (mv < x.second) {
                mv = x.second;
                mi = x.first;
            }