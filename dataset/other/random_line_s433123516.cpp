  return a < b || b < 0 ? 0 : fac[a] * ifac[b] % p * ifac[a - b] % p;
