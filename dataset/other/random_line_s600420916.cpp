			if (!~dp[i][j - 1])dp[i][j] = dp[i - 1][j - 1] + d[i - 1] * c[j - 1];
