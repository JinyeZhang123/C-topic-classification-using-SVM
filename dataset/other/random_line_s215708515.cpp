                dp[i][j] = max(dp[i][j], dp[p][j - w[i]] + v[i]);
