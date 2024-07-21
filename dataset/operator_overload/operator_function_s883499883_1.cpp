bool operator<(const data &l, const data &r) {
  return l.s + l.w < r.s + r.w;
}