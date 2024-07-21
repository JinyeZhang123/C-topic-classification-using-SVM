		dp[i] = (sum + 1LL * (n - 1) * (n - 1) % mod + dp[i + 1] + i + 1) % mod;
