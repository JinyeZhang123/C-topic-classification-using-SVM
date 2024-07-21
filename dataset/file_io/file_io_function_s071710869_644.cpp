int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, q;
    cin >> n >> q;
    vector<S> vs(n);
    rep(i, n) cin >> vs[i].s >> vs[i].t >> vs[i].x;
    sort(all(vs));
    set<pair<ll, ll>> d;
    rep(i, q) {
        ll tmp;
        cin >> tmp;
        d.insert(make_pair(tmp, i));
    }