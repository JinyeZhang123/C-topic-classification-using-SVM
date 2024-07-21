int gf(int x){return x==f[x]?x:f[x]=gf(f[x]);}
