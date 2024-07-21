template<typename A, typename B>
bool cemax(A &a, const B &b) {
  return a <= b ? (a = b, true) : false;
}