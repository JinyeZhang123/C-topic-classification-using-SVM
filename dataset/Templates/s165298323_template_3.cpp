template <typename Num>
struct RangeMinSegmentTree {
    int n;
    vector<Num> data;
    vector<Num> delayed;

    explicit RangeMinSegmentTree(int size)
        : n(bit_ceil(size)), data(2*n-1), delayed(2*n-1) {}