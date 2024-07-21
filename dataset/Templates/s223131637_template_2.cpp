template<typename T> ostream& operator<<(ostream &s, const vector<T> &v) {
  for (const T &t : v) s << t << endl;
  return s;
}