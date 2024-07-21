                dp[i+1][j+1] = min({dp[i][j], dp[i][j+1] + 1, dp[i+1][j] + 1});
