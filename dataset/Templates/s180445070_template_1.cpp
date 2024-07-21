template<class T> class LazySegmentTree {
    public:
    size_t n;       // 葉の数
    vector<T> data; // データ
    vector<T> lazy; // 遅延評価用
    T unit;         // 単位元
    T def;          // 初期値
    function<T(T, T)> update_func;      // 更新で使う処理
    function<T(T, T)> find_func;        // クエリで使う処理
    function<T(T, T)> lazy_prop_func;   // 遅延評価用の値を子ノードに伝播させる処理

    LazySegmentTree(
        size_t _n, T _unit, T _def,  
        function<T(T, T)> _update_func, 
        function<T(T, T)> _find_func, 
        function<T(T, T)> _lazy_prop_func
        ) : unit(_unit), def(_def), update_func(_update_func), find_func(_find_func), lazy_prop_func(_lazy_prop_func) {
        // 2のべき乗にする
        n = 1;
        while(n < _n) n <<= 1;
        data = vector<T>(2*n-1, _def);
        lazy = vector<T>(2*n-1, _def);
    }