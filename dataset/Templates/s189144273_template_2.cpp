template <typename T> ostream& operator<< (ostream& out, const vector<T>& v) {
  out << '[';
  rep(i, v.size()) out << v[i] << ",";
  out << "\b], " << v.size();
  return out;
}