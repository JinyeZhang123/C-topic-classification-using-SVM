			dp[i][j] = min(dp[i - 1][j - 1] + dis[i] * wea[j], dp[i][j - 1]);
