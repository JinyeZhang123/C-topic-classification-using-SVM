bool operator==(const Card &lhs, const Card &rhs) {
  return lhs.suit == rhs.suit && lhs.value == rhs.value;
}