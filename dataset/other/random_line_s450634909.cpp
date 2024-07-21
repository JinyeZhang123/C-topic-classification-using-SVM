    dp[i] = min(abs(a[i] - a[i-2]) + dp[i-2], abs(a[i] - a[i-1]) + dp[i-1]);
