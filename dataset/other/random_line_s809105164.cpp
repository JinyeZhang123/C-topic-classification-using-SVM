	if(x%5)f[x]=mn(f[x],dfs(x-x%5+5)+(5-x%5)*d);
