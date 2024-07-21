template<typename T> inline T floor(T a, T b) {
  return a - a % b;
}