bool operator==(const Score& lhs, const Score& rhs) {
  return lhs.acceptedCount == rhs.acceptedCount && lhs.minutes == rhs.minutes;
}