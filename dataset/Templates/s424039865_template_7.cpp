template <typename T, typename U>                              \
    std::ostream &operator<<(std::ostream &os, const C<T, U> &c) { \
        __INNER__                                                  \
    }