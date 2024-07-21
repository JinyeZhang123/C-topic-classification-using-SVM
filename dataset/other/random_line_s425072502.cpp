          dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
