			f[i][k] = (f[i][k] + (LL)f[j - 1][k + 1] * f[i - j][k] % MOD * C[i][j - 1]) % MOD;
