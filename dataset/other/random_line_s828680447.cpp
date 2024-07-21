		rep(j, 0, n - 1) if (!(i & (1 << j))) f[m][i] = 1LL * f[m][i] * C(tot, 1 << j) % mod, tot -= (1 << j);
