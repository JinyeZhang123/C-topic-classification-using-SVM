template <class T, class... U>
void CIN(T &&x, U &&...y) {
  cin >> x;
  CIN(forward<U>(y)...);
}