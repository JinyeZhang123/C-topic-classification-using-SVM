template<typename T = int, class F = std::plus<T>, class F_INV = std::minus<T>, T E = 0>
struct BinaryIndexedTree {
    const F op = F(); const F_INV op_inv = F_INV();
    int n; vector<T> dat;
    void build(const vector<T>& v) {
        n = v.size(); dat.assign(n, E); for (int i = 0; i < n; ++i) add(i, v[i]);
    }