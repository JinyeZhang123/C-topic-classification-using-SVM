    b[i] = (b[i-1] + (COM(i-1,i-B) * modpow(inv[2],i, MOD))%MOD)%MOD ;
