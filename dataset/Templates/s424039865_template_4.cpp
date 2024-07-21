template <typename T, typename U>
std::ostream &operator<<(std::ostream &os, const std::pair<T, U> &v) {
    return os << '(' << v.first << ", " << v.second << ')';
}