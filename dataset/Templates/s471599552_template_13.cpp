template<typename L, typename R, typename X> Parser<std::function<X(const L &)>> fmap(const std::function<X(const L &, const R &)> &f, const Parser<R> &p) {
  return [=](Source &s) {
    R r = p(s);
    return [=](const L &l) { return f(l, r); }