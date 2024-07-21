int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MAX / 2 - 1;
    string s;
    cin >> s;
    ll n = len(s);
    // dp[figre][0:just, 1:over]
    vector<vector<ll>> dp(n + 1, vector<ll>(2, inf));
    dp[0][0] = 0;
    dp[0][1] = 1;
    rep(i, n) {
        ll cv = s[i] - '0';
        chmin(dp[i + 1][0], dp[i][0] + cv);
        chmin(dp[i + 1][0], dp[i][1] + (10 - cv));
        chmin(dp[i + 1][1], dp[i][0] + (cv + 1));
        chmin(dp[i + 1][1], dp[i][1] + (10 - cv - 1));
    }