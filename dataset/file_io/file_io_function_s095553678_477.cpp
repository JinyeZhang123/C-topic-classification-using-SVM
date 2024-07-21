int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, m;
    cin >> n >> m;
    vector<ll> x(n);
    rep(i, n) cin >> x[i];
    map<ll, ll> vcnt, mcnt;
    rep(i, n) {
        vcnt[x[i]]++;
        mcnt[x[i] % m]++;
    }