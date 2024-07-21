        dp[i][j]=min(min(dp[i-1][j-1],dp[i][j-1]),dp[i-1][j])+1;
