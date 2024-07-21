template<typename T>
void input_parallel(T& a) {
    for (size_t idx = 0; idx < (size_t)a.size(); ++idx) {
        input_at<T>(idx, a);
    }