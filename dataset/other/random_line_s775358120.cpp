			for(int u=1;u<i;u++) (f[i][j]+=1ll*C[i-2][u-1]*f[i-u][j]%mod*s[u][j+1]%mod)%=mod; 
