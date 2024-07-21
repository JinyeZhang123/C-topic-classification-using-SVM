template<class T>
struct segment_tree {
    using F = function<T(T,T)>;
    int n;     
    vector<T> data;
    F f;
    T init_v;

    segment_tree(int n_, T init_v, F f) : f(f), init_v(init_v) {
        n = 1;
        while (n < n_) n *= 2;
        data.assign(2*n-1,init_v);
    }