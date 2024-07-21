		dp[i] = (dp[i + 1] - dp[i + 2] + (N - 1ll) * (N - 1) + dp[i + 3] + dp[i + 1] + i + 1 + MOD) % MOD;
