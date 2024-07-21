template<class T, class...U> auto next(const U&... args) -> decltype(next<T>(cin)) {
    return next<T>(cin, args...);
}