            if(i < n) dp[i+1][j] = min(dp[i+1][j], dp[i][j] + black[i][j]);
