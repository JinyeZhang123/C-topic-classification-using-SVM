template <typename T1, typename T2>
inline istream& operator>>(istream& i, pair<T1, T2>& v) {
  return i >> v.first >> v.second;
}