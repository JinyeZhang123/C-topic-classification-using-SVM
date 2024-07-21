		ret += comb(N - 1 + i, i)*modpow(AW, N) % mod*modpow(BW, i) % mod*(N + i) % mod;
