	if(a[i]>j)f[i&1][a[i]]=min(f[i&1][a[i]],f[i&1^1][j]),f[i&1][j]=min(f[i&1][j],f[i&1^1][j]+o);
