template <class Monoid, class OperatorMonoid>
struct Segtree {
    using T = typename Monoid::T;
    using E = typename OperatorMonoid::E;
    int n, h;
    vector<T> dat;
    vector<E> laz;
    vector<ll> len;
    Segtree(int n_) {
        n = 1, h = 0;
        while(n < n_) {
            n <<= 1;
            h++;
        }