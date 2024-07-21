        if (j - c[i] >= 0) dp[i][j] = min(dp[i-1][j], dp[i][j - c[i]] + 1);
