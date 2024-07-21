                dp[i][j] = (dp[i - 1][nn * 2 - 2 - j] * nums[j] % MOD + dp[i][j - 1]) % MOD;
