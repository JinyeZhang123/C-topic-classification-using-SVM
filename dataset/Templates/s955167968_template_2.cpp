template<typename T,template <typename ELEM> class EDGE> struct AdListGraph {
  vector<vector<EDGE<T>>> G;

  vector<bool> used;
  vector<int> deg;
  int V;//0,...,|V|-1

  AdListGraph (int V_) {
    Init(V_);
  }