			if (j + a[i] <= s) dp[i+1][j + a[i]] = add(dp[i+1][j + a[i]], dp[i][j]);
