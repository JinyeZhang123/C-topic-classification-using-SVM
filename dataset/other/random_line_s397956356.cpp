            for(int k=0;k<n;k++)if(k!=j&&i&(1<<k))dp[i][j]=min(dp[i][j],dp[i-(1<<j)][k]+dis[k][j]);
