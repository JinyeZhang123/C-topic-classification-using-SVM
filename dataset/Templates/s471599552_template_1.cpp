template<typename T> Parser<T> left(const std::string &e) {
  return [=](Source &s) -> T { throw s.ex(e); }