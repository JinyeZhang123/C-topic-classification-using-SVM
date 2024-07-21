    rep(u,n)if(!(S&1<<u))res=min(res,rec(S|1<<u,u)+d[v][u]);
