template <typename Monoid>
struct LazySegmentTree{
private:
    int N;
    vector<Monoid> node, lazy;

public:
    LazySegmentTree(int sz = 0){
        init(sz);
    }