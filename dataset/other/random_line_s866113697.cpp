                        dp[i+1][j] = min(dp[i][j],dp[i][j-t[i]] + 1);
