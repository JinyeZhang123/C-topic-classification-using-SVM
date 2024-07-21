template <typename T> class union_find {
  vector<T> par, rank;

public:
  union_find(size_t n) {
    par.reserve(n + 2);
    rank.reserve(n + 2);
  }