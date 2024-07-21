template <class T, class... U>
void _COUT(T &&x, U &&...y) {
  cout << ' ' << x;
  _COUT(forward<U>(y)...);
}