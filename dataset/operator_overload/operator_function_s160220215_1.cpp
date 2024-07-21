bool operator<(const dat &l, const dat &r) {
  if(l.a != r.a) return l.a < r.a;
  return l.b > r.b;
}