	For(i,1,M){ans-=to[i]*i; to[i]*=i; inv[i]=i==1?1:mod-mod/i*inv[mod%i]%mod;}
