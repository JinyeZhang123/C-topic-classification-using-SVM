int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MAX / 2 - 1;
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mx = -inf, mn = inf;
    map<ll, ll> cnt;
    rep(i, n) {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
        cnt[a[i]]++;
    }