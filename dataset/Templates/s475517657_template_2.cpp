template<class Monoid>
class SegmentTree {
private:
    using T = typename Monoid::T;
    Monoid op;
    const int n;
    vector<T> dat;
    void prop_to(int i) { dat[i] = op(dat[2*i], dat[2*i+1]); }