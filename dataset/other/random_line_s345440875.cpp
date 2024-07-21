int gf(int x,int*f){return x==f[x]?x:f[x]=gf(f[x],f);}
