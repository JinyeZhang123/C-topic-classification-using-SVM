template<typename T>
inline bool maxs(T& a, T const& b) {
  if (a < b) {
    a = b;
    return true;
  }