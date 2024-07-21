int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, m;
    cin >> n >> m;
    StronglyConnectedComponents<ll> scc(n);
    rep(i, m) {
        ll s, t;
        cin >> s >> t;
        scc.add_edge(s, t);
    }