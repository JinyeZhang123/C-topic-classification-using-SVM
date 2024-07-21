template <typename MonoidType, typename OperatorType>
struct LazySegmentTree {
    using MMtoM = function< MonoidType(MonoidType, MonoidType) >;
    using OOtoO = function< OperatorType(OperatorType, OperatorType) >;
    using MOtoM = function< MonoidType(MonoidType, OperatorType) >;
    using OItoO = function< OperatorType(OperatorType, int) >;

    // node, lazy, update flag (for lazy), identity element
    int n;
    vector<MonoidType> node;
    vector<OperatorType> lazy;
    vector<bool> need_update;
    MonoidType E0;
    OperatorType E1;

    // update / combine / lazy / accumulate function
    OOtoO upd_f;
    MMtoM cmb_f;
    MOtoM lzy_f;
    OItoO acc_f;

    void build(int m, vector<MonoidType> v = vector<MonoidType>()) {
        if(v != vector<MonoidType>()) m = v.size();
        n = 1; while(n < m) n *= 2;

        node = vector<MonoidType>(2*n-1, E0);
        lazy = vector<OperatorType>(2*n-1, E1);
        need_update = vector<bool>(2*n-1, false);
        if(v != vector<MonoidType>()) {
            for(int i=0; i<m; i++) {
                node[n-1+i] = v[i];
            }