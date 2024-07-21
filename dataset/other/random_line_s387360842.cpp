                    dp[i] = min(dp[i], dp[i ^ (1 << j)] + mi);
