	iv[1]=fac[0]=inv[0]=1;for(rint i=2;i<=n;i++)iv[i]=(ll)(mod-mod/i)*iv[mod%i]%mod;
