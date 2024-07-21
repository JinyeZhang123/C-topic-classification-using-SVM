void dfs(int x,int dis){ans+=dis;for(auto y:G[x])dfs(y,dis+1);}
