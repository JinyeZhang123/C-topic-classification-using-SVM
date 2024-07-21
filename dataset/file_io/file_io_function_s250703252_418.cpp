int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    const ll mod = 1e9 + 7;
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    sort(all(a));
    sort(all(b));
    set<ll> sa, sb;
    rep(i, n) {
        if (sa.count(a[i]) > 0) {
            cout << 0 << endl;
            return 0;
        }