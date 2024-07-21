mint operator^(mint a, long long n) { mint r = 1;
    while (n) { if (n & 1) r *= a; a *= a; n >>= 1; }