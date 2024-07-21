string operator*(std::string const& str, int n) {
  if (n < 1) return "";
  std::string result;
  result.reserve(str.length() * n);
  for (int i = 0; i < n; ++i) {
    result += str;
  }