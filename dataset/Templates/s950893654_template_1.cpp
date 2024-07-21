template<typename T>
class FenwickTree {
    int n;
    vector<T> data;
public:
    FenwickTree(int n):n(n), data(n, 0){}