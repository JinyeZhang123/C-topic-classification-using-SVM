			if (i>=v[son])	g[T][i]=min(g[T][i],g[T^1][i-v[son]]+f[son]);
