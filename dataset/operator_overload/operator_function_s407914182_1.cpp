bool operator<(const data &l, const data &r) {
  return l.b - l.a > r.b - r.a;
}