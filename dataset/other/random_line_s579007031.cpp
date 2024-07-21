	for(int i=1;i<=(n>>1);++i)for(int j=1;j<=n;++j)e[j][(j+i-1)%n+1]=p2((j-1)^((j+i-1)%n));
