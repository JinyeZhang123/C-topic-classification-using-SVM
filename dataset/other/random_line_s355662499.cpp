        return fact[n] * binpow(fact[k], mod - 2) % mod * binpow(fact[n - k], mod - 2) % mod;
