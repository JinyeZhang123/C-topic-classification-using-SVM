template<typename T,template <typename ELEM> class C> struct Topological_Sort {
  vector<vector<C<T>>> G;
  vector<bool> used;
  int V;//0,...,|V|-1
  T INF;

  Topological_Sort (int V_) {
    init(V_);
  }