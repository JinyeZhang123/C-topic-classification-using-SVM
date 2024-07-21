	return nPr(n, r, mod) * inv_mod(factorial(r, mod), mod) % mod;
