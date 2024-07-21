template <typename... T>
std::ostream &operator<<(std::ostream &os, const std::tuple<T...> &t) {
    os << '(';
    __TuplePrinter__<decltype(t), sizeof...(T)>::print(os, t);
    os << ')';
    return os;
}