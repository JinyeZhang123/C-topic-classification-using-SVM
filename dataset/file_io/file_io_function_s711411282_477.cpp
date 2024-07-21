int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    ll ans = 0;
    rep(i, n) {
        ans += (i + 1) * (n - i);
    }