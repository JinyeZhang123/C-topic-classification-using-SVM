void pre(int n){inv[0]=fac[0]=1;for (int i=1;i<=n;i++) fac[i]=fac[i-1]*i%mod,inv[i]=fp(fac[i],mod-2);}
