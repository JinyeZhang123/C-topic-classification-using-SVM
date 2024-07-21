int getf(int x){return x==f[x]?x:f[x]=getf(f[x]);}
