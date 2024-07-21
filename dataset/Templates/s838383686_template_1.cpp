template <typename T>
T power(T x, T p, T mod) {
    T y = 1;
    T tmp = x;
    while (p > 0) {
        if (p % 2 == 1) {
            y = y * tmp % mod;
        }