template<typename T>
struct Segtree {
    int n, n_org;
    T e;
    vector<T> dat;
    typedef function<T(T a, T b)> Func;
    Func f;

    Segtree(){}