template <typename T> inline void print(const vector<T>& v, string s = " ") {
  REP(i, v.size()) {
    if (i != 0) cout << s;
    cout << v[i];
  }