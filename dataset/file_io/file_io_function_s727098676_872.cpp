int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MIN / 2 + 1;
    const ll MB = 41;
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> bc(MB, 0);
    rep(i, n) {
        rep(j, MB) {
            if (a[i] & (1LL << j)) bc[j]++;
        }