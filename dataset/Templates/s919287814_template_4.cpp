template <typename Monoid>
struct SegmentTree {
private:
    using Func = function<Monoid(Monoid, Monoid)>;
    const Func UPDATE, OPERATION;
    const Monoid E;
    int SIZE = 1;
    vector<Monoid> node;

public:
    // SegmentTree(int n, const Func update, const Monoid &e)
    //     : UPDATE(update), E(e) {
    //     OPERATION = UPDATE;
    //     while (SIZE < n) SIZE *= 2;
    //     node.assign(SIZE * 2, E);
    // }