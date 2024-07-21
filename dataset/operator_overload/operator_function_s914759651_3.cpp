P operator*(Real c, P&a) {
  return cons(c * car(a), c * cdr(a));
}