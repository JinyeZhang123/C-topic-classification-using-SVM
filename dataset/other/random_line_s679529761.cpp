            f[i] = max(sum[i] - sum[j] + 1ll * max(sum[m >> 1], 0ll) * ((k - i + j) / (m >> 1)), f[i]);
