	for(int i = 2; i <= n; ++i) inv[i] = (LL)(mod - mod / i) * inv[mod % i] % mod;
