template<typename T> Parser<std::string> operator*(int n, const Parser<T> &p) {
  return [=](Source &s) {
    std::string r;
    rep(i, n) r += p(s);
    return r;
  }