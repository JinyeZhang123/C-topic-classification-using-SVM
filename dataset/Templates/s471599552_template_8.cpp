template<typename T> const Parser<T> operator||(const Parser<T> &p1, const Parser<T> &p2) {
  return [=](Source &s) {
    T r;
    Source back = s;
    try {
      r = p1(s);
    }