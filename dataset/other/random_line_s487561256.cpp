					dp[i + 1][nj] = min(dp[i + 1][nj], dp[i][j] + (x[i] - nj) * (x[i] - nj));
