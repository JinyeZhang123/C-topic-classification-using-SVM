        for(int j = 0; j < V; ++j) ans = min(dp[(1 << V) - 1][j] + adj[j][0], ans);
