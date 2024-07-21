template <typename T>
T mypow(T b, T n) {
    if (n == 0) return 1;
    if (n == 1) return n % MOD;
    if (n % 2 == 0) {
        return mypow(sq(b) % MOD, n / 2);
    }