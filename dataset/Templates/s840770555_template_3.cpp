template <class T>
class SegTree {
    int n;// 葉の数
    vector<T> data;// データを格納するvector
    T def; // 初期値かつ単位元
    function<T(T, T)> operation; // 区間クエリで使う処理
    function<T(T, T)> update;// 点更新で使う処理

    // 区間[a,b)の総和。ノードk=[l,r)に着目している。
    T _query(int a, int b, int k, int l, int r) {
        if (r <= a || b <= l) return def; // 交差しない
        if (a <= l && r <= b)
            return data[k]; // a,l,r,bの順で完全に含まれる
        else {
            T c1 = _query(a, b, 2 * k + 1, l, (l + r) / 2); // 左の子
            T c2 = _query(a, b, 2 * k + 2, (l + r) / 2, r); // 右の子
            return operation(c1, c2);
        }