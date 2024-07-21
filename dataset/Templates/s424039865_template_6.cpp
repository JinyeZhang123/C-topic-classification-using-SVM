template <typename T>                                       \
    std::ostream &operator<<(std::ostream &os, const C<T> &c) { \
        __INNER__                                               \
    }