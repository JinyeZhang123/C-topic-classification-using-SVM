int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    rep(i, n + 1) cin >> a[i];
    if (n == 0) {
        if (a[0] == 1) {
            cout << 1 << endl;
        }