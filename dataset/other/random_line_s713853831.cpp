			if (j + num[i] <= 20)dp[i][j] += dp[i - 1][j + num[i]];
