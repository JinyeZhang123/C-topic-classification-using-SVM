    for (int i = 1; i <= n; i++) for (int j = i + 1; j <= n; j++) sum = (sum + dp[i][j]) % MOD;
