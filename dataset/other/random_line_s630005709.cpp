        dp[i][j]=max(dp[i][j],v[i]+dp[i/2][j-w[i]]);
