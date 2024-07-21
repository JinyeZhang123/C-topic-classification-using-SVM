				dp[i+(1<<j)] = min(dp[i] + a[j][0],dp[i+(1<<j)]);
