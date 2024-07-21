template<typename T>
T euler_phi(T n) {
    T ret = n;
    for (T i = 2; i * i <= n; ++i) {
        if (n % i != 0) continue;
        ret -= ret / i;
        while (n % i == 0) n /= i;
    }