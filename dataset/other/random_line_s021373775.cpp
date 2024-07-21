long long gcd(long long x, long long y) { return y ? gcd(y, x % y) : x; }
