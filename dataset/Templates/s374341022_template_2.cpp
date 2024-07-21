template <class T>
struct Updater {
    T operator ()(const T &lhs, const T &rhs) {
        return rhs;
    }