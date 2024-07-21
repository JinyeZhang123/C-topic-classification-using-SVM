                dp[i][j] = min(dp[i][j], dp[i - 1][v] + get(a[i], v));
