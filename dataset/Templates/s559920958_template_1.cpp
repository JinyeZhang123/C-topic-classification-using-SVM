template <class Monoid>
class SegmentTree {
    using T = typename Monoid::T;
    int size;
    vector<T> data;
    void build() {
        rrep(i, 1, size) {
            data[i] = Monoid::op(data[i * 2], data[i * 2 + 1]);
        }