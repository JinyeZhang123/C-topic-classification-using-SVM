inline ll nCr(int n, int k) { return fact[n]*ifact[k]%MOD*ifact[n-k]%MOD; }
