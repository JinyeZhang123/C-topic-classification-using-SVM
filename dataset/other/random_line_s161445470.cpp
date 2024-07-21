      (dp[i + 1][1] += (dp[i][0] + dp[i][1] * 3 % mod) % mod) %= mod;
