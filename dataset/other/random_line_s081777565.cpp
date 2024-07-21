				add(dp[j ^ (1 << i)], dp[j] * cnk((1 << n) - 1 - j, (1 << i)) % MOD);
