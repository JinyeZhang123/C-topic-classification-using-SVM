int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(n);
    set<ll> sa;
    rep(i, n) {
        cin >> a[i];
        sa.insert(a[i]);
    }