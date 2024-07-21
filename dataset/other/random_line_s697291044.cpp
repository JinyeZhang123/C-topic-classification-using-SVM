	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) dis[(i-1)*n+j]=min({i-1,j-1,n-i,n-j});
