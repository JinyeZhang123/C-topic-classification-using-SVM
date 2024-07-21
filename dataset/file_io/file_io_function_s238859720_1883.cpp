int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    Diameter<ll> di(n);
    rep(i, n - 1) {
        ll s, t, w;
        cin >> s >> t >> w;
        di.add_edge(s, t, w);
    }