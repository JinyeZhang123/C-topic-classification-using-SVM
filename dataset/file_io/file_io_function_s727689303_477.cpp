int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll ans = 0;
    while(true) {
        bool f = false;
        rep(i, n) {
            if (a[i] >= n) {
                f = true;
                break;
            }