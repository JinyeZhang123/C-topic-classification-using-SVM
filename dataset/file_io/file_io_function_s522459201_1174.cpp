int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    cin >> n;
    a.resize(n);
    rep(i, n) cin >> a[i];
    dp.resize(n, vector<pair<ll, ll>>(n, make_pair(inf, inf)));
    cout << dfs(0, n - 1).first << endl;
    return 0;
}