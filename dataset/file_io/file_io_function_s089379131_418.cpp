int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans = 0;
    rep(i, n) {
        ll t;
        cin >> t;
        if ((t < a) || (t >= b)) ans++;
    }