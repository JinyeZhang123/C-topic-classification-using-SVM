template <class T>
inline T LCM(T a, T b) {
    return (a * b) / GCD(a, b);
}