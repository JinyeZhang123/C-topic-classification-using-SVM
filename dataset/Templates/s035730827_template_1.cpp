template <typename T>
class LazySegmentTree {
private:
    std::vector<T> vec, lazy;
    int sz;

public:
    explicit LazySegmentTree(int n) noexcept {
        sz = 1;
        while (sz < n) sz <<= 1;
        vec.assign(sz * 2 - 1, 0);
        lazy.assign(sz * 2 - 1, 0);
    }