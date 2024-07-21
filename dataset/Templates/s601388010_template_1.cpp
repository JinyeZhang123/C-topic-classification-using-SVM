template <class T>
class FenwickTree {
public:
    FenwickTree(int _n = 0) : n(_n), bit(n + 1, 0) {}