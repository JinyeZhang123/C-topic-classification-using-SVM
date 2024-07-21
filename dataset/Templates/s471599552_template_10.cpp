template<typename T1, typename T2> Parser<T2> operator>>(const Parser<T1> &p1, const Parser<T2> &p2) {
  return [=](Source &s) {
    p1(s);
    return p2(s);
  }