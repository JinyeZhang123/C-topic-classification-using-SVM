template <class T>
T chebyshevDistance(const std::vector<T> &lhs, const std::vector<T> &rhs) {
  T max = -1.0;
  for (int i = 0; i < lhs.size(); i++) {
    T val = abs(lhs[i] - rhs[i]);
    if (val > max) max = val;
  }