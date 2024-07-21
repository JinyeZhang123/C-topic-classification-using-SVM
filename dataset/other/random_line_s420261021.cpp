		dp[i] = min(min(dp[i - a] + 1, dp[i - b] + 1), dp[i - c] + 1);
