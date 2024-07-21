template <typename T>
  RollingHash(const vector<T>& s, uint64_t base) : base(base) {
    hash.assign(s.size() + 1, 0);
    pw.assign(s.size() + 1, 0);
    pw[0] = 1;
    for (size_t i = 0; i < s.size(); i++) {
      pw[i + 1] = mul(pw[i], base);
      hash[i + 1] = add(mul(hash[i], base), s[i]);
    }