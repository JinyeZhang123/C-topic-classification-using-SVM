template<typename T, typename...Ts>
void input_parallel(T& a, Ts&... ts) {
    for (size_t idx = 0; idx < (size_t)a.size(); ++idx) {
        input_at<Ts...>(idx, a, ts...);
    }