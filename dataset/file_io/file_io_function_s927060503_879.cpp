int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    cin >> n >> k;
    a.resize(n);
    rep(i, n) cin >> a[i];
    dp.resize(k + 1, -1);
    dp[0] = 0;
    dfs(k);
    cout << ((dp[k] == 1) ? "First" : "Second") << endl;
    return 0;
}