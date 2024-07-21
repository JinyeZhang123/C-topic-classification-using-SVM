          if(j > 0) dp[i+1][j-1][tmpk] += j * j % MOD * dp[i][j][k] % MOD;
