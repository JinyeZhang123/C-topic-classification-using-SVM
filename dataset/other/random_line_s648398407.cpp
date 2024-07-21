        ans=(ans+m%mod*i%mod*comb(i-1,n-1)%mod*(rui(a,n)%mod*rui(b,i-n)%mod+rui(a,i-n)%mod*rui(b,n)%mod)%mod*invmod(rui(a+b,i),mod))%mod;
