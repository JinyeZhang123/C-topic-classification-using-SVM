template <typename T, typename E>
struct LazySegmentTree
{
    using F = function<T(T, T)>;
    using G = function<T(T, E)>;
    using H = function<E(E, E)>;
    using P = function<E(E, int)>;
    F f;
    G g;
    H h;
    P p;
    T d1;
    E d0;
    int n;
    vector<T> node;
    vector<E> lazy;

    LazySegmentTree(int sz, F f, G g, H h, T d1, E d0, vector<T> v = vector<T>(), P p = [](E a, int b) { return a; }