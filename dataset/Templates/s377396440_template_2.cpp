template<typename T>
std::vector<T> basic_bellman_ford(const std::vector<std::vector<int>> &adj,
                                  const std::vector<std::vector<T>> &cost,
                                  int s) {
    auto id = []() -> T { return 0; }