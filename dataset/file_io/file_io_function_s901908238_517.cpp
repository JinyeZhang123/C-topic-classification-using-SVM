int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, q;
    cin >> n >> q;
    vector<S> stx(n);
    rep(i, n) cin >> stx[i].s >> stx[i].t >> stx[i].x;
    sort(all(stx));
    set<pair<ll, ll>> d;
    rep(i, q) {
        ll tmp;
        cin >> tmp;
        d.insert(make_pair(tmp, i));
    }