template<typename T>
struct fenwick_tree_range {
    fenwick_tree<T> ft;
    fenwick_tree_range(int n) : ft(fenwick_tree<T>(n)) {}