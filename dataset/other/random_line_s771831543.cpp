		dp[i] = ((n - i + 1) * n + (i - 2) * (n - 1) + sum - dp[i - 2] + MOD) % MOD;
