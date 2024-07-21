       if(w>=weight[i]) dp[i+1][w]=max(dp[i][w-weight[i]]+value[i],dp[i][w]);
