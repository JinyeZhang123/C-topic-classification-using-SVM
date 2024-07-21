	for(R i = 1; i <= k; i ++) C[i] = C[i - 1] * (k - i + 1) % p * inv[i] % p;
