int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, q;
    cin >> n >> q;
    fenwick_tree<ll> ft(n);
    rep(i, n) {
        ll a;
        cin >> a;
        ft.add(i, a);
    }