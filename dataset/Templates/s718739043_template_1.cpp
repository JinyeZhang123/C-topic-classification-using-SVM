template <typename T, typename E>
struct SegmentTree {
    typedef function<T(T, T)> F;
    typedef function<T(T, E)> G;
    int n;
    F f;
    G g;
    T d1;
    vector<T> nodes;

    SegmentTree(int n_, F f, G g, T d1, const vector<T>& v=vector<T>()) {
        this->f = f;
        this->g = g;
        this->d1 = d1;
        nodes_init(n_);
        if (n_ == (int)v.size()) build(n_, v);
    }