template <class... Args> auto table(int n, Args... args) {
  auto val = table(args...);
  return vector<decltype(val)>(n, move(val));
}