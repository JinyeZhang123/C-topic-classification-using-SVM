int gcd(int a,int b){int c=max(a,b);int d=min(a,b);return c==0||d==0?c:gcd(c%d,d);}
