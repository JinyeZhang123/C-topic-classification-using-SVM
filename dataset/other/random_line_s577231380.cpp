	rep(i, 1, n) fac[i] = fac[i - 1]*i%mod, inv[i] = Ksm(fac[i], mod - 2);
