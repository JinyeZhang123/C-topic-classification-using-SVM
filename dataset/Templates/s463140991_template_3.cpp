template<class T>
T ex_gcd(T a, T b, T &x, T &y){
    if (!b){ x = 1, y = 0; return a; }