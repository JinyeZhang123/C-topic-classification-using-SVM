Point operator*(const Point &p, const Real &d) {
  return Point(real(p) * d, imag(p) * d);
}