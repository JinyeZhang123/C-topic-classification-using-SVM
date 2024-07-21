template<typename E>
struct SegmentTree {
    using H = function<E(E, E)>;
    int n, height;
    H h;
    E ei;
    vector<E> laz;

    SegmentTree(H h, E ei) : h(h), ei(ei) {}