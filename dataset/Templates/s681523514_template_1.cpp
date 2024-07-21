template <class T>
T generalDistance(const std::vector<T> &lhs, const std::vector<T> &rhs,
                  const T &p) {
  T sum = 0.0;
  for (int i = 0; i < lhs.size(); i++) {
    sum += pow(abs(lhs[i] - rhs[i]), p);
  }