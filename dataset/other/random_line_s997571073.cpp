		if (!(n&1)) {rep(i,2,n) if (i != 3) {int x = n^i^1; if (x != 3 && x < n) {printf("%d %d\n%d %d\n",n,i,n<<1,x); break;}}}
