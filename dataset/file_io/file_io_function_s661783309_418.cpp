int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<ll> p(n), idx(n);
    rep(i, n) {
        cin >> p[i];
        p[i]--;
        idx[p[i]] = i;
    }