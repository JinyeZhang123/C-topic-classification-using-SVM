int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    string S;
    cin >> S;
    int N = (int)S.size();

    // dp[i][0] : i番目まで見て、貸し借りなしの状態
    // dp[i][1] : i番目まで見て、1足りない状態
    vector<vector<ll>> dp(N+1, vector<ll>(2, INF));
    dp[0][0] = 0;
    dp[0][1] = 1;
    REP(i, N){
        int d = S[i] - '0';
        dp[i+1][0] = min(dp[i+1][0], (min(d, 11-d) + dp[i][0]));
        dp[i+1][0] = min(dp[i+1][0], (10-d + dp[i][1]));

        dp[i+1][1] = min(dp[i+1][1], d+1 + dp[i][0]);
        dp[i+1][1] = min(dp[i+1][1], 9-d + dp[i][1]);
    }