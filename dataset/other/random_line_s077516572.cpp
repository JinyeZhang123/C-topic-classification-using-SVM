        ans = (ans + ((ll)powMod(26ll, pref) * powMod(25ll, k - pref) % MOD * Lucas(n + k - 1 - pref, n - 1) % MOD)) % MOD;
