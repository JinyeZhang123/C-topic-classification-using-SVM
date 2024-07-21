template<class T> struct DualSegmentTree {
    using F = function<T(T, T)>;
private : 
    int n, dep;
    const F f;
    T id;
    vector<T> node;

public : 
    DualSegmentTree (const F &f, const T &id) : f(f), id(id) { }