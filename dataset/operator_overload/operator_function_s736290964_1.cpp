bool operator<(const Q &lhs, const Q &rhs) {
  if (lhs.t == rhs.t)
    return lhs.rev < rhs.rev;
  return lhs.t < rhs.t;
}