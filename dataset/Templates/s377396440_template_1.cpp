template<typename T, typename E, typename F, typename G, typename ID, typename AB>
std::vector<T> bellman_ford(const std::vector<std::vector<int>> &adj,
                            const std::vector<std::vector<E>> &cost,
                            int s,
                            F f,
                            G g,
                            ID id,
                            AB ab) {
    struct edge {
        int from, to;
        T cost;
    }