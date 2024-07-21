template <typename Operator>
struct LazySegmentTree {
    Operator OP;
    using NodeType = decltype(OP.NodeE);
    using FuncType = decltype(OP.FuncE);
    int length, height;
    vector<NodeType> node;
    vector<FuncType> lazy;
    vector<int> width;
    LazySegmentTree(int n) {
        length = 1;
        height = 0;
        while (length < n) {
            length <<= 1;
            ++height;
        }