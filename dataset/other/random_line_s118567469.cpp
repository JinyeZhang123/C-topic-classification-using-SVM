                dp[i+1][j] = max(dp[i+1][j], dp[i][j-dish[i].first]+dish[i].second);
