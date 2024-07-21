    return p ? binary_pow(n * n % MOD, p >> 1) * (p & 1 ? n : 1) % MOD : 1;
