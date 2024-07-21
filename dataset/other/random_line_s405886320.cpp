				dp[x][j + k] = (dp[x][j + k] + t[j] * dp[y][k] % MOD) % MOD;
