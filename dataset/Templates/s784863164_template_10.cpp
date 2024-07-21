template <class Iterator>
    segment_tree(Iterator first, Iterator last, std::function<T(const T&, const T&)> f, T UNIT) : n(clp(std::distance(first, last))), f(f), UNIT(UNIT) {
        size_t size = std::distance(first, last);
        a.resize(2 * n - 1, UNIT);
        for (size_t i = n - 1; first != last; ++i) {
            a[i] = *(first++);
        }