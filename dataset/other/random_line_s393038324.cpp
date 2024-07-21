                dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]], dp[i][j]+v[i]);
