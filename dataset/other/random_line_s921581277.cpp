int ff(int x) { return fa[x] ? fa[x] = ff(fa[x]) : x; }
