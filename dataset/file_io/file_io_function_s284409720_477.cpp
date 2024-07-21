int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<pair<ll, ll>> vp(n);
    rep(i, n) {
        cin >> vp[i].first;
        vp[i].second = i;
    }