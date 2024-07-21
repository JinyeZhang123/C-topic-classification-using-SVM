int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MAX / 2 - 1;
    ll n, x, m;
    cin >> n >> x >> m;
    map<ll, ll> mv;
    ll lb = inf, ls = inf;
    rep(i, n) {
        if (mv.count(x) > 0) {
            lb = mv[x];
            ls = i - mv[x];
            break;
        }