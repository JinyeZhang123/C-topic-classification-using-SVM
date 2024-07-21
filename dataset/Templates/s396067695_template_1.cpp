template<typename T>
struct RangeMinimumQuery {
    const T INF;
    int n;
    std::vector<T> val;

    RangeMinimumQuery(int size, T inf = std::numeric_limits<T>::max()) : INF(inf) {
        for (n = 1; n < size; ) n <<= 1;
        val.assign(2 * n + 1, INF);
    }