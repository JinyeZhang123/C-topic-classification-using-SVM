template <typename Monoid, typename OperatorMonoid = Monoid>
struct segment_tree_lazy {
    using F = function<Monoid(Monoid, Monoid)>;
    using G = function<Monoid(Monoid, OperatorMonoid)>;
    using H = function<OperatorMonoid(OperatorMonoid, OperatorMonoid)>;
    int sz, height;
    vector<Monoid> data;
    vector<OperatorMonoid> lazy;
    const F f;
    const G g;
    const H h;
    const Monoid e;
    const OperatorMonoid id;
    segment_tree_lazy(int _sz, const F _f, const G _g, const H _h, const Monoid& _e,
                      const OperatorMonoid _id)
        : f(_f), g(_g), h(_h), e(_e), id(_id) {
        sz = 1, height = 0;
        while (sz < _sz) sz <<= 1, height++;
        data.assign(2 * sz, e);
        lazy.assign(2 * sz, id);
    }