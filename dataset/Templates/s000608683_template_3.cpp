template <typename C> constexpr int find(const int &st, const C &check) {
        Monoid acc = M0;
        return find(st, check, acc, 1, 0, sz);
    }