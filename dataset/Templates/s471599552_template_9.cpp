template<typename T1, typename T2> Parser<T1> operator<<(const Parser<T1> &p1, const Parser<T2> &p2) {
  return [=](Source &s) {
    T1 r = p1(s);
    p2(s);
    return r;
  }