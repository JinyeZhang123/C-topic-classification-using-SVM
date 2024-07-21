	for (int i=0;i<len;i++) (ans+=(css[i]?-1:1)*f[m][i]*fac[(1<<n)-ned[i]-1]%mod+mod)%=mod;
