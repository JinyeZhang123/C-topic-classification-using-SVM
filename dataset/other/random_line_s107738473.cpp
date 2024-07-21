	REP(i, 0, N) dp[i + 1][0] = dp[i][0] + A[i].second * (N - i - A[i].first);
