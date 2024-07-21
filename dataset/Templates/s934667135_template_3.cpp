template <typename T, typename E>
struct LazeSegTree {
    // 0-indexed
    typedef function<T(T, T)> F;
    typedef function<T(T, E)> G;
    typedef function<E(E, E)> H;
    int n, height;
    F f;    // クエリ処理の関数
    G g;    // 遅延伝搬を反映させる関数
    H h;    // 遅延処理の更新を行う関数
    T ti;   // クエリ処理の単位元
    E ei;   // 遅延配列の単位元
    vector<T> dat;
    vector<E> laz;
    LazeSegTree(){}