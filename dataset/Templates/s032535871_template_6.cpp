template <typename K, typename V>
ostream &operator<<(ostream &os, const map<K, V> &m) {
  return jout(ALL(m), ", ", os << '{') << '}