    for (int i = 2; i < 2e5 + 1; i++) inv[i] = (mod - (mod / i) * inv[mod % i] % mod) % mod;
