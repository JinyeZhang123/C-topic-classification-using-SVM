    for (int v : G[u]) if (v != p) ret ^= (dfs(v, u) + 1);
