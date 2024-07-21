template <class T>
bool amax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return true;
  }