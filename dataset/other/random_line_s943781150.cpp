                dp[x][y] = min(dp[x][y],dp[z][y-1]+max(0,h[x]-h[z]));
