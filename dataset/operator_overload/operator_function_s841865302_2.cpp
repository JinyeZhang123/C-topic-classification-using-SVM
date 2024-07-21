bool operator<(const R& x, const R& y) {
  return (norm(x.h, x.w) == norm(y.h, y.w)) ? x.h < y.h : norm(x.h, x.w) < norm(y.h, y.w);
}