    for (int i = 2; i < N; i ++) ri[i] = 1ll * (mod - mod / i) * ri[mod%i] % mod;
