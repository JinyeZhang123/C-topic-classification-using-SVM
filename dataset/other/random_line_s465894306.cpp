                else if (j != w - 1 && (s & (1 << j))) (f[i][j] += f[i - 1][j + 1]) %= MOD;
