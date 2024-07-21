template <typename Monoid>
struct SegmentTree {
    using Func = function<Monoid(Monoid, Monoid)>;
    const Func F;
    const Monoid E;

    int SIZE = 1;
    vector<Monoid> node;

    SegmentTree(int n, const Func f, const Monoid &e) : F(f), E(e) {
        while (SIZE < n) SIZE *= 2;
        node.assign(SIZE * 2, E);
    }