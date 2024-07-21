template<typename T1, typename T2> Parser<std::string> operator+(const Parser<T1> &p1, const Parser<T2> &p2) {
  return [=](Source &s) {
    std::string r;
    r += p1(s);
    r += p2(s);
    return r;
  }