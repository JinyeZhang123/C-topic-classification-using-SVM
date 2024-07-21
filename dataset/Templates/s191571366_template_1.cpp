template <typename T>
T compute_totient(T n) {
    T x = 1;
    for (T p = 2; p * p < n; ++p) {
        if (n % p == 0) {
            x *= p - 1;
            n /= p;
            while (n % p == 0) {
                x *= p;
                n /= p;
            }