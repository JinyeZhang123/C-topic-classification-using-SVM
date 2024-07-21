                    dp[i][j][k] = std::max(dp[i-1][j][2] + RCV[i-1][j-1], dp[i][j][k]);
