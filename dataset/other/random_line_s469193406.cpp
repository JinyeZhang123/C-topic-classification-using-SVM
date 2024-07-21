                dp[j][1]=max(dp[j][1],max(dp[j-a[i]][1]+b[i],dp[j][0]+b[i]));
