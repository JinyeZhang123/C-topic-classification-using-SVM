int fac[MAXN+5], efac[MAXN+5], f[MAXN+5], s[MAXN+5], n, Ans; inline int C(int n, int k){return n<0||k<0||n<k?0:1ll*fac[n]*efac[k]%MOD*efac[n-k]%MOD;}
