        return fact[n] * inv(fact[k], mod - 2) % mod * inv(fact[n - k], mod - 2) % mod;
