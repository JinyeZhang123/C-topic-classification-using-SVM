int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<queue<ll>> a(n);
    rep(i, n) {
        rep(j, n - 1) {
            ll tmp;
            cin >> tmp;
            a[i].push(tmp - 1);
        }