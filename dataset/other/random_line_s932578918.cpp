int ask(int x){return x==fa[x]?x:fa[x]=ask(fa[x]);}
