 				dp[i][j] = min(dp[i][j],dp[t][j-1]+max(0,h[i]-h[t]));
