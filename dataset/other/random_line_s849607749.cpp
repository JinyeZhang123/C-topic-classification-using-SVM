				dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
