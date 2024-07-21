        	if(a[i]>j) dp[i][j]=min(dp[i][j],dp[i-1][j]+A),dp[i][a[i]]=min(dp[i][a[i]],dp[i-1][j]);
