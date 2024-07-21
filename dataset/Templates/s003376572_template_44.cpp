template <class num_type>
struct segtree {
    int num, depth, basesize, treesize;
    vector<num_type> base, tree, lazy;
    // #####  monoidのiniの設定  #####
    // 区間和のとき
    num_type ini = 0;
    // #####  operatorのiniの設定  #####
    // 区間加算のとき
    num_type ini_op = 0;
    // 区間更新のとき
    // num_type ini_op = pow(10, 9);
    // #####  モノイド #####
    // 区間和のとき
    num_type monoid(num_type& x, num_type& y) { return x + y; }