template <typename T>
bool BellmanFord(const Edges<T>& es, const int64_t V, const int64_t s,
                 vector<T>* dst, const T kInf = numeric_limits<T>::max()) {
  dst->resize(size_t(V));
  fill(dst->begin(), dst->end(), kInf);

  (*dst)[s] = 0;

  const int64_t E = int64_t(es.size());

  for (int64_t i = 0; i < V; ++i) {
    bool update = false;
    for (int64_t j = 0; j < E; ++j) {
      auto& e = es[j];
      if ((*dst)[e.From()] < kInf &&
          (*dst)[e.To()] > (*dst)[e.From()] + e.Cost()) {
        (*dst)[e.To()] = (*dst)[e.From()] + e.Cost();
        update         = true;
      }