				dp[i][j] = (dp[i][j] + (prefix[i - 1][i] - prefix[i - 1][j - 1] + MOD) % MOD) % MOD;
