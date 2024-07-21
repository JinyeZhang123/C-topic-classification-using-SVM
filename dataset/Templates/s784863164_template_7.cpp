template<class T>
class fenwick_tree {
private:
    const size_t size;
    const std::function<T(T, T)> f;
    const T unit;
    std::vector<T> a;
public:
    fenwick_tree(size_t size, std::function<T(T, T)> f, T unit) : size(size), f(f), unit(unit), a(size, unit) { }