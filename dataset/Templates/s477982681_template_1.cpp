template <typename T>
struct BinaryIndexedTree {
    size_t n;
    vector<T> tree;
    BinaryIndexedTree(size_t n, T e=0): n(n) {
        tree = vector<T>(n+1, e);
    }