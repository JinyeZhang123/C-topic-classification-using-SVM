      if(j-w[i-1]>=0)dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
