        for (int i : g[x]) if (!d[i]) d[i] = d[x] + 1, z[i] = x, q.push(i);
