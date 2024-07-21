	for (i = 1 ; i < MAXS ; ++ i) sz[i] = sz[i - (i & -i)] + 1 ; 
