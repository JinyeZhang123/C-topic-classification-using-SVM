            dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + b[j + 1][i]);
