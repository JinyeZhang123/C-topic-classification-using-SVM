template<typename T>
int shell_sort(std::vector<T> &a, std::size_t n) {
    // generate sequence: g[n + 1] = 3g[n] + 1
    auto h = 1;
    while (true) {
        if (h > n) {
            break;
        }