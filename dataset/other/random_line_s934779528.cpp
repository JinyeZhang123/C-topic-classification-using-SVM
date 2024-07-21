LL C(LL x,LL y){return x<y||y<0?0:fac[x]*ifac[y]%mod*ifac[x-y]%mod;}
