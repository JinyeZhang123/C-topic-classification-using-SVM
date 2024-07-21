		dp[g[a].size()+1][min(j+1,2)]=(dp[g[a].size()+1][min(j+1,2)]+dp[g[a].size()][j]*(mod+1-pw(pw(2,n-sz[a]),mod-2)))%mod;
