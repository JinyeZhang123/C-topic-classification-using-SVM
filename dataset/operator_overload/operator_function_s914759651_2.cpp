P operator*(P&a, Real c) {
  return cons(c * car(a), c * cdr(a));
}