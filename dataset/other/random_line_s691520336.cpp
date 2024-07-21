int find(int x) { return (fa[x]==x)?x:fa[x]=find(fa[x]); }
