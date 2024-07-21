template<typename T>
struct RangeMinimumQuery {
    const T INF;
    int n;
    std::vector<T> val;

    RangeMinimumQuery(int size) : INF(std::numeric_limits<T>::max()), n(1) {
        while (n < size) n <<= 1;
        val.assign(2 * n + 1, INF);
    }