template <class T, class S, class R> long long pow(T n_0, S k_0, R mod_0) {
    long long n = n_0, k = k_0, mod = mod_0, now = 1;
    while (true) {
        if (k & 1) { now = now * n % mod; }