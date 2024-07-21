	if(c>0) dp[a][b][c]+=(double)c/(a+b+c)*dfs(a,b+1,c-1);
