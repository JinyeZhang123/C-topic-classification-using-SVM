bool operator==(P&a, P&b) {
  return eq(car(a), car(b)) && eq(cdr(a), cdr(b));
}