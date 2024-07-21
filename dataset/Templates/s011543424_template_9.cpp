template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
  if (v.size()) {
    rep(i, 0, sz(v) - 1)
      out << v[i] << " ";
    out << v.back();
  }