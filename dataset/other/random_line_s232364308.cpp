    dp[i][0] = min(dp[i - 1][0] + current, dp[i - 1][1] + (10 - current));
