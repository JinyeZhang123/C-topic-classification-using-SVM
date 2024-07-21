  ll size(int x) { return par[x]==x ? s[x] : s[x] = size(root(x)); }
