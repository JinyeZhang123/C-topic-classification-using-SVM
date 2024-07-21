P operator/(P a, Real d) {
  return cons(car(a) / d, cdr(a) / d);
}