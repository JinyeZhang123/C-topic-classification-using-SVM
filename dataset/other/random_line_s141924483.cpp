    ans[v] = fact[n-1] * invfact[n - subtreeSize[v]] % mod * dp2[v] % mod;
