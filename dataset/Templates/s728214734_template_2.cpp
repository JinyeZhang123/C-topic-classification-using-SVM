template <typename T>
void print(std::vector<T>& v, string s = " ") {
  REP(i, v.size()) {
    if (i != 0) std::cout << s;
    std::cout << v[i];
  }