template <typename MonoidType, typename OperatorType, class SegFunc>
struct DualSegmentTree {
    int n;
    vector<MonoidType> bottom;
    vector<OperatorType> lazy;
    OperatorType E;

    inline void build(const vector<MonoidType> &v) {
        int m = v.size();
        n = 1; while(n < m) n *= 2;
        bottom = v; bottom.resize(n);
        lazy.resize(n - 1, E);
    }