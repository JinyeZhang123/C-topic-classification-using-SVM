template <typename Monoid>
struct LazySegment {
    using F = function<Monoid(Monoid, Monoid)>;

    int size = 1;
    vector<Monoid> node, lazy;
    vector<bool> lazyFlag;

    const F f;
    const Monoid &M1;

    LazySegment(int n, const F f, const Monoid &M1) : f(f), M1(M1) {
        while (size < n) size <<= 1;
        node.assign(2 * size - 1, M1);
        lazy.assign(2 * size - 1, M1);
        lazyFlag.assign(2 * size - 1, false);

        for (int i = size - 2; i >= 0; i--) {
            node[i] = f(node[2 * i + 1], node[2 * i + 2]);
        }