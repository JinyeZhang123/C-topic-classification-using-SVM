        ans = (ans + qpow(26,i)%mod*f[n+K-i-1]%mod*inv[n-1]%mod*inv[K-i]%mod*qpow(25,K-i)%mod)%mod;
