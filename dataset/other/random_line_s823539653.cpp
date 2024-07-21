      dp[C[i]] = min(dp[C[i]],dp[C[i]^(1<<j)]+1);
