                    dp[i][j + 1][k + 1] = max(dp[i][j + 1][k + 1], dp[i][j][k] + X[i] + Y[j + 1]);
