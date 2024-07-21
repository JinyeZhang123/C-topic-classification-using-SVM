				else dp[i][j] = max(dp[i+1][j], dp[i+1][j-t[i].second] + t[i].first);
