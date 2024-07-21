                        dp[i][s][j] += dp[i - 1][s - (a[i] - q)][j], dp[i][s][j] %= M;
