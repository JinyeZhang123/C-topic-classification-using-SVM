	if(y>x||x<0) return 0; return 1LL*sum[x]*inv[y]%MOD*inv[x-y]%MOD;
