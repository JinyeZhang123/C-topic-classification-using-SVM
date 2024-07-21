template <class T, class S, class R>
long long pow(T n_0, S k_0, R mod_0) {
    long long n = n_0;
    long long k = k_0;
    long long mod = mod_0;
    long long now = 1;
    while (true) {
        if (k & 1) { now = now * n % mod; }