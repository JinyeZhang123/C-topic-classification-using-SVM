	rep( i, 1, sz[x] ) f[x][0] = ( f[x][0] - f[x][i] * g[i] % P + P ) % P ; 
