template<typename T> T ceil_int(T A, T B) {
    return (A + (B - T(1))) / B;
}