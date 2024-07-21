int pa[MN]; int fp(int x) { return pa[x] ? pa[x] = fp(pa[x]) : x; }
