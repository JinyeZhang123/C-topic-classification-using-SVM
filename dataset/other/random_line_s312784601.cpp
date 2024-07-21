    for(int i=head[x];i;i=e[i].nxt) if(!g[e[i].to]) dfs(e[i].to);
