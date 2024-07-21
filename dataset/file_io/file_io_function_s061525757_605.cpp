int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll PAT = (80 + 80) * 80;
    ll h, w;
    cin >> h >> w;
    vector<vector<ll>> a(h, vector<ll>(w));
    rep(i, h) rep(j, w) cin >> a[i][j];
    vector<vector<ll>> b(h, vector<ll>(w));
    rep(i, h) rep(j, w) cin >> b[i][j];
    vector<vector<vector<bool>>> dp(h, vector<vector<bool>>(w, vector<bool>(PAT + 1, false)));
    dp[0][0][abs(a[0][0] - b[0][0])] = true;
    rep(y, h) {
        rep(x, w) {
            ll d = abs(a[y][x] - b[y][x]);
            rep(k, PAT + 1) {
                if (y > 0) {
                    if (((k + d) <= PAT) && (dp[y - 1][x][k + d])) {
                        dp[y][x][k] = true;
                    }