template<typename T, typename E>
struct SegmentTree {
    using F = function<T(T, T)>;
    using G = function<T(T, E)>;
    using H = function<E(E, E)>;
    using P = function<E(E, size_t)>;
    int n;
    F f; //要素と要素のマージ
    G g; //要素に作用素を作用
    H h; //作用素と作用素をマージ
    T ti; //要素の単位元?
    E ei; //作用素の単位元?
    P p; //b個の作用素aをマージした場合
    vector<T> dat;
    vector<E> laz;

    SegmentTree(int n_, F f, G g, H h, T ti, E ei,
                P p = [](E a, size_t b) {
                    b++;
                    return a;
                }