point operator*(long double d, point p) {
  return point(d*p.x, d*p.y);
}