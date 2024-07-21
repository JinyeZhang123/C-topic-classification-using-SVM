	return 1ll * fac[x] * inv[y] % P * inv[x - y] % P;
