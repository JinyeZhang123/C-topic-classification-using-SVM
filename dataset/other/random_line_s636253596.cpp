int fastMin(int x, int y) { return (((y-x)>>(32-1))&(x^y))^x; }
