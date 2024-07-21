template <class... Ts>
auto make_v(size_t size, Ts... rest) {
    return vector<decltype(make_v(rest...))>(size, make_v(rest...));
}