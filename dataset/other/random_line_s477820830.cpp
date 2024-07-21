			f[s][i] = (f[s - 1][i - 1] + f[s - 3][i] + f[s - 2][i + 1]) * inv[s] % mod;
