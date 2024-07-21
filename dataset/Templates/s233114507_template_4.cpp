template<typename T>
T gcd(T a, T b) {
    if(a > b) swap(a, b);
    if(a == 0) return b;
    else return gcd(b%a, a);
}