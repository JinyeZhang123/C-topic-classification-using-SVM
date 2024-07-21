				(dp[i + 1][j] += dp1[i - 1][j - 1] * (N / j - X) % MOD) %= MOD; // k overX j (k < j)
