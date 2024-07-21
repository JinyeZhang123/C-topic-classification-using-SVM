template <class S> struct segtree {
    int num, depth, basesize, treesize;
    vector<S> tree;
    using f_type = S(S, S);
    S (*op)(S a, S b);
    S e;
    // 元の配列, モノイド, 初期値
    segtree(vector<S>& base, f_type tmp2, S tmp3) : op(tmp2), e(tmp3) {
        basesize = (int)base.size(), num = 1, depth = 1;
        for (; num < basesize; num <<= 1, depth++) {}