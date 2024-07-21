P operator-(P&a) {
  return cons(-car(a), -cdr(a));
}