bool operator==(Card lhs, Card rhs) {
  return lhs.suit == rhs.suit && lhs.num == rhs.num;
}