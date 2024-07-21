int C(int a, int b) {return 1ll * fac[a] * inv[b] % mod * inv[a - b] % mod;}
