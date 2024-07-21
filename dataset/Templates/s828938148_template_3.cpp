template <typename T> T gcd(T a, T b) {
    if(a > b) gcd(b, a);
    T r;
    while(r = a % b) {
        a = b;
        b = r;
    }