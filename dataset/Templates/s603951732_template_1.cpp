template<typename T>
T gcd(T a, T b) {
    return b != 0 ? gcd(b, a % b) : a;
}