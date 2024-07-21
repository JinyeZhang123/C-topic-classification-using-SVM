template <typename K, typename V> ostream& operator<< (ostream& out, const pair<K, V>& p) {
  out << '(' << p.first << ", " << p.second << ')';
  return out;
}