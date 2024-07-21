                (dp[i + 1][j][l] += 1LL * dp[i][j][l] * 2 * j % mod) %= mod;
