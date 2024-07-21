int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll chars = 'z' - 'a' + 1;
    string s, t;
    cin >> s >> t;
    vector<vector<ll>> idx(chars);
    rep(i, len(s)) idx[s[i] - 'a'].push_back(i);
    ll lp = 0, cur = -1;
    rep(i, len(t)) {
        ll c = t[i] - 'a';
        if (sz(idx[c]) == 0) {
            cout << -1 << endl;
            return 0;
        }