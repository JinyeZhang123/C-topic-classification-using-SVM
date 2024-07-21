int gcd(int x, int y) { return (x % y)? gcd(y, x % y): y; }
