    for(int i=4;i<=n;i+=2)dp[i][1]=max(dp[i-3][0],dp[i-2][1])+a[i];
