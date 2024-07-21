template <typename T>
class SegTree {
private:
    size_t node_size_;
    vector<T> node_;
    T identity_;                     // ex) INF, 0, etc...
    function<T(T, T)> operation_;    // ex) min, max, sum, etc...
    function<T(T, T)> update_;       // ex) add, change, etc..
public:
    SegTree(size_t node_size, T identity, function<T(T, T)> operation, function<T(T, T)> update):
        identity_(identity), operation_(operation), update_(update) {
        node_size_ = 1;
        while (node_size_ < node_size) node_size_ *= 2;
        node_ = vector<T>(2 * node_size_ - 1, identity);
    }