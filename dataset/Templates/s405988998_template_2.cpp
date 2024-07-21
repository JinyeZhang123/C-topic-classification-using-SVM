template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T> vec) {
    for (std::size_t i = 0; i < vec.size(); i++)os << vec[i] << (i + 1 == vec.size() ? "" : " ");
    return os;
}