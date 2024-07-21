            dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - 1] + C[i - 1] * D[j - 1]);
