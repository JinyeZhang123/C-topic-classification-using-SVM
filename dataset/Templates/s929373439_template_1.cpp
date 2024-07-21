template<typename Monoid>
struct LazySegmentTree {
private:
    using Func = std::function<Monoid(Monoid, Monoid)>;
    Func F;
    Monoid UNITY;
    int n;
    std::vector<Monoid> node, lazy;

    // propagation
    void eval(int k, int l, int r) {
        if (lazy[k] != 0) {
            node[k] += lazy[k];
            if (r - l > 1) {
                lazy[2 * k + 1] += lazy[k] / 2;
                lazy[2 * k + 2] += lazy[k] / 2;
            }