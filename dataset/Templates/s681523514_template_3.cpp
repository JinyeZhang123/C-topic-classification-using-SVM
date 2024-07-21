template <class T>
std::vector<T> getElements(int n) {
  std::vector<T> vec;
  while (n-- > 0) {
    T x;
    std::cin >> x;
    vec.push_back(x);
  }