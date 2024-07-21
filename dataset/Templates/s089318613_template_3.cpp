template<typename T>
struct BinaryIndexedTree {
private:
    int n;
    vector<T> bit;
    
public:
    BinaryIndexedTree(int _n) : n(_n + 1), bit(n + 1, 0){}