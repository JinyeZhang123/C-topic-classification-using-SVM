		f[u] = sum[u] - sum[son[u]] + min(f[son[u]], (2 * sum[son[u]] - sum[u]) / 2);
