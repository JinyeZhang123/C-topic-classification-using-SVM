    ll operator ()(int n, int k) const { return k < 0 || k > n ? 0 : fact[n] * ifact[n - k] % MOD * ifact[k] % MOD; }
