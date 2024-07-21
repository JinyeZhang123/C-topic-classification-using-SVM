template<typename T>
struct Segtree {
    int n;
    T e; // default value
    vector<T> dat;
    typedef function<T(T a, T b)> Func;
    Func f;

    Segtree(){}