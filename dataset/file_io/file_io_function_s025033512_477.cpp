int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    map<ll, ll> par;
    rrep(i, n) {
        ll v = i - a[i];
        if (v < 0) {
            cout << -1 << endl;
            return 0;
        }