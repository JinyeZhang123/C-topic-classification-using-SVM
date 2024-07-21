template<typename T>
class SegTree{
    size_t n;
    vector<T> data;
public:
    SegTree(size_t _n): n(_n), data(2 * n, 0){}