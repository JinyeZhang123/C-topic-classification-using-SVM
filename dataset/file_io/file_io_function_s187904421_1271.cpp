int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    cin >> n;
    a.resize(n);
    rep(i, n) cin >> a[i];
    dp.resize(n, vector<ll>(n, inf));
    cout << dfs(0, n - 1) << endl;
    return 0;
}