template <typename T>                                       \
    std::ostream &operator<<(std::ostream &os, const C<T> &c) { \
        std::deque<T> v;                                        \
        for (auto d = c; !d.empty(); d.pop()) v.M1(d.M2());     \
        return os << v;                                         \
    }