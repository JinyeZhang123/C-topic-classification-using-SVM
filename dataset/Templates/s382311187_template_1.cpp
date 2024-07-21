template<typename Monoid>
struct LazySegmentTree {
private:
    using Func = std::function<Monoid(Monoid, Monoid)>;
    Func F = [](Monoid a, Monoid b) { return min(a, b); }