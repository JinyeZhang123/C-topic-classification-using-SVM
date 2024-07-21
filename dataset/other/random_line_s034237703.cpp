			dp[i][j]=max(dp[i][j],dp[i/2][j-w[i]]+v[i]);
