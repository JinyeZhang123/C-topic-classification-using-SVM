template <class T, class E>
struct SegmentTree {
    using F = function<T(T, T)>;
    using G = function<T(T, E)>;
    using H = function<E(E, E)>;
    using P = function<E(E, int)>;
    int n;
    F f; // minなら[](ll a, ll b) { return min(a,b);}