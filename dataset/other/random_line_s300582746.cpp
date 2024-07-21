	return e ? ((e & 1 ? b : 1)*quickpow((b*b) % MOD, e >> 1)) % MOD : 1;
