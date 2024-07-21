template <typename T>
  class union_find {
  private:
    std::vector<T> parents;
    std::vector<T> sizes;
    T component_count;

  public:
    union_find(const T n) :
      parents(n),
      sizes(n, 1),
      component_count(n) {
      for (T i = 0; i < n; ++i) {
        parents[i] = i;
      }