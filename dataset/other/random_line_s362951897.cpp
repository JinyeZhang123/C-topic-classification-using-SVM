	dp[i][j] = max(dp[i][j], dp[i - 1][j - wei[i - 1]] + val[i - 1]);
