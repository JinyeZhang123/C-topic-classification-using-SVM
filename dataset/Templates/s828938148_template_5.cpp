template <typename T> T EP(T n) {
    T r = floor(sqrt(n));
    T m = n;
    set<T> p;
    if(((n % 2) == 0) && 2 <= r) {
        p.insert(2);
        while(n % 2 == 0) {
            n /= 2;
        }