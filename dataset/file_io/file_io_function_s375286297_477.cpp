int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    rep(i, k) {
        vector<ll> b(n + 1, 0);
        rep(j, n) {
            ll l = max(0LL, j - a[j]);
            ll r = min(n, j + a[j] + 1);
            b[l]++;
            b[r]--;
        }