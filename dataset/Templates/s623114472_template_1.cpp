template <typename T = int>
T gcd(T a, T b) {
    if (a < b)
        return gcd(b, a);
    if (b == 0)
        return a;
    T r;
    while ((r = a % b)) {
        a = b;
        b = r;
    }