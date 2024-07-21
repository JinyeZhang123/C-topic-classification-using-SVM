template <typename T>
T compute_lcm(T a, T b) {
    T x = a;
    T y = b;
    while (x != y) {
        if (x > y) {
            y += (x - y + b - 1) / b * b;
        }