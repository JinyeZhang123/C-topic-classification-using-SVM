ll C(ll n,ll m) {if(n < m) return 0;ll res = 1;for(int i=1; i<=m; i++) {ll a = (n+i-m)%mod;ll b = i%mod;res = res*(a*powmod(b,mod-2)%mod)%mod;}return res;}
