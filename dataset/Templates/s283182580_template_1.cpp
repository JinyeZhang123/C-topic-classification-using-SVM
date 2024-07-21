template <class Monoid,class MonoidAct>
class LazySegmentTree {
private:
    using T1 = typename Monoid::T;
    using T2 = typename MonoidAct::T;
    static T1 op2(const T1& l,const T2& r) { return r != MonoidAct::id() ? r : l;}