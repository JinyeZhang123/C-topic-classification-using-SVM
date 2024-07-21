        dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i].first] + a[i].second);
