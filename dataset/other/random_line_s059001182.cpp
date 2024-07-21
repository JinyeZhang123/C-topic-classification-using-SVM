                dp[i+1][j][k+j*2] += dp[i][j][k] * j % MOD;
