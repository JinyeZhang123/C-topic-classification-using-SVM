		if (j&(1<<k)) f[j]=(f[j]+(ll)f[j-(1<<k)]*C(L-j+(1<<k)-a[i],(1<<k)-1)%p*po[1<<k])%p;
