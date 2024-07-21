template<typename T>
inline bool mins(T& a, T const& b) {
  if (a > b) {
    a = b;
    return true;
  }