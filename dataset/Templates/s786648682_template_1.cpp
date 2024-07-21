template <typename T>
struct BinaryIndexedTree {
    vector<T> data;

    BinaryIndexedTree() = default;

    explicit BinaryIndexedTree(size_t sz) : data(sz + 1, 0) {}