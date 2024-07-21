                if (j+1 < n && k >= j) dp[i][j][k] = (dp[i][j][k] + (j+1)*(j+1)*dp[i-1][j+1][k-j]) % MOD;
