		FOR(k,0,n-1) if(!((i>>k)&1) && e[j][k]) chkmax(f[i|(1<<k)][k],f[i][j]+e[j][k]);
