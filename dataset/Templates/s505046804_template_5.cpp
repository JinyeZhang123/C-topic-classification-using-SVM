template <typename T> ostream &operator<<(ostream &os, set<T> &set_var) {
  os << "{";
  FORA(itr, set_var) {
    os << *itr;
    itr++;
    if (itr != set_var.end()) os << ", ";
    itr--;
  }