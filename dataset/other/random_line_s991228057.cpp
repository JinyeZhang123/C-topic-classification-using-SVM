	for(rint S = 1, T, i, j; S < E; S&1 ? f[0][S] = g[S] : 0, S++) for(g[S] = g[T=S-(S&-S)], i = ilogb(S&-S), j = 0; j < n; j++) if(T&1<<j) g[S] += w[i][j];
