				dp[i][j] += dp[i - 3][j - 1] * (i - 1) % mod * (i - 2) % mod;
