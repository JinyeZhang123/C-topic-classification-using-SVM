        dp[i + 1] = min(dp[i + 1], dp[i + 1 - a[j]] + b[j]);
