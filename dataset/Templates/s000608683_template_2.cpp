template <typename C>
    constexpr int find(const int &st, const C &check, Monoid &acc, const int &k,
                       const int &l, const int &r) {
        if(l + 1 == r) {
            acc = f(acc, reflect(k));
            return check(acc) ? k - sz : -1;
        }