	for(int i=1;i<=n;++i) scanf("%d",&a[i]),a[i]^=a[i-1],num[i]=num[i-1]+(a[i]==0);
