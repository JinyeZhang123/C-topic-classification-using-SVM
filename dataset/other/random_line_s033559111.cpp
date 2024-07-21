			dp[j] = (dp[j - a[i]] + dp[j] * 2) % MOD;
