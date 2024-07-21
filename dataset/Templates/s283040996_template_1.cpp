template <typename Monoid>
struct SegmentTree{
private:
    int N;
    vector<Monoid> node;
    using F = function<Monoid(Monoid, Monoid)>;
    F f;
    Monoid e;

public:
    SegmentTree(){}