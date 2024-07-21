template <typename Tp, typename Op>
class segment_tree{
    Tp *value;
    Op *operation;
    size_t *width;
    const size_t length;
    const Tp vid;
    const Op oid;
    Tp (*const merger)(const Tp &lhs, const Tp &rhs);
    Op (*const composition)(const Op &lhs, const Op &rhs);
    Tp (*const action)(const Op &f, const Tp &x, size_t width);

    void evaluate(size_t pos){
        if(operation[pos] == oid) return;
        if(pos < length){
            operation[pos<<1 | 0] = composition(operation[pos], operation[pos<<1 | 0]);
            operation[pos<<1 | 1] = composition(operation[pos], operation[pos<<1 | 1]);
        }