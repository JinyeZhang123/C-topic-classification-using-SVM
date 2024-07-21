                    dp[i + 1][j + 1][k + 2 * j] = (dp[i + 1][j + 1][k + 2 * j] + dp[i][j][k]) % mod;
