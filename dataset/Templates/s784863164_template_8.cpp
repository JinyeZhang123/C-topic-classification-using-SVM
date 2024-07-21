template <class T>
class range_add_sum_query {
private:
    fenwick_tree<T> fenwick_1;
    fenwick_tree<T> fenwick_2;
public:
    range_add_sum_query(size_t n) : fenwick_1(n + 1, [](T x, T y) { return x + y; }