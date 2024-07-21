template <class T>
struct Min {
    T operator ()(const T &lhs, const T &rhs) {
        return min(lhs, rhs);
    }