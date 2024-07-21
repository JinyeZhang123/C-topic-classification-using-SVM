template <typename T>
class BIT {
    // 1-indexed
    private:
        size_t node_size_;
        T identity_;
        function<T(T, T)> operation_;
        function<T(T, T)> update_;
        vector<T> node_;
    public:
        BIT(size_t node_size, T identity, function<T(T, T)> operation, function<T(T, T)> update):
            node_size_(node_size), identity_(identity), operation_(operation), update_(update), node_(vector<T>(node_size + 1, identity)) {}