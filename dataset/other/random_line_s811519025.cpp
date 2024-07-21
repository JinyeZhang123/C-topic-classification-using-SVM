	for (int i = 1; i < N; i++) fac[i] = fac[i - 1] * i % MOD, inv[i] = POW(fac[i], MOD - 2);
