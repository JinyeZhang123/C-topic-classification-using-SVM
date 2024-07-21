bool operator<(const Team &a, const Team &b) {
  if (a.solved != b.solved) return a.solved > b.solved;
  return a.penalty < b.penalty;
}