template<typename F, typename T, typename Func_mf, typename Func_op, typename Func_mv>
struct LazySegtree {
    ll n, n_org;
    vector<T> dat;
    vector<F> laz;
    Func_mf merge_functions; //lazyとlazyの演算
    Func_op operate;       //dataとlazyの演算
    Func_mv merge_values;  //dataとdataの演算
    F fe; //lazyの単位元かつ初期値
    T te; //dataの単位元かつ初期値
 
    LazySegtree(){}