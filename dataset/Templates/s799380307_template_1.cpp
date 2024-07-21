template<typename T>
struct segment_tree {
    vector<T> dat;
    int n;
    segment_tree(int size) {
        n = 1;
        while (n < size) n <<= 1;
        dat.assign(n << 1, inf);
    }