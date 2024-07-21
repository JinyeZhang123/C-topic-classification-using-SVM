	for(i=1;i<=n;i++) f[i]=sc[i]-p[i],g[i]=sc[n]-sc[i-1]-(C-p[i]),ans=max(ans,max(f[i],g[i]));
