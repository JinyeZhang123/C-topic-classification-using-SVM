template <typename monoid_trait> struct segment_tree {
    using monoid = monoid_trait;
    using T = typename monoid::value_type;

    monoid m;
    std::size_t sz;
    std::vector<T> x;

    segment_tree(std::size_t n = 0, const monoid &trait = monoid())
        : m(trait), sz(1) {
        while (sz < n) 
            sz *= 2;
        x.assign(sz * 2, m.id());
        initialize();
    }