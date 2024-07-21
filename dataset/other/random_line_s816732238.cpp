void dfs(int x,int fa){ for (int i=0;i<e[x].size();i++) if (e[x][i]!=fa){ dfs(e[x][i],x); dp[x]^=dp[e[x][i]]+1; } }
