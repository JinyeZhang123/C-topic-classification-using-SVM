template <typename T>
ostream &operator<<(ostream &os, vector<vector<T>> &df) {
  for (auto& vec : df) os<<vec;
  return os;
}