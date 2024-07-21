int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #if !ONLINE_JUDGE && !EVAL
        ifstream cin("input.txt");
        ofstream cout("output.txt");
    #endif

    cin >> a >> b >> c >> d;
    dp[a][b] = 1;
    for (i = a; i <= c; i++) {
        for (j = b; j <= d; j++) {
            if (i + j == a + b) continue;
            dp[i][j] = 0;
            if (i > a) dp[i][j] += j * dp[i - 1][j];
            if (j > b) dp[i][j] += i * dp[i][j - 1];
            if (i > a && j > b) dp[i][j] -= (i - 1) * (j - 1) * dp[i - 1][j - 1];
            dp[i][j] %= mod; dp[i][j] += mod; dp[i][j] %= mod;
        }