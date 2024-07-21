	dp[j][j+i]=min(dp[j][j+i],dp[j][j+k]+dp[j+k+1][j+i]+nlist[j]*nlist[j+k+1]*nlist[j+i+1]);
