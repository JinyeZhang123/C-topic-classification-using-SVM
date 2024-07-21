    return min({dfs(n+1,a,b,c),dfs(n+1,a+l[n],b,c)+(a?10:0),dfs(n+1,a,b+l[n],c)+(b?10:0),dfs(n+1,a,b,c+l[n])+(c?10:0)});
