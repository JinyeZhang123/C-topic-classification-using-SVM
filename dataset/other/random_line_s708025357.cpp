        M[i][j] = (M[i][j] + M[i-1][j] * F[j] % MOD * F[W-1-j]) % MOD;
