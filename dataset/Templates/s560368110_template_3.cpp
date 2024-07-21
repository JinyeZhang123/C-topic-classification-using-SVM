template <class T>
class SegTree {
    int n;// 葉の数
    vector<T> data;// データを格納するvector
    T def; // 初期値かつ単位元
    function<T(T, T)> operation; // 区間クエリで使う処理
    function<T(T, T)> update;// 点更新で使う処理

    T find(int a, int b) {
        ll val_left = def, val_right = def;
        for (a += (n - 1), b += (n - 1); a < b; a >>= 1, b >>= 1)
        {
            if ((a & 1) == 0){
                val_left = operation(val_left, data[a]);
            }