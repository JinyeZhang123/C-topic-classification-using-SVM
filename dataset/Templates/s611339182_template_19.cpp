template <class T>
bool amin(T &a, const T &b) {
  if (a > b) {
    a = b;
    return true;
  }