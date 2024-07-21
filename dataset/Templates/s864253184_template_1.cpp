template<typename T>
void insertion_sort(std::vector<T>& a, std::size_t n, int g) {
    for (int i = g; i < n; ++i) {
        auto v = a[i];
        auto j = i - g;
        while (j >= 0 && a[j] > v) {
            a[j + g] = a[j];
            j = j - g;
            total_count++;
        }