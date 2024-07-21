template<typename T> Parser<T> tryp(const Parser<T> &p) {
  return [=](Source &s) {
    T r;
    Source bak = s;
    try {
      r = p(s);
    }