bool operator<(const interval &a, const interval &b) {
  return a.val > b.val;
}