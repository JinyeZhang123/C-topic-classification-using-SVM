                    dp[i + 1][j + 1][k] = max(dp[i][j][k - tmp] + v[i], dp[i + 1][j + 1][k]);
