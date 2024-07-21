template<typename T>
T lcm(T x, T y) {
    T g = gcd(x, y);
    return x / g * y;
}