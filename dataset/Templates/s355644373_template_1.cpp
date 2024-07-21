template<typename T> T LCM(T a, T b) {
    if (a > b) swap(a, b);
    T r = a%b, c = a, d = b;
    while (r != 0) {a = b; b = r; r = a%b; }