int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    const ll mod = 1e9 + 7;
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    map<ll, ll> m;
    ll l, r;
    rep(i, n + 1) {
        cin >> a[i];
        if (m.count(a[i]) > 0) {
            l = m[a[i]];
            r = i;
        }