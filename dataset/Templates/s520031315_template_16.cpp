template <class T, class... U>
void COUT(T &&x, U &&...y) {
  cout << x;
  _COUT(forward<U>(y)...);
}