Real operator*(P&a, P&b) {
  return car(a) * car(b) + cdr(a) * cdr(b);
}