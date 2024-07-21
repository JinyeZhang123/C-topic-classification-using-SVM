template<class Monoid> struct SegmentTree {
private:
    using Func = std::function<Monoid(Monoid, Monoid)>;
    Func F;
    Monoid UNITY;
    int n;
    std::vector<Monoid> node;
public:
    SegmentTree() {}