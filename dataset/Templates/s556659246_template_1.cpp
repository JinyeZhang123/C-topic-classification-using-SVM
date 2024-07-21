template <typename C>
vector<int> compact(const C& container) {
  vector<int> compacten;
  int sign = 1;
  int acc = 0;
  for (auto n : container) {
    if (n == 0) { continue; }