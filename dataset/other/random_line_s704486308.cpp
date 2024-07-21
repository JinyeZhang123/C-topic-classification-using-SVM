	for (int i=1;i<=n;++i) pre[i]=min(pre[i-1],iabs(pre[i-1]-d[i]));
