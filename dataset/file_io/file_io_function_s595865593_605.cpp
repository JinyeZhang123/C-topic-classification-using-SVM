int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll inf = LONG_LONG_MIN / 2 + 1;
    ll n, ga, sa, ba, gb, sb, bb;
    cin >> n >> ga >> sa >> ba >> gb >> sb >> bb;
    vector<ll> dp(n + 1, inf);
    dp[0] = 0;
    rep(i, n + 1) {
        dp[i] = i;
        if (i >= ga) chmax(dp[i], dp[i - ga] + gb);
        if (i >= sa) chmax(dp[i], dp[i - sa] + sb);
        if (i >= ba) chmax(dp[i], dp[i - ba] + bb);
    }