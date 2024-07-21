int nxt(int x,int fa){for(int y:e[x])if(e[y].size()>1 && y!=fa)return y;return 0;}
