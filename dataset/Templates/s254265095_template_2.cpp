template <typename iterator>
    segment_tree(iterator first, iterator last, const monoid &trait = monoid())
        : sz(1), m(trait) {
        std::size_t n = std::distance(first, last);
        while (sz < n) 
            sz *= 2;
        x.assign(sz * 2, m.id());
        std::copy(first, last, x.begin() + sz);
        initialize();
    }