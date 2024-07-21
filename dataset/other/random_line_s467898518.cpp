ll C(int n, int m) { return n < m ? 0 : fac[n] * facinv[m] % mod * facinv[n - m] % mod;}
