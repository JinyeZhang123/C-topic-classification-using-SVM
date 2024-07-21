			dp[now][i][y] = (dp[pre][i][y] * inv + dp[pre][i][x] * inv) % mod;
