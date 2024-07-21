template<class T>
T min(T a, T b, T c) {
  T ret = min(a, b);
  ret = min(ret, c);
  return ret;
}