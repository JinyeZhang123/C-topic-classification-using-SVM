point operator*(point p, long double d) {
  return point(d*p.x, d*p.y);
}