template<typename T, typename U>
void fill_all(T& arr, const U& v) { for (auto& i : arr) fill_all(i, v); }