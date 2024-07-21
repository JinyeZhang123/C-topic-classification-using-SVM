int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    cin >> n;
    rep(i, 3) cin >> v[i];
    s.resize(n);
    rep(i, n) cin >> s[i];
    dfs();
    if (ans) {
        cout << "Yes" << endl;
        rep(i, sz(route)) cout << route[i] << endl;
    }