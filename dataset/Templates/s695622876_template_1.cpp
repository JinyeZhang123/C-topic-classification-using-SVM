template <typename T>
vector<T> factorize(T n) {
    vector<T> factors;
    for (T p = 2; p *p <= n; ++p) {
        while (n % p == 0) {
            factors.push_back(p);
            n /= p;
        }