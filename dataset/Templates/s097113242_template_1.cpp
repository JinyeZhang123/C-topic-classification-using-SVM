template <typename Monoid>
struct SegmentTree {
    using F = function<Monoid(Monoid, Monoid)>;

    int size = 1;
    vector<Monoid> node;

    const F f;
    const Monoid e;

    SegmentTree(int n, const F f, const Monoid &e) : f(f), e(e) {
        while (size < n) size <<= 1;
        node.assign(2 * size, e);

        for (int i = size - 2; i >= 0; i--) {
            node[i] = f(node[2 * i + 1], node[2 * i + 2]);
        }