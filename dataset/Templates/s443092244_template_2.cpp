template<typename T,template <typename ELEM> class C> struct AdListGraph {
  vector<vector<C<T>>> G;
  vector<bool> used;
  vector<bool> is_ancetor;
  int V;//0,...,|V|-1

  AdListGraph (int V_) {
    Init(V_);
  }