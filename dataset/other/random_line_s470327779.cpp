					dp[i][j] = max(dp[i][j], dp[i - 1][k] + abs(c[k] - c[j]));
