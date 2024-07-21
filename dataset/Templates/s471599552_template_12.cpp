template<typename T1, typename T2> Parser<T2> fmap(const std::function<T2(const T1 &)> &f, const Parser<T1> &p) {
  return [=](Source &s) { return f(p(s)); }