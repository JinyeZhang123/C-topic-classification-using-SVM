	forn(i, n-1) val[i+1] = val[i] + 32 - __builtin_clz((i+1) & (-i-1));
