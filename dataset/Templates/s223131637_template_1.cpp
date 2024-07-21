template<typename T> istream& operator>>(istream &s, vector<T> &v) {
  for (T &t : v) s >> t;
  return s;
}