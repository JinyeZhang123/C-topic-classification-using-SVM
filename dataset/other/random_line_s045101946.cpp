				else dp[i][j]=min(dp[i][j+1]+B,dp[u+1][j+1]+(ll)A*(f[i][j]-f[u][j]));
