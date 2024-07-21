template <typename Monoid>
struct SegmentTree{
private:
    using F = function<Monoid(Monoid, Monoid)>;
    int N{}