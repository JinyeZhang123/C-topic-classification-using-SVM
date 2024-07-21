				dp[i][1] = max(dp[i-2][1]+nums[i], max(dp[i-3][0], dp[i-4][0])+nums[i]);
