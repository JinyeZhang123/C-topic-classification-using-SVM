    for (int i = 2; i < FN; i++) __rev[i] = MOD - __rev[MOD % i] * (MOD / i) % MOD;
