                    dp[i][j][k] |= dp[i][j - 1][abs(k - d)];
