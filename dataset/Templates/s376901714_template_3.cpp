template <typename T>
inline void writeln(T x, char c) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }