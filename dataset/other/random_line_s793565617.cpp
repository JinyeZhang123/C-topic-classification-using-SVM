	for(int i=1;i<=n;i++)for(int j=0;j<=n;j++)if(a[i]>j)cmn(dp[i][j],dp[i-1][j]+A),cmn(dp[i][a[i]],dp[i-1][j]);else cmn(dp[i][j],dp[i-1][j]+B);
