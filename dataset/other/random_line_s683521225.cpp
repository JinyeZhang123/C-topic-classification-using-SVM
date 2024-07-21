		MIN(res, dfs(l, i, x, x + y) + dfs(i, r, x + y, y) + a[i] * (x + y));
