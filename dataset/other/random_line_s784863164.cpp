    range_add_sum_query(size_t n) : fenwick_1(n + 1, [](T x, T y) { return x + y; }, 0),
