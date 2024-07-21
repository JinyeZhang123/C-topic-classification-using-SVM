template <class T>
struct BIT2 {
    BIT<T> a, b;
    BIT2(int size) : a(size), b(size) {}