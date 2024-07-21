template<class T> inline
istream& operator>>(istream&is, vector<T>&v) {
  rep (i, v.size()) is >> v[i];
  return is;
}