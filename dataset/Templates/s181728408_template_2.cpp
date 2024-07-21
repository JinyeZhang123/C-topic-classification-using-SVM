template <class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
  if (!v.empty()) {
    for (int i = 0; i < v.size(); ++i)
      os << v[i] << " ";
    os << '\n';
  }