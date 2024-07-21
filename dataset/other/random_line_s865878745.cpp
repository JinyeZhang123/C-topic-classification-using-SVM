                dp[i+1][j] = min(dp[i][j], dp[i+1][j-w[i]] + 1);
