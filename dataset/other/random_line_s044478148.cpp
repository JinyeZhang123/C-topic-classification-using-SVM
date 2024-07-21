	int root(int x) { if( oya[x] == x ) return x; return (oya[x] = root(oya[x]) ); }
