int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll v = (1 + n) * n / 2;
    ll suma = accumulate(all(a), 0LL);
    if (suma % v != 0) {
        cout << "NO" << endl;
        return 0;
    }