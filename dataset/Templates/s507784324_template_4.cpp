template<typename Monoid, typename Action>
struct SegmentTree {
public:
    using FM = function<Monoid(Monoid, Monoid)>; // monoid
    using FL = function<Action(Action, Action)>; // lazy
    using FA = function<Monoid(Monoid, Action)>; // action
    using FW = function<Action(Action, ll)>; // action

    // O(N)
    SegmentTree(int n, const FM fm, const FL fl, const FA fa, const FW fw, Monoid M1, Action A1)
            : fm(fm), fl(fl), fa(fa), fw(fw), M1(M1), A1(A1) {
        sz = 1;
        while (sz < n) sz *= 2;
        seg.assign(2 * sz - 1, M1);
        lazy.assign(2 * sz - 1, A1);
    }