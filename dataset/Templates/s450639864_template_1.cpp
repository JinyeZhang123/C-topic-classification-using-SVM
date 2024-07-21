template <typename T>
void print(std::vector<T>& v, string c = ", ") {
  for (auto i : v) {
    if (i != 0) std::cout << c;
    std::cout << v[i];
  }