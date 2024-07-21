int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<ll> adp(n + 1, 0), bdp(n + 1, 0);
    rep(i, n) {
        ll p;
        cin >> p;
        p--;
        adp[p] += i;
        bdp[p + 1] -= i;
    }