int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll ans = a[0] - 1;
    ll p = 2;
    reps(i, 1, n) {
        if (a[i] < p) continue;
        if (a[i] == p) {
            p++;
        }