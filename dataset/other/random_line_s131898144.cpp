ll npr(ll n,ll r) {ll res=1; res=fact[n]; res=(res*(power(fact[n-r],mod-2)))%mod; return res;}
