	for(i=1;i<n;i++)f[i]=(ll)cc(i-1,n-i-1)*fac[i]%mo*fac[n-1-i]%mo,add(ans,(ll)(f[i]-f[i-1]+mo)*i%mo);
