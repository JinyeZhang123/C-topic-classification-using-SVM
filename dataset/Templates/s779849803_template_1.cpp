template<typename F, typename T, typename Func_mf, typename Func_op, typename Func_mv>
struct LazySegtree {
    int n, n_org;
    vector<T> dat;
    vector<F> laz;
    Func_mf merge_functions;
    Func_op operate;
    Func_mv merge_values;
    F fe;
    T te;

    LazySegtree(){}