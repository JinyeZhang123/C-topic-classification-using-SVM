int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    // ifstream cin("agc013_d.in");

    cin >> N >> M;
    dp[0][0][1] = 1;
    fori (i, N) dp[0][i + 1][0] = 1;
    fori (i, M) {
        fori (j, N + 1) {
            if (j > 0) {
                Add(dp[i + 1][j - 1][j == 1], dp[i][j][0]);
                Add(dp[i + 1][j][j == 1], dp[i][j][0]);
                Add(dp[i + 1][j - 1][1], dp[i][j][1]);
                Add(dp[i + 1][j][1], dp[i][j][1]);
            }