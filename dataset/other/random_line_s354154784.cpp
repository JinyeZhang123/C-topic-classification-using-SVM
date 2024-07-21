		for(int i=1;i<=n;i++) if(i!=x&&i!=y)dp[i][x]=dp[i][y]=1ll*inv2*(dp[i][x]+dp[i][y])%mod,dp[x][i]=dp[y][i]=1ll*inv2*(dp[x][i]+dp[y][i])%mod;
