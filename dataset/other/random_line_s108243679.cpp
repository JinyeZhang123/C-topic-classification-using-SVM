ull gcd(ull a, ull b) { return b ? gcd(b, a % b) : a; }
