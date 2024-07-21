template <typename T>
T modDiv(T a, T b, T m) {
    return ((a % m) * modInv(b, m)) % m;
}