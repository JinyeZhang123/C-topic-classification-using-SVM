template<typename T>
struct fenwick_tree {
    int n;
    std::vector<T> data;
    fenwick_tree(int n) : n(n), data(n + 1, 0) {}