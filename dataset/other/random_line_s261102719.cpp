    dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
