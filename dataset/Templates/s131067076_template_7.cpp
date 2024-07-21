template <class T>
class SegTree {
    int n; // number of leaves
    vector<T> data; // vector which has datas
    T def; // init number & 単位元
    function<T(T,T)> operation; // 区間クエリで使う処理
    function<T(T,T)> update; // 点更新で使う処理

    T _query(int a, int b, int k, int l, int r) {
        // [a, b)のクエリ
        // ノードk(区間[l, r)担当)が答える
        if (b <= l || r <= a) return def; // 区間がかぶらなければdef
        if (a <= l && r <= b) return data[k]; // 区間が完全にかぶっていればdata[k]
        else {
            // 一部だけかぶる場合は左右の子に委託する
            T c1 = _query(a, b, 2*k+1, l, (l+r)/2);
            T c2 = _query(a, b, 2*k+2, (l+r)/2, r);
            return operation(c1, c2);
        }