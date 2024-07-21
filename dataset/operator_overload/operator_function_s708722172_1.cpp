bool operator<(const data &l, const data &r) {
  if(l.b != r.b) return l.b < r.b;
  if(l.a != r.a) return l.a < r.a;
  return l.n < r.n;
}