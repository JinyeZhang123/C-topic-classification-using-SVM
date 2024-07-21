int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, z, w;
    cin >> n >> z >> w;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    if (n == 1) {
        cout << abs(a[0] - w) << endl;
    }