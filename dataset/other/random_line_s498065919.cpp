int getfa(int x){ return fa[x] == x ? x : fa[x] = getfa(fa[x]); }
