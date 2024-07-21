        pb[i+1] = (pb[i] + combi(i-1,b-1) * fpow(fpow(2, i),mod-2))%mod;
