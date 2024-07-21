        for (int j=1;j<=min(h[i-1],h[i]);j++) dp[i][j]=dp[i-1][j]*tmp%mod;
