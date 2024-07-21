template <class T>
class segment_tree {
private:
    const size_t n;
    const std::function<T(const T&, const T&)> f;
    const T UNIT;
    std::vector<T> a;
public:
    segment_tree(size_t size, std::function<T(const T&, const T&)> f, T UNIT) : n(clp(size)), UNIT(UNIT), f(f) {
        a.resize(2 * n - 1, UNIT);
    }