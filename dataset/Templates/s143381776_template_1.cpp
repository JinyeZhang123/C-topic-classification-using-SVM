template <class T>
class FenwickTree {
    size_t n;
    vector<T> tree0, tree1;
    void update(vector<T> &tree, size_t i, T x) {
        while (i <= n) {
            tree[i] += x;
            i += i & -i;
        }