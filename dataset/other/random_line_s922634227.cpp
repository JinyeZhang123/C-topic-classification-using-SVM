  return fac[a]*modpow(fac[b],mod-2)%mod*modpow(fac[a-b],mod-2)%mod;
