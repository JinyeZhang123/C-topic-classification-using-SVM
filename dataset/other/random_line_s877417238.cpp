	for (int i = 1; i < n; i++) ans = (ans - 1LL * F[i] * F[n - 1 - i] % MOD * C(i - 1, n - 1 - i) % MOD + MOD) % MOD;
