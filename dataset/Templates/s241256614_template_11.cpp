template<typename T, typename... Ts>
void input_at(size_t idx, T& a, Ts&... ts) {
    input_at<T>(idx, a);
    input_at<T>(idx, ts...);
}