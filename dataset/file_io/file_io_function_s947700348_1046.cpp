int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N;
    cin >> N;
    vector<ll> A(N);
    REP(i, N) cin >> A[i];

    // dp[i][j] i個見て、(i+1)/2-j選んでいる状態
    // 残りのn-i個で最高でも (n-i+1)/2個しか選べない。計算すると、たかだかj=2まで
    vector<vector<ll>> dp(N+1, vector<ll>(3, -INF));
    dp[0][0] = 0;
    dp[1][0] = A[0];
    dp[1][1] = 0;
    REPN(i, 2, N+1){
        ll a = A[i-1];
        if (i % 2 == 1){
            if (i >= 2) dp[i][0] = max(dp[i][0], dp[i-2][0] + a);

            if (i >= 1) dp[i][1] = max(dp[i][1], dp[i-1][0]);
            if (i >= 2) dp[i][1] = max(dp[i][1], dp[i-2][0]);
            if (i >= 2) dp[i][1] = max(dp[i][1], dp[i-2][1] + a);

            if (i >= 1) dp[i][2] = max(dp[i][2], dp[i-1][1]);
            if (i >= 2) dp[i][2] = max(dp[i][2], dp[i-2][1]);
            if (i >= 2) dp[i][2] = max(dp[i][2], dp[i-2][2] + a);

            if (i >= 3) dp[i][2] = max(dp[i][2], dp[i-3][0]);
            if (i >= 4) dp[i][2] = max(dp[i][2], dp[i-4][0]);
            if (i >= 4) dp[i][2] = max(dp[i][2], dp[i-4][1] + a);

        }