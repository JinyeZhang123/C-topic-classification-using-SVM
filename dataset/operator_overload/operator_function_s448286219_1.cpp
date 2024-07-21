datum operator^(const datum &a, const datum &b) {
  return a.diff() <= b.diff() ? a : b;
}