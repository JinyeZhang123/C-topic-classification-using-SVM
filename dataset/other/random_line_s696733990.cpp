				dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
