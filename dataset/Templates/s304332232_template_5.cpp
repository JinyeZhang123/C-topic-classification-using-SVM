template <class T, class U = T>
struct LazySegTree {
    int n, height;
    // 値配列, 値の単位元
    vector<T> data;
    T dataId;
    // 遅延配列, 遅延値の単位元
    vector<U> lazy;
    U lazyId;

    function<T(T, T)> fOperate;
    function<T(T, U)> fAct;
    function<U(U, U)> fMerge;

    LazySegTree(
        int _n, T _did = INF, U _lid = INF,
        function<T(T, T)> _op = [](T t1, T t2) { return min(t1, t2); }