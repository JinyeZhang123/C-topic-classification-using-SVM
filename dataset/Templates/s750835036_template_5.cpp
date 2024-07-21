template<typename InputIterator> std::string join(InputIterator first, InputIterator last, const std::string &sep) {
  if (first == last) return "";
  std::stringstream ss;
  ss << *(first++);
  for_each(first, last, [&](typename InputIterator::value_type &x) { ss << sep << x; }