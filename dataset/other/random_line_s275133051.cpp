        return (((fact[n] * pow(fact[n - k], MOD - 2)) % MOD) * pow(fact[k], MOD - 2)) % MOD;
