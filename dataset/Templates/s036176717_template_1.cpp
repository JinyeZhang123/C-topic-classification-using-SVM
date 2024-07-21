template <class T>
class SegmentTree {
private:
    const int n;
    vector<T> dat;
    void prop_to(int i) { dat[i] = max(dat[i<<1], dat[i<<1|1]); }