int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll t;
    cin >> t;
    rep(i, t) {
        ll n, m, a, b;
        cin >> n >> m >> a >> b;
        cout << floor_sum(n, m, a, b) << endl;
    }