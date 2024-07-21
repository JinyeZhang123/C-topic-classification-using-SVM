template <typename T>
inline void wt(T x) {
    if (x > 9) wt(x / 10);
    putchar(x % 10 + 48);
}