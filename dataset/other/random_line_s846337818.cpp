			dp[i][j] = (dp[i][j]+dp[i-1][j]*2) % MOD;
