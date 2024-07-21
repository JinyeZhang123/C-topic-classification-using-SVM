		dp[i][1] = max(arr[i][0] + dp[i-1][0], arr[i][2] + dp[i-1][2]);
