template <typename T>
inline istream& operator>>(istream& i, vector<T>& v) {
  rep(j, v.size()) i >> v[j];
  return i;
}