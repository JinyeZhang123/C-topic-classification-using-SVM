template <class K, class V> size_t operator()(const pair<K, V> &p) const
  {
    size_t h = 31 * hash<K> {}