template <size_t SIZE>
struct RollingHash_MultiBase {
  using Array = array<uint64_t, SIZE>;
  array<RollingHash, SIZE> rhs;
  Array bases;
  RollingHash_MultiBase() = default;
  RollingHash_MultiBase(const string& s, Array bs)
      : RollingHash_MultiBase(vector<char>(s.begin(), s.end()), bs) {}