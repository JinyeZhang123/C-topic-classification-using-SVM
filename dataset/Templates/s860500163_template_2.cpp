template<typename T>
T gcd(T x, T y){
    T r;
    while(y){
        r = x % y;
        x = y;
        y = r;
    }