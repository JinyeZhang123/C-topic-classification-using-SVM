                dp[i] = sub(dp[i], mul(dp[j], pathTo(arr[j], arr[i])));
