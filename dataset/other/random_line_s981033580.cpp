	for(int i=2;i<=lim;++i) inv[i]=1ll*(mod-mod/i)*inv[mod%i]%mod;
