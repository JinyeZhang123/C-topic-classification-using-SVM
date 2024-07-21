				dp[i][j] = max(dp[i][j], dp[i >> 1][j - w[i]] + val[i]);
