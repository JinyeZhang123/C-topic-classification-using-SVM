template<typename T> Parser<std::string> many_str(const Parser<T> &p) {
  return [=](Source &s) {
    std::string r;
    try {
      for (;;) r += p(s);
    }