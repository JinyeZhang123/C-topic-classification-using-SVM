                dp[i] = max(dp[i], dp[a[i-2]]+ (i-2) - a[i-2]);
