template<typename T>
class segtree {
    int size;
    vector<T> valtree;
    vector<int> ismixedtree;

public:
    segtree(int n) {
        size = 8;
        while (size < n) size <<= 1;
        valtree.resize(size*2);
        ismixedtree.resize(size*2);
    }