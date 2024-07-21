	for(int i=1;i<=cc;i++)for(int j=0;j<=n;j++)if(f[i-1][j])f[i][j+num[i][0]]=f[i][j+num[i][1]]=1;
