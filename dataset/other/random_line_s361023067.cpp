					dp[j][i + j][k] = max(dp[j][i + j][k], 2 + dp[j + 1][i + j - 1][k - 1]);
