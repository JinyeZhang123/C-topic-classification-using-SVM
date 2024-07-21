template<typename T> Parser<std::list<T>> many(const Parser<T> &p) {
  return [=](Source &s) {
    std::list<T> v;
    try {
      for (;;) v.emplace_back(p(s));
    }