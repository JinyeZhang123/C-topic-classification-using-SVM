template <class T>
class SegTreeLazy {
    int n;// 葉の数
    vector<T> data;// データを格納するvector
    vector<T> lazy;//
    T ex; // 初期値かつ単位元
    T em;//更新の単位元
    function<T(T, T)> fx; // 区間クエリで使う処理
    function<T(T, T)> fa;// 区間更新で使う処理、要素←遅延
    function<T(T, T)> fm;

    // 区間[a,b)の総和。ノードk=[l,r)に着目している。
    void eval(int k) {
        if (lazy[k] == em) return;  // 更新するものが無ければ終了
        if (k < n - 1) {            // 葉でなければ子に伝搬
            lazy[k * 2 + 1] = fm(lazy[k * 2 + 1], lazy[k]);
            lazy[k * 2 + 2] = fm(lazy[k * 2 + 2], lazy[k]);
        }