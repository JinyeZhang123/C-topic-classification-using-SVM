			if(j+(1<<i)<n)	f[i][j]=min(f[i][j],f[i-1][j+(1<<i)]);
