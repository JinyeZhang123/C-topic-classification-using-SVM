template<class Monoid, class Action>
struct LazySegmentTree {
    using FuncMonoid = function< Monoid(Monoid, Monoid) >;
    using FuncAction = function< void(Monoid&, Action) >;
    using FuncLazy = function< void(Action&, Action) >;
    using FuncPropotional = function< Action(Action, int)>;
    FuncMonoid FM;
    FuncAction FA;
    FuncLazy FL;
    FuncPropotional FP;
    Monoid UNITY_MONOID;
    Action UNITY_LAZY;
    int size, height;
    vector<Monoid> dat;
    vector<Action> lazy;

    LazySegmentTree() { }