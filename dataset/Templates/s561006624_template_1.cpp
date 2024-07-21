template <typename T>
struct min_ {
    T operator()(T x, T y) {
        return min(x, y);
    }